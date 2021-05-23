/* FPGA Chip-8
   Copyright (C) 2013  Carsten Elton S?rensen

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

`include "blitter.vh"
`default_nettype none

`ifdef ZXD
module chip8_zxdoslx25 (
`elsif ZX2
module chip8_zxdoslx16 (
`elsif ZX1
module chip8_zxunolx9 (
`else
module aeon_top (
`endif

    input  wire       CLK50,                                // board clock: 50 MHz on AEON/Uno
`ifdef ZXD
    output wire [5:0] VGA_R,                                // 6-bit VGA red   output
    output wire [5:0] VGA_G,                                // 6-bit VGA green output
    output wire [5:0] VGA_B,                                // 6-bit VGA blue  output
`elsif ZX2
    output wire [5:0] VGA_R,                                // 6-bit VGA red   output
    output wire [5:0] VGA_G,                                // 6-bit VGA green output
    output wire [5:0] VGA_B,                                // 6-bit VGA blue  output
`elsif ZX1
    output wire [2:0] VGA_R,                                // 3-bit VGA red   output
    output wire [2:0] VGA_G,                                // 3-bit VGA green output
    output wire [2:0] VGA_B,                                // 3-bit VGA blue  output

    output wire       PAL,                                  // tipo video compuesto
    output wire       NTSC,                                 // tipo video compuesto
`else
    output wire [3:0] VGA_R,                                // 4-bit VGA red   output
    output wire [3:0] VGA_G,                                // 4-bit VGA green output
    output wire [3:0] VGA_B,                                // 4-bit VGA blue  output
`endif
    output wire       VGA_HS,                               // horizontal sync output
    output wire       VGA_VS,                               // vertical sync output
    output wire       AUDIO_L,                              // 1-bit sound output
    output wire       AUDIO_R,                              // 1-bit sound output

    inout wire        PS2CLK,                               // PS/2 keyboard interface
    inout wire        PS2DAT,

	// SRAM pins (just to get the current video output setting) ////////////
	output wire [20:0] sram_addr,
	input wire [7:0] sram_data,
	output wire sram_we_n,
`ifdef ZXD
	output wire sram_ub_n,
	output wire sram_lb_n,
`endif
   //SD Card
    output wire       SPI_CLK,                              // SPI
    output wire       SPI_MOSI,
    input wire        SPI_MISO,
    output wire       SPI_CS     );

   //assign PS2DAT = 1'bZ;
   //assign PS2CLK = 1'bZ;

   wire   clk, clk_vga, clk_ntsc, clk100, clk_sys, clk50m;
   wire   clkcolor4x, clk120M;
   wire   cpu_clk, clk_4khz;
   wire   clk_en, clk_32k;
   wire   audio_enable;
   wire   error, keyF11, key_videomode;
   reg    key_videomode_r;
   reg    [1:0] videomode;
   wire   [7:0] sw;

   relojes relojes(
         .CLK50                (CLK50          ),
         .clksel               (dswitch[1:0]   ),
         .clk120M              (clk120M        ),
         .clk60M               (clk            ),
         .clk25M               (clk_vga        ),
         .clk8M                (clk_sys        ),
         .clk13M5              (clk_ntsc       ),
         .clk50m               (clk50m         ),
         .cpu_clk              (cpu_clk        ),
         .cpu_clk_en           (clk_en        ));

   //Power on reset
   reg [7:0] por_cnt = 8'd0;
   reg por_s = 1'b1;
   always @ (posedge clk_vga) begin
      if ( !(por_cnt == 8'hFF) ) begin
         por_cnt = por_cnt + 8'd1;
         por_s = 1'b1;
      end else por_s = 1'b0;
   end
   
   //Video mode
  	// Initial video output settings
	reg [7:0] scandblr_reg; // same layout as in the Spectrum core, SCANDBLR_CTRL
	assign sram_we_n = 1'b1;
	assign sram_addr = 21'h008FD5;  // magic place where the scandoubler settings have been stored
`ifdef ZXD
	assign sram_ub_n = 1'b1;
	assign sram_lb_n = 1'b0;
`endif
	always @(posedge clk_vga) begin
	  if (por_s == 8'd1)
		  scandblr_reg <= sram_data;
		  //scandblr_reg <= 8'd1;    
	end
   
   always @ (posedge clk_vga) begin
      key_videomode_r <= key_videomode;
      if ( por_s ) 
         videomode <= {1'b0, ~scandblr_reg[0] };
      else if ( key_videomode_r == 1'b1 && key_videomode == 1'b0 ) begin
`ifdef ZX1
         if ( videomode == 2'b11 ) begin
`else
         if ( videomode == 2'b01 ) begin
`endif
            videomode <= 2'b00; // 00 - VGA , 01 - RGB(NTSC), 11 - Vcomp(NTSC)
         end else begin
            videomode <= {videomode[0], 1'b1};
         end
      end
   end

   // Host control signals, from the Control module
   wire        host_reset_n;
   wire        host_divert_sdcard;
   wire        host_divert_keyboard;
   wire        host_pal;
   wire        host_select;
   wire        host_start;

   wire [31:0] host_bootdata;
   wire        host_bootdata_req;
   wire        host_bootdata_ack;
   wire        host_bootdata_reset;
   wire        host_ps2_clk;
   wire        host_ps2_data;

   // CPU single stepping
   reg run = 1'd0;
   reg run_prev = 1'd0;
   wire halt = !(run && !run_prev);

   always @ (posedge cpu_clk)  begin
      run_prev <= run;
   end

   reg reset_chip8 = 1'd0;
   reg [7:0] reset_cnt = 8'd0;
   always @ (posedge clk)  begin
      if ( !host_reset_n ) begin
         reset_chip8 <= 1'b1;
         reset_cnt = 8'h00;
      end else begin
         if ( reset_cnt == 8'hFF ) reset_chip8 <= 1'b0;
         else reset_cnt = reset_cnt + 8'd1;
      end
   end

   chip8 chip8machine(
      .vga_clk              (clk_vga        ),              // 25.152.000 Hz clock
      .ntsc_clk             (clk_ntsc       ),              // 13.500.000 Hz clock
      .cpu_clk              (cpu_clk        ),
      .blit_clk             (clk_sys        ),              // 8 MHz
      .reset_i              (reset_chip8    ),
      .cpu_halt             (halt && 1'b0   ),
      .ntsc                 (videomode[0]   ),              //0 - VGA // 1 - NTSC
      .vga_wide             (1'b0           ),              // wide 0 - uzkiy ekran
      .vga_hsync            (vga_hsync_s    ),
      .vga_vsync            (vga_vsync_s    ),
      .vga_red              (r_out          ),
      .vga_green            (g_out          ),
      .vga_blue             (b_out          ),

//    .cpu_opcode           (               ),
      .audio_enable         (audio_enable   ),

      .ps2_data             (PS2DAT         ),
      .ps2_clk              (PS2CLK         ),
      .keyF11               (keyF11         ),
      .key_videomode        (key_videomode  ),

      .uploading            (uploading      ),
      .upload_en            (upload_en      ),
      .upload_clk           (clk50m         ),
      .upload_addr          (upload_addr    ),
      .upload_data          (upload_data    ),
      .error                (error          ));

   audio_test audio (
      .clk                  (clk_sys        ),
      .left                 (audio_out        ),
//    .right                (AUDIO_R        ),
      .sound_on             (!audio_enable  ));

   ////////////////////AUDIO////////////////////////
   wire audio_out;
   assign AUDIO_L = (dswitch[2]) ? audio_out : 1'b0;
   assign AUDIO_R = AUDIO_L;


   // Control module
   wire osd_window, osd_pixel;
   wire [2:0] osd_bkgr;
   reg [18:0] dswitch;
   reg [15:0] size;
   reg [15:0] joykeys;


// VGA osd overlay signal
   wire       vga_hsync_s;                                  
   wire       vga_vsync_s;                                  
   wire [7:0] vga_red_i,   vga_red_o;
   wire [7:0] vga_green_i, vga_green_o;
   wire [7:0] vga_blue_i,  vga_blue_o;
   wire [3:0] r_out, g_out, b_out;
   wire [8:0] joy2zpuflex;                                  // 8: 0 - ZXDOS/1 - ZXUNO, [7:0] - Joystick (SACUDLRB)
   wire       hard_reset, video_mode;

   assign VGA_HS = videomode[0] ? !(vga_vsync_s ^ vga_hsync_s) : vga_hsync_s;
`ifdef ZX1   
   assign VGA_VS =  (videomode == 2'b00) ? vga_vsync_s :
                    (videomode == 2'b01) ? 1'b1 :  clkcolor4x;
`else
   assign VGA_VS = videomode[0] ? 1'b1 : vga_vsync_s;
`endif   

// Modul control ZPUFlex
   CtrlModule #(.sysclk_frequency(600))
   MyCtrlModule (
      .clk                  (clk            ),
      .reset_n              (~por_s         ),

      .vga_hsync            (vga_hsync_s    ),              // Video signals for OSD
      .vga_vsync            (vga_vsync_s    ),
      .osd_window           (osd_window     ),
      .osd_pixel            (osd_pixel      ),
      .osd_bkgr             (osd_bkgr       ),

      .ps2k_clk_in          (PS2CLK         ),              // PS2 keyboard
      .ps2k_dat_in          (PS2DAT         ),

      .spi_clk              (SPI_CLK        ),              // SD card signals
      .spi_mosi             (SPI_MOSI       ),
      .spi_miso             (SPI_MISO       ),
      .spi_cs               (SPI_CS         ),

      .dipswitches          (dswitch        ),              // DIP switches
      .size                 (size           ),              // ROM size
      .joykeys              (joykeys        ),              // JOY Keystrokes output
      .hard_reset           (hard_reset     ),              // Hard reset key
      .video_mode           (video_mode     ),              // Video mode key

      .joy_pins             (joy2zpuflex    ),              // joystick input

      .host_divert_keyboard (host_divert_keyboard),         // Control signals
      .host_divert_sdcard   (host_divert_sdcard),
      .host_reset_n         (host_reset_n ),
      .host_start           (host_start     ),
      .host_select          (host_select    ),

      .host_bootdata        (host_bootdata  ),              // Boot data upload signals
      .host_bootdata_req    (host_bootdata_req),
      .host_bootdata_ack    (host_bootdata_ack),
      .host_bootdata_reset  (host_bootdata_reset));

`ifdef ZXD
   assign joy2zpuflex = 9'b010000000;                        // Entrada de joystick para control de zpuflex
`elsif ZX2
   assign joy2zpuflex = 9'b010000000;                        // Entrada de joystick para control de zpuflex
`else 
   assign joy2zpuflex = 9'b110000000;                        // Entrada de joystick para control de zpuflex
`endif
                                                            // bit 8   -  1 - ZXUNO, 0 - ZXDOS
                                                            // bit 7:0 -  (SACBRLDU) (positive logic)
                                                            // bit 7 a 1 para que funcione el zpuflex sin joystick conectado???

// OSD Overlay for mixing ZPUFlex OSD menu and -
   OSD_Overlay overlay (
      .clk                  (clk_vga        ),
      .red_in               (vga_red_i      ),
      .green_in             (vga_green_i    ),
      .blue_in              (vga_blue_i     ),
      .window_in            (1'b1           ),
      .osd_window_in        (osd_window     ),
      .osd_pixel_in         (osd_pixel      ),
      .osd_bkgr_in          (osd_bkgr       ),
      .hsync_in             (VGA_HS         ),
      .red_out              (vga_red_o      ),
      .green_out            (vga_green_o    ),
      .blue_out             (vga_blue_o     ),
      .window_out           (               ),
      .scanline_ena         (1'b0           ));

   assign vga_red_i   =  {2{r_out[3:0]}};
   assign vga_green_i =  {2{g_out[3:0]}};
   assign vga_blue_i  =  {2{b_out[3:0]}};

`ifdef ZXD
   assign VGA_R  = vga_red_o  [7:2];
   assign VGA_G  = vga_green_o[7:2];
   assign VGA_B  = vga_blue_o [7:2];
`elsif ZX2
   assign VGA_R  = vga_red_o  [7:2];
   assign VGA_G  = vga_green_o[7:2];
   assign VGA_B  = vga_blue_o [7:2];
`elsif ZX1
   assign VGA_R  = vga_red_o  [7:5];
   assign VGA_G  = vga_green_o[7:5];
   assign VGA_B  = vga_blue_o [7:5];
	// Salida video ZXUNO, en caso de no usar VGA
	assign PAL = 1'b1;
	assign NTSC = 1'b0;
   
   //Portadora para Video compuesto NTSC/PAL
   gencolorclk gencolorclk  (
      .clk ( clk120M ),       // reloj lo mas rpido posible (ahora mismo, 120 MHz o 170 Mhz segun valor de altern)
      .mode( 1'b1      ),       // 0=PAL, 1=NTSC
      .altern( 1'b0),           // 0=120 MHz, 1=170 MHz
      .clkcolor4x( clkcolor4x ) //(17.734475 MHz PAL  14.31818 MHz NTSC)
   );
   
`else
   assign VGA_R  = vga_red_o  [7:4];
   assign VGA_G  = vga_green_o[7:4];
   assign VGA_B  = vga_blue_o [7:4];
`endif

   //ROM Loader
   wire uploading;
   wire upload_en, upload_en_n;
   wire [11:0] upload_addr;
   wire [ 7:0] upload_data;
   wire        reset_loader_n;

   assign upload_en = !upload_en_n;

   rom_loader rom_loader (
    .clk                    (clk50m         ),
    .reset                  (!host_reset_n  ),

    // chip-8 internal memory
    .sram_addr              (upload_addr    ),
    .sram_data              (upload_data    ),
    .sram_we_n              (upload_en_n    ),
    .loading                (uploading      ),

   .rst_n                   ( reset_loader_n),              // Reset core

   //host data control
    .host_bootdata          (host_bootdata  ),
    .host_bootdata_req      (host_bootdata_req),
    .host_bootdata_reset    (host_bootdata_reset),
    .host_bootdata_ack      (host_bootdata_ack),
    .host_bootdata_size     (size           ));

   //-------------------------------------------------------------------------------------------------

   //BUFG Bufg(.I(videoclk), .O(clockmb));
`ifdef ZXD
   multiboot #( .MODEL(24'h0B0000) ) // lx25
`elsif ZX2
   multiboot #( .MODEL(24'h098000) ) // lx16
`elsif ZX1
   multiboot #( .MODEL(24'h058000) ) // lx9
`else
   multiboot
`endif
       Multiboot (
       .clock                  (clk_vga        ),
       .reboot                 (keyF11         ));

   //-------------------------------------------------------------------------------------------------

endmodule
