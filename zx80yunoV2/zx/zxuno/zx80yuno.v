//
// zx01_mist.v
//
// zx01/zx81 toplevel for the MiST board
// http://code.google.com/p/mist-board/
//
// Copyright (c) 2014 Till Harbaum <till@harbaum.org>
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
// Version por Jepalza, 2017, para el ZXUNO
//   de sus respectivos creadores (ZX97 by Bodo Wenzel)
//   aadidas versiones VGA y VIDEO COMPUESTO en un solo modulo, seleccionable por comando
//   aadido mando de juegos (joystick) y sonido ay-3-8913, rutinas de Marek Blasko
//   cambiada RAM interna por SRAM externa del ZXUNO
//   implementado soporte SD, pero no funcional
//   en general, es una mezcla de modulos del ZX01, ZXGATE, ZX97, Marek Blasko y Jepalza

//  avlixa - v2 - cambio versión de t80a a la del SAM Coupe de Mist de sorgelig https://github.com/sorgelig/SAMCoupe_MIST

module zx80yuno ( 
  input wire    CLOCK_50, // 50 MHz zxuno

  output wire   LED1, // LED actividad de carga
  
  // VGA
  output wire       VGA_HS, // CSYNC en caso de VIDEO COMPUESTO
  output wire       VGA_VS, // en modo VIDEO, no se usa
  output wire [2:0]  VGA_R, 
  output wire [2:0]  VGA_G, 
  output wire [2:0]  VGA_B,

  // video compuesto  
  output wire stdn,
  output wire stdnb,

  output wire           AUDIO_L, // sigma-delta DAC output left
  output wire           AUDIO_R, // sigma-delta DAC output right
  
  // jepalza, para el ZXUNO
  inout wire ps2_data,
  inout wire ps2_clk,
  input wire EAR,
  input wire playbutton, // para simular el boton play de la cinta
  
  // SPI - SD/MMC
  input wire            SPI_DO,
  output wire            SPI_DI,
  output wire            SPI_SCK,
//  input wire            SPI_SS2,    // fpga
//  input wire            SPI_SS3,    // OSD
//  input wire            SPI_SS4,    // "sniff" mode
  output wire            CONF_DATA0,  // SPI_SS for user_io
  
// SRAM pins (just to get the current video output setting) ////////////
	 output wire [20:0] sram_addr,
	 input wire [7:0] sram_data,
	 output wire sram_we_n,

// Joystick
  output wire JOY_CLK,
  output wire JOY_LOAD,
  input  wire JOY_DATA

);

// seleccionar modo salida VIDEO
reg modo_video = 1'b0; // 0 para VGA, 1 para VIDEO

// video inverso=1 (fondo negro), 0 original (fondo blanco)
//wire v_inv = 1'b0;


 // Initial video output settings
 reg [7:0] scandblr_reg; // same layout as in the Spectrum core, SCANDBLR_CTRL
 
 // Power-on RESET (8 clocks)
 reg [7:0] poweron_reset = 8'h00;
 assign sram_addr = 21'h008FD5;  // magic place where the scandoubler settings have been stored
 assign sram_we_n = 1'b1;
 always @(posedge clk65) begin
	  if (poweron_reset == 8'd0)
		  scandblr_reg <= sram_data; //avlixa
		  //scandblr_reg <= 8'd1;   //avlixa
	  
//	  if (poweron_reset == 8'hFF && reboot_ff)
//			poweron_reset <= 8'h00;
//	  else
			poweron_reset <= {poweron_reset[6:0],1'b1};
 end

// soft reset
 reg [4:0] q = 5'b00000;
 reg reboot_ff = 1'b0;

 always @(posedge clkvga) begin
	q[0] <= resetKey; q[1] <= q[0]; q[2] <= q[1]; q[3] <= q[2]; q[4] <= q[3];
	reboot_ff <= (q[4] && (!q[3]) && (!q[2]) && (!q[1]) );
 end

//wire reset = (poweron_reset != 8'd255); // || (reboot_ff == 1'b1);
wire reset 		= ~host_reset_n || reboot_ff;
wire resetctrl = (poweron_reset != 8'd255);

//// The 13Mhz is required for the scan doubler. The zx01 itself
//// runs at 6.5 MHz which is generated from the 13MHz

wire clk65_bis;  // 6.5MHz main frequency
wire clkvga; // Twice the original pixel clock
wire clk50;  //50 MHz

cuatro_relojes system_clocks_pll (
	  .CLK_IN1(CLOCK_50),
//	  .CLK_OUT1(clkram),  // for driving RAM and ROM = 26 MHz
	  .CLK_OUT1(clk50),   // for CtrlModule 50 MHz
	  .CLK_OUT2(clkvga),  // VGA clock: 2 x video clock = 13Mhz
	  .CLK_OUT3(clk65_bis)    // video clock = 6.5 MHz
//	  .CLK_OUT4(clkcpu)   // CPU clock = 3.25 MHz
 );

reg clk65;
wire clk_next = !clk65;
always @(posedge clkvga) begin
	clk65 <= clk_next;
end;

// jepalza: las seales que vienen del MIST. solo dejo los 16k
wire reset_in = 1'b0; //en mist status[0]; // reset siempre 0, si ponemos "1" no arranca, y sintetiza en "verde"....
wire ntsc = 1'b0;     //en mist status[1]; 
wire mem16k = 1'b1;   //en mist !status[2];   // bit 2 of status register is 0 when 16k is enabled

// salida video ZXUNO, en caso de no usar VGA
assign stdn = 1'b0;
assign stdnb = 1'b1;

////// jepalza, salida VGA sencilla, sin complicaciones (o VIDEO COMPUESTO a eleccion)
//reg vs = 0;
//wire hs;
//
//assign hs = (sd_col >= 2*192);

//assign VGA_R = modo_video ? { video, video, video } : { vb, vb, vb };
//assign VGA_G = modo_video ? { video, video, video } : { vb, vb, vb };
//assign VGA_B = modo_video ? { video, video, video } : { vb, vb, vb };
//assign VGA_HS = modo_video ? csync : ~hs;
//assign VGA_VS = modo_video ? 1'bZ  : ~vs;

//assign VGA_R = modo_video ? { video, video, video }  : { vbosd[2], vbosd[2], vbosd[2] };
//assign VGA_G = modo_video ? { video, video, video }  : { vbosd[1], vbosd[1], vbosd[1] };
//assign VGA_B = modo_video ? { video, video, video }  : { vbosd[0], vbosd[0], vbosd[0] };
//assign VGA_HS = modo_video ? csync : ~hs;
//assign VGA_VS = modo_video ? 1'bZ  : ~vs;
//assign vbosd = (osdrgb == 3'd0) ? {vb, vb, vb} : osdrgb;

// VGA osd overlay signal
wire       vga_hsync_i; // CSYNC en caso de VIDEO COMPUESTO
wire       vga_vsync_i; // en modo VIDEO, no se usa
wire [7:0]  vga_red_i, vga_red_o; 
wire [7:0]  vga_green_i, vga_green_o; 
wire [7:0]  vga_blue_i, vga_blue_o;

assign vga_red_i = modo_video ? { video, video, video, video, video, video, video, video } 
										: { vbosd[2], vbosd[2], vbosd[2], vbosd[2], vbosd[2], vbosd[2], vbosd[2], vbosd[2] };
assign vga_green_i = modo_video ? { video, video, video, video, video, video, video, video }  
										: { vbosd[1], vbosd[1], vbosd[1], vbosd[1], vbosd[1], vbosd[1], vbosd[1], vbosd[1] };
assign vga_blue_i = modo_video ? { video, video, video, video, video, video, video, video }  
										: { vbosd[0], vbosd[0], vbosd[0], vbosd[0], vbosd[0], vbosd[0], vbosd[0], vbosd[0] };
assign vga_hsync_i = modo_video ? csync : ~hs;
assign vga_vsync_i = modo_video ? 1'bZ  : ~vs;
//OSD redefinicion teclas
assign vbosd = (osdrgb == 3'd0) ? {vb, vb, vb} : osdrgb;


// video and csync output from the zx01
wire video;
wire csync;
wire vs_z81;
wire hs_z81;

// video and csync output from doublescan
wire vb;
wire [2:0] vbosd;
wire vs;
wire hs;

scandoubler scandoubler (
  // system interface
  .clkvga(clkvga),
  .clkvideo(clk65),
  .ce_2pix(1'd1),

  .scanlines(scandblr_reg[1]),
		    
  // video input
  .csync(csync),
  .v_in(~video),
  
  // output interface
  .hs_out(hs),
  .vs_out(vs),
  .v_out(vb),
  .pixel_x(pixel_x),
  .pixel_y(pixel_y)
);

// create 500kHz from 13 Mhz
reg [4:0] clk_cnt;
wire clk_500k = clk_cnt < 13;
always @(posedge clkvga) begin
	clk_cnt <= clk_cnt + 5'd1;
	if(clk_cnt == 5'd25)
		clk_cnt <= 5'd0;
end

// entrada cinta directa, pero da muchos errores
//always @(posedge clkvga) begin
//	tape_data <= EAR;
//end


// cuando se lee desde cinta, la imagen se apaga, es normal.
// en un ZX81 real, la imagen se distorsiona, pero no se apaga
// estas lineas sirven para reducir el numero de lecturas de bits
// desde la cinta, y evitar que se sature el EAR del ZX81
// la he cogido de uno de los cores que he estudiado
reg tape_data;
reg tape_in_z1;
reg tape_in_z2;
wire tape_in;
always @(posedge clk65) begin
	 tape_in_z2 <= tape_in_z1;
	 tape_in_z1 <= EAR;
	 if ((tape_in_z2==1'b0 && tape_in_z1==1'b1 && EAR==1'b0) 
	  || (tape_in_z2==1'b1 && tape_in_z1==1'b0 && EAR==1'b1))
	   tape_data <= EAR;
	 else 
	   tape_data <= tape_in_z1;
end

// Emitir sonido cinta a CPU y audio desde módulo tape_zxdos o entrada EAR
assign tape_in = (play_on)?tape_internal:!tape_data ;

// actividad de lectura mediante LED
//assign LED1 = !tape_data; // !negado original y negado en el ZXUNO
assign LED1 = !tape_in;

// use a pwm to reduce audio output volume
reg [7:0] aclk;
always @(posedge clkvga) 
	aclk <= aclk + 8'd1;


// limit volume to 1/8 => pwm < 32 
//wire tape_audio = tape_data && (aclk < 32); 
wire tape_audio = !tape_in && (aclk < 32); 
assign AUDIO_L = tape_audio;
assign AUDIO_R = tape_audio;

wire	resetKey;
wire	MRESET;
wire [2:0] osdrgb;
wire [9:0] pixel_x;
wire [9:0] pixel_y;

reg mod_vid = 1;
// modulo principal del ZX81
zx01 zx01 (
	.n_reset    (~reset     	),
	.clock		(clk65       		),
	.clockvga	(clkvga       		),
//   .kbd_clk		(ps2_clk      	),
//	.kbd_data	(ps2_data		),
	.kbd_clk		(host_ps2_clk  ),
	.kbd_data	(host_ps2_data	),
	
//	.v_inv    	(v_inv			), //jepalza, para VGA debe ser 0, para VIDEO 1
	.usa_uk		(ntsc				),
	.mem16k		(mem16k			),
	.video    	(video			),
	.o_vsync   	(vs_z81			), //avlixa
	.o_hsync   	(hs_z81			), //avlixa
	.modo_video (mod_vid			), // jepalza, modo_video=0 es VGA, 1=VIDEO COMPUESTO
	.tape_in		(tape_in		), // debe ser negado
	.tape_out	(csync      	),
  // Joystick
  .joy_clk 		(JOY_CLK			),
  .joy_load    (JOY_LOAD		),
  .joy_data		(JOY_DATA		),
  .resetKey		(resetKey),
  .MRESET		(MRESET),
  .osdrgb      (osdrgb),
  .pixel_x     (pixel_x),
  .pixel_y     (pixel_y)
);

always @(posedge clk65)
 modo_video = mod_vid;

//------------multiboot---------------
	multiboot multiboot_i  (
		.clk_icap(clk65    ),
		.REBOOT  (MRESET   )
	);
	

// Control module
wire osd_window, osd_pixel;
reg [15:0] dswitch;
reg [15:0] size;
reg [15:0] joykeys;

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

CtrlModule MyCtrlModule (
		.clk(clk50),
		.reset_n(~resetctrl),

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
		.spi_clk(SPI_SCK),
		.spi_mosi(SPI_DI),
		.spi_miso(SPI_DO),
		.spi_cs(CONF_DATA0),
		
		//-- DIP switches
		//dipswitches(15 downto 5) => open,
		//dipswitches(4) => p_dif(1),
		//dipswitches(3) => p_dif(0),
		//dipswitches(2) => scanlines,
		//dipswitches(1) => p_pal,
		//dipswitches(0) => p_color,
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

// OSD Overlay
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

// Salida pines VGA
assign VGA_R = {vga_red_o[7], vga_red_o[6], vga_red_o[5] };
assign VGA_G = {vga_green_o[7], vga_green_o[6], vga_green_o[5] };
assign VGA_B = {vga_blue_o[7], vga_blue_o[6], vga_blue_o[5] };
assign VGA_HS = vga_hsync_i;
assign VGA_VS = vga_vsync_i;

// este modulo, lee desde una "unidad" SPI (puede ser una SD) y cuela en un "buffer" la cinta de audio a leer
// en este caso, segun he podido comprobar, un menu especial en el MIST permite colocar una cinta .P en el buffer
// y al pulsar una tecla especial (play) se envia la cinta al ZX81
//tape tape (
//	// spi interface to io controller
//   .sdi        ( SPI_DI       ),
//   .sck        ( SPI_SCK      ),
//   .ss         ( SPI_SS2      ),
//
//	.clk        ( clk_500k     ),
//	.play       ( !playbutton  ), //buttons[1]   ), // play siempre a 0
//   .tape_out   ( tape_data    )
//);

// Modulo Tape: cumple la misma funcionalidad de la MIST
// La cinta .P se lee desde tarjeta SD a un buffer por el módulo CtrlModule mediante un menú OSD 

tape_zxdos tape_ctrl
(
   .ram_clk(clk50),   // Input clock 50 MHz
	.reset(reset  ),	 // Reset signal

	// Boot upload signals from CtrlModule
	.bootdata(host_bootdata),
	.bootdata_req(host_bootdata_req),
	.bootdata_ack(host_bootdata_ack),

	//Tape out control
	.clk500(clk_500k),      // 500kHz
	.playbutton(joykeys[0]),     				// "press play/pause tape = F5"
	.stopbutton(joykeys[1]),     				// "press stop tape = F6"
	.ejectbutton(joykeys[2]),    				// "press eject tape = F7" -- Reset memory tape

	.tape_out(tape_internal),
	.play_on(play_on)  //Tape playback in progress
	
);
wire play_on;
wire tape_internal;

endmodule

