`timescale 1ns / 1ps
`default_nettype none

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:24:02 08/15/2016 
// Design Name: 
// Module Name:    tld_test_prod_v4 
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
module tld_test_placa_lx25 (
   input wire clk50mhz,
   //---------------------------
   input wire clkps2,
   input wire dataps2,
   //---------------------------
   inout wire mousedata,
   inout wire mouseclk,
   //---------------------------
   input wire ear,
   //---------------------------
   output wire [20:0] sram_addr,
   inout wire [15:0] sram_data,
   output wire sram_we_n,
   output wire sram_ub_n,
	output wire sram_lb_n,
   //---------------------------
   output wire joy_load_n,
   output wire joy_clk,
   input wire joy_data,
   //---------------------------
   output wire testled,
   //---------------------------
   output wire sd_cs_n,
   output wire sd_clk,
   output wire sd_mosi,
   input wire sd_miso,
   //---------------------------
   output wire flash_cs_n,
   output wire flash_clk,
   output wire flash_mosi,
   input wire flash_miso,
   //---------------------------
//   output wire sdram_clk,          // seales validas en flanco de suida de CK
//   output wire sdram_cke,
//   output wire sdram_dqmh_n,      // mascara para byte alto o bajo
//   output wire sdram_dqml_n,      // durante operaciones de escritura
//   output wire [12:0] sdram_addr, // pag.14. row=[12:0], col=[8:0]. A10=1 significa precharge all.
//   output wire [1:0] sdram_ba,    // banco al que se accede
//   output wire sdram_cs_n,
//   output wire sdram_we_n,
//   output wire sdram_ras_n,
//   output wire sdram_cas_n,
//   inout tri [15:0] sdram_dq,
   //---------------------------
   output wire [5:0] r,
   output wire [5:0] g,
   output wire [5:0] b,
   output wire hsync,
   output wire vsync,
   output wire audio_out_left,
   output wire audio_out_right
   );

   wire clk100, clk14, clk7;

   wire mode, vga;

   wire [5:0] r_to_vga, g_to_vga, b_to_vga;
   wire hsync_to_vga, vsync_to_vga, csync_to_vga;
	wire hsync_aux;
   
   wire memtest_init_fast, memtest_init_slow, memtest_progress, memtest_result;
   wire sdtest_init, sdtest_progress, sdtest_result;
   wire flashtest_init, flashtest_progress, flashtest_result;
   wire sdramtest_init, sdramtest_progress, sdramtest_result;
   wire hidetextwindow;
   
   wire [7:0] earcode;
   wire [2:0] mousebutton;  // M R L
   wire mousetest_init;
   
   wire [15:0] flash_vendor_id;
   
   wire master_reset;
   wire clocks_ready;

   wire joy1up, joy1down, joy1left, joy1right, joy1fire1, joy1fire2, joy1fire3, joy1start;
   wire joy2up, joy2down, joy2left, joy2right, joy2fire1, joy2fire2, joy2fire3, joy2start;

	wire [11:0] joy1_s; // -- MXYZ SACB RLDU  Negative Logic
	wire [11:0] joy2_s;  // -- MXYZ SACB RLDU  Negative Logic
   
   wire [56:0] dna;
   get_dna dna_fpga (
      .clk(clk7),
      .dna(dna)
   );
   
   relojes los_relojes (
    .CLK_IN1(clk50mhz),
    .CLK_OUT1(clk100),
    .CLK_OUT2(clk14),
    .CLK_OUT3(clk7),
    .locked(clocks_ready)
    );

   switch_mode teclas (
      .clk(clk7),
      .clkps2(clkps2),
      .dataps2(dataps2),
      .mode(mode),
      .vga(vga),
      .memtestf(memtest_init_fast),
      .memtests(memtest_init_slow),
      .sdtest(sdtest_init),
      .flashtest(flashtest_init),
      .mousetest(mousetest_init),
      .sdramtests(sdramtest_init),
      .hidetextwindow(hidetextwindow),
      .master_reset(master_reset)
   );

//   joydecoder los_joysticks (
//      .clk(clk7),
//      .joy_data(joy_data),
//      .joy_clk(joy_clk),
//      .joy_load_n(joy_load_n),
//      .joy1up(joy1up),
//      .joy1down(joy1down),
//      .joy1left(joy1left),
//      .joy1right(joy1right),
//      .joy1fire1(joy1fire1),
//      .joy1fire2(joy1fire2),
//      .joy1fire3(joy1fire3),
//      .joy1start(joy1start),
//      .joy2up(joy2up),
//      .joy2down(joy2down),
//      .joy2left(joy2left),
//      .joy2right(joy2right),
//      .joy2fire1(joy2fire1),
//      .joy2fire2(joy2fire2),
//      .joy2fire3(joy2fire3),
//      .joy2start(joy2start)
//   );

	//Clock for joystick
	reg [3:0] div_clk = 4'b0;
	reg clk_joy; //, clk50 = 1'b0;
	always @(posedge clk100) 
	begin
		if (div_clk==4'd5) begin // 100Mhz / 6 = 16,6Mhz
			clk_joy <= 1'b1;
			div_clk <= 1'b0;
   	end
		else begin
			div_clk <= div_clk + 4'd1;
			clk_joy <= 1'b0;
		end
		//clk50 <= ~clk50;
	end
	
	joydecoder joystick (
		.clk(clk_joy),
		//.clksys(clk50),
		.joy_data(joy_data),
		.joy_clk(joy_clk),
		.joy_load_n(joy_load_n),
		.reset(~clocks_ready),
		.hsync_n_s(hsync_aux),

		.joy1_o(joy1_s), // -- MXYZ SACB RLDU  Negative Logic
		.joy2_o(joy2_s)  // -- MXYZ SACB RLDU  Negative Logic
	);

   ramtest16b test_de_ram (
      .clk(clk100),
      .hold(~clocks_ready),
      .rstf(memtest_init_fast),
      .rsts(memtest_init_slow),
      .sram_a(sram_addr),
      .sram_d(sram_data),
      .sram_we_n(sram_we_n),
      .sram_ub_n(sram_ub_n),
		.sram_lb_n(sram_lb_n),
      .test_in_progress(memtest_progress),
      .test_result(memtest_result)
   );

   sdtest test_slot_sd (
      .clk(clk7),
      .rst(sdtest_init),
      .spi_clk(sd_clk),
      .spi_di(sd_mosi),
      .spi_do(sd_miso),
      .spi_cs(sd_cs_n),
      .test_in_progress(sdtest_progress),
      .test_result(sdtest_result)
   );

   flashtest test_spi_flash (
      .clk(clk7),
      .rst(flashtest_init),
      .spi_clk(flash_clk),
      .spi_di(flash_mosi),
      .spi_do(flash_miso),
      .spi_cs(flash_cs_n),
      .test_in_progress(flashtest_progress),
      .test_result(flashtest_result),
      .vendor_code_hex(flash_vendor_id)
   );

   eartest test_ear (
      .clk(clk7),
      .ear(~ear),
      .vs(vsync_to_vga),
      .code(earcode)
   );

   mousetest test_raton (
      .clk(clk7),
      .rst(mousetest_init),
      .ps2clk(mouseclk),
      .ps2data(mousedata),
      .botones(mousebutton)
   );

//  sdramtest test_sdram (
//    .clk(1'b0/*clk100*/),
//    .rst(sdramtest_init),
//    .pll_locked(clocks_ready),
//    .test_in_progress(sdramtest_progress),
//    .test_result(sdramtest_result),
//    .sdram_clk(sdram_clk),          // seales validas en flanco de suida de CK
//    .sdram_cke(sdram_cke),
//    .sdram_dqmh_n(sdram_dqmh_n),      // mascara para byte alto o bajo
//    .sdram_dqml_n(sdram_dqml_n),      // durante operaciones de escritura
//    .sdram_addr(sdram_addr), // pag.14. row=[12:0], col=[8:0]. A10=1 significa precharge all.
//    .sdram_ba(sdram_ba),    // banco al que se accede
//    .sdram_cs_n(sdram_cs_n),
//    .sdram_we_n(sdram_we_n),
//    .sdram_ras_n(sdram_ras_n),
//    .sdram_cas_n(sdram_cas_n),
//    .sdram_dq(sdram_dq)    
//   );

   updater mensajes (
     .clk(clk7),
     .mode(mode),
     .vga(vga),
     
     .dna(dna),
     .memtest_progress(memtest_progress),
     .memtest_result(memtest_result),
     .joystick1({joy1up,joy1down,joy1left,joy1right,joy1fire1,joy1fire2,joy1fire3,joy1start}),
     .joystick2({joy2up,joy2down,joy2left,joy2right,joy2fire1,joy2fire2,joy2fire3,joy2start}),
	  .joy1md(~joy1_s), // -- MXYZ SACB RLDU  Negative Logic
	  .joy2md(~joy2_s), // -- MXYZ SACB RLDU  Negative Logic
     .earcode(earcode),
     .sdtest_progress(sdtest_progress),
     .sdtest_result(sdtest_result),
     .flashtest_progress(flashtest_progress),
     .flashtest_result(flashtest_result),
     .flash_vendor_id(flash_vendor_id),
     .sdramtest_progress(sdramtest_progress),
     //.sdramtest_result(sdramtest_result),
     .mousebutton(mousebutton),
     .hidetextwindow(hidetextwindow),
     
     .r(r_to_vga),
     .g(g_to_vga),
     .b(b_to_vga),
     .hsync(hsync_to_vga),
     .vsync(vsync_to_vga),
     .csync(csync_to_vga)
     );

   vga_scandoubler #(.CLKVIDEO(7000)) modo_vga (
      .clkvideo(clk7),
      .clkvga(clk14),
      .enable_scandoubling(vga),
      .disable_scaneffect(1'b0),
      .ri(r_to_vga),
      .gi(g_to_vga),
      .bi(b_to_vga),
      .hsync_ext_n(hsync_to_vga),
      .vsync_ext_n(vsync_to_vga),
      .csync_ext_n(csync_to_vga),
      .ro(r),
      .go(g),
      .bo(b),
      .hsync(hsync_aux),
      .vsync(vsync)
   );
	assign hsync = hsync_aux;
   
   audio_test audio (
      .clk(clk14),
      .left(audio_out_left),
      .right(audio_out_right),
      .led(testled)
   );

   multiboot vuelta_al_spectrum (
    .clk_icap(clk7),
    .REBOOT(master_reset)
    );
endmodule
