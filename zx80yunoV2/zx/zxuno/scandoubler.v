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
  input wire		 clkvideo, //frecuencia de video de la CPU 6.5Mhz
  input wire       ce_2pix,

  input wire       scanlines,
		    
  // video input
  input wire       csync,
  input wire       v_in,

  // output interface
  output wire          hs_out,
  output reg          vs_out,
  output wire         v_out,
  output reg   [9:0]  pixel_x,
  output wire   [9:0]  pixel_y
  
);

//  constant HSYNC_BEGIN: natural := 192;
//  constant HSYNC_GAP:   natural := 16;
//  constant LINE_LEN:    natural := 207-1;


// column counter running at 13MHz, twice the zx81 pixel clock
reg [8:0] sd_col;

// column counter running at 13MHz, but counting through a whole zx81 line
reg [9:0] zx_col;
wire[9:0] zx_col_next = zx_col + 1'd1;

// salida pixel actual para OSD
//assign pixel_x = {1'b0 , sd_col};
assign pixel_y = line_cnt;

// counter to determine sync lengths in the composity sync signal
// used to differentiate between hsync and vsync
reg [7:0] sync_len;

//reg vs, csD /* synthesis noprune */;
reg vs, csD;

// horizontal display goes from 40 to 168. We add 16 border pixels left and right
wire h_de = (sd_col >= (2*16)) && (sd_col < 2*182);   // 176

// vertical display goes from line 32 to 224.We add 16 border pixels top and bottom
wire v_de = (line_cnt >= 16) && (line_cnt < 296);    // 240  

wire hs = (sd_col < (2*192)); // || (sd_col >= (2*192 + 2*16));

// line counter also for debug purposes
reg [9:0] line_cnt /* synthesis noprune */;

reg scanline;

// enough space for two complete lines (incl. border and sync),
// each being 414 physical pixels wide
reg       line_buffer[1023:0];
reg [9:0] rdaddr;
reg [9:0] wraddr;
reg       q;

//assign v_out = (scanlines & scanline) ? 1'd0 : q && v_de && h_de;

// toggle bit to switch between both line buffers
reg sd_toggle;

// video output of scan doubler
reg sd_video;

assign hs_out = hs;

// scan doublers hsync/vsync generator runs on  6.5MHz
always @(posedge clkvga) begin
	
	if (ce_2pix) begin

		csD <= csync;

		if(csync) begin
			sync_len <= 8'd0;
			vs_out <= 1'b0;
		end else begin
			// count sync pulse length. Stop counting at 255
			if(sync_len < 255)
				sync_len <= sync_len + 8'd1;

			// if counter passes 90 then we are seeing a vsync
			if(sync_len == 90) begin
				vs_out <= 1'b1;
				line_cnt <= 10'd0;
				scanline <= 0;
			end
		end
		//hs_out <= hs;

		// reset scan doubler column counter on rising edge of csync (end of sync) or
		// every 414 pixels
		if((sd_col == 413) ||(csync && !csD && sync_len < 90)) begin
			sd_col <= 9'd0;
			rdaddr[8:0] <= 0;
			scanline <= !scanline;
			pixel_x <= 10'd0;			
		end else begin
			sd_col <= sd_col + 9'd1;
			rdaddr[8:0] <= rdaddr[8:0] + 1'd1;
			pixel_x <= {1'b0 , sd_col};					
		end
		
		// change toggle bit at the end of each zx line
		if(csync && !csD) begin
			sd_toggle <= !sd_toggle;
			rdaddr[9] <= sd_toggle;
			wraddr[9] <= !sd_toggle;
			line_cnt <= line_cnt + 10'd1;
		end
			
		// zx81 column counter
		if((csync && !csD && sync_len < 90)) begin
			zx_col <= 10'd0;
			wraddr[8:0] <= 0;

		end else begin
			zx_col <= zx_col_next;
			wraddr[8:0] <= zx_col_next[9:1];

		end

		// fetch one line at half the scan doubler frequency
		if(zx_col[0])
			line_buffer[wraddr] <= v_in;
//		// zx81 column counter
//		if((csync && !csD && sync_len < 90)) begin
//			zx_col <= 10'd0;
//		end else begin
//			zx_col <= zx_col_next;
//		end
		
		// output other line at full scan doubler frequency
		q <= line_buffer[rdaddr];
	end
	
	
end

  // Se añade un pequeño desplazamiento para mejorar unas líneas que aparecen 
  // desplazadas en la primera línea visible, tiene mejor apariencia pero no se souciona del todo
  reg [6:0] r_video = 0;
  
  always @(posedge clkvga)
  begin
    r_video[0] <= (scanlines & scanline) ? 1'd0 : q && v_de && h_de;
	 r_video[1] <= r_video[0];
    r_video[2] <= r_video[1];
	 r_video[3] <= r_video[2];
	 r_video[4] <= r_video[3];
	 r_video[5] <=  ((line_cnt == 33)) ? r_video[1] : r_video[4];
	 r_video[6] <=  ((line_cnt >= 34) && (line_cnt < 36 || 
						(line_cnt == 36 && scanline == 1'b1))) ? r_video[2] : r_video[5];
  end

  assign v_out = ((line_cnt == 33)) ? r_video[5] : r_video[6];
  
endmodule
