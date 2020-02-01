//
// pong_ay38500_zxuno.v
//
// ay38500 toplevel for the ZXUNO board
//
// Copyright (c) 2019 Antonio Silva <avlixa@gmail.com>
//
// This source file is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This source file is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//
// Adaptation to ZXDOS board of the ay38500 implementation by Cole Johnson
// https://gitlab.com/TheProgrammerIncarnate/chip-processing/tree/master/GIgames/ay38500
//

module pong_ay38500_zxuno ( 
  input wire    CLOCK_50, // 50 MHz zxuno

  output wire   LED, // LED actividad de carga
  //output wire   LED3, // LED actividad de carga
  
  // VGA
  output wire       VGA_HS, // CSYNC en caso de VIDEO COMPUESTO
  output wire       VGA_VS, // en modo VIDEO, no se usa
  output wire [2:0]  VGA_R, 
  output wire [2:0]  VGA_G, 
  output wire [2:0]  VGA_B,

//  // video compuesto  
//  output wire stdn,
//  output wire stdnb,
  output wire PAL,
  output wire NTSC,

  output wire           AUDIO_L, // audio output left
  output wire           AUDIO_R, // audio DAC output right
  
  // PS2 keyboard
  inout wire ps2_data,
  inout wire ps2_clk,
    
	// SRAM pins (just to get the current video output setting) ////////////
	output wire [20:0] sram_addr,
	input wire [7:0] sram_data,
	output wire sram_we_n,

	//SPI
   output wire   SPI_CLK,
   output wire   SPI_MOSI,
   input wire    SPI_MISO,
   output wire   SPI_CS,

   // Joystick
   input wire JOY_U,
   input wire JOY_D,
   input wire JOY_L,
	input wire JOY_R,
	input wire JOY_A

);

	assign LED = 1'b0; 
	//assign LED3 = 1'b1; 

	// seleccionar modo salida VIDEO
	reg modo_video = 1'b0; // 0 para VGA, 1 para VIDEO

	// Initial video output settings
	reg [7:0] scandblr_reg; // same layout as in the Spectrum core, SCANDBLR_CTRL

	// Power-on RESET (8 clocks)
	reg [7:0] poweron_reset = 8'h00;
	assign sram_addr = 21'h008FD5;  // magic place where the scandoubler settings have been stored
	assign sram_we_n = 1'b1;
	always @(posedge clk50) begin
	  if (poweron_reset == 8'd0)
		  scandblr_reg <= sram_data; //avlixa
		  //scandblr_reg <= 8'd1;    //avlixa
	  
		poweron_reset <= {poweron_reset[6:0],1'b1};
	end

	// assign LED1 = 1'b0;

	// soft reset
	reg [7:0] q = 8'b0;

//// -> este tiempo de reinicio es el de la versión beta
// reg reboot_ff = 1'b0;
//always @(posedge clkvga) begin
// 	q[0] <= (reset || key_reset || ~host_reset_n); 
//	q[1] <= q[0]; q[2] <= q[1]; q[3] <= q[2]; q[4] <= q[3];
//	reboot_ff <=  // ( q[4] && ( q[3]) && ( q[2]) && ( q[1]) )
//					  //  ( q[4] && ( q[3]) && ( q[2]) && (!q[1]) )
//					    ( q[4] && ( q[3]) && (!q[2]) && (!q[1]) )
//					||	( q[4] && (!q[3]) && (!q[2]) && (!q[1]) );
// end

	// -> pruebas con otros tiempos, funciona con reloj = clkvga, valor q inicial = 6'b100000
	wire reboot_ff;
	always @(posedge clkvga) begin
	if (reset || key_reset || ~host_reset_n) begin
		// Han dejado de funcionar
		//q <= 6'b100000; -> he realizado limpieza de código y ya no funciona
		//q <= 6'b001000; -> este funciona pero las paletas son diferentes
		//q <= 6'd38; -> este funciona pero "vibra" un poco
		//q <= 6'd39; -> este funciona casi bien
		//q <= 6'd37; -> este funciona casi bien
		// Funcionan con la nueva versión de q 7 bits
		//q <= 7'd20; -> este funciona pero "vibra" un poco -> ya no
		//q <= 8'b11111001; -> contador doble
		//q <= 8'b11111011; -> no
		//q <= 8'b11110101; -> no
		//q <= 8'b11010101; -no
		//q <= 8'b01010101; no
		q <= 8'b10000000; 
	end else begin 
		if ( reboot_ff )
			q <= q + 1;
		else 
			q <= q;
	end
	end
	assign reboot_ff = |q;

	//Reset wires
	wire resetChip = reboot_ff;
	wire reset 		= ~poweron_reset[7];

	//Clock wires
	wire clkvga; // Twice the original pixel clock
	wire clk50;  // 50 MHz
	wire clock2M; // 2MHz

	cuatro_relojes system_clocks_pll (
		  .CLK_IN1(CLOCK_50),
	//	  .CLK_OUT1(clkram),  // for driving RAM and ROM = 26 MHz
		  .CLK_OUT1(clk50),   // for CtrlModule 50 MHz
		  .CLK_OUT2(clkvga)  // VGA clock: 25Mhz
	//	  .CLK_OUT3(clk65_bis)    // video clock = 6.5 MHz
	//	  .CLK_OUT4(clkcpu)   // CPU clock = 3.25 MHz
	 );

//	reg clk65 = 0;
//	wire clk_next = !clk65;
//	always @(posedge clkvga) begin
//		clk65 <= clk_next;
//	end;
	
// divide 50Mhz clock by 24 aprox -> clock 2Mhz (2,083MHz)	
//	reg [4:0] clockdivider = 0;
//	reg slow_clock = 0;
//	always @(posedge clk50) begin
//		//if (clockdivider == 5'd11) begin
//		if (clockdivider == 5'd11) begin
//			clockdivider <= 0;
//			slow_clock <= !slow_clock;
//		end else begin
//			clockdivider <= clockdivider + 1;
//			slow_clock <= slow_clock;
//		end
//	end
//	assign clock2M = slow_clock;

// divide 50Mhz clock by 12,5 -> tick 4Mhz
	reg [4:0] clockcount = 0;	
	reg [4:0] clockcount2 = 0;
	reg slow_clock = 0;
	wire tick4M = (clockcount < 12) ? 1'b1: 1'b0;
	always @(posedge clk50) begin
		if (clockcount == 24) begin
			clockcount <= 0;
		end else begin
			clockcount <= clockcount + 1;
		end
	end

	assign clock2M = tick4M;

	//Pines configuración juego
	wire ballSpeed;
	wire manServe;
	wire batSize;
	wire ballAngle;
	
	//asignaciones configuración juego
	//dipswitches(0) => Manual Serve
	//dipswitches(1) => Ball Angle
	//dipswitches(2) => Ball Speed
	//dipswitches(3) => Paddle Size
	//Servicio manual con joystick fire1 (joyN[] = 1 -> no pulsado)
	assign manServe = (dswitch[0] && joy1[4] && joy2[4] && !key_joy1[4] && !key_joy2[4]) ? 1'bZ : 1'b0 ;
	// Ball angles pin (NC by default)
	assign ballAngle = (dswitch[1]) ? 1'bZ : 1'b0;
	// Ball speed pin (NC by default = slow, 0 = fast)
	assign ballSpeed = (dswitch[2]) ? 1'bZ : 1'b0;
	// Ball sizes pin (NC by default = large, 0 = short)
	assign batSize = (dswitch[3]) ? 1'bZ : 1'b0;

	
	//Entradas modo juego
	wire practice;
	wire squash;
	wire soccer;
	wire tennis;
	wire rifle1;
	wire rifle2;
	//Pines salida modo juego??
	wire rifle1DWN;
	wire tennisDWN;

	//Selección modo juego
	modo_juego modo_juego(
		 .clk(clk50), 
		 .reset(reset),
		 .i_gamesel(key_gamesel),
		 .o_tennis(tennis),
		 .o_soccer(soccer),
		 .o_squash(squash),
		 .o_practice(practice),
		 .o_rifle1(rifle1),
		 .o_rifle2(rifle2)
		 );

	//Pines control de juego
	wire lpDWN;
	wire rpDWN;
	wire lpIN;
	wire rpIN;

	paddle_control #( .PTO(64) ) paddle_control (
    .clock(clock2M),
	 .clk25(clkvga),
	 .reset(reset),
	 .resetChip(resetChip),
	 .i_lpDWN(lpDWN),
    .i_rpDWN(rpDWN),
	 .i_joy1(joy1), 
	 .i_joy2(joy2), 
	 .i_key_joy1(key_joy1),
	 .i_key_joy2(key_joy2),
	 .i_four_players(dswitch[6]),
    .o_lpctrl(lpIN),
    .o_rpctrl(rpIN)
    );

	//Pines salida
	wire sound;		//sonido
	wire ballOut;	//bola
	wire sfOut;		//Campo
	wire lpOut;		//paleta izda.
	wire rpOut;		//paleta dcha.

	// Salida vídeo
	assign video = ballOut | sfOut | lpOut | rpOut;
	// Salida sonido
	assign AUDIO_L = sound && dswitch[4];
	assign AUDIO_R = sound && dswitch[4];
	
	//Pin control de rifle
	wire HitIn;
	//Pin disparo en modo rifle (no implementado)
	assign HitIn = 1'b0;
	//assign HitIn = (!rifle1 || !rifle1) ? 1'b0 : sound; //only ay-3-8500 chip

   //Implementación chip ay-3-8500-1
	//	ay38500NTSC chip_ay38500 (     //Versión 1
	//		rpOut,
	//		lpOut,
	//		ballOut,
	//		manServe,
	//		rpDWN,
	//		rpIN,
	//		ballAngle,
	//		lpDWN,
	//		lpIN,
	//		batSize, 
	//		ballSpeed,
	//		csync,
	//		sound,
	//		clock2M,
	//		HitIn,
	//		rifle1DWN,
	//		rifle1,
	//		rifle2,
	//		1'b1,
	//		tennisDWN,
	//		tennis,
	//		sfOut,
	//		soccer,
	//		squash,
	//		practice,
	//		~resetChip);
	ay38500NTSC chip_ay38500 (//Versión 2
	.pinRPout(rpOut),
	.pinLPout(lpOut),
	.pinBallOut(ballOut),
	.pinManualServe(manServe),
	.pinRPin_DWN(rpDWN),
	.pinRPin(rpIN),
	.pinBallAngle(ballAngle),
	.pinLPin_DWN(lpDWN),
	.pinLPin(lpIN),
	.pinBatSize(batSize),
	.pinBallSpeed(ballSpeed),
	.pinSyncOut(csync),
	.pinSound(sound),
	.clk(clock2M),
	.pinHitIn(HitIn),
	.pinRifle1_DWN(rifle1DWN),
	.pinRifle1(rifle1),
	.pinRifle2(rifle2),
	.pinShotIn(1'b1),
	.pinTennis_DWN(tennisDWN),
	.pinTennis(tennis),
	.pinSFout(sfOut),
	.pinSoccer(soccer),
	.pinSquash(squash),
	.pinPractice(practice),
	.reset(~resetChip),
	//.syncH(),
	//.syncV(),
	.superclock(clk50)
	);


	// Llamamos a la instancia de los Joysticks
   wire [7:0] joy1;
   wire [7:0] joy2;

//  joydecoder joysticks (
//      .clk(clkvga),
//      .joy_data(JOY_DATA),
//      .joy_clk(JOY_CLK),
//      .joy_load(JOY_LOAD),
//      .clock_locked(~reset), // 0 = bloqueado
//      .joy1_o(joy1),
//      .joy2_o(joy2)
//   );
	//Salidas: 0 con botón pulsado
	// up    = joyN[0];
	// down  = joyN[1];
	// left  = joyN[2];
	// right = joyN[3];
	// fire1 = joyN[4];
	// fire2 = joyN[5];
	// fire3 = joyN[6];
	// start = joyN[7];
	assign joy1[0] = JOY_U;
	assign joy1[1] = JOY_D;
	assign joy1[2] = JOY_L;
	assign joy1[3] = JOY_R;
	assign joy1[4] = JOY_A;
	assign joy1[5] = 1'b1;
	assign joy1[6] = 1'b1;
	assign joy1[7] = 1'b1;

	assign joy2[0] = JOY_U;
	assign joy2[1] = JOY_D;
	assign joy2[2] = JOY_L;
	assign joy2[3] = JOY_R;
	assign joy2[4] = JOY_A;
	assign joy2[5] = 1'b1;
	assign joy2[6] = 1'b1;
	assign joy2[7] = 1'b1;

	// Control de teclado
   wire [9:0] key_joy1;
   wire [9:0] key_joy2;
	wire [6:0] key_gamesel;
	wire key_start;
	wire key_reset;
	
	keyboard keyboard(
		 .clk(clkvga),
		 .rst(reset),

		 // ps2 interface
		 .ps2_clk(host_ps2_clk),
		 .ps2_data(host_ps2_data),

		 // decodes keys
		 .key_joy1(key_joy1),
		 .key_joy2(key_joy2),
		 .key_gamesel(key_gamesel),
		 .key_start(key_start),
		 .key_reset(key_reset),
		 .key_hardreset(MRESET),
		 .key_modovideo(key_modvid)
	);
	//Salidas: 1 con botón pulsado
	//	  key_joyn[6] // Button 3
	//	  key_joyn[5] // Button 2
	//	  key_joyn[4] // Button 1
	//	  key_joyn[3] // Up
	//	  key_joyn[2] // Down
	//	  key_joyn[1] // Left
	//	  key_joyn[0] // Right

	// Control module
	wire osd_window, osd_pixel;
	
	//Switches configuración
	wire [15:0] dswitch;
		//dipswitches(0) => Manual Serve
		//dipswitches(1) => Ball Angle
		//dipswitches(2) => Ball Speed
		//dipswitches(3) => Paddle Size
		//dipswitches(4) => Not used
		//dipswitches(5) => Double OSD window
		//dipswitches(15 downto 6) => Not used
	wire [15:0] size;
	wire [15:0] joykeys;

	// Host control signals, from the Control module
	wire host_reset_n;
	wire host_divert_sdcard;
	wire host_divert_keyboard;
	wire host_pal;
	wire host_select;
	wire host_start;

	wire [31:0] host_bootdata;
	wire host_bootdata_req;
	wire host_bootdata_ack;
	wire host_ps2_clk;
	wire host_ps2_data;

	// Block keyboard signals from reaching the host when host_divert_keyboard is high.
	assign host_ps2_data = ps2_data || host_divert_keyboard;
	assign host_ps2_clk = ps2_clk || host_divert_keyboard;
	
	// Modulo de control ZPUFlex
	CtrlModule MyCtrlModule (
		.clk(clk50),
		.reset_n(~reset),
		//.reset_n(1'b1),

		//-- Video signals for OSD
		.vga_hsync(vga_hsync_i),
		.vga_vsync(vga_vsync_i),
		.osd_window(osd_window),
		.osd_pixel(osd_pixel),

		//-- PS2 keyboard
		.ps2k_clk_in(ps2_clk),
		.ps2k_dat_in(ps2_data),
		//.ps2k_clk_out(host_ps2_clk),
		//.ps2k_dat_out(host_ps2_data),
		
		//-- SD card signals
		.spi_clk(SPI_CLK),
		.spi_mosi(SPI_MOSI),
		.spi_miso(SPI_MISO),
		.spi_cs(SPI_CS),
		
		//-- DIP switches

		.dipswitches(dswitch),
		
		//--ROM size
		.size(size),
		
		//-- JOY Keystrokes
		.joykeys(joykeys),
		
		//-- Control signals
		.host_divert_keyboard(host_divert_keyboard),
		.host_divert_sdcard(host_divert_sdcard),
		.host_reset_n(host_reset_n),
		.host_start(host_start),
      .host_select(host_select),
		
		//-- Boot data upload signals
		.host_bootdata(host_bootdata),
		.host_bootdata_req(host_bootdata_req),
		.host_bootdata_ack(host_bootdata_ack)
	);

	// VGA osd overlay signal
	wire       vga_hsync_i; // CSYNC en caso de VIDEO COMPUESTO
	wire       vga_vsync_i; // en modo VIDEO, no se usa
	wire [7:0]  vga_red_i, vga_red_o; 
	wire [7:0]  vga_green_i, vga_green_o; 
	wire [7:0]  vga_blue_i, vga_blue_o;
	
	//Video input for OSD overlay module
//	assign vga_red_i = {8{vb}};
//	assign vga_green_i = {8{vb1}};
//	assign vga_blue_i = {8{vb2}};
	assign vga_red_i = { voutrgb[11:8], {4{voutrgb[8]}} };
	assign vga_green_i = { voutrgb[7:4], {4{voutrgb[4]}} };
	assign vga_blue_i = { voutrgb[3:0], {4{voutrgb[0]}} } ;

	assign vga_hsync_i = modo_video ? hs_orig :  //RGB
												 hs_sd;     //VGA
	assign vga_vsync_i = modo_video ? vs_orig :  //RGB
												 vs_sd;     //VGA

	// video, csync, hs, vs output from the chip
	wire video;
	wire csync;
	wire hs_orig;
	wire vs_orig;
	
	// señal de video i/o con sus 4 componentes de ay-3-8500
	wire [3:0] videoc;
	wire [3:0] videoc_sd;

	// video and csync output from doublescan
	wire video_sd;
	wire vs_sd;
	wire hs_sd;

	wire vb, vb1, vb2;

//	//Scandoubler
//	scandoubler scandoubler (
//	  // system interface
//	  .clkvga(clkvga),
//	  .clkvideo(clock2M),
//	  .ce_2pix(1'd1),
//
//	  .scanlines(scandblr_reg[1]),
//				 
//	  // video input
//	  .csync(csync),
//	  .v_in(video),
//	  //.hs_in(hs_sd),
//	  //.vs_in(vs_sd),  
//	  
//	  // output interface
//	  .v_out(video_sd),
//	  .hs_out(hs_sd),
//	  .vs_out(vs_sd)
//	);
	scandoubler_color scandoubler (
	  // system interface
	  .clkvga(clkvga),
	  .clkvideo(clock2M),
	  .ce_2pix(1'd1),

	  .scanlines(scandblr_reg[1]),
				 
	  // video input
	  .csync(csync),
	  .v_in(videoc),
	  //.hs_in(hs_sd),
	  //.vs_in(vs_sd),  
	  
	  // output interface
	  .v_out(videoc_sd),
	  .hs_out(hs_sd),
	  .vs_out(vs_sd)
	);

	//video output colored from colorconvert
	wire [12:0] voutrgb;

	//video and hs input to colorconvert
	wire hs_cc;
	wire [3:0] videoc_cc;
	assign hs_cc = modo_video ? hs_orig:   //RGB
										 hs_sd;     //VGA
	assign videoc_cc = modo_video ? videoc:   //RGB
										     videoc_sd;     //VGA
	
	colorconvert colorconvert (
	 //.clkvideo(clkvga),
	 .hsync(hs_cc),
    .vincomp(videoc_cc),
	 .vmode(dswitch[10:7]),
    .voutrgb(voutrgb)
    );
//	assign voutrgb = { 12{|videoc_sd} };

	assign vb = |videoc_sd;
	assign vb1 = |videoc_sd;
	assign vb2 = |videoc_sd;

	// OSD Overlay for mixing ZPUFlex OSD menu and - 
	OSD_Overlay overlay (
		.clk(clk50),
		.red_in(vga_red_i),
		.green_in(vga_green_i),
		.blue_in(vga_blue_i),
		.window_in(1'b1),
		.osd_window_in(osd_window),
		.osd_pixel_in(osd_pixel),
		.hsync_in(vga_hsync_i),
		.red_out(vga_red_o),
		.green_out(vga_green_o),
		.blue_out(vga_blue_o),
		.window_out( ),
		.scanline_ena(scandblr_reg[1])
	);

	// Salida video ZXUNO, en caso de no usar VGA
	assign PAL = 1'b0;
	assign NTSC = 1'b1;
	
	// Salida pines VGA
		assign VGA_R = vga_red_o[7:5];
		assign VGA_G = vga_green_o[7:5];
		assign VGA_B = vga_blue_o[7:5];
	//	assign VGA_HS = vga_hsync_i;
	//	assign VGA_VS = vga_vsync_i;
//	assign VGA_R = modo_video ? {3{video} } 
//										: vga_red_o[7:5];
//	assign VGA_G = modo_video ? {3{video} } 
//										: vga_green_o[7:5];
//	assign VGA_B = modo_video ? {3{video} } 
//										: vga_blue_o[7:5];
	assign VGA_HS = modo_video ? csync : vga_hsync_i;
	assign VGA_VS = modo_video ? 1'bZ  : vga_vsync_i;

	//Cambio modo video
	wire key_modvid;
	reg key_modvid2;
	always @(posedge clk50) begin
		if (reset)
			modo_video <= ! scandblr_reg[0];
		else begin
			key_modvid2 <= key_modvid;
			modo_video <= (!key_modvid && key_modvid2) ? !modo_video: modo_video;
		end
	end

	//------------multiboot---------------
	wire	MRESET;

	multiboot multiboot_i  (
		.clk_icap(clkvga    ),
		.REBOOT  (MRESET   )
	);


endmodule


