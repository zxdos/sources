//============================================================================
// 
// 
//  TAPE_ZXDOS Based on ZX80-ZX81 replica for MiST
//  Copyright (C) 2018 György Szombathelyi
//
//  This program is free software; you can redistribute it and/or modify it
//  under the terms of the GNU General Public License as published by the Free
//  Software Foundation; either version 2 of the License, or (at your option)
//  any later version.
//
//  This program is distributed in the hope that it will be useful, but WITHOUT
//  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
//  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
//  more details.
//
//  You should have received a copy of the GNU General Public License along
//  with this program; if not, write to the Free Software Foundation, Inc.,
//  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
//============================================================================


module tape_zxdos
(
   input wire        ram_clk,   // Input clock 50 MHz
	input wire 			reset,     // reset
	// Boot upload signals from CtrlModule
	input wire [31:0] bootdata,
	input	wire			bootdata_req,
	output reg  	   bootdata_ack,

	//Tape out control
	input	wire	clk500,      // 500kHz
	input wire	playbutton,     // "press play/pause tape = F5"
	input wire	stopbutton,     // "press stop tape = F6"
	input wire	ejectbutton,    // "press eject tape = F7" -- Reset memory tape
	output reg	tape_out,
	output wire play_on  //Tape playback in progress

);

////assign LED = ~ioctl_download & ~tape_ready;
////
////`include "build_id.v"
////localparam CONF_STR = 
////{
////	"ZX8X;;",
////	"F,O  P  ,Load tape;",
////	"O4,Model,ZX80,ZX81;",
////	"OAB,RAM size,1k,16k,32k,64k;",
////   "OC,CHR128 support,Off,On;",
////	"O8,Swap joy axle,Off,On;",
////	"O6,Video frequency,50Hz,60Hz;",
////	"O7,Inverse video,Off,On;",
////	"O9,Scanlines,Off,On;",
////	"T0,Reset;",
////	"V,v1.0.",`BUILD_DATE
////};
////
////
////////////////////////   CLOCKS   ///////////////////
////wire clk_sys;
////wire locked;
////
////pll pll
////(
////	.inclk0(CLOCK_27),
////	.c0(clk_sys), //52 MHz
////	.locked(locked)
////);
////
////reg  ce_cpu_p;
////reg  ce_cpu_n;
////reg  ce_13,ce_65,ce_psg;
////
////always @(negedge clk_sys) begin
////	reg [4:0] counter = 0;
////
////	counter  <=  counter + 1'd1;
////	ce_cpu_p <= !counter[3] & !counter[2:0];
////	ce_cpu_n <=  counter[3] & !counter[2:0];
////	ce_65    <= !counter[2:0];
////	ce_13    <= !counter[1:0];
////	ce_psg   <= !counter[4:0];
////end
//
//////////////////////   MIST ARM I/O   ///////////////////
////wire [10:0] ps2_key;
////wire [24:0] ps2_mouse;
////
////wire  [7:0] joystick_0;
////wire  [7:0] joystick_1;
////wire  [1:0] buttons;
////wire  [1:0] switches;
////wire        scandoubler_disable;
////wire        ypbpr;
////wire [31:0] status;
////
////wire        ioctl_wr;
////wire [13:0] ioctl_addr;
////wire  [7:0] ioctl_dout;
////wire        ioctl_download;
////wire  [7:0] ioctl_index;
////mist_io #(.STRLEN($size(CONF_STR)>>3)) user_io
////(
////	.clk_sys(clk_sys),
////	.CONF_DATA0(CONF_DATA0),
////	.SPI_SCK(SPI_SCK),
////	.SPI_DI(SPI_DI),
////	.SPI_DO(SPI_DO),
////	.SPI_SS2(SPI_SS2),
////	
////	.conf_str(CONF_STR),
////
////	.status(status),
////	.scandoubler_disable(scandoubler_disable),
////	.ypbpr(ypbpr),
////	.buttons(buttons),
////	.switches(switches),
////	.joystick_0(joystick_0),
////	.joystick_1(joystick_1),
////	.ps2_key(ps2_key),
////
////	.sd_conf(0),
////	.sd_sdhc(1),
////	.ioctl_ce(1),
////	.ioctl_wr(ioctl_wr),
////	.ioctl_addr(ioctl_addr),
////	.ioctl_dout(ioctl_dout),
////	.ioctl_download(ioctl_download),
////	.ioctl_index(ioctl_index),
////
////	// unused
////	.ps2_kbd_clk(),
////	.ps2_kbd_data(),
////	.ps2_mouse_clk(),
////	.ps2_mouse_data(),
////	.joystick_analog_0(),
////	.joystick_analog_1(),
////	.sd_ack_conf()
////);
//
//
///////////////////////   CPU   ///////////////////
////wire [15:0] addr;
////wire  [7:0] cpu_din;
////wire  [7:0] cpu_dout;
////wire        nM1;
////wire        nMREQ;
////wire        nIORQ;
////wire        nRD;
////wire        nWR;
////wire        nRFSH;
////wire        nHALT;
////wire        nINT = addr[6];
////wire        nNMI;
////wire        nWAIT;
////reg       	reset;
////
////T80pa cpu
////(
////	.RESET_n(~reset),
////	.CLK(clk_sys),
////	.CEN_p(ce_cpu_p),
////	.CEN_n(ce_cpu_n),
////	.WAIT_n(nWAIT),
////	.INT_n(nINT),
////	.NMI_n(nNMI),
////	.BUSRQ_n(1),
////	.M1_n(nM1),
////	.MREQ_n(nMREQ),
////	.IORQ_n(nIORQ),
////	.RD_n(nRD),
////	.WR_n(nWR),
////	.RFSH_n(nRFSH),
////	.HALT_n(nHALT),
////	.A(addr),
////	.DO(cpu_dout),
////	.DI(cpu_din)
////);
////
////wire [7:0] io_dout = kbd_n ? (psg_sel ? psg_out : 8'hFF) : { tape_in, hz50, 1'b0, key_data[4:0] & ({5{addr[12]}} | ~joykeys) };
////
////always_comb begin
////	case({nMREQ, ~nM1 | nIORQ | nRD})
////	    'b01: cpu_din = (~nM1 & nopgen) ? 8'h0 : mem_out;
////	    'b10: cpu_din = io_dout;
////	 default: cpu_din = 8'hFF;
////	endcase
////end
////
////wire       tape_in = ~UART_RX;
//reg        init_reset = 1;
//reg        zx81;
////reg  [1:0] mem_size; //00-1k, 01 - 16k 10 - 32k
////wire       hz50 = ~status[6];
////wire       joyrev = status[8];
////wire [4:0] joykeys = joyrev ? {joystick_0[2], joystick_0[3], joystick_0[0], joystick_0[1], joystick_0[4]} :
////										{joystick_0[1:0], joystick_0[2], joystick_0[3], joystick_0[4]};
//
//always @(posedge clk_sys) begin
//	reg old_download;
//	old_download <= ioctl_download;
//	if(~ioctl_download && old_download && !ioctl_index) init_reset <= 0;
//	if(~ioctl_download && old_download && ioctl_index) tape_ready <= 1;
//	
//	reset <= buttons[1] | status[0] | (mod[1] & Fn[11]) | init_reset;
//	if (reset) begin
//		zx81 <= status[4];
//		mem_size <= status[11:10];
//		tape_ready <= 0;
//	end
//end
//
//////////////////////   MEMORY   //////////////////
////assign SDRAM_CLK = clk_sys;
////
////sdram ram
////(
////	.*,
////	.init(~locked),
////	.clk(clk_sys),
////	.wtbt(0),
////	.dout(ram_out),
////	.din (ram_in),
////	.addr(ram_a),
////	.we(ram_we | tapewrite_we),
////	.rd(ram_e & (~nRFSH | (~nRD & ~nMREQ)) & ~ce_cpu_n & ~tapeloader),
////	.ready(ram_ready)
////);
//
////wire        ram_ready;
////reg   [7:0] rom[12288];
////wire [12:0] rom_a  = nRFSH ? addr[12:0] : { addr[12:9], ram_data_latch[5:0], row_counter };
////wire [15:0] tape_load_addr = 16'h4000 + ((ioctl_index[7:6] == 1) ? tape_addr + 4'd8 : tape_addr-1'd1);
////wire [15:0] ram_a;
////wire        ram_e_64k = &mem_size & (addr[13] | (addr[15] & nM1));
////wire        rom_e  = ~addr[14] & (~addr[12] | zx81) & ~ram_e_64k & ~chr128_mem;
////wire        ram_e  = addr[14] | ram_e_64k | chr128_mem;
////wire        ram_we = ~nWR & ~nMREQ & ram_e;
////wire  [7:0] ram_in = tapeloader ? tape_in_byte : cpu_dout;
////wire  [7:0] rom_out;
////wire  [7:0] ram_out;
////wire  [7:0] mem_out;
////
////wire        chr128 = status[12];
////wire        chr128_mem = chr128 & (addr[15:12] == 4'h3);
////
////always_comb begin
////	casex({ tapeloader, rom_e, ram_e })
////		'b110: mem_out = tape_loader_patch[addr - (zx81 ? 13'h0347 : 13'h0207)];
////		'b010: mem_out = rom_out;
////		'b001: mem_out = ram_out;
////		default: mem_out = 8'd0;
////	endcase
////
////    casex({tapeloader, mem_size, chr128_mem })
////        'b1_XX_X: ram_a = tape_load_addr;
////        'b0_00_0: ram_a = { 6'b010000,             addr[9:0] }; //1k
////        'b0_01_0: ram_a = { 2'b01,                addr[13:0] }; //16k
////        'b0_10_0: ram_a = { 1'b0, addr[15] & nM1, addr[13:0] } + 16'h4000; //32k
////        'b0_11_0: ram_a = { addr[15] & nM1,       addr[14:0] }; //64k
////        'b0_XX_1: ram_a = nRFSH ? addr[15:0] : { addr[15:10], addr[8] & ram_data_latch[7], ram_data_latch[5:0], row_counter }; //chr
////    endcase
////end
//
//
//////////////////////  TAPE  //////////////////////
////reg   [7:0] tape_ram[16384];
//reg         tapeloader, tapewrite_we;
//reg  [13:0] tape_addr;
//reg   [7:0] tape_in_byte;
//reg         tape_ready;  // there is data in the tape memory
//// patch the load ROM routines to loop until the memory is filled from $4000(.o file ) $4009 (.p file)
//// xor a; loop: nop or scf, jr nc loop, jp h0207 (jp h0203 - ZX80)
//reg   [7:0] tape_loader_patch[7] = {8'haf, 8'h00, 8'h30, 8'hfd, 8'hc3, 8'h07, 8'h02};
//
////always @(posedge clk_sys) begin
////	if (ioctl_wr & ioctl_index) begin
////		tape_ram[ioctl_addr] <= ioctl_dout;
////	end
////end
//
//always @(posedge clk_sys) begin
//	tape_in_byte <= tape_ram[tape_addr];
//end
//
//always @(posedge clk_sys) begin
//	reg old_nM1;
//	
//	old_nM1 <= nM1;
//	tapewrite_we <= 0;
//	
//	if (~nM1 & old_nM1 & tape_ready) begin
//		if (zx81) begin
//			if (addr == 16'h0347) begin
//				tape_loader_patch[1] <= 8'h00; //nop
//				tape_loader_patch[5] <= 8'h07; //0207h
//				tape_addr <= 14'h0;
//				tapeloader <= 1;
//			end
//			if (addr >= 16'h03c3 || addr < 16'h0347) begin
//				tapeloader <= 0;
//			end
//		end else begin
//			if (addr == 16'h0207) begin
//				tape_loader_patch[1] <= 8'h00; //nop
//				tape_loader_patch[5] <= 8'h03; //0203h
//				tape_addr <= 14'h0;
//				tapeloader <= 1;
//			end
//			if (addr >= 16'h024d || addr < 16'h0207) begin
//				tapeloader <= 0;
//			end
//		end
//	end
//
//	if (tapeloader & ce_cpu_p) begin
//		if (tape_addr != ioctl_addr) begin
//			tape_addr <= tape_addr + 1'h1;
//			tapewrite_we <= 1;
//		end else begin
//			tape_loader_patch[1] <= 8'h37; //scf
//		end
//	end
//end

//wire reset = 1'b0;
reg [11:0] ram_addr;
reg [31:0] ram_write;
wire [31:0] ram_tape_data_out;
reg ram_wr;
reg ram_ack;

//***** DE ATARI *****
//-- State machine to receive and stash boot data in SRAM
localparam idle    = 1'b0,
			  ramwait = 1'b1;
reg boot_state;


always @(posedge ram_clk) begin
		if (reset || eject)  begin
			ram_addr<= 12'd0; 
			ram_wr<= 1'b0;
			ram_ack <= 1'b0;
			bootdata_ack <= 1'b0;
			boot_state <= idle;
			file_size <= 16'b0;
		  end
		else begin
		   bootdata_ack<=1'b0;
			case (boot_state)
				idle: begin
							if (bootdata_req) begin
								ram_write <= { bootdata[7:0] , bootdata[15:8] , bootdata[23:16] , bootdata[31:24] };
								ram_wr <= 1'b1;
								boot_state<=ramwait;
								bootdata_ack<=1'b1;
							end
						end
				ramwait: begin
						ram_addr<= ram_addr + 1;
						file_size <= {2'b00 , ram_addr, 2'b00 };
						ram_wr<=1'b0;
						boot_state<=idle;
					end
			endcase
		end

end

//--Memoria para almacenar descarga del fichero .p
Ram_Tape ramtape   
(
	.addra(byte_count[13:2]),
	.clka(ram_clk),
	.wea(1'b0),
	.dina(8'hFF),
	.douta(ram_tape_data_out), //

	.addrb(ram_addr),
	.clkb(ram_clk),
	.web(ram_wr),
	.dinb(ram_write),
	.doutb()

);

always @(posedge ram_clk) begin
	case (byte_count[1:0])
					2'b00: tmp_data_out <= ram_tape_data_out[7:0];
					2'b01: tmp_data_out <= ram_tape_data_out[15:8];
					2'b10: tmp_data_out <= ram_tape_data_out[23:16];
					default: tmp_data_out <= ram_tape_data_out[31:24];
	endcase
end

wire [7:0] ram_data_out = tmp_data_out;

///// TAPE OUT LOGIC
//// create clock to be used for signaltap
//reg [7:0] tape_clk /* synthesis noprune */;
//always @(posedge clk500) 	
//	tape_clk <= tape_clk + 8'd1;

// tape bit timing
// 0 bit = /\/\/\/\_________   (4* 150us H + 150us L + 1300us L)
// 1 bit = /\/\/\/\/\/\/\/\/\_____________

// 0 = idle, 1 = 1300us low, 2/4/6/../18 = 150us high, 3/5/7/../19 = 150us L
reg [4:0] pulse_state;

// 150us = 75 cycles @ 500kHz
// 1300us = 650 cycles @ 500kHz
reg [9:0] pulse_cnt;  // 10 bit = 1024 max range

reg bit_done;

// generate bit timing
always @(posedge clk500) begin
	bit_done <= 1'b0;

	if(pulse_cnt == 0) begin
		// end of idle state, start new bit
		if(pulse_state == 0) begin
			if(bit_start) begin
				tape_out <= 1'b1;
				pulse_state <= bit?5'd19:5'd9;
				pulse_cnt <= 10'd74;
			end
		end
			
		// end of 1300us seperator phase
		else if(pulse_state == 1) begin
			tape_out <= 1'b0;
			pulse_state <= 5'd0;
			pulse_cnt <= 10'd0;
			bit_done <= 1'b1;
		end
			
		// end of last high phase
		else if(pulse_state == 2) begin
			tape_out <= 1'b0;
			pulse_state <= 5'd1;
			pulse_cnt <= 10'd649;
		end
		
		// end of normal pulse hi/lo phase
		else if(pulse_state > 2) begin
			// tape level is 1 when coming from state 4,6,8,...
			tape_out <= !pulse_state[0];
			pulse_state <= pulse_state - 5'd1;
			pulse_cnt <= 10'd74;
		end
	
	end else
		pulse_cnt <= pulse_cnt - 10'd1;
end

// bring play signal into local clock domain and 
// generate start signal from it
reg start;
reg playD, playD2;
reg stop;
reg stopD, stopD2;
reg eject;
reg ejectD, ejectD2;
always @(posedge clk500) begin
	start <= 1'b0;
	playD <= playbutton;
	playD2 <= playD;
	
	eject  <= 1'b0;
	ejectD <= ejectbutton;
	ejectD2 <= ejectD;

	stop  <= 1'b0;
	stopD <= stopbutton;
	stopD2 <= stopD;

	if(playD && !playD2)
		start <= 1'b1;
		
	if(stopD && !stopD2)
		stop <= 1'b1;

	if(ejectD && !ejectD2)
		eject <= 1'b1;	
end

// byte transmitter
wire bit = byte[bit_cnt];

// reg [7:0] byte = 8'h55 /* synthesis noprune */;
reg [2:0] bit_cnt;
reg byte_tx_running = 1'b0;
reg bit_in_progress;
reg bit_start;

reg byte_done;

always @(posedge clk500) begin
	bit_start <= 1'b0;
	byte_done <= 1'b0;

	// start signal starts a new byte transmission
	if(!byte_tx_running) begin
		if(byte_start) begin
			byte_tx_running <= 1'b1;
			bit_in_progress <= 1'b0;
			bit_cnt <= 3'd7;
		end
	end else begin
		// byte transmission in progress
		
		if(!bit_in_progress) begin
			// start new bit
			bit_start <= 1'b1;
			bit_in_progress <= 1'b1;
		end else begin
			// wait for bit transmission to finish
			if(bit_done) begin
				bit_in_progress <= 1'b0;
				
				if(bit_cnt != 0)
					bit_cnt <= bit_cnt - 3'd1;
				else begin
					byte_tx_running <= 1'b0;
					byte_done <= 1'b1;
				end
			end
		end
	end
end

// byte tx engine
reg [15:0] byte_count;

// 0=idle, 1=filename, 2=file
reg [1:0] byte_state = 2'd0;

reg byte_start;


always @(posedge clk500) begin
	byte_start <= 1'b0;

	if(byte_state == 0) begin
		// start transmission if user presses "play". don't do anything if
		// there's no tape data in the buffer
		if(start && (file_size != 0)) begin
			byte_state <= 2'd1;
			
			// transmit the "file name"
			byte_start <= 1'b1;
		end
	end else if(byte_state == 1) begin //Init tape playback
		if(byte_done) begin
			byte_state <= 2'd2;
			byte_start <= 1'b1;
			byte_count <= 16'h0000;
		end
	end else if(byte_state == 2) begin
			if (start)
				byte_state <= 2'd3; //Pause
			else if (stop)
				byte_state <= 2'd0; //Stop tape
			else if(byte_done) begin
				if(byte_count != file_size - 16'd1) begin //Tape playback until end
					byte_count <= byte_count + 16'd1;
					byte_start <= 1'b1;
				end else
					byte_state <= 2'd0;
			end
	end else if(byte_state == 3) begin   // pause
		if(start) begin
			byte_state <= 2'd2;
			byte_start <= 1'b1;
		end else if (stop)
			byte_state <= 2'd0; //Stop tape
	end
end
assign play_on = (byte_state == 2'd1 || byte_state == 2'd2 ) ? 1'b1 : 1'b0;

wire [7:0] filename = { 1'b1, 7'h3f}; // 'Z' with end flag
wire [7:0] byte = (byte_state == 1)?filename:ram_data_out;
//wire [7:0] ram_data_out;
reg  [7:0] tmp_data_out;

reg [15:0] file_size;// = "0000001111111111";

endmodule
