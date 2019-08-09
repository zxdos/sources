`timescale 1ns / 1ps
`default_nettype none

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:18:12 11/07/2015 
// Design Name: 
// Module Name:    tld_jace_spartan6 
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

module tld_jace_unamiga (
    input wire clk50mhz,
    input wire clkps2,
    input wire dataps2,
    output wire audio_out_left,
    output wire audio_out_right,
    output wire [5:0] r,
    output wire [5:0] g,
    output wire [5:0] b,
    output wire hsync,
	 output wire vsync
    );
    
    wire clkram; // 26.666666MHz to clock internal RAM/ROM
    wire clk65;  // 6.5MHz main frequency Jupiter ACE
    wire clkcpu; // CPU CLK
	 wire clkvga; // Twice the original pixel clock
    
    wire kbd_reset;
	 wire poweron_reset;
    wire [7:0] kbd_rows;
    wire [4:0] kbd_columns;
	 wire change_video_output;
    wire video; // 1-bit video signal (black/white)
    
    // Trivial conversion from B/W video to RGB for the scandoubler
	 wire pal_hsync, pal_vsync; // inputs to the scandoubler
    wire [5:0] ri = {{5{video}},1'b0};
    wire [5:0] gi = {{5{video}},1'b0};
    wire [5:0] bi = {{5{video}},1'b0};
    
    // Trivial conversion for audio
    wire mic,spk;
    assign audio_out_left = spk;
    assign audio_out_right = mic;
    
    // Initial video output settings
    reg [1:0] scandblr_reg = 2'b11;
    
    relojes relojes_del_sistema (
        .inclk0(clk50mhz),
        .c0(clkram),  // for driving RAM and ROM = 26 MHz
        .c1(clkvga),  // VGA clock: 2 x video clock (13 MHz)
        .c2(clk65),   // video clock = 6.5 MHz
        .c3(clkcpu)   // CPU clock = 3.25 MHz
    );
    
    jupiter_ace the_core (
        .clkram(clkram),
        .clk65(clk65),
        .clkcpu(clkcpu),
        .reset(kbd_reset & poweron_reset),
        .ear(1'b0),
        .filas(kbd_rows),
        .columnas(kbd_columns),
        .video(video),
        .hsync(pal_hsync),
		  .vsync(pal_vsync),
        .mic(mic),
        .spk(spk)
	);

    keyboard_for_ace the_keyboard (
        .clk(clk65),
        .clkps2(clkps2),
        .dataps2(dataps2),
        .rows(kbd_rows),
        .columns(kbd_columns),
        .kbd_reset(kbd_reset),
        .kbd_nmi(),
        .kbd_mreset(),
		  .change_video_output(change_video_output)
    );
	 
	vga_scandoubler #(.CLKVIDEO(6500)) salida_vga (
		.clkvideo(clk65),
		.clkvga(clkvga),
      .enable_scandoubling(scandblr_reg[0]),
      .disable_scaneffect(scandblr_reg[1]),
		.ri(ri),
		.gi(gi),
		.bi(bi),
		.hsync_ext_n(pal_hsync),
		.vsync_ext_n(pal_vsync),
		.csync_ext_n(pal_hsync & pal_vsync),
		.ro(r),
		.go(g),
		.bo(b),
		.hsync(hsync),
		.vsync(vsync)
   );	

   // Procesar la señal change_video_output
   reg change_video_output_prev = 1'b0;
	always @(posedge clk65) begin
	  change_video_output_prev <= change_video_output;
	  if (change_video_output == 1'b1 && change_video_output_prev == 1'b0) begin
	    case (scandblr_reg)
		   2'b00 : scandblr_reg <= 2'b11;
			2'b11 : scandblr_reg <= 2'b01;
			2'b01 : scandblr_reg <= 2'b00;
	    endcase
	  end
	end
	
	// Procesar poweron_reset
	reg [15:0] shreset = 16'h0000;
	assign poweron_reset = shreset[0];
	always @(posedge clkcpu)
	  shreset <= {1'b1,shreset[15:1]};
   
endmodule
