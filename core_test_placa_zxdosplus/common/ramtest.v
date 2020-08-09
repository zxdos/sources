`timescale 1ns / 1ps
`default_nettype none

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:05:57 08/18/2016 
// Design Name: 
// Module Name:    ramtest 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ramtest16b (
   input wire clk,
   input wire hold,
   input wire rstf,
   input wire rsts,
   output reg [20:0] sram_a,
   inout wire [15:0] sram_d,
   output reg sram_we_n,
   output wire sram_ub_n,
	output wire sram_lb_n,
   output reg test_in_progress,
   output reg test_result
   );
   
   initial begin
      sram_a = 21'h000000;
      sram_we_n = 1'b1;
      test_in_progress = 1'b1;
      test_result = 1'b0;
   end
   
   // Syncronize inputs
   reg initf_f1 = 1'b0, initf_f2 = 1'b0;
   reg inits_f1 = 1'b0, inits_f2 = 1'b0;
   always @(posedge clk) begin
     initf_f2 <= initf_f1;
     initf_f1 <= rstf;
     inits_f2 <= inits_f1;
     inits_f1 <= rsts;
   end
        
   reg [3:0] estado = INIT, retorno_de_write = INIT;
   localparam
      INIT      = 4'd0,
      INCWRITE  = 4'd2,
      ADDSTORE  = 4'd3,
      INCMODIFY = 4'd4,
      CHECK     = 4'd5,
      INCCHECK  = 4'd6,
      HALT      = 4'd7,
      WRITE     = 4'd8,
      WRITE1    = 4'd9,
      WRITE2    = 4'd10,
      WRITE3    = 4'd11,
		WRITE4    = 4'd12,
		WRITE5    = 4'd13
      ;
      
   parameter
      ENDADDRESS = 21'h1FFFFF;
      
   reg [15:0] sram_dout, data;
   wire [15:0] sram_din = sram_d;
   assign sram_d = (sram_we_n == 1'b0)? sram_dout : 16'hZZZZ;
   assign sram_ub_n = 1'b0;
	assign sram_lb_n = 1'b0;
   
   reg fastslow = 1'b0;  // 0: fast (100 MHz), 1:slow (50 MHz)
   reg [3:0] shiftreg = 4'b0101;
	reg clk50 = 1'b0;

   always @(posedge clk) begin
     shiftreg <= {shiftreg[0], shiftreg[3:1]};
	  clk50 <= ~clk50;
	end
   wire clken = shiftreg[0];
   
   always @(posedge clk) begin
     if (hold == 1'b0 && (fastslow == 1'b0 || clken == 1'b1)) begin
       case (estado)
          INIT:
             begin
                test_in_progress <= 1'b1;
                test_result <= 1'b0;
                sram_a <= 21'h000000;
                sram_dout <= 16'h7FFF;
                estado <= WRITE;
                retorno_de_write <= INCWRITE;
             end
          INCWRITE:
             begin
                if (sram_a == ENDADDRESS) begin
                   sram_a <= 21'h000000;
                   estado <= ADDSTORE;
                end
                else begin
                   sram_a <= sram_a + 21'd1;
                   estado <= WRITE;
                   retorno_de_write <= INCWRITE;
                end
             end
          ADDSTORE:
            begin
              sram_dout <= sram_din + 16'h0001;
              estado <= WRITE;
              retorno_de_write <= INCMODIFY;
            end
          INCMODIFY:
             begin
                if (sram_a == ENDADDRESS) begin
                   sram_a <= 21'h000000;
                   estado <= CHECK;
                end
                else begin
                   estado <= ADDSTORE;
                   sram_a <= sram_a + 21'd1;
                end
             end
          CHECK:
             begin
                data <= sram_din;
                estado <= INCCHECK;
             end
          INCCHECK:
             begin
                if (data != 16'h8000) begin
                   test_in_progress <= 1'b0;
                   test_result <= 1'b0;                 
                   estado <= HALT;
                end
                else if (sram_a == ENDADDRESS) begin
                   test_in_progress <= 1'b0;
                   test_result <= 1'b1;                 
                   estado <= HALT;
                end
                else begin
                   sram_a <= sram_a + 21'd1;
                   estado <= CHECK;
                end             
             end
          HALT:
             begin
                if (initf_f2 == 1'b1) begin
                   fastslow <= 1'b0;
                   estado <= INIT;
                end
                else if (inits_f2 == 1'b1) begin
                   fastslow <= 1'b1;
                   estado <= INIT;
                end
             end
          WRITE:
             begin
                sram_we_n <= 1'b0;
                estado <= WRITE2;
             end
          WRITE2: estado <= WRITE3;
          WRITE3:
             begin
					sram_we_n <= 1'b1;
 					 if (fastslow == 1'b0) begin //fast mode
						estado <= WRITE4;
					 end	
					 else begin
						estado <= retorno_de_write;
					 end
             end
		    WRITE4: 
				begin
				  estado <= WRITE5;
				end
 		    WRITE5: 
				begin
				  estado <= retorno_de_write;
				end
      endcase
     end          
   end
endmodule




module ramtest (
   input wire clk,
   input wire hold,
   input wire rstf,
   input wire rsts,
   output reg [18:0] sram_a,
   inout wire [7:0] sram_d,
   output reg sram_we_n,
   output reg test_in_progress,
   output reg test_result
   );
   
   initial begin
      sram_a = 19'h000000;
      sram_we_n = 1'b1;
      test_in_progress = 1'b1;
      test_result = 1'b0;
   end
   
   // Syncronize inputs
   reg initf_f1 = 1'b0, initf_f2 = 1'b0;
   reg inits_f1 = 1'b0, inits_f2 = 1'b0;
   always @(posedge clk) begin
     initf_f2 <= initf_f1;
     initf_f1 <= rstf;
     inits_f2 <= inits_f1;
     inits_f1 <= rsts;
   end
        
   reg [3:0] estado = INIT, retorno_de_read = INIT, retorno_de_write = INIT;
   localparam
      INIT = 4'd0,
      DATOINICIAL = 4'd1,
      INCWRITE = 4'd2,
      ADDSTORE = 4'd3,
      ADD = 4'd4,
      INCMODIFY = 4'd5,
      CHECK = 4'd6,
      INCCHECK = 4'd7,
      HALT = 4'd8,
      READ = 4'd9,
      READ1 = 4'd10,
      READ2 = 4'd11,
      WRITE = 4'd12,
      WRITE1 = 4'd13,
      WRITE2 = 4'd14,
      WRITE3 = 4'd15
      ;
      
   parameter
      ENDADDRESS = 19'h07FFFF;
      
   reg [7:0] sram_dout, data;
   wire [7:0] sram_din = sram_d;
   assign sram_d = (sram_we_n == 1'b0)? sram_dout : 8'hZZ;
   
   reg fastslow = 1'b0;  // 0: fast (100 MHz), 1:slow (25 MHz)
   reg [3:0] shiftreg = 4'b1000;

   always @(posedge clk)
     shiftreg <= {shiftreg[0], shiftreg[3:1]};
   wire clken = shiftreg[0];
   
   always @(posedge clk) begin
     if (hold == 1'b0 && (fastslow == 1'b0 || clken == 1'b1)) begin
       case (estado)
          INIT:
             begin
                test_in_progress <= 1'b1;
                test_result <= 1'b0;
                sram_a <= 19'h000000;
                sram_dout <= 8'b01010101;
                estado <= DATOINICIAL;
             end
          DATOINICIAL:
             begin
                estado <= WRITE;
                retorno_de_write <= INCWRITE;
             end
          INCWRITE:
             begin
                if (sram_a == ENDADDRESS) begin
                   sram_a <= 19'h000000;
                   estado <= ADDSTORE;
                end
                else begin
                   sram_a <= sram_a + 21'd1;
                   estado <= DATOINICIAL;
                end
             end
          ADDSTORE:
             begin
                estado <= READ;
                retorno_de_read <= ADD;
             end
          ADD:
             begin
                sram_dout <= data + 8'b01010101;
                estado <= WRITE;
                retorno_de_write <= INCMODIFY;
             end
          INCMODIFY:
             begin
                if (sram_a == ENDADDRESS) begin
                   sram_a <= 19'h000000;
                   estado <= CHECK;
                end
                else begin
                   estado <= ADDSTORE;
                   sram_a <= sram_a + 19'd1;
                end
             end
          CHECK:
             begin
                estado <= READ;
                retorno_de_read <= INCCHECK;
             end
          INCCHECK:
             begin
                if (data != 8'b10101010) begin
                   test_in_progress <= 1'b0;
                   test_result <= 1'b0;                 
                   estado <= HALT;
                end
                else if (sram_a == ENDADDRESS) begin
                   test_in_progress <= 1'b0;
                   test_result <= 1'b1;                 
                   estado <= HALT;
                end
                else begin
                   sram_a <= sram_a + 21'd1;
                   estado <= CHECK;
                end             
             end
          HALT:
             begin
                if (initf_f2 == 1'b1) begin
                   fastslow <= 1'b0;
                   estado <= INIT;
                end
                else if (inits_f2 == 1'b1) begin
                   fastslow <= 1'b1;
                   estado <= INIT;
                end
             end
          READ:
             begin
                data <= sram_din;
                estado <= retorno_de_read;
             end
          WRITE:
             begin
                sram_we_n <= 1'b0;
                estado <= WRITE2;
             end
          WRITE2:
             begin
                sram_we_n <= 1'b1;
                estado <= retorno_de_write;
             end
       endcase
     end          
   end
endmodule
