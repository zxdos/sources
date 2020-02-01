//
// Scandoubler from zx01_mist.v
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

module scandoubler (
  // system interface
  input wire  		 clkvga,
  input wire		 clkvideo, //frecuencia de la CPU 2Mhz
  input wire       ce_2pix,

  input wire       scanlines,
		    
  // video input
  input wire       csync,
  input wire       v_in,

  // output interface
  output wire          hs_out,
  output wire          vs_out,
  output wire          v_out,
  output wire   [9:0]  pixel_x,
  output wire   [9:0]  pixel_y
  
);

	/*
	Vga 640x480. http://tinyvga.com/vga-timing/640x480@60Hz
	Screen refresh rate 60 Hz
	Vertical refresh 31.46875 kHz
	Pixel freq. 25.175 MHz

	Pong 64us x línea 58us visibles 0,5us x pixel
	116 pixel visibles / 128 píxeles total

	640 / 116 = 5.51
	640 /128 = 5

	5 líneas sin dibujar front porch
	Sync vert. Línea 258, detecto más de 8 tics, 
	Línea 258.5, genero  sync vert 1 línea de pong equivale a 2 vga 16.5 líneas back porch
	Empiezo dibujar la línea 13 del pong
	Quedan 245 líneas x 2 = 480 visibles + 10 back porch
	*/
		
	// Registro para generar scanlines si está activado
	reg scanline;
	
	// column counter CPU signa running at 2MHz, but counting through a whole line
	reg [9:0] in_col;
	wire[9:0] in_col_next = in_col + 1'd1;

	// counter to determine sync lengths in the composity sync signal
	// used to differentiate between hsync and vsync
	reg [7:0] sync_len;

	// enough space for two complete lines (incl. border and sync),
	// each being 128 physical pixels wide
	reg       line_buffer[256:0];
	reg [7:0] rdaddr;
	reg [7:0] wraddr;
	reg       q; //lectura bit de salida
	reg vs, csD;
	reg vso_reg, vs_outD, hso_reg, hs_outD;

	// column counter VGA signal running at 25MHz
	reg [9:0] sd_col;

	// line counter also for debug purposes
	reg [9:0] line_cnt /* synthesis noprune */;
	reg [9:0] line_cnt_vga /* synthesis noprune */;

	// salida pixel actual para OSD
	assign pixel_y = line_cnt_vga;
	assign pixel_x = sd_col;
	
	// HSYNC = 96, BP = 48, Visible = 640, FP = 16
	// horizontal display goes between FP and BP
	wire h_de = (sd_col >= 48) && (sd_col < 688);   // 

	wire hs = (sd_col >= 704) && (sd_col < 800);

	// VSYNC = 2, BP = 33, Visible = 480, FP = 10
	// vertical display goes between FP and BP
	//wire v_de = (line_cnt >= 33) && (line_cnt < 513);    // 240  
	wire v_de = (line_cnt_vga >= 33) && (line_cnt_vga < 513);    // 240  


	//assign v_out = (scanlines & scanline) ? 1'd0 : q && v_de && h_de;
	assign v_out = q && v_de && h_de;

	// toggle bit to switch between both line buffers
	reg sd_toggle = 0;

	assign hs_out = hs;
	//Linea 258.5, genero  sync vert 1 línea de pong equivale a 2 vga
	assign vs_out = (sync_len >= 64) && (sync_len < 192);

	
	// scan doublers hsync/vsync generator runs on  2MHz
	//**TRATAMIENTO SEÑAL DE ENTRADA**
	always @(posedge clkvideo) begin
		csD <= csync;

		
		if(csync) begin
			sync_len <= 8'd0;
		end else begin
			// count sync pulse length. Stop counting at 255
			if(sync_len < 255)
				sync_len <= sync_len + 8'd1;
		end

		// reset scan doubler column counter on rising edge of csync (end of sync) 
		if(csync && !csD && sync_len < 20) begin
			//Nueva línea (sincronismo horizontal)
			scanline <= !scanline;
			in_col <= 10'd0;
			
			//line_cnt <= line_cnt + 10'd1;
			//wraddr[8] <= !scanline;
			wraddr[6:0] <= 0;
		end else begin
			//Nueva columna
			in_col <= in_col_next;
			// if counter passes 9 then we are seeing a vsync
			// sincronismo vertical
			if(sync_len >= 20) begin
				//line_cnt <= 10'd0;
				//wraddr[8] <= 0;
				wraddr[6:0] <= 0;
				scanline <= 0;
			end else
				wraddr[6:0] <= wraddr[6:0] + 1'd1;
		end

		// change toggle bit at the end of each CPU line
		if(csync && !csD) begin
			if(sync_len >= 20)
				sd_toggle <= 0;
			else
				sd_toggle <= !sd_toggle;
			
			rdaddr[7] <= !sd_toggle;
			wraddr[7] <= sd_toggle;
			if (sync_len >= 64) 
				line_cnt <= 10'd0;
			else
				line_cnt <= line_cnt + 10'd1;
		end		
		// fetch one line at the CPU frequency
		line_buffer[wraddr] <= v_in;
	end
	
	//Mostrar 5 pixel VGA por cada uno de CPU
	reg  [2:0] pixconv;
	wire [2:0] pixconv_next;
	assign pixconv_next = (pixconv == 3'd4) ? 3'd0 : (h_de) ? pixconv + 'd1 : pixconv;
	
	// scan doublers hsync/vsync generator runs on  25MHz
	always @(posedge clkvga) begin
		vso_reg <= vs_out;
		vs_outD <= vso_reg;
		hso_reg <= hs_out;
		hs_outD <= hso_reg;
		
		if (ce_2pix) begin

			if(!vso_reg && vs_outD) 
					line_cnt_vga <= 10'd0;
			else if(!hso_reg && hs_outD) 
					line_cnt_vga <= line_cnt + 10'd1;
						
			// reset scan doubler column counter on rising edge of csync (end of sync) or
			// every 800 pixels = BP (48) + Visible (640) + FP (16) + 96 (HSYNC)
			if((sd_col == 799) || (csync && !csD && sync_len < 20)) begin
			//if((sd_col == 799)) begin
				// Count VGA lines
				sd_col <= 9'd0;
				pixconv <= 'd0;
				rdaddr[6:0] <= 0;
			end else begin
				sd_col <= sd_col + 9'd1;
				pixconv <= pixconv_next;
				//1 "pixel" CPU x 5 pixel VGA
				if (pixconv == 3'd4 && h_de) begin
					rdaddr[6:0] <= rdaddr[6:0] + 1'd1;
				end
			end

			// output other line at full scan doubler frequency
			q <= line_buffer[rdaddr];
		end
		
	end
  
endmodule
