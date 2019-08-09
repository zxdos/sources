`timescale 1ns / 1ps
`default_nettype none

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:01:03 11/11/2015
// Design Name:   jace_logic
// Module Name:   C:/Users/rodriguj/Documents/zxuno/cores/jupiter_ace_spartan6/test3_vga/tb_logica_y_scandoubler.v
// Project Name:  jupiter_ace
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: jace_logic
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_logica_y_scandoubler;

	// Inputs
	reg clkvideo;
	reg clkvga;

	// Outputs
	wire int_n;
	wire [9:0] screen_addr;
	wire [9:0] char_addr;
	wire video;
	wire hsync_pal;
	wire vsync_pal;

    // Trivial conversion from B/W video to RGB for the scandoubler
    wire [2:0] ri = {video,video,1'b0};
    wire [2:0] gi = {video,video,1'b0};
    wire [2:0] bi = {video,video,1'b0};
	 
	 wire [2:0] r, g, b;
	 wire hsync, vsync;
	 
	 reg [7:0] patron;

	// Instantiate the Unit Under Test (UUT)
	jace_logic logica (
		.clk(clkvideo), 
		.cpu_addr(16'h0000), 
		.mreq_n(1'b1), 
		.iorq_n(1'b1), 
		.rd_n(1'b1), 
		.wr_n(1'b1), 
		.data_from_cpu(8'h00), 
		.data_to_cpu(), 
		.data_to_cpu_oe(), 
		.wait_n(), 
		.int_n(int_n), 
		.rom_enable(), 
		.sram_enable(), 
		.cram_enable(), 
		.uram_enable(), 
		.xram_enable(), 
		.eram_enable(), 
		.screen_addr(screen_addr), 
		.screen_data(8'h00), 
		.char_addr(char_addr), 
		.char_data(patron), 
		.kbdcols(5'b11111), 
		.ear(1'b0), 
		.spk(), 
		.mic(), 
		.video(video), 
		.hsync_pal(hsync_pal), 
		.vsync_pal(vsync_pal)
	);

	vga_scandoubler salida_vga (
		.clkvideo(clkvideo),
		.clkvga(clkvga),
		.ri(ri),
		.gi(gi),
		.bi(bi),
		.hsync_ext_n(hsync_pal),
		.vsync_ext_n(vsync_pal),
		.ro(r),
		.go(g),
		.bo(b),
		.hsync(hsync),
		.vsync(vsync)
		);

	initial begin
		// Initialize Inputs
		clkvideo = 1;
		clkvga = 1;
        
		// Add stimulus here

	end
	
	always begin
		clkvideo = #(500/6.6666666666667) ~clkvideo;
	end
	
	always begin
		clkvga = #(500/13.33333333333334) ~clkvga;
	end
      
	always begin
		@(negedge hsync_pal);
		if (patron == 8'b11000011)
			patron = 8'b10101011;
		else
			patron = 8'b11000011;
	end
		
endmodule

