//////////////////////////////////////////////////////////////////////////////////
//
// This file is part of the Next186 Soc PC project
// http://opencores.org/project,next186
//
// Filename: ddr_186.v
// Description: Part of the Next186 SoC PC project, main system, RAM interface
// Version 2.0
// Creation date: Apr2014
//
// Author: Nicolae Dumitrache 
// e-mail: ndumitrache@opencores.org
//
/////////////////////////////////////////////////////////////////////////////////
// 
// Copyright (C) 2012 Nicolae Dumitrache
// 
// This source file may be used and distributed without 
// restriction provided that this copyright statement is not 
// removed from the file and that any derivative work contains 
// the original copyright notice and the associated disclaimer.
// 
// This source file is free software; you can redistribute it 
// and/or modify it under the terms of the GNU Lesser General 
// Public License as published by the Free Software Foundation;
// either version 2.1 of the License, or (at your option) any 
// later version. 
// 
// This source is distributed in the hope that it will be 
// useful, but WITHOUT ANY WARRANTY; without even the implied 
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
// PURPOSE. See the GNU Lesser General Public License for more 
// details. 
// 
// You should have received a copy of the GNU Lesser General 
// Public License along with this source; if not, download it 
// from http://www.opencores.org/lgpl.shtml 
// 
///////////////////////////////////////////////////////////////////////////////////
// Additional Comments: 
//
// 25Apr2012 - added SD card SPI support
// 15May2012 - added PIT 8253 (sound + timer INT8)
// 24May2012 - added PIC 8259  
// 28May2012 - RS232 boot loader does not depend on CPU speed anymore (uses timer0)
//	01Feb2013 - ADD 8042 PS2 Keyboard & Mouse controller
// 27Feb2013 - ADD RTC
// 04Apr2013 - ADD NMI, port 3bc for 8 leds
//
// Feb2014 - ported for SDRAM, added USB host serial communication
// 		   - added video modes 0dh, 12h
//		   - support for ModeX
// Jul2017 - high speed COM (up to 115200*8)
// Aug2017 - added Line Compare Register
// Sep2017 - VGA barrel shifter, NMI on IRQ
// Oct2017 - added VGA VDE register, improved 400/480 lines configuration based on VDE
//
// Apr2021 - Port for ZX-DOS LX16/LX25 DDR3 boards by CCA
//////////////////////////////////////////////////////////////////////////////////

/* ----------------- implemented ports -------------------
0001 - BYTE write: bit01=ComSel (00=DCE, 01=EXT, 1x=HOST), bit2=Host reset, bit43=COM divider shift right bits
0001 - WORD write: bit0=auto cache flush
	  
0002 - 32 bit CPU data port R/W, lo first
0003 - 32 bit CPU command port W
		16'b00000cvvvvvvvvvv = set r/w pointer - 256 32bit integers, 1024 instructions. c=1 for code write, 0 for data read/write
		16'b100wwwvvvvvvvvvv = run ip - 1024 instructions, 3 bit data window offs
0006 - WORD write: NMIonIORQ low port address. NMI if (IORQ and PORT_ADDR >= NMIonIORQ_LO and PORT_ADDR <= NMIonIORQ_HI)
0007 - WORD write: NMIonIORQ high port address

0021 - interrupt controller master data port. R/W interrupt mask, 1disabled/0enabled (bit0=timer, bit1=keyboard, bit4=COM1) 
00a1 - interrupt controller slave data port. R/W interrupt mask, 1disabled/0enabled (bit0=RTC, bit4=mouse) 

0040-0043 - PIT 8253 ports

0x60, 0x64 - 8042 keyboard/mouse data and cfg

0061 - bits1:0 speaker on/off (write only)

0070 - RTC (16bit write only counter value). RTC is incremented with 1Mhz and at set value sends INT70h, then restart from 0
		 When set, it restarts from 0. If the set value is 0, it will send INT70h only once, if it was not already 0
			
080h-08fh - memory map: bit9:0=64 Kbytes DDRAM segment index (up to 1024 segs = 64MB), mapped over 
								PORT[3:0] 80186 addressable segment
								
0200h-020fh - joystick port (GPIO) - pullup
		WORD/BYTE r/w: bits[15:8] = 0 for input, 1 for output, bits[7:0]=data

0378 - sound port: 8bit=Covox & DSS compatible, 16bit = stereo L+R - fifo sampled at 44100Hz
		 bit4 of port 03DA is 1 when the sound queue is full. If it is 0, the queue may accept up to 1152 stereo samples (L + R), so 2304 16bit writes.

0379 - parallel port control: bit6 = 1 when DSS queue is full

0388,0389,038A,038B - Adlib ports: 0388=bank1 addr, 0389=bank1 data, 038A=bank2 addr, 038B=bank2 data

03C0 - VGA mode 
		index 00h..0Fh  = EGA palette registers
		index 10h:
			bit0 = graphic(1)/text(0)
			bit3 = text mode flash enabled(1)
			bit4 = half mode (EGA)
			bit5 = ppm - pixel panning mode
			bit6 = vga mode 13h(1)
			bit7 = P54S - 1 to use color select 5-4 from reg 14h
		index 13h: bit[3:0] = hrz pan
		index 14h: bit[3:2] = color select 7-6, bit[1:0] = color select 5-4

03C4, 03C5 (Sequencer registers) - idx2[3:0] = write plane, idx4[3]=0 for planar (rw)

03C6 - DAC mask (rw)
03C7 - DAC read index (rw)
03C8 - DAC write index (rw)
03C9 - DAC color (rw)
03CB - font: write WORD = set index (8 bit), r/w BYTE = r/w font data

03CE, 03CF (Graphics registers) (rw)
	0: setres <= din[3:0];
	1: enable_setres <= din[3:0];
	2: color_compare <= din[3:0];
	3: logop <= din[4:3];
	4: rplane <= din[1:0];
	5: rwmode <= {din[3], din[1:0]};
	7: color_dont_care <= din[3:0];
	8: bitmask <= din[7:0]; (1=CPU, 0=latch)

03DA - read VGA status, bit0=1 on vblank or hblank, bit1=RS232in, bit2=USB host serial in, bit3=1 on vblank, bit4=sound queue full, bit5=DSP32 halt, bit7=1 always, bit15:8=SD SPI byte read
		 write bit7=SD SPI MOSI bit, SPI CLK 0->1 (BYTE write only), bit8 = SD card chip select (WORD write only)
		 also reset the 3C0 port index flag

03B4, 03D4 - VGA CRT write index:  
										07h: bit1 = VDE8, bit4 = LCR8, bit6 = VDE9
										09h: bit6 = LCR9
										0Ah(bit 5 only): hide cursor
										0Ch: HI screen offset
										0Dh: LO screen offset
										0Eh: HI cursor pos
										0Fh: LO cursor pos
										12h: VDE[7:0]
										13h: scan line offset
										18h: Line Compare Register (LCR)
03B5, 03D5 - VGA CRT read/write data

03f8-03ff - COM1 ports
*/


`timescale 1ns / 1ps

module system
	(
		 input 	CLK_50MHZ,
		 /*
		 output [5:0]VGA_R,
		 output [5:0]VGA_G,
		 output [5:0]VGA_B,
		 */
		 output reg [5:0]VGA_R,
		 output reg [5:0]VGA_G,
		 output reg [5:0]VGA_B,
		 output VGA_HSYNC,
		 output VGA_VSYNC,
		 //output clk_25,
		 //output clk_50,
		 //output clk_250,
		 //output de,
		 //output pll_locked,
		 
		 input BTN_RESET,	// Reset
		 input BTN_NMI,		// NMI
		 output [1:0]LED,	
		 
		 input RS232_DCE_RXD,
		 output RS232_DCE_TXD,
		 input RS232_EXT_RXD,
		 output RS232_EXT_TXD,
		 input RS232_HOST_RXD,
		 output RS232_HOST_TXD,
		 output reg RS232_HOST_RST,
		 
		 output reg SD_n_CS = 1,
		 output wire SD_DI,
		 output reg SD_CK = 0,
		 input SD_DO,
		 
		 output AUD_L,
		 output AUD_R,
	 	 inout PS2_CLK1,
		 inout PS2_CLK2,
		 inout PS2_DATA1,
		 inout PS2_DATA2,
		 
 		 inout [7:0]GPIO,
		 
		inout  [15:0] mcb3_dram_dq,
		output [13:0] mcb3_dram_a,
		output [2:0] mcb3_dram_ba,
		output mcb3_dram_ras_n,
		output mcb3_dram_cas_n,
		output mcb3_dram_we_n,
		output mcb3_dram_odt,
		output mcb3_dram_reset_n,
		output mcb3_dram_cke,
		output mcb3_dram_dm,
		inout mcb3_dram_udqs,
		inout mcb3_dram_udqs_n,
		output mcb3_dram_udm,
		inout mcb3_dram_dqs,
		inout mcb3_dram_dqs_n,
		output mcb3_dram_ck,
		output mcb3_dram_ck_n,
		inout mcb3_rzq
    );

	wire [31:0]cntrl0_user_input_data;//i
	reg [31:0]r_cntrl0_user_input_data;//i
	wire [1:0]sys_cmd_ack;
	wire [31:0]sys_DOUT;	// RAM data out
   reg [31:0]r_sys_DOUT;
	wire [31:0]vid_DOUT; // video data out
	reg [31:0]r_vid_DOUT; // video data out
	wire [31:0] DOUT;
	wire [15:0]CPU_DOUT;
	wire [15:0]PORT_ADDR;
	wire [31:0] DRAM_dout;
	wire [20:0] ADDR;
	wire IORQ;
	wire WR;
	wire INTA;
	wire WORD;
	wire [3:0] RAM_WMASK;
	wire hblnk;
	wire vblnk;
	wire [9:0]hcount;
	wire [9:0]vcount;
	reg [3:0]vga_hrzpan = 0;
	wire [3:0]vga_hrzpan_req;
	wire [9:0]hcount_pan = hcount + vga_hrzpan - 17;
	wire Empty;	// fifo empty
	wire displ_on = !(hblnk | vblnk | Empty);
	wire [17:0]DAC_COLOR;
	wire AlmostFull;
	wire AlmostEmpty;
	wire clk_cpu;
	wire clk_dsp;
	wire clk_sdr;
	wire CPU_CE;	// CPU clock enable
	wire CE;
	wire CE_186;
	wire ddr_rd; 
	wire ddr_wr;
	wire TIMER_OE = PORT_ADDR[15:2] == 14'b00000000010000;	//   40h..43h
	wire VGA_DAC_OE = PORT_ADDR[15:4] == 12'h03c && PORT_ADDR[3:0] <= 4'h9; // 3c0h..3c9h	
	wire LED_PORT = PORT_ADDR[15:0] == 16'h03bc;
	wire SPEAKER_PORT = PORT_ADDR[15:0] == 16'h0061;
	wire MEMORY_MAP = PORT_ADDR[15:4] == 12'h008;
	wire VGA_FONT_OE = PORT_ADDR[15:0] == 16'h03cb;
	wire AUX_OE = PORT_ADDR[15:0] == 16'h0001;
	wire INPUT_STATUS_OE = PORT_ADDR[15:0] == 16'h03da;
	wire VGA_CRT_OE = (PORT_ADDR[15:1] == 15'b000000111011010) || (PORT_ADDR[15:1] == 15'b000000111101010); // 3b4h, 3b5h, 3d4h, 3d5h
	wire RTC_SELECT = PORT_ADDR[15:0] == 16'h0070;
	wire VGA_SC = PORT_ADDR[15:1] == (16'h03c4 >> 1); // 3c4h, 3c5h
	wire VGA_GC = PORT_ADDR[15:1] == (16'h03ce >> 1); // 3ceh, 3cfh
	wire PIC_OE = PORT_ADDR[15:8] == 8'h00 && PORT_ADDR[6:0] == 7'b0100001;	// 21h, a1h
	wire KB_OE = PORT_ADDR[15:4] == 12'h006 && {PORT_ADDR[3], PORT_ADDR[1:0]} == 3'b000; // 60h, 64h
	wire JOYSTICK = PORT_ADDR[15:4] == 12'h020; // 0x200-0x20f
	wire PARALLEL_PORT = PORT_ADDR[15:0] == 16'h0378;
	wire PARALLEL_PORT_CTL = PORT_ADDR[15:0] == 16'h0379;
	wire CPU32_PORT = PORT_ADDR[15:1] == (16'h0002 >> 1); // port 1 for data and 3 for instructions
	wire COM1_PORT = PORT_ADDR[15:3] == (16'h03f8 >> 3);
	wire OPL3_PORT = PORT_ADDR[15:2] == (16'h0388 >> 2); // 0x388 .. 0x38b
	wire NMI_IORQ_PORT = PORT_ADDR[15:1] == (16'h0006 >> 1); // 6, 7
 	wire [7:0]VGA_DAC_DATA;
	wire [7:0]VGA_CRT_DATA;
	wire [7:0]VGA_SC_DATA;
	wire [7:0]VGA_GC_DATA;
	wire [15:0]PORT_IN;
	wire [7:0]TIMER_DOUT;
	wire [7:0]KB_DOUT;
	wire [7:0]PIC_DOUT;
	wire [7:0]COM1_DOUT;
	wire HALT;
	wire CLK44100x256;
	wire CLK14745600; // RS232 clk
	wire sq_full; // sound queue full
	wire dss_full;
	wire [15:0]cpu32_data;
	wire cpu32_halt;
		
	reg [16:0]vga_ddr_row_col = 0; // video buffer offset (multiple of 4)
	reg s_prog_full;
	reg s_prog_empty = 0;
	reg [3:0]s_ddr_rd = 0;
	reg [3:0]s_ddr_wr = 0;
	reg s_RS232_DCE_RXD;
	reg s_RS232_HOST_RXD;
	reg [10:0]rstcount = 0; //Trebuie marit pentru a se putea reseta opl3 la boot
	reg [18:0]s_displ_on = 0;	// clk_25 delayed displ_on
	reg [2:0]vga13 = 0; 		// 1 for mode 13h
	reg [2:0]vgatext = 0;  		// 1 for text mode
	reg [2:0]v240 = 0;
	reg [2:0]planar = 0;
	reg [2:0]half = 0;
	reg [0:0]repln_graph = 0;
	wire vgaflash;
	reg flashbit = 0;
	reg [5:0]flashcount = 0;
	wire [5:0]char_row = vcount[8:3] >> !half[2];
	wire [3:0]char_ln = {(vcount[3] & !half[1]), vcount[2:0]};
	wire [11:0]charcount = {char_row, 4'b0000} + {char_row, 6'b000000} + hcount_pan[9:3];
	wire [31:0]fifo_dout32;
	wire [15:0]fifo_dout = (vgatext[1] ? hcount_pan[3] : vga13[1] ? hcount_pan[2] : hcount_pan[1]) ? fifo_dout32[31:16] : fifo_dout32[15:0];

	reg [8:0]vga_ddr_row_count = 0;
	wire vga_end_frame = vga_ddr_row_count == (v240[0] ? 479 : 399);
	reg [3:0]vga_repln_count = 0; // repeat line counter
	wire [3:0]vga_repln = vgatext[0] ? (half[0] ? 7 : 15) : {3'b000, repln_graph[0]};//(vga13[0] | half[0]) ? 1 : 0;
	reg [7:0]vga_lnbytecount = 0; // line byte count (multiple of 4)
	wire [4:0]vga_lnend = (vgatext[0] | half[0]) ? 6 : (vga13[0] | planar[0]) ? 11 : 21; // multiple of 32 (SDRAM resolution = 32)
	reg [11:0]vga_font_counter = 0;
	reg [7:0]vga_attr;
	reg [4:0]RTCDIV25 = 0;
	reg [1:0]RTCSYNC = 0;
	reg [15:0]RTC = 0;
	reg [15:0]RTCSET = 0;
	wire RTCEND = RTC == RTCSET;
	wire RTCDIVEND = RTCDIV25 == 24;
	wire [14:0]cache_hi_addr_w;
	wire [14:0]cache_hi_addr_r;
   reg [14:0]cache_hi_addr;
	wire [9:0]memmap;
	wire [9:0]memmap_mux;
	wire [7:0]font_dout;
	wire [7:0]VGA_FONT_DATA;
	wire vgatextreq;
	wire vga13req;
	wire planarreq;
	wire replnreq;
	wire halfreq;
	wire oncursor;
	wire [4:0]crs[1:0];
	wire [11:0]cursorpos;
	wire [15:0]scraddr;
	reg flash_on;
	reg speaker_on = 1'b0;
	reg [9:0]rNMI = 0;
	wire [2:0]shift = half[1] ? ~hcount_pan[3:1] : ~hcount_pan[2:0];
	wire [2:0]pxindex = -hcount_pan[2:0];
	wire [3:0]EGA_MUX = vgatext[1] ? (font_dout[pxindex] ^ flash_on) ? vga_attr[3:0] : {vga_attr[7] & ~vgaflash, vga_attr[6:4]} :
							  {fifo_dout32[{2'b11, shift}], fifo_dout32[{2'b10, shift}], fifo_dout32[{2'b01, shift}], fifo_dout32[{2'b00, shift}]};
	wire [7:0]VGA_INDEX;						  
	reg [3:0]exline = 4'b0000; // extra 8 dwords (32 bytes) for screen panning
	wire vrdon = s_displ_on[~vga_hrzpan];
	wire vrden = (vrdon || exline[3]) && ((vgatext[1] | half[1]) ? &hcount_pan[3:0] : (vga13[1] | planar[1]) ? &hcount_pan[2:0] : &hcount_pan[1:0]);
	wire [3:0]vga_wplane;
	wire [1:0]vga_rplane;
	wire [7:0]vga_bitmask;	// write 1=CPU, 0=VGA latch
	wire [2:0]vga_rwmode;
	wire [3:0]vga_setres;
	wire [3:0]vga_enable_setres;
	wire [1:0]vga_logop;
	wire [3:0]vga_color_compare;
	wire [3:0]vga_color_dont_care;
	wire [2:0]vga_rotate_count;
	wire [7:0]vga_offset;
	reg [2:0]auto_flush = 3'b000;
	wire ppm; 			// pixel panning mode
	wire [9:0]lcr; 		// line compare register
	wire [9:0]vde;		// vertical display end
	//assign {VGA_B, VGA_G, VGA_R} = (vcount <= vde) ? DAC_COLOR : 18'h0;
	wire c3_calib_done;
	wire c3_p0_cmd_empty;
	wire c3_p0_rd_empty;
	reg r_c3_p0_rd_empty = 1'b1;
	wire c3_p1_rd_empty;
	reg r_c3_p1_rd_empty = 1'b1;
	wire c3_p1_wr_empty;
   wire c3_p1_cmd_full;
   wire c3_p1_wr_full;
	wire video_rd = c3_calib_done && c3_p0_cmd_empty && (s_prog_empty || (!s_prog_full && !s_ddr_wr[0] && !s_ddr_rd[0]));

// Com interface
	reg [1:0]ComSel = 2'b00; // 00:COM1=RS232_DCE, 01: COM1=RS232_EXT, 1x: COM1=RS232_HOST
	wire RX = ComSel[1] ? RS232_HOST_RXD : ComSel[0] ? RS232_EXT_RXD : RS232_DCE_RXD;	
	wire TX;
	assign RS232_DCE_TXD = ComSel[1:0] == 2'b00 ? TX : 1'b1;
	assign RS232_EXT_TXD = ComSel[1:0] == 2'b01 ? TX : 1'b1;
	assign RS232_HOST_TXD = ComSel[1] ? TX : 1'b1;
	reg [1:0]COMBRShift = 2'b00; 
	
// SD interface
	reg [7:0]SDI;
	assign SD_DI = CPU_DOUT[7];
	
// GPIO interface
	reg [7:0]GPIOState = 8'h00;
	reg [7:0]GPIOData;
	reg [7:0]GPIODout = 8'hff;
	assign GPIO[0] = GPIOState[0] ? GPIODout[0] : 1'bz;
	assign GPIO[1] = GPIOState[1] ? GPIODout[1] : 1'bz;
	assign GPIO[2] = GPIOState[2] ? GPIODout[2] : 1'bz;
	assign GPIO[3] = GPIOState[3] ? GPIODout[3] : 1'bz;
	assign GPIO[4] = GPIOState[4] ? GPIODout[4] : 1'bz;
	assign GPIO[5] = GPIOState[5] ? GPIODout[5] : 1'bz;
	assign GPIO[6] = GPIOState[6] ? GPIODout[6] : 1'bz;
	assign GPIO[7] = GPIOState[7] ? GPIODout[7] : 1'bz;
	
// opl3 interface
    wire [7:0]opl32_data;
    wire [15:0]opl3left;
    wire [15:0]opl3right;
    wire stb44100;


// NMI on IORQ
	reg [15:0]NMIonIORQ_LO = 16'h0001;
	reg [15:0]NMIonIORQ_HI = 16'h0000;
	//assign LED = {1'b0, !cpu32_halt, AUD_L, AUD_R, planarreq, !c3_p0_rd_empty || !c3_p1_rd_empty || !c3_p1_wr_empty, ~SD_n_CS, HALT};
	assign LED = rstcount[10] ? {~SD_n_CS, HALT} : 2'b01;
	
	//assign de = s_displ_on[17+vgatext[1]];
	wire sdon = s_displ_on[17+vgatext[1]] & (vcount <= vde);
	
	assign PORT_IN[15:8] = 
		({8{MEMORY_MAP}} & {6'b000000, memmap[9:8]}) | 
		({8{INPUT_STATUS_OE}} & SDI) |
		({8{CPU32_PORT}} & cpu32_data[15:8]) | 
		({8{JOYSTICK}} & GPIOState);

	assign PORT_IN[7:0] = //INPUT_STATUS_OE ? {2'b1x, cpu32_halt, sq_full, vblnk, s_RS232_HOST_RXD, s_RS232_DCE_RXD, hblnk | vblnk} : CPU32_PORT ? cpu32_data[7:0] : slowportdata;
							 ({8{VGA_DAC_OE}} & VGA_DAC_DATA) |
							 ({8{VGA_FONT_OE}}& VGA_FONT_DATA) |
							 ({8{KB_OE}} & KB_DOUT) |
							 ({8{INPUT_STATUS_OE}} & {2'b10, cpu32_halt, sq_full, vblnk, 1'b0, s_RS232_DCE_RXD, hblnk | vblnk}) | 
							 ({8{VGA_CRT_OE}} & VGA_CRT_DATA) | 
							 ({8{MEMORY_MAP}} & {memmap[7:0]}) |
							 ({8{TIMER_OE}} & TIMER_DOUT) |
							 ({8{PIC_OE}} & PIC_DOUT) |
							 ({8{VGA_SC}} & VGA_SC_DATA) |
							 ({8{VGA_GC}} & VGA_GC_DATA) |
							 ({8{JOYSTICK}} & GPIOData) |
							 ({8{PARALLEL_PORT_CTL}} & {1'bx, dss_full, 6'bxxxxxx}) |
							 ({8{CPU32_PORT}} & cpu32_data[7:0]) | 
							 ({8{COM1_PORT}} & COM1_DOUT) | 
							 ({8{OPL3_PORT}} & opl32_data) ;

	wire CLK_50_BUF;
	IBUFG  ibufg_CLK
   (
     .I(CLK_50MHZ),
     .O(CLK_50_BUF)
   );


	dcm dcm_system 
	(
		.CLK_IN1(CLK_50_BUF), 
		.CLK_OUT1(clk_25), 
		.CLK_OUT2(clk_250),
		.CLK_OUT3(CLK44100x256),
		.CLK_OUT4(clk_50),
		.CLK_OUT5(CLK14745600),
		.LOCKED(pll_locked)
    );

	dcm1 dcm_cpu
	(
		.CLK_IN1(CLK_50_BUF), 
		.CLK_OUT1(clk_cpu)
	);

	 dcm_dsp dcm_dsp_inst
	 (
		.CLK_IN1(CLK_50_BUF), 
		.CLK_OUT1(clk_dsp) 
	 );

	reg [4:0]wcount = 0;
	reg [1:0]s_wcount4;
	wire [16:0]sdraddr_v = vga_ddr_row_col + vga_lnbytecount;
	
	ddr3 ddr3_inst
	(
		.c3_sys_clk           (CLK_50_BUF),                      
		.c3_sys_rst_i         (1'b0),

		.mcb3_dram_dq           (mcb3_dram_dq),  
		.mcb3_dram_a            (mcb3_dram_a),  
		.mcb3_dram_ba           (mcb3_dram_ba),
		.mcb3_dram_ras_n        (mcb3_dram_ras_n),                        
		.mcb3_dram_cas_n        (mcb3_dram_cas_n),                        
		.mcb3_dram_we_n         (mcb3_dram_we_n),                          
		.mcb3_dram_odt          (mcb3_dram_odt),
		.mcb3_dram_cke          (mcb3_dram_cke),                          
		.mcb3_dram_ck           (mcb3_dram_ck),      //333.33Mhz                   
		.mcb3_dram_ck_n         (mcb3_dram_ck_n),       
		.mcb3_dram_dqs          (mcb3_dram_dqs),                          
		.mcb3_dram_dqs_n        (mcb3_dram_dqs_n),
		.mcb3_dram_udqs         (mcb3_dram_udqs),    // for X16 parts                        
		.mcb3_dram_udqs_n       (mcb3_dram_udqs_n),  // for X16 parts
		.mcb3_dram_udm          (mcb3_dram_udm),     // for X16 parts
		.mcb3_dram_dm           (mcb3_dram_dm),
		.mcb3_dram_reset_n      (mcb3_dram_reset_n),
		.mcb3_rzq               (mcb3_rzq),

		.c3_clk0		        	(clk_sdr), //166.66Mhz - Trebuie cel putin jumatate din mcb3_dram_ck pentru afisare corecta
		.c3_rst0		        	(),
		.c3_calib_done    	(c3_calib_done),

		.c3_p0_cmd_clk                          (clk_sdr),
		.c3_p0_cmd_en                           (video_rd),
		.c3_p0_cmd_instr                        (3'b001), // read
		//.c3_p0_cmd_instr                        (3'b011), // read auto precharge
		.c3_p0_cmd_bl                           (6'b000111), // 8 x 4 bytes
		.c3_p0_cmd_byte_addr                    ({7'b0000001, sdraddr_v, 2'b00}),
		.c3_p0_cmd_empty                        (c3_p0_cmd_empty),
		.c3_p0_cmd_full                         (),
		.c3_p0_wr_clk                           (clk_sdr),
		.c3_p0_wr_en                            (1'b0),
		.c3_p0_wr_mask                          (4'b0000),
		.c3_p0_wr_data                          (),
		.c3_p0_wr_full                          (),
		.c3_p0_wr_empty                         (),
		.c3_p0_wr_count                         (),
		.c3_p0_wr_underrun                      (),
		.c3_p0_wr_error                         (),
		.c3_p0_rd_clk                           (clk_sdr),
		.c3_p0_rd_en                            (1'b1),
		.c3_p0_rd_data                          (vid_DOUT),
		.c3_p0_rd_full                          (),
		.c3_p0_rd_empty                         (c3_p0_rd_empty),
		.c3_p0_rd_count                         (),
		.c3_p0_rd_overflow                       (),
		.c3_p0_rd_error                         (),

		.c3_p1_cmd_clk                          (clk_sdr),
		.c3_p1_cmd_en                           (s_ddr_wr == 4'b0111 || s_ddr_rd == 4'b0111),
		.c3_p1_cmd_instr                        ({2'b00, s_ddr_rd == 4'b0111}), // read/write
		//.c3_p1_cmd_instr                        ({2'b01, s_ddr_rd == 4'b0111}),// read/write auto precharge
		.c3_p1_cmd_bl                           (6'b001111), // 16 x 4 bytes
		.c3_p1_cmd_byte_addr                    ({memmap_mux[9:0], cache_hi_addr[9:0], 6'b000000}),
		.c3_p1_cmd_empty                        (),
		.c3_p1_cmd_full                         (c3_p1_cmd_full),
		.c3_p1_wr_clk                           (clk_sdr),
		.c3_p1_wr_en                            (s_wcount4[1]),
		.c3_p1_wr_mask                          (4'b0000),
		.c3_p1_wr_data                          (r_cntrl0_user_input_data),
		.c3_p1_wr_full                          (c3_p1_wr_full),
		.c3_p1_wr_empty                         (c3_p1_wr_empty),
		.c3_p1_wr_count                         (),
		.c3_p1_wr_underrun                      (),
		.c3_p1_wr_error                         (),
		.c3_p1_rd_clk                           (clk_sdr),
		.c3_p1_rd_en                            (!wcount[4]),
		.c3_p1_rd_data                          (sys_DOUT),
		.c3_p1_rd_full                          (),
		.c3_p1_rd_empty                         (c3_p1_rd_empty),
		.c3_p1_rd_count                         (),
		.c3_p1_rd_overflow                       (),
		.c3_p1_rd_error                         ()
	);

	fifo vga_fifo 
	(
	  .wr_clk(clk_sdr), // input wr_clk
	  .rd_clk(clk_25), // input rd_clk
	  .din(r_vid_DOUT), // input [31 : 0] din
	  .wr_en(!r_c3_p0_rd_empty), // input wr_en
	  .rd_en(vrden), // input rd_en
	  .dout({fifo_dout32}), // output [31 : 0] dout
	  .full(), 			// output full
	  .empty(Empty), 	// output empty
	  .prog_full(AlmostFull), // output prog_full
	  .prog_empty(AlmostEmpty) // output prog_empty
	);

	VGA_SG VGA 
	(
		.tc_hsblnk(10'd639), 
		.tc_hssync(10'd655 + 10'd17), 	// +17 for hrz panning
		.tc_hesync(10'd751 + 10'd17), 	// +17 for hrz panning
		.tc_heblnk(10'd799), 
		.hcount(hcount), 
		.hsync(VGA_HSYNC), 
		.hblnk(hblnk), 
		.tc_vsblnk(v240[2] ? 10'd479 : 10'd399), 
		.tc_vssync(v240[2] ? 10'd489 : 10'd411), 
		.tc_vesync(v240[2] ? 10'd491 : 10'd413), 
		.tc_veblnk(v240[2] ? 10'd520 : 10'd446), 
		.vcount(vcount), 
		.vsync(VGA_VSYNC), 
		.vblnk(vblnk), 
		.clk(clk_25),
		.ce(!Empty)
	);
	
	VGA_DAC dac 
	(
		 .CE(VGA_DAC_OE && IORQ && CPU_CE), 
		 .WR(WR), 
		 .addr(PORT_ADDR[3:0]), 
		 .din(CPU_DOUT[7:0]), 
		 .dout(VGA_DAC_DATA), 
		 .CLK(clk_cpu), 
		 .VGA_CLK(clk_25), 
		 .vga_addr((vgatext[1] | (~vga13[1] & planar[1])) ? VGA_INDEX : (vga13[1] ? hcount_pan[1] : hcount_pan[0]) ? fifo_dout[15:8] : fifo_dout[7:0]), 
		 .color(DAC_COLOR),
		 .vgatext(vgatextreq),
		 .vga13(vga13req),
		 .half(halfreq),
		 .vgaflash(vgaflash),
		 .setindex(INPUT_STATUS_OE && IORQ && CPU_CE),
		 .hrzpan(vga_hrzpan_req),
		 .ppm(ppm),
		 .ega_attr(EGA_MUX),
		 .ega_pal_index(VGA_INDEX)
    );
	 
	 VGA_CRT crt
	 (
		.CE(IORQ && CPU_CE && VGA_CRT_OE),
		.WR(WR),
		.WORD(WORD),
		.din(CPU_DOUT),
		.addr(PORT_ADDR[0]),
		.dout(VGA_CRT_DATA),
		.CLK(clk_cpu),
		.oncursor(oncursor),
		.cursorstart(crs[0]),
		.cursorend(crs[1]),
		.cursorpos(cursorpos),
		.scraddr(scraddr),
		.offset(vga_offset),
		.lcr(lcr),
		.repln(replnreq),
		.vde(vde)
	);
	
	VGA_SC sc
	(
		.CE(IORQ && CPU_CE && VGA_SC),	// 3c4, 3c5
		.WR(WR),
		.WORD(WORD),
		.din(CPU_DOUT),
		.dout(VGA_SC_DATA),
		.addr(PORT_ADDR[0]),
		.CLK(clk_cpu),
		.planarreq(planarreq),
		.wplane(vga_wplane)
    );

	VGA_GC gc
	(
		.CE(IORQ && CPU_CE && VGA_GC),
		.WR(WR),
		.WORD(WORD),
		.din(CPU_DOUT),
		.addr(PORT_ADDR[0]),
		.CLK(clk_cpu),
		.rplane(vga_rplane),
		.bitmask(vga_bitmask),
		.rwmode(vga_rwmode),
		.setres(vga_setres),
		.enable_setres(vga_enable_setres),
		.logop(vga_logop),
		.color_compare(vga_color_compare),
		.color_dont_care(vga_color_dont_care),
		.rotate_count(vga_rotate_count),
		.dout(VGA_GC_DATA)
	);

	sr_font VGA_FONT 
	(
		.clka(clk_25), // input clka
		.wea(1'b0), // input [0 : 0] wea
		.addra({fifo_dout[7:0], char_ln}), // input [11 : 0] addra
		.dina(8'h00), // input [7 : 0] dina
		.douta(font_dout), // output [7 : 0] douta
		.clkb(clk_cpu), // input clkb
		.web(WR & IORQ & VGA_FONT_OE & ~WORD & CPU_CE), // input [0 : 0] web
		.addrb(vga_font_counter), // input [11 : 0] addrb
		.dinb(CPU_DOUT[7:0]), // input [7 : 0] dinb
		.doutb(VGA_FONT_DATA) // output [7 : 0] doutb
	);

	cache_controller cache_ctl 
	(
		 .addr(ADDR), 
		 .dout(DRAM_dout), 
		 .din(DOUT), 
		 .clk(clk_cpu), 
		 .mreq(MREQ), 
		 .wmask(RAM_WMASK),
		 .ce(CE), 
		 .ddr_din(r_sys_DOUT), 
		 .ddr_dout(cntrl0_user_input_data), 
		 .ddr_clk(clk_sdr), 
		 .ddr_rd(ddr_rd), 
		 .ddr_wr(ddr_wr),
		 .hiaddr_w(cache_hi_addr_w),
		 .hiaddr_r(cache_hi_addr_r),
		 .cache_write_data(!r_c3_p1_rd_empty && !wcount[4]), // read DDR, write to cache
		 .cache_read_data(!c3_p1_wr_full && wcount[4]),
		 .flush(auto_flush == 3'b110)
	);

	wire I_KB;
	wire I_MOUSE;
	wire KB_RST;
	KB_Mouse_8042 KB_Mouse 
	(
		 .CS(IORQ && CPU_CE && KB_OE), // 60h, 64h
		 .WR(WR), 
		 .cmd(PORT_ADDR[2]), // 64h
		 .din(CPU_DOUT[7:0]), 
		 .dout(KB_DOUT), 
		 .clk(clk_cpu), 
		 .I_KB(I_KB), 
		 .I_MOUSE(I_MOUSE), 
		 .CPU_RST(KB_RST), 
		 .PS2_CLK1(PS2_CLK1), 
		 .PS2_CLK2(PS2_CLK2), 
		 .PS2_DATA1(PS2_DATA1), 
		 .PS2_DATA2(PS2_DATA2)
	);
	
	wire [7:0]PIC_IVECT;
	wire INT;
	wire timer_int;
	wire I_COM1;
	PIC_8259 PIC 
	(
		 .CS(PIC_OE && IORQ && CPU_CE), // 21h, a1h
		 .WR(WR), 
		 .din(CPU_DOUT[7:0]), 
		 .slave(PORT_ADDR[7]),
		 .dout(PIC_DOUT), 
		 .ivect(PIC_IVECT), 
		 .clk(clk_cpu), 
		 .INT(INT), 
		 .IACK(INTA & CPU_CE), 
		 .I({I_COM1, I_MOUSE, RTCEND, I_KB, timer_int})
    );

	wire [3:0]seg_addr;
	wire vga_planar_seg;
	unit186 CPUUnit
	(
		 .INPORT(INTA ? {8'h00, PIC_IVECT} : PORT_IN), 
		 .DIN(DRAM_dout), 
		 .CPU_DOUT(CPU_DOUT),
		 .PORT_ADDR(PORT_ADDR),
		 .SEG_ADDR(seg_addr),
		 .DOUT(DOUT), 
		 .ADDR(ADDR), 
		 .WMASK(RAM_WMASK), 
		 .CLK(clk_cpu), 
		 .CE(CE/* & !WAITIO*/), 
		 .CPU_CE(CPU_CE),
		 .CE_186(CE_186),
		 .INTR(INT), 
		 .NMI(rNMI[9] || (CPU_CE && IORQ && PORT_ADDR >= NMIonIORQ_LO && PORT_ADDR <= NMIonIORQ_HI)), 
		 .RST(BTN_RESET || !rstcount[10]), 
		 .INTA(INTA), 
		 .LOCK(LOCK), 
		 .HALT(HALT), 
		 .MREQ(MREQ),
		 .IORQ(IORQ),
		 .WR(WR),
		 .WORD(WORD),
		 .FASTIO(1'b1),
		 
		 .VGA_SEL(planarreq && vga_planar_seg),
		 .VGA_WPLANE(vga_wplane),
		 .VGA_RPLANE(vga_rplane),
		 .VGA_BITMASK(vga_bitmask),
		 .VGA_RWMODE(vga_rwmode),
		 .VGA_SETRES(vga_setres),
		 .VGA_ENABLE_SETRES(vga_enable_setres),
		 .VGA_LOGOP(vga_logop),
		 .VGA_COLOR_COMPARE(vga_color_compare),
		 .VGA_COLOR_DONT_CARE(vga_color_dont_care),
		 .VGA_ROTATE_COUNT(vga_rotate_count)
	);
	
	seg_map seg_mapper 
	(
		 .CLK(clk_cpu), 
		 .cpuaddr(PORT_ADDR[3:0]), 
		 .cpurdata(memmap), 
		 .cpuwdata(CPU_DOUT[9:0]), 
		 .memaddr(cache_hi_addr[14:10]), 
		 .memdata(memmap_mux), 
		 .WE(MEMORY_MAP & WR & WORD & IORQ & CPU_CE),
		 .seg_addr(seg_addr),
		 .vga_planar_seg(vga_planar_seg)
    );

	 wire timer_spk;
	 timer_8253 timer 
	 (
		 .CS(TIMER_OE && IORQ && CPU_CE), 
		 .WR(WR), 
		 .addr(PORT_ADDR[1:0]), 
		 .din(CPU_DOUT[7:0]), 
		 .dout(TIMER_DOUT), 
		 .CLK_25(clk_25), 
		 .clk(clk_cpu), 
		 .out0(timer_int), 
		 .out2(timer_spk)
    );
	 
	 soundwave sound_gen
	 (
		.CLK(clk_cpu),
		.CLK44100x256(CLK44100x256),
		.data(CPU_DOUT),
		.we(IORQ & CPU_CE & WR & PARALLEL_PORT),
		.word(WORD),
		.speaker(speaker_on & timer_spk),
		.opl3left(opl3left),
        .opl3right(opl3right),
        .stb44100(stb44100),
		.full(sq_full),	// when not full, write max 2x1152 16bit samples
		.dss_full(dss_full),
		.AUDIO_L(AUD_L),
		.AUDIO_R(AUD_R)
	);
	 
	
	DSP32 DSP32_inst
	(
		.clkcpu(clk_cpu),
		.clkdsp(clk_dsp),
		.cmd(PORT_ADDR[0]), // port 2=data, port 3=cmd (word only)
		.ce(IORQ & CPU_CE & CPU32_PORT & WORD),
		.wr(WR),
		.din(CPU_DOUT),
		.dout(cpu32_data),
		.halt(cpu32_halt)
	);
	
	
	UART_8250 UART(
		.CLK_18432000(CLK14745600),
		.RS232_DCE_RXD(RX),
		.RS232_DCE_TXD(TX),
		.clk(clk_cpu),
		.din(CPU_DOUT[7:0]),
		.dout(COM1_DOUT),
		.cs(COM1_PORT && IORQ && CPU_CE),
		.wr(WR),
		.addr(PORT_ADDR[2:0]),
		.BRShift(COMBRShift),
		.INT(I_COM1)
    );
    
    opl3 opl3_inst (
        //.clk(clk_50), // 50Mhz (min 45Mhz) CLK_50_BUF
		  .clk(CLK_50_BUF), // 50Mhz (min 45Mhz) CLK_50_BUF
        .cpu_clk(clk_cpu),
        .addr(PORT_ADDR[1:0]),
        .din(CPU_DOUT[7:0]),
        .dout(opl32_data),
        .ce(IORQ & CPU_CE & OPL3_PORT),
        .wr(WR),
        .left(opl3left),
        .right(opl3right),
        .stb44100(stb44100),
        .reset(BTN_RESET || !rstcount[10] )    
     );
	

	reg s_vga_endline = 0;
	reg s_vga_endframe = 0;
	always @ (posedge clk_sdr) begin
		s_prog_full <= AlmostFull;
		s_prog_empty <= AlmostEmpty;
// cache w/r
      if(!c3_p1_cmd_full) begin
         s_ddr_wr <= {s_ddr_wr[2:0], ddr_wr};
         if(!s_ddr_wr[0] || s_ddr_wr[3]) s_ddr_rd <= {s_ddr_rd[2:0], ddr_rd};
      end
      cache_hi_addr <= (!s_ddr_wr[3] && s_ddr_wr[0]) ? cache_hi_addr_w : cache_hi_addr_r;
		s_vga_endline <= vga_repln_count == vga_repln;
		s_vga_endframe <= vga_end_frame;
		
		if(s_ddr_wr == 4'b0111) wcount <= 5'b11111;
		else if(!c3_p1_wr_full && wcount[4]) wcount <= wcount - 1'b1;
		if(!c3_p1_wr_full) begin
         s_wcount4 <= {s_wcount4[0], wcount[4]};
         r_cntrl0_user_input_data <= cntrl0_user_input_data;
      end
      r_c3_p1_rd_empty <= c3_p1_rd_empty;
      r_sys_DOUT <= sys_DOUT;
      r_c3_p0_rd_empty <= c3_p0_rd_empty;
      r_vid_DOUT <= vid_DOUT;
		
		if(video_rd) vga_lnbytecount <= vga_lnbytecount + 4'b1000;
		
		if(vga_lnbytecount[7:3] == vga_lnend) begin
			vga_lnbytecount <= 0;

			if(s_vga_endframe) vga_ddr_row_col <= {{1'b0, scraddr[15:13]} + (vgatext[0] ? 4'b0111 : 4'b0100), scraddr[12:0]};
			else if({1'b0, vga_ddr_row_count} == lcr) vga_ddr_row_col <= vgatext[0] ? 17'he000 : 17'h8000; 
				 else if(s_vga_endline) vga_ddr_row_col <= vga_ddr_row_col + (vgatext[0] ? 40 : {vga_offset, 1'b0});
			
			if(s_vga_endline) vga_repln_count <= 0;
			else vga_repln_count <= vga_repln_count + 1'b1;
			if(s_vga_endframe) begin
				vga13[0] <= vga13req;
				vgatext[0] <= vgatextreq;
				v240[0] <= vde >= 10'd400;
				planar[0] <= planarreq;
				half[0] <= halfreq;
				repln_graph[0] <= replnreq;
				vga_ddr_row_count <= 0;
			end else vga_ddr_row_count <= vga_ddr_row_count + 1'b1; 
		end
	end

	
	always @ (posedge clk_cpu) begin
		s_RS232_DCE_RXD <= RS232_DCE_RXD;
		s_RS232_HOST_RXD <= RS232_HOST_RXD;
		if(IORQ & CPU_CE) begin
			if(WR & AUX_OE) begin
				if(WORD) auto_flush[2] <= CPU_DOUT[0];
				else {COMBRShift[1:0], RS232_HOST_RST, ComSel[1:0]} <= CPU_DOUT[4:0];
			end
			if(VGA_FONT_OE) vga_font_counter <= WR && WORD ? {CPU_DOUT[7:0], 4'b0000} : vga_font_counter + 1'b1; 
			if(WR & SPEAKER_PORT) speaker_on <= &CPU_DOUT[1:0];
		end
// SD
		if(CPU_CE) begin
			SD_CK <= IORQ & INPUT_STATUS_OE & WR & ~WORD;
			if(IORQ & INPUT_STATUS_OE & WR) begin
				if(WORD) SD_n_CS <= ~CPU_DOUT[8]; // SD chip select
				else SDI <= {SDI[6:0], SD_DO};
			end
		end

		if(KB_RST || !c3_calib_done) rstcount <= 0;
		else if(CPU_CE && ~rstcount[10]) rstcount <= rstcount + 1'b1;
		
// RTC		
		RTCSYNC <= {RTCSYNC[0], RTCDIVEND};
		if(IORQ && CPU_CE && WR && WORD && RTC_SELECT) begin
			RTC <= 0;
			RTCSET <= CPU_DOUT;
		end else if(RTCSYNC == 2'b01) begin
			if(RTCEND) RTC <= 0;
			else RTC <= RTC + 1'b1;
		end
		
// GPIO
		if(CPU_CE) GPIOData <= GPIO;
		if(IORQ && CPU_CE && WR && JOYSTICK) begin
			if(WORD) GPIOState <= CPU_DOUT[15:8];
			GPIODout <= CPU_DOUT[7:0];
		end
		
// NMI on IORQ
		if(IORQ && CPU_CE && WR && NMI_IORQ_PORT)
			if(PORT_ADDR[0]) NMIonIORQ_HI <= CPU_DOUT;
			else NMIonIORQ_LO <= CPU_DOUT;
			
		auto_flush[1:0] <= {auto_flush[0], vblnk};		
	end
	
	always @ (posedge clk_25) begin
		s_displ_on <= {s_displ_on[17:0], displ_on};
		exline <= vrdon ? 4'b1111 : (exline - vrden); // 32 extra bytes at the end of the scanline, for panning
		
		vga_attr <= fifo_dout[15:8];		
		flash_on <= (vgaflash & fifo_dout[15] & flashcount[5]) | (~oncursor && flashcount[4] && (charcount == cursorpos) && (char_ln >= crs[0][3:0]) && (char_ln <= crs[1][3:0]));		
		
		if(!vblnk) begin
			flashbit <= 1;
			vga13[2] <= vga13[1];
			vgatext[2] <= vgatext[1];
			v240[2] <= v240[1];
			planar[2] <= planar[1];
			half[2] <= half[1];
		end else if(flashbit) begin
			flashcount <= flashcount + 1'b1;
			flashbit <= 0;
			vga13[1] <= vga13[0];
			vgatext[1] <= vgatext[0];
			v240[1] <= v240[0];
			planar[1] <= planar[0];
			half[1] <= half[0];
		end
		
		if(RTCDIVEND) RTCDIV25 <= 0;	// real time clock
		else RTCDIV25 <= RTCDIV25 + 1'b1;
		
		if(!BTN_NMI) rNMI <= 0;		// NMI
		else if(!rNMI[9] && RTCDIVEND) rNMI <= rNMI + 1'b1;	// 1Mhz increment

		if(VGA_VSYNC) vga_hrzpan <= half[0] ? {vga_hrzpan_req[2:0], 1'b0} : {1'b0, vga_hrzpan_req[2:0]};
		else if(VGA_HSYNC && ppm && (vcount == lcr)) vga_hrzpan <= 4'b0000;
		
		//{VGA_B, VGA_G, VGA_R} <= (vcount <= vde) ? DAC_COLOR : 18'h0;
		{VGA_B, VGA_G, VGA_R} <= DAC_COLOR & {18{sdon}};
	end
	
endmodule
