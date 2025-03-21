`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
//
// This file is part of the Next186 Soc PC project
// http://opencores.org/project,next186
//
// Filename: opl3seq.v
// Description: Part of the Next186 SoC PC project, OPL3 
// Version 1.0
// Creation date: 13:55:57 02/27/2017
//
// Author: Nicolae Dumitrache 
// e-mail: ndumitrache@opencores.org
//
/////////////////////////////////////////////////////////////////////////////////
// 
// Copyright (C) 2017 Nicolae Dumitrache
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
// Port0 (R) = 4'b0000, Addr[1:0], qempty, ready 
// Port1 (R) = Value[7:0], advance queue
//
// OPL3 timers are not implemented, only the IRQ and FT1, flags are simulated for Adlib detection 
///////////////////////////////////////////////////////////////////////////////////


//opl3 patched (adlib autodetection fix)
//https://github.com/neurorulez/jammazx1/blob/master/ordenadores/pcxt_186/opl3.v
module opl3(
    input clk, // 50Mhz (min 45Mhz)
    input cpu_clk,
    input [1:0]addr,
    input [7:0]din,
    output [7:0]dout,
    input ce,
    input wr,
    output [15:0]left,
    output [15:0]right,
    input stb44100,
    input reset
    );
	 
	wire seq_wr;
	wire [11:0]seq_addr;
	wire [15:0]seq_rdata;
	wire [15:0]seq_wdata;
    wire [15:0]CPU_ADDR;
	wire [7:0]CPU_DIN;
	wire [7:0]CPU_DOUT;
    wire CPU_WR;
    wire CPU_MREQ; 
    wire CPU_IORQ; 
    reg [1:0]read = 2'b00;
    wire ready;
    reg CE = 1'b0;
    wire [9:0]qdata;
    wire qempty;
    reg [2:0]status = 3'b000;
    reg [4:0]tmr_cnt_50 = 0;
    reg [1:0]tmr_cnt_smp = 2'b00;
    reg [7:0]tmr_cnt = 0;
    reg tmr_addr = 1'b0;
	 reg tmr_enable = 1'b0;
    assign dout = {(addr == 2'b00 ? status : 3'b000),  5'b00000};
    wire [7:0]InPort = CPU_ADDR[0] ? qdata[7:0] : {4'b0000, qdata[9:8], qempty, ready};
  
    
   opl3_mem ram_inst (
     .clka(clk), // input clka
     .wea(CPU_MREQ & CPU_WR & CE), // input [0 : 0] wea
     .addra(CPU_ADDR[12:0]), // input [12 : 0] addra
     .dina(CPU_DOUT), // input [7 : 0] dina
     .douta(CPU_DIN), // output [7 : 0] douta
     .clkb(clk), // input clkb
     .web(seq_wr), // input [0 : 0] web
     .addrb({seq_addr}), // input [11 : 0] addrb
     .dinb(seq_wdata), // input [15 : 0] dinb
     .doutb(seq_rdata) // output [31 : 0] doutb
   );
	 
	  opl3_in in_queue (  // fall through  
        .wr_clk(cpu_clk),
        .din({addr, din}),
        .wr_en(ce && wr),
        .full(),
        .rd_clk(clk),
        .dout(qdata),
        .rd_en(CE && CPU_IORQ && !CPU_WR && CPU_ADDR[0]),
        .empty(qempty)
    );
	
	opl3seq #(.OPL3Struct_base(12'haf5)) opl3seq_inst
   (
		.clk(clk), 
		.rd(read == 2'b01), 
		.A(left), 
		.B(right), 
		.ready(ready), 
		.ram_wr(seq_wr), 
		.ram_addr(seq_addr), 
		.ram_rdata(seq_rdata), 
		.ram_wdata(seq_wdata)
	);
   
   NextZ80 Z80 (
      .DI(CPU_IORQ ? InPort : CPU_DIN), 
      .DO(CPU_DOUT), 
      .ADDR(CPU_ADDR), 
      .WR(CPU_WR), 
      .MREQ(CPU_MREQ), 
      .IORQ(CPU_IORQ), 
      .HALT(), 
      .M1(), 
      .CLK(clk), 
      .RESET(reset), 
      .INT(1'b0), 
      .NMI(1'b0), 
      .WAIT(!CE)
    );
    

	always @ (posedge clk) begin
	    CE <= !CE;
	    read <= {read[0], stb44100};
	    tmr_cnt_50 <= tmr_cnt_50 + 1'b1;
	end
	
	always @(posedge cpu_clk) begin
	    //tmr_cnt_smp <= {tmr_cnt_smp[0], tmr_cnt_50[4] & tmr_enable};
	    //if(tmr_cnt_smp == 2'b01 || (ce && !wr && addr == 2'b00)) tmr_cnt <= tmr_cnt + 1'b1; // simulate Adlib <IN> delay
	    //status <= {status[2] | tmr_cnt[7], status[1] | tmr_cnt[7], 1'b0};
	    
	    if(ce)
            if(wr) begin
                if(addr[0]) begin // data
// bluesbrothers:
// envia 0x0463 (01100011) (usa loops cortos para los out)
// loop de 2000h haciendo in al,dx, and al,60h, debe ser 0
// envia 0x0423 (00100011) b5=1 (ignora b1), b0=1
// loop de 9FFFh, hasta que in al,dx, and al,60h sea 40h
// envia 0x0443 (01000011) b6=1 (ignora b0), b1=1
// loop de 9FFFh, hasta que in al,dx, and al,60h sea 20h
//
                    if(tmr_addr && (din[7] || (din[6] && din[5]))) begin // 0480h -> reset flags, 0460h -> también reset (fix F15II,F117,GS2K,etc)
                        status <= 3'b000; // reset status
                        tmr_cnt <= 0;  // QUITAR ESTO y el "simulate in delay", dará problemas si hacemos muchos "in" (>127) en vez de loop (status terminará valiendo C0h)
                        tmr_enable <= 0;
                    end else if (tmr_addr) begin
								if (!din[6] && din[0]) begin // 0421h -> inicia timer1
									status <= 3'b110; // timer1 terminado directamente
									//tmr_cnt <= 0; //AITD: NO, LHX:NO
									//tmr_cnt <= 8'h1f; //AITD: SI, LHX:NO, aitd posiblemente usa "loop", lhx posiblemente usa varios "in" y necesita que en 35 llegue a b110
									//tmr_cnt <= 8'h5f; //AITD: SI, LHX:SI
									tmr_enable <= 1;
                        end else if (!din[5] && din[1]) begin // 0442h -> inicia timer2 (usado por el bluesb)
									status <= 3'b101; // timer2 terminado directamente
									tmr_enable <= 1;
								end
                    end
                end else tmr_addr <= addr == 2'b00 && din == 8'h04;
            end   
	end
 
endmodule
