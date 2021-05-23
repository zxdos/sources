/* FPGA Chip-8
   Copyright (C) 2013-2014  Carsten Elton Sorensen

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

module chip8(
   input         vga_clk,       // 25.152.000 Hz clock
   input         ntsc_clk,      // 13.500.000 Hz clock
   input         cpu_clk,       // clock  5kz  - 1x, 2x, 3x, 4x
   input         blit_clk,      // 8.000.000 Hz clock, or as fast as it can get.
   input         reset_i,

   input         cpu_halt,
   input         ntsc,
   input         vga_wide,

   output        vga_hsync,
   output        vga_vsync,
   output [ 3:0] vga_red,
   output [ 3:0] vga_green,
   output [ 3:0] vga_blue,

   output [15:0] cpu_opcode,
   output        audio_enable,

   input         ps2_data,
   input         ps2_clk,
   output        keyF11,
   output        key_videomode,

   input         uploading,
   input         upload_en,
   input         upload_clk,
   input [11:0]  upload_addr,
   input [ 7:0]  upload_data,

   output        error );

wire vga_hires;                   // whether to use the hires display
wire vga_beam_outside;            // the beam is outside the playfield
wire video_clock;

// Framebuffer RAM wires, used by VGA circuit

wire [15:0]   vga_fbuf_data;
wire [ 8:0]   vga_fbuf_addr;

// Framebuffer RAM wires, used by blitter

wire [15:0]   blit_fbuf_data_out, blit_fbuf_data_in;
wire [ 8:0]   blit_fbuf_addr;
wire          blit_fbuf_en;
wire          blit_fbuf_write;

// CPU RAM wires, used by blitter

wire [ 7:0]   blit_ram_data;
wire [11:0]   blit_ram_addr;

// CPU RAM wires, used by CPU

wire [ 7:0]   cpu_data_out, cpu_data_in;
wire [11:0]   cpu_addr;
wire          cpu_en;
wire          cpu_wr;

// Registers for blitter operations

wire [ 2:0]   blit_op;
wire [11:0]   blit_src_addr;
wire [ 3:0]   blit_src_height;
wire [ 6:0]   blit_dest_x;
wire [ 5:0]   blit_dest_y;
wire          blit_enable;
wire          blit_ready;
wire          blit_collision;

// Select video clock

   // BUFGMUX: Global Clock Mux Buffer
   //          Spartan-6
   // Xilinx HDL Language Template, version 14.7

   BUFGMUX #(
      .CLK_SEL_TYPE("SYNC")  // Glitchles ("SYNC") or fast ("ASYNC") clock switch-over
   )
   BUFGMUX_inst_video (
      .O(video_clock),   // 1-bit output: Clock buffer output
      .I0(vga_clk), // 1-bit input: Clock buffer input (S=0)
      .I1(ntsc_clk), // 1-bit input: Clock buffer input (S=1)
      .S(ntsc)    // 1-bit input: Clock buffer select
   );

   // End of BUFGMUX_inst instantiation
   
// VGA framebuffer

framebuffer VGAFramebuffer (
         //.vga_clk       (vga_clk        ),
         .vga_clk       (video_clock        ),
         .vga_addr      (vga_fbuf_addr  ),
         .vga_out       (vga_fbuf_data  ),

         .clk           (blit_clk       ),
         .fbuf_en       (blit_fbuf_en   ),
         .fbuf_write    (blit_fbuf_write),
         .fbuf_addr     (blit_fbuf_addr ),
         .fbuf_in       (blit_fbuf_data_in),
         .fbuf_out      (blit_fbuf_data_out));

//Reset chip8
reg [4:0] reset_s_cnt = 5'd0;
reg reset_s = 1'b0;
always @ (posedge cpu_clk) begin
   reset_s <= reset_s_cnt[4];
   if (reset_i || reset_b) begin
      reset_s_cnt = 5'h1F;
   end else reset_s_cnt = { reset_s_cnt[3:0] ,1'b0};
end

// PS/2 keyboard
reg  [15:0]  keyboard_matrix;
wire [10:0]  ps2_key;

//=====================================
ps2_port ps2_port (
         .clk_sys       (blit_clk     ),    // se recomienda 1 MHz <= clk <= 600 MHz
         .enable_rcv    (1'b1         ),    // habilitar la maquina de estados de recepcion
         .kb_or_mouse   (1'b0         ),
         .ps2clk_ext    (ps2_clk      ),
         .ps2data_ext   (ps2_data     ),
//       .kb_interrupt  (key_event    ),    // a 1 durante 1 clk para indicar nueva tecla recibida
//       .scancode      (keyboard_data),    // make o breakcode de la tecla
//       .released      (keyboard_ready),   // soltada=1, pulsada=0
//       .extended      (extended     ),    // extendida=1, no extendida=0
         .ps2_key       (ps2_key      )     // ps2_key 10bit
   );

wire       pressed = ps2_key[9];
wire [7:0] code    = ps2_key[7:0];
reg        old_state, reset_b;
reg        color_sel, keyF11;
reg        CTRL_key, ALT_key, key_videomode;

always @(posedge blit_clk) begin
   old_state <= ps2_key[10];
   if(old_state != ps2_key[10])
   begin
      casex(code)
         8'h16: keyboard_matrix[4'h1] <= pressed; // 1 - 1
         8'h1E: keyboard_matrix[4'h2] <= pressed; // 2 - 2
         8'h26: keyboard_matrix[4'h3] <= pressed; // 3 - 3
         8'h25: keyboard_matrix[4'hC] <= pressed; // C - 4
         
         8'h15: keyboard_matrix[4'h4] <= pressed; // 4 - Q
         8'h1D: keyboard_matrix[4'h5] <= pressed; // 5 - W
         8'h24: keyboard_matrix[4'h6] <= pressed; // 6 - E
         8'h2D: keyboard_matrix[4'hD] <= pressed; // D - R
         
         8'h1C: keyboard_matrix[4'h7] <= pressed; // 7 - A 
         8'h1B: keyboard_matrix[4'h8] <= pressed; // 8 - C
         8'h23: keyboard_matrix[4'h9] <= pressed; // 9 - D
         8'h2B: keyboard_matrix[4'hE] <= pressed; // E - F
         
         8'h1A: keyboard_matrix[4'hA] <= pressed; // A - Z
         8'h22: keyboard_matrix[4'h0] <= pressed; // 0 - X
         8'h21: keyboard_matrix[4'hB] <= pressed; // B - C
         8'h2A: keyboard_matrix[4'hF] <= pressed; // F - V
         
         8'h09: color_sel             <= pressed; // F10
         8'h78: keyF11                <= pressed; // F11
         8'h07: reset_b               <= pressed; // F12 RESET

         8'h14: CTRL_key              <= pressed; //CTRL
         8'h11: ALT_key               <= pressed; //ALT
         8'h66: if ( CTRL_key && ALT_key ) keyF11 <= pressed; //CTRL+ALT+BCKSPC (hard reset)
         8'h71: if ( CTRL_key && ALT_key ) reset_b <= pressed; //CTRL+ALT+SUPR (soft reset)
         8'h7e: key_videomode         <= pressed; //Scrll-lock
         
      endcase
   end
end


// BUFGMUX: Global Clock Mux Buffer
//          Spartan-6
// Xilinx HDL Language Template, version 14.7

wire a_clk;

BUFGMUX #(
   .CLK_SEL_TYPE("SYNC")  // Glitchles ("SYNC") or fast ("ASYNC") clock switch-over
)
BUFGMUX_inst_memory (
   .O(a_clk),       // 1-bit output: Clock buffer output
   .I0(cpu_clk),    // 1-bit input: Clock buffer input (S=0)
   .I1(upload_clk), // 1-bit input: Clock buffer input (S=1)
   .S(uploading)    // 1-bit input: Clock buffer select
);
   
// CPU memory

cpu_memory CpuMemory (
   //.a_clk         (uploading ? upload_clk : cpu_clk),
   .a_clk         (a_clk),
   .a_en          (uploading ? upload_en  : cpu_en),
   .a_write       (uploading ? 1'b1       : cpu_wr),
   .a_data_out    (cpu_data_out     ),
   .a_data_in     (uploading ? upload_data : cpu_data_in),
   .a_addr        (uploading ? upload_addr : cpu_addr),

   .b_data        (blit_ram_data    ),
   .b_addr        (blit_ram_addr    ),
   .b_clk         (blit_clk         ));

vga_block Vga (
   //.clk           (vga_clk          ), 
   .clk           (video_clock          ),

   .ntsc          (ntsc             ),
   .hires         (vga_hires        ),
   .wide          (vga_wide         ),

   .hsync         (vga_hsync        ),
   .vsync         (vga_vsync        ),
   .beam_outside  (vga_beam_outside ),

   .red           (vga_red          ),
   .green         (vga_green        ),
   .blue          (vga_blue         ),

   .fbuf_addr     (vga_fbuf_addr    ),
   .fbuf_data     (vga_fbuf_data    ));

  blitter Blitter(
   .clk           (blit_clk         ),
   .hires         (vga_hires        ),

   .operation     (blit_op          ),
   .src           (blit_src_addr    ),
   .srcHeight     (blit_src_height  ),
   .destX         (blit_dest_x      ), 
   .destY         (blit_dest_y      ),
   .enable        (blit_enable      ),
   .ready         (blit_ready       ),
   .collision     (blit_collision   ),

   .buf_out       (blit_fbuf_data_out),
   .buf_in        (blit_fbuf_data_in),
   .buf_addr      (blit_fbuf_addr   ),
   .buf_enable    (blit_fbuf_en     ),
   .buf_write     (blit_fbuf_write  ),

   .cpu_out       (blit_ram_data    ),
   .cpu_addr      (blit_ram_addr    ));

// CPU
  cpu CPU (
   .res            (reset_s         ),

   .clk            (cpu_clk         ),
   .clk_60hz_in    (vga_vsync       ),
   .vsync_in       (vga_beam_outside),
   .halt           (cpu_halt || uploading),

   .keyMatrix      (keyboard_matrix ),

   .ram_en         (cpu_en          ),
   .ram_wr         (cpu_wr          ),
   .ram_out        (cpu_data_out    ),
   .ram_in         (cpu_data_in     ),
   .ram_addr       (cpu_addr        ),

   .hires          (vga_hires       ),
   .audio_enable   (audio_enable    ),

   .blit_op        (blit_op         ),
   .blit_src       (blit_src_addr   ),
   .blit_srcHeight (blit_src_height ),
   .blit_destX     (blit_dest_x     ),
   .blit_destY     (blit_dest_y     ),
   .blit_enable    (blit_enable     ),
   .blit_done_in   (blit_ready      ),
   .blit_collision (blit_collision  ),

   .cur_instr      (cpu_opcode      ),
   .error          (error           ));

endmodule
