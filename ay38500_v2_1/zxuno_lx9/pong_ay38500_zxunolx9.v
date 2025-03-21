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

module pong_ay38500_zxuno_lx9 ( 
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

	// -> pruebas de reseteo con varios tiempos, funciona con reloj = clk25, valor q inicial = 6'b100000
	// Tras la actualización del chip AY valen otros tiempos
	wire reboot_ff;
	always @(posedge clk25) begin
	if (reset || key_reset || ~host_reset_n) begin
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
	wire clk50;  // 50 MHz
	wire clk25;  // 25 Mhz
	wire clk16;  // 16.66 Mhz
	wire clk_sys; // 8Mhz
	wire clock2M; // 2MHz
	wire clk4M;   // 4MHz

	PLL_clock relojes (
		  .CLK_IN1(CLOCK_50),
		  .CLK_OUT1(clk50),   // for CtrlModule 50 MHz
		  .CLK_OUT2(clk_sys)   // Clock 8Mhz
	 );

	// clock 2Mhz // 4Mhz // 25Mhz //16,66Mhz
	reg ce_2m, ce_4m, ce_25m, ce_16m;
	reg [1:0] div8;
	reg [1:0] div3 = 2'b0;
	reg div50 = 1'b0;

	always @(posedge clk50) begin
		div50 <= ~div50;
		ce_25m <= div50;
		if (div3 == 2'b10) begin
			div3 <= 2'b0;
			ce_16m <= 1'b1;
		end
		else begin
			div3 <= div3 +1'b1;
			ce_16m <= 1'b0;
		end
	end

	assign clk25 = ce_25m;
	assign clk16 = ce_16m;
	
	always @(posedge clk_sys) begin
		div8 <= div8 + 1'd1;
		ce_4m <= div8[0];
		ce_2m <= div8[1];
	end
	
	assign clk4M = ce_4m;
	assign clock2M = ce_2m;


//// divide 50Mhz clock by 12,5 -> tick 4Mhz
//	reg [4:0] clockcount = 0;	
//	reg [4:0] clockcount2 = 0;
//	reg slow_clock = 0;
//	wire tick4M = (clockcount < 12) ? 1'b1: 1'b0;
//	always @(posedge clk50) begin
//		if (clockcount == 24) begin
//			clockcount <= 0;
//		end else begin
//			clockcount <= clockcount + 1;
//		end
//	end
//
//	assign clock2M = tick4M;

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
	//assign ballAngle = (dswitch[1]) ? 1'bZ : 1'b0;
	// Ball speed pin (NC by default = slow, 0 = fast)
	//assign ballSpeed = (dswitch[2]) ? 1'bZ : 1'b0;
	// Ball sizes pin (NC by default = large, 0 = short)
	assign batSize = (dswitch[3]) ? 1'bZ : 1'b0;

	//Random speed and angle generator
	random_speed_angle random(
	 .i_score(sfOut),
    .i_sound(sound),
    .i_ball(ballOut),
    .i_manualsp(dswitch[2]),
    .i_randomsp(dswitch[13]),
    .i_manualan(dswitch[1]),
    .i_randoman(dswitch[14]),
    .o_angle(ballAngle),
    .o_speed(ballSpeed)
    );
	
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
//	wire lpIN_joystick;
	wire rpIN;
//	wire rpIN_joystick;
	
//	assign lpIN = (joy2_type)? lpIN_encoder : lpIN_joystick;
//	assign rpIN = (joy1_type)? rpIN_encoder : rpIN_joystick;

	paddle_control paddle_control(
    .clock(clock2M),
	 .clk16(clk_sys),
	 .hsync(hs_orig),
	 .reset(reset),
	 .resetChip(resetChip),
	 .i_lpDWN(lpDWN),
    .i_rpDWN(rpDWN),
	 .i_joy1(joy1), 
	 .i_joy2(joy2), 
	 .i_key_joy1(key_joy1),
	 .i_key_joy2(key_joy2),
	 .i_enc1(joy2_aux[1:0] & {joy1_type,joy1_type}),
	 .i_enc2(joy2_aux[3:2] & {joy2_type,joy2_type}),
	 .i_four_players(dswitch[6]),
//    .o_lpctrl(lpIN_joystick),
//    .o_rpctrl(rpIN_joystick)
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
	assign videoc = { ballOut , sfOut , lpOut , rpOut };
	// Salida sonido
	assign AUDIO_L = sound && dswitch[4];
	assign AUDIO_R = sound && dswitch[4];
	
	//Pin control de rifle
	wire HitIn;
	//Pin disparo en modo rifle (no implementado)
	assign HitIn = 1'b0;
	//assign HitIn = (!rifle1 || !rifle1) ? 1'b0 : sound; //only ay-3-8500 chip

   //Implementación chip ay-3-8500-1
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
	.syncH(hs_orig),
	.syncV(vs_orig),
	.superclock(clk50)
	);

	// Llamamos a la instancia de los Joysticks
   //wire [11:0] joy1; //lx25
   //wire [11:0] joy2; //lx25
   //wire [11:0] joy1; //lx25
   //wire [11:0] joy2_aux; //lx25
   wire [7:0] joy1; //lx16
   wire [7:0] joy1_aux; //lx16
	wire [7:0] joy2; //lx16
	wire [7:0] joy2_aux; //lx16
	wire joy1_type; //0 - joystick , 1 - paddle encoder
	wire joy2_type; //0 - joystick , 1 - paddle encoder
	assign joy1_type = dswitch[11];
	assign joy2_type = dswitch[12];
	
//  joydecoder joysticks (
//      //.clk(clk16), //lx25
//		.clk(clk25), //lx16
//      .joy_data(JOY_DATA),
//      .joy_clk(JOY_CLK),
//      .joy_load_n(JOY_LOAD),
//		.clock_locked(~reset),  //lx16 0 = bloqueado
//      //.reset(reset),        //lx25
//		//.hsync_n_s(hsyncaux), //lx25
//      //.joy1_o(joy1),
//      //.joy2_o(joy2)
//      .joy1_o(joy1_aux),
//      .joy2_o(joy2_aux)
//   );
////	output wire [11:0] joy1_o, // -- MXYZ SACB RLDU  Negative Logic
////	output wire [11:0] joy2_o  // -- MXYZ SACB RLDU  Negative Logic
	
	//Entrada de joystick para control de zpuflex
	assign joy2zpuflex = { (!joy1[7] || !joy2[7]), (!joy1[6] || !joy2[6]), (!joy1[5] || !joy2[5]),
								  (!joy1[0] || !joy2[0]),(!joy1[1] || !joy2[1]),
								  (!joy1[2] || !joy2[2]),(!joy1[3] || !joy2[3]),(!joy1[4] || !joy2[4])};
	assign joy1 = joy1_aux;
	//assign joy2 = (joy1_type || joy2_type)? {joy2_aux[11:4], 4'b1111} : joy2_aux; //lx25
	assign joy2 = (joy1_type || joy2_type)? {joy2_aux[7:4], 4'b1111} : joy2_aux; //lx16

	//Salidas: 0 con botón pulsado
	// up    = joyN[0];
	// down  = joyN[1];
	// left  = joyN[2];
	// right = joyN[3];
	// fire1 = joyN[4];
	// fire2 = joyN[5];
	// fire3 = joyN[6];
	// start = joyN[7];
	assign joy1_aux[0] = JOY_U;
	assign joy1_aux[1] = JOY_D;
	assign joy1_aux[2] = JOY_L;
	assign joy1_aux[3] = JOY_R;
	assign joy1_aux[4] = JOY_A;
	assign joy1_aux[5] = 1'b1;
	assign joy1_aux[6] = 1'b1;
	assign joy1_aux[7] = 1'b1;

	assign joy2_aux[0] = JOY_U;
	assign joy2_aux[1] = JOY_D;
	assign joy2_aux[2] = JOY_L;
	assign joy2_aux[3] = JOY_R;
	assign joy2_aux[4] = JOY_A;
	assign joy2_aux[5] = 1'b1;
	assign joy2_aux[6] = 1'b1;
	assign joy2_aux[7] = 1'b1;

	// Control de teclado
   wire [9:0] key_joy1;
   wire [9:0] key_joy2;
	wire [6:0] key_gamesel;
	wire key_start;
	wire key_reset;
	
	keyboard keyboard(
		 .clk(clk25),
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
		 .key_modovideo(aux_modvid)
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
	wire [2:0] osd_bkgr;
	
	//Switches configuración
	wire [15:0] dswitch;
		//dipswitches(0) => Manual Serve
		//dipswitches(1) => Ball Angle
		//dipswitches(2) => Ball Speed
		//dipswitches(3) => Paddle Size
		//dipswitches(4) => Sound
		//dipswitches(5) => Double OSD window
		//dipswitches(6) => Four players
		//dipswitches[10:7] => Colour Mode
		//dipswitches(11) => player 1 joystick type
		//dipswitches(12) => player 2 joystick type
				//TODO
				//dipswitches(12:11) => Joystick type: 0 - Joystick, 1 - 2 encoder in J2, 
				//													2 - 4 encoder in J1&2, 
				//													3 - Driving paddle Atari 2600 J1&2 ?? NO posible->Muy poco recorrido
		//dipswitches(13) => Random speed
		//dipswitches(14) => Random angle
		//dipswitches(15) => Not used
	wire [15:0] size;
	wire [15:0] joykeys;
	wire [7:0]  joy2zpuflex;

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
		.osd_bkgr(osd_bkgr),

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
		//-- Joystick imput
		.joy_pins(joy2zpuflex),
		
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

	// video, csync, hs, vs output from the chip
	wire video;
	wire csync;
	wire hs_orig;
	wire vs_orig;
	wire hsyncaux;


	// video and csync output from doublescan
	wire [3:0] r_out_sd, g_out_sd, b_out_sd;
	wire vs_sd;
	wire hs_sd;

//	//Scandoubler
	scandoubler scandoubler(
				.clk_x2           (clk4M        ),
				.clk              (clock2M        ),
				.scanlines        (2'b00        ),

				.r_in             (colorOut[11:8]),
				.g_in             (colorOut[ 7:4]),
				.b_in             (colorOut[ 3:0]),
				.hs_in            (!hs_orig     ),
				.vs_in            (!vs_orig     ),

				.r_out            (r_out_sd     ),
				.g_out            (g_out_sd     ),
				.b_out            (b_out_sd     ),
				.hs_out           (hs_sd        ),
				.vs_out           (vs_sd        )
	);

	// señal de video i/o con sus 4 componentes de ay-3-8500
	wire [3:0] videoc;

	//video output colored from colorconvert
	wire [12:0] colorOut;
	
	//Señal de Hsync ampliada N ciclos para mantener el color 0 durante el sincronismo
	reg hso_1,hso_2,hso_3,hso_4,hso_5, hso_6;
	wire hso_amp;
	always @(posedge clock2M) begin
	  hso_1 <= hs_orig;
	  hso_2 <= hso_1;
	  hso_3 <= hso_2;
	  hso_4 <= hso_3;
	  hso_5 <= hso_4;
	  hso_6 <= hso_5;
	end;
	assign hso_amp = hs_orig || vs_orig || hso_1 || hso_2 || hso_3 || hso_4 || hso_5 || hso_6;
	
	
	colorconvert colorconvert (
    //.hsync(hs_orig),
	 //.hsync((hs_orig ^ vs_orig)),
	 .hsync(hso_amp),
	 .gamesel( {tennis,soccer,squash,practice,rifle1,rifle2} ),
	 .vincomp(videoc),
	 .vmode(dswitch[10:7]),
    .voutrgb(colorOut)
    );

	// VGA osd overlay signal
	wire       vga_hsync_i; // CSYNC en caso de VIDEO COMPUESTO
	wire       vga_vsync_i; // en modo VIDEO, no se usa
	wire [7:0]  vga_red_i, vga_red_o; 
	wire [7:0]  vga_green_i, vga_green_o; 
	wire [7:0]  vga_blue_i, vga_blue_o;


	//Video input for OSD overlay module
   assign vga_red_i   = modo_video ? {colorOut[11:8], colorOut[11:8]} : {r_out_sd[3:0], r_out_sd[3:0]} ;
   assign vga_green_i = modo_video ? {colorOut[ 7:4], colorOut[ 7:4]} : {g_out_sd[3:0], g_out_sd[3:0]} ;
   assign vga_blue_i  = modo_video ? {colorOut[ 3:0], colorOut[ 3:0]} : {b_out_sd[3:0], b_out_sd[3:0]};
	
	//Sincronismo para entrada a ZPUFlex
   assign vga_hsync_i = modo_video ? !hs_orig : hs_sd; // RGB/VGA
   assign vga_vsync_i = modo_video ? !vs_orig : vs_sd; // RGB/VGA

	// OSD Overlay for mixing ZPUFlex OSD menu and - 
	OSD_Overlay overlay (
		.clk(clk50),
		.red_in(vga_red_i),
		.green_in(vga_green_i),
		.blue_in(vga_blue_i),
		.window_in(1'b1),
		.osd_window_in(osd_window),
		.osd_pixel_in(osd_pixel),
		.osd_bkgr_in(osd_bkgr),
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

	// Salida pines VGA con señal RGB o VGA según modo_video
	//assign VGA_HS = modo_video ? !(!hs_orig ^ vs_orig) : vga_hsync_i; //bueno
	//assign hsyncaux = modo_video ? !(!hs_orig ^ vs_orig) : vga_hsync_i; //bueno lx25 con vga_vs = 1'bZ
	assign hsyncaux = modo_video ? !(hs_orig ^ vs_orig) : vga_hsync_i; //bueno lx16 con vga_vs = 1'b1
	assign VGA_HS = hsyncaux;
	assign VGA_VS = modo_video ? 1'b1  : vga_vsync_i;
   assign VGA_R  = vga_red_o  [7:5];
   assign VGA_G  = vga_green_o[7:5];
   assign VGA_B  = vga_blue_o [7:5];

	//Cambio modo video
	wire aux_modvid;
	wire key_modvid = joykeys[4] || aux_modvid;
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
		.clk_icap(clk25    ),
		.REBOOT  (MRESET   )
	);


endmodule


