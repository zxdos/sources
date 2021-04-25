`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04/12/2020
// Design Name: 
// Module Name:    rom_loader
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: rom loader based on nes core loader by DistWave
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//    Author AvlixA
//
//
//////////////////////////////////////////////////////////////////////////////////

module rom_loader (

	input wire clk,
	input wire reset,

	// SRAM
	output wire [11:0] sram_addr,
	inout wire  [7:0] sram_data,
	output wire sram_we_n,
   output wire loading,
   
   output wire rst_n, // Reset core
   
   //host data control
   input wire  [31:0] host_bootdata,
   input wire  host_bootdata_req,
   input wire  host_bootdata_reset,
   output reg  host_bootdata_ack,
	input wire  [15:0] host_bootdata_size
	
	);

   //reg to temporary save input data from ctrlmodule
   reg [31:0] host_bootdata_save;
   reg [15:0] host_rom_size;

   //loader signal
   reg [1:0] boot_state = 2'b0;
   reg [15:0] bytesloaded;

   //signal for gameloader
   reg  [21:0] loader_addr;
   reg  [7:0]  loader_write_data;
   reg  [7:0]  loader_input;
   wire loader_reset = host_bootdata_reset; //host_reset_loader;
   reg  loader_write;
   reg  loader_done, loader_fail;
   
   assign loading = !loader_done;
   
   //reset Videopac
   assign rst_n = (reset)? 1'b0 : loader_done;
   
   //SRAM memory signals
   assign sram_addr = loader_addr[11:0];
	assign sram_data = loader_write_data;
	assign sram_we_n = !loader_write;
   

   //FSM receive from ctrlmodule and sendto fifo
   always@( posedge clk)
   begin
      if (loader_reset == 1'b1) begin
         host_bootdata_ack <= 1'b0;
         boot_state <= 2'b00;
         loader_write <= 1'b0;
         bytesloaded <= 16'h00000000;
         loader_addr <= 22'h000200;
         loader_done <= 1'b0;
      end else begin

         case (boot_state)
            2'b00: begin
                  loader_addr <= loader_addr;
                  if (host_bootdata_req == 1'b1) begin
                        boot_state <= 2'b11;
                        host_bootdata_ack <= 1'b1;
                        loader_write <= (loader_done) ? 1'b0 : 1'b1;
                        loader_write_data <= host_bootdata[31:24];
                        host_bootdata_save<= host_bootdata;
                        host_rom_size <= host_bootdata_size;
                  end
                  else begin
                     host_bootdata_ack <= 1'b0;
                     if (bytesloaded[15:2] == host_bootdata_size[15:2]) 
                        loader_done <= 1;
                     boot_state <= 2'b00;
                     loader_write <= 1'b0;
                  end
               end
            2'b01: 
               begin
                    loader_write <= 1'b0;
                    loader_addr <= loader_addr;
                    boot_state <= 2'b10;
               end
            2'b10:
               begin
                  bytesloaded <= bytesloaded + 1'b1;
                  loader_addr <= loader_addr + 1'b1;
                  host_bootdata_ack <= 1'b0;
                  if (loader_addr[1:0] == 2'b11) begin
                    boot_state <= 2'b00;
                  end
                  else begin
                     boot_state <= 2'b01;
                     loader_write <= (loader_done) ? 1'b0 : 1'b1;
                     if (loader_addr[1:0] == 2'b00) begin //siguiente bit = 2
                        loader_write_data <= host_bootdata_save[23:16];
                     end
                     else if (loader_addr[1:0] == 2'b01) begin //siguiente bit = 3
                        loader_write_data <= host_bootdata_save[15:8];
                     end
                     else if (loader_addr[1:0] == 2'b10) begin //siguiente bit = 4
                        loader_write_data <= host_bootdata_save[7:0];
                     end
                  end
               end
            2'b11:
               begin
                  if (host_bootdata_req == 1'b0) begin
                        boot_state <= 2'b01;
                        host_bootdata_ack <= 1'b0;
                  end
                  else begin
                        host_bootdata_ack <= 1'b1;
                        boot_state <= 2'b01;
                  end
               end
         endcase
      end
   end



endmodule
