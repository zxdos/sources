//
// Based on Scandoubler from zx01_mist.v
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
  input wire		 clkvideo, //frecuencia de video de la CPU 2Mhz
  input wire       ce_2pix,

  input wire       scanlines,
		    
  // video input
  input wire       csync,
  input wire       v_in,
  // video output sync from external source
  input wire       hs_in,
  input wire       vs_in,

  // output interface
  output wire      v_out
  
);

	// column counter running at 15MHz, but counting through a whole line
	reg [9:0] in_col;
	wire[9:0] in_col_next = in_col + 1'd1;

	// counter to determine sync lengths in the composity sync signal
	// used to differentiate between hsync and vsync
	reg [7:0] sync_len;

	//reg vs, csD /* synthesis noprune */;
	reg vs, csD, hsinD, vsinD;

	// line counter also for debug purposes
	reg [9:0] line_cnt;
	reg [9:0] line_cnt_s;
	reg [10:0] col_cnt_s; // Columna real VGA

	reg scanline;

	// enough space for a complete screen 128 col x 312 lin
	reg       line_buffer[65535:0];
	reg [15:0] rdaddr;
	reg [15:0] wraddr;
	reg       q;

	// video output of scan doubler
	reg sd_video;

	//assign hs_out = hs;

	// scan doublers hsync/vsync vga runs on 25MHz
	localparam INI_LIN = 5;
	localparam INI_COL = 15;
	// **TRATAMIENTO Señal de salida
	always @(posedge clkvga) begin
	
		hsinD <= hs_in;
		vsinD <= vs_in;

		if(!vs_in && vsinD) begin //Fin sincronismo vertical
		  rdaddr[15:7] <= INI_LIN; //Linea de inicio salida
		  rdaddr[6:0] <= INI_COL; //Columna de inicio salida
		  line_cnt_s[9:0] <= 0; 
		end else if(!hs_in && hsinD) begin //Fin sincronismo horizontal
		  line_cnt_s[9:0] <= line_cnt_s[9:0] + 1'd1;
		  col_cnt_s <= 0;
		  rdaddr[6:0] <= INI_COL; //Columna de inicio salida
		  //Repetir la misma línea 2 veces
		  if (line_cnt_s[0] == 1'b0) begin 
				rdaddr[15:7] <= rdaddr[15:7] + 1;
		  end else begin
				rdaddr[15:7] <= rdaddr[15:7];
		  end
		end else begin
		  col_cnt_s <= col_cnt_s + 1;
		  //Repetir la misma columna 4 veces
		  if (col_cnt_s[1:0] == 2'b0) begin 
				rdaddr[6:0] <= rdaddr[6:0] + 1;
		  end
		end

		// output other line at full scan doubler frequency
		q <= line_buffer[rdaddr];
	end

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
			
			line_cnt <= line_cnt + 10'd1;
			wraddr[15:7] <= wraddr[15:7] + 1;
			wraddr[6:0] <= 0;
		end else begin
			//Nueva columna
			in_col <= in_col_next;
			// if counter passes 9 then we are seeing a vsync
			// sincronismo vertical
			if(sync_len >= 20) begin
				line_cnt <= 10'd0;
				wraddr[15:7] <= 0;
				wraddr[6:0] <= 0;
				scanline <= 0;
			end else
				wraddr[6:0] <= wraddr[6:0] + 1;
		end
		
		// fetch one line at half the scan doubler frequency
		line_buffer[wraddr] <= v_in;
	end

	assign v_out = q  && ~hs_in && ~vs_in;
  
endmodule
