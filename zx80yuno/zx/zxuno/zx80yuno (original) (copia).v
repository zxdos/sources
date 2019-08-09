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
//   añadidas versiones VGA y VIDEO COMPUESTO en un solo modulo, seleccionable por comando
//   añadido mando de juegos (joystick) y sonido ay-3-8913, rutinas de Marek Blasko
//   cambiada RAM interna por SRAM externa del ZXUNO
//   implementado soporte SD, pero no funcional
//   en general, es una mezcla de modulos del ZX01, ZXGATE, ZX97, Marek Blasko y Jepalza


module zx80yuno ( 
  input wire    CLOCK_50, // 50 MHz zxuno

  output wire   LED, // LED actividad de carga
  
  // VGA
  output            VGA_HS, // CSYNC en caso de VIDEO COMPUESTO
  output            VGA_VS, // en modo VIDEO, no se usa
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
  
  // SPI
  inout wire            SPI_DO,
  input wire            SPI_DI,
  input wire            SPI_SCK,
//  input wire            SPI_SS2,    // fpga
//  input wire            SPI_SS3,    // OSD
//  input wire            SPI_SS4,    // "sniff" mode
  input wire            CONF_DATA0  // SPI_SS for user_io
);

// seleccionar modo salida VIDEO
reg modo_video = 1'b0; // 0 para VGA, 1 para VIDEO

// video inverso=1 (fondo negro), 0 original (fondo blanco)
//wire v_inv = 1'b0;




// del MIST
// reset generation
reg [7:0] reset_cnt;
//reg mem16kD, mem16kD2;
always @(posedge clk) begin
	// reset on board setup, when io controller signals reset
	// or when memory size changes
	if(!pll_locked || reset_in) // || (mem16kD != mem16kD2))
		reset_cnt <= 8'h0;
	else if(reset_cnt != 8'd255)
		reset_cnt <= reset_cnt + 8'd1;
end //end begin
wire reset = (reset_cnt != 8'd255);

// pll to generate appropriate clock
wire clk13;
wire pll_locked;
clock clock (
  .areset       (1'b0             ), // async reset input
  .inclk0       (CLOCK_50         ), // input clock (50MHz)
  .c0           (clk13            ), // output clock c0 (13MHz)
  .locked       (pll_locked       )  // pll locked output
);

// The 13Mhz is required for the scan doubler. The zx01 itself
// runs at 6.5 MHz which is generated from the 13MHz
reg clk;
always @(posedge clk13)
	clk <= !clk;




// jepalza: las señales que vienen del MIST. solo dejo los 16k
wire reset_in = 1'b0; //en mist status[0]; // reset siempre 0, si ponemos "1" no arranca, y sintetiza en "verde"....
wire ntsc = 1'b0;     //en mist status[1]; 
wire mem16k = 1'b1;   //en mist !status[2];   // bit 2 of status register is 0 when 16k is enabled

// salida video ZXUNO, en caso de no usar VGA
assign stdn = 1'b0;
assign stdnb = 1'b1;

// jepalza, salida VGA sencilla, sin complicaciones (o VIDEO COMPUESTO a eleccion)
reg vs;
wire hs;

assign hs = (sd_col >= 2*192);

assign VGA_R = modo_video ? { video, video, video } : { vb, vb, vb };
assign VGA_G = modo_video ? { video, video, video } : { vb, vb, vb };
assign VGA_B = modo_video ? { video, video, video } : { vb, vb, vb };
assign VGA_HS = modo_video ? csync : ~hs;
assign VGA_VS = modo_video ? 1'bZ  : ~vs;


// video and csync output from the zx01
wire video;
wire csync;







// ---------------------------------------------------------- //
//    SCANDOUBLER del MIST, es lo único que he encontrado
// ---------------------------------------------------------- //
// column counter running at 13MHz, twice the zx81 pixel clock
reg [8:0] sd_col;

// column counter running at 13MHz, but counting through a whole zx81 line
reg [9:0] zx_col;

// counter to determine sync lengths in the composity sync signal
// used to differentiate between hsync and vsync
reg [7:0] sync_len;

// horizontal display goes from 40 to 168. We add 16 border pixels left and right
wire h_de = (sd_col >= 16) && (sd_col < 2*182);   // 176

// vertical display goes from line 32 to 224.We add 16 border pixels top and bottom
wire v_de = (line_cnt >= 16) && (line_cnt < 272);    // 240  

// debug signal indicating that the scandoubler adjusted its hsync phase. This
// signal should only occur once at stargup. The fact that it also triggers in
// line 1 and line 32
reg trigger /* synthesis noprune */;
// line counter also for debug purposes
reg [9:0] line_cnt /* synthesis noprune */;

// enough space for two complete lines (incl. border and sync),
// each being 414 physical pixels wide
reg line_buffer[1023:0];

// toggle bit to switch between both line buffers
reg sd_toggle;

// video output of scan doubler
reg sd_video;

// Csync
reg csD;

// scan doublers hsync/vsync generator runs on 6.5MHz
always @(posedge clk13) begin
	trigger <= 1'b0;

	csD <= csync;

	if(csync) begin
		sync_len <= 8'd0;
		vs <= 1'b0;
	end else begin
		// count sync pulse length. Stop counting at 255
		if(sync_len < 255)
			sync_len <= sync_len + 8'd1;

		// if counter passes 80 then we are seeing a vsync
		if(sync_len == 80) begin
			vs <= 1'b1;
			line_cnt <= 10'd0;
		end
	end

	// reset scan doubler column counter on rising edge of csync (end of sync) or
	// every 414 pixels
	if((sd_col == 413) ||(csync && !csD && sync_len < 80)) begin
		// trigger whenever we adjust hsync position. This should happen only once, otherwise
		// there are short/long lines
		if(sd_col != 413)
			trigger <= 1'b1;
	 
		sd_col <= 9'd0;
	end else
		sd_col <= sd_col + 9'd1;
		
   // change toggle bit at the end of each zx line
	if(csync && !csD) begin
		sd_toggle <= !sd_toggle;
		line_cnt <= line_cnt + 10'd1;
	end
			
	// zx81 column counter
	if((csync && !csD && sync_len < 80)) begin
		zx_col <= 10'd0;
	end else 
		zx_col <= zx_col + 10'd1;

	// fetch one line at half the scan doubler frequency
	if(zx_col[0])
		line_buffer[{sd_toggle, zx_col[9:1]}] = video;
		
	// output other line at full scan doubler frequency
	// esta linea causa un error "unexpected" al Xilinx. La anulo y me curro la siguiente
	//sd_video <= line_buffer[{!sd_toggle, sd_col}]; // jepalza: anulado
	 vb <= v_de && h_de && ~line_buffer[{!sd_toggle, sd_col}]; // jepalza: asignacion directa
end
reg vb;	// jepalza, para mi salida VGA 
// ---------------------------------------------------------- //
//             FIN de SCANDOUBLER del MIST
// ---------------------------------------------------------- //





// create 500kHz from 13 Mhz
reg [4:0] clk_cnt;
wire clk_500k = clk_cnt < 13;
always @(posedge clk13) begin
	clk_cnt <= clk_cnt + 5'd1;
	if(clk_cnt == 5'd25)
		clk_cnt <= 5'd0;
end

// entrada cinta directa, pero da muchos errores
//always @(posedge clk13) begin
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
always @(posedge clk) begin
	 tape_in_z2 <= tape_in_z1;
	 tape_in_z1 <= EAR;
	 if ((tape_in_z2==1'b0 && tape_in_z1==1'b1 && EAR==1'b0) 
	  || (tape_in_z2==1'b1 && tape_in_z1==1'b0 && EAR==1'b1))
	   tape_data <= EAR;
	 else 
	   tape_data <= tape_in_z1;
end




// actividad de lectura mediante LED
assign LED = !tape_data; // !negado original y negado en el ZXUNO


// use a pwm to reduce audio output volume
reg [7:0] aclk;
always @(posedge clk13) 
	aclk <= aclk + 8'd1;


// limit volume to 1/8 => pwm < 32 
wire tape_audio = tape_data && (aclk < 32); 
assign AUDIO_L = tape_audio;
assign AUDIO_R = tape_audio;



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

//reg mod_vid=0;
// modulo principal del ZX81
zx01 zx01 (
	.n_reset    (~reset     	),
	.clock		(clk       		),
   .kbd_clk		(ps2_clk      	),
	.kbd_data	(ps2_data		),
//	.v_inv    	(v_inv			), //jepalza, para VGA debe ser 0, para VIDEO 1
	.usa_uk		(ntsc				),
	.mem16k		(mem16k			),
	.video    	(video			),
	.modo_video (mod_vid			), // jepalza, modo_video=0 es VGA, 1=VIDEO COMPUESTO
	.tape_in		(!tape_data		), // debe ser negado
	.tape_out	(csync      	)
);

always @(posedge clk)
 modo_video = mod_vid;

endmodule
