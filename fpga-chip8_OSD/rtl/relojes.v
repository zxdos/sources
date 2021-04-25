`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:50:34 04/11/2021 
// Design Name: 
// Module Name:    relojes 
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
module relojes(
    input CLK50,
    input [1:0] clksel, // 0 - 1x, 1 - 2x, 2 - 4x, 3 - 8x
    //output clk100M,
    output clk60M,
    output clk25M,
    output clk8M,
    output clk50m,
    output cpu_clk,
    output cpu_clk_en 
    
    );

  wire clk, clkin;

  wire        locked_int;
  wire [7:0]  status_int;
  wire clkfb;
  wire clk0;
  wire clk2x;
  wire clkfx;
  wire clkdv;
  
   // Input buffering
   //------------------------------------
   IBUFG clkin1_buf
      (.O (clkin),
       .I (CLK50));

//  DCM_SP
//  #(.CLKDV_DIVIDE          (2.000),
//    .CLKFX_DIVIDE          (25),
//    .CLKFX_MULTIPLY        (4),
//    .CLKIN_DIVIDE_BY_2     ("FALSE"),
//    .CLKIN_PERIOD          (20.0),
//    .CLKOUT_PHASE_SHIFT    ("NONE"),
//    .CLK_FEEDBACK          ("2X"),
//    .DESKEW_ADJUST         ("SYSTEM_SYNCHRONOUS"),
//    .PHASE_SHIFT           (0),
//    .STARTUP_WAIT          ("FALSE"))
//  dcm_sp_inst
//    // Input clock
//   (.CLKIN                 (clkin),
//    .CLKFB                 (clkfb),
//    // Output clocks
//    .CLK0                  (),
//    .CLK90                 (),
//    .CLK180                (),
//    .CLK270                (),
//    .CLK2X                 (clk2x),
//    .CLK2X180              (),
//    .CLKFX                 (clkfx),
//    .CLKFX180              (),
//    .CLKDV                 (clkdv),
//    // Ports for dynamic phase shift
//    .PSCLK                 (1'b0),
//    .PSEN                  (1'b0),
//    .PSINCDEC              (1'b0),
//    .PSDONE                (),
//    // Other control and status signals
//    .LOCKED                (locked_int),
//    .STATUS                (status_int),
//    .RST                   (1'b0),
//    // Unused pin- tie low
//    .DSSEN                 (1'b0));

  DCM_SP
  #(.CLKDV_DIVIDE          (2.000),
    .CLKFX_DIVIDE          (25),
    .CLKFX_MULTIPLY        (4),
    .CLKIN_DIVIDE_BY_2     ("FALSE"),
    .CLKIN_PERIOD          (20.0),
    .CLKOUT_PHASE_SHIFT    ("NONE"),
    .CLK_FEEDBACK          ("1X"),
    .DESKEW_ADJUST         ("SYSTEM_SYNCHRONOUS"),
    .PHASE_SHIFT           (0),
    .STARTUP_WAIT          ("FALSE"))
  dcm_sp_inst
    // Input clock
   (.CLKIN                 (clkin),
    .CLKFB                 (clkfb),
    // Output clocks
    .CLK0                  (clk0),
    .CLK90                 (),
    .CLK180                (),
    .CLK270                (),
    .CLK2X                 (),
    .CLK2X180              (),
    .CLKFX                 (clkfx),
    .CLKFX180              (),
    .CLKDV                 (clkdv),
    // Ports for dynamic phase shift
    .PSCLK                 (1'b0),
    .PSEN                  (1'b0),
    .PSINCDEC              (1'b0),
    .PSDONE                (),
    // Other control and status signals
    .LOCKED                (locked_int),
    .STATUS                (status_int),
    .RST                   (1'b0),
    // Unused pin- tie low
    .DSSEN                 (1'b0));

  // Output buffering
  //-----------------------------------
  //assign clkfb = clk100M;
  assign clkfb = clk0;

//  BUFG clkout1_buf
//   (.O   (clk100M),
//    .I   (clk2x));  

  BUFG clkout1_buf
   (.O   (clk60M),
    .I   (clk0));  

  BUFG clkout2_buf
   (.O   (clk25M),
    .I   (clkdv));

  BUFG clkout3_buf
   (.O   (clk8M),
    .I   (clkfx));
    
  
  //BUFG bufgO50(.I(clkin), .O(clk50m));
  //assign clk = clk100M;
//wire   clk_en, ce_32k;
//reg    ce_4k, ce_8k, ce_16k, clk_32k, ce_50m;
//reg  [11:0]  ce32k_cnt = 12'b0;
//
//// Clock enable generation
//always @ (posedge clk) begin
//   if (ce32k_cnt == 12'd3124) begin
//      ce32k_cnt = 12'b0;
//      clk_32k = 1'b1;
//   end else begin
//      ce32k_cnt = ce32k_cnt + 12'd1;
//
//      clk_32k = 1'b0;
//   end 
//   
//   if (ce32k_cnt[0] == 1'b1) ce_50m = 1'b1;
//   else ce_50m = 1'b0;
//   
//end
//
//assign clk32k = clk_32k;
//assign ce_32k = clk_32k;
  assign clk = clk60M;
  
  wire   clk_en ;
  reg    ce_5k, ce_10k, ce_15k, ce_20k, ce_50m;
  reg  [11:0]  ce_cnt = 12'b0, ce_cnt15 = 12'b0;

  // Clock enable generation
  always @ (posedge clk) begin
    if (ce_cnt == 12'd2999) begin
        ce_cnt = 12'b0;
        ce_20k = 1'b1;
     end else begin
        ce_cnt = ce_cnt + 12'd1;
        ce_20k = 1'b0;
     end 
    
     if (ce_cnt[0] == 1'b1) ce_50m = 1'b1;
     else ce_50m = 1'b0;

    if (ce_cnt15 == 12'd3999) begin
        ce_cnt15 = 12'b0;
        ce_15k = 1'b1;
     end else begin
        ce_cnt15 = ce_cnt15 + 12'd1;
        ce_15k = 1'b0;
     end 
   
  end

// BUFGCE_1: Global Clock Buffer with Clock Enable and Output State 1
//           Spartan-6
// Xilinx HDL Language Template, version 14.7

BUFGCE_1 BUFGCE_1_inst50m (
   .O(clk50m), // 1-bit output: Clock buffer output
   .CE(ce_50m), // 1-bit input: Clock buffer select
   .I(clk)      // 1-bit input: Clock buffer input (S=0)
);

// End of BUFGCE_1_inst instantiation



//// CPU clock 
//clk_divider  #(.divider(5000)) Clock_20kHz(
//      .res             (1'b0        ),
//      .clk_in          (clk         ),
//      .clk_out         (cpu_clk     ));


reg  [2:0]  clk_en_cnt = 3'b111;
wire [2:0] clk_en_cntnext;


//// Clock enable generation
//always @ (posedge clk) begin
//   if (ce_32k) begin
//      clk_en_cnt <= clk_en_cntnext;
//      
//      if (clk_en_cnt[0] == 1'b1)    ce_16k = 1'b1;   else  ce_16k = 1'b0;
//      if (clk_en_cnt[1:0] == 2'b11)  ce_8k = 1'b1;   else  ce_8k = 1'b0;
//      if (clk_en_cnt[2:0] == 3'b111) ce_4k = 1'b1;   else  ce_4k = 1'b0;   
//   end else begin
//      ce_16k = 1'b0;
//      ce_8k = 1'b0;
//      ce_4k = 1'b0;  
//   end
//end
//assign clk_en_cntnext = clk_en_cnt + 3'd1;
// Clock enable generation
always @ (posedge clk) begin
   if (ce_20k) begin
      clk_en_cnt <= clk_en_cntnext;
      
      if (clk_en_cnt[0] == 1'b1)    ce_10k = 1'b1;   else  ce_10k = 1'b0;
      if (clk_en_cnt[1:0] == 2'b11)  ce_5k = 1'b1;   else  ce_5k = 1'b0;
   end else begin
      ce_10k = 1'b0;
      ce_5k = 1'b0;
   end
end
assign clk_en_cntnext = clk_en_cnt + 3'd1;

//assign ce_32k = 1'b1;

//assign clk_en = //ce_4k;
//                (clksel == 2'b00) ? ce_4k  :
//                (clksel == 2'b01) ? ce_8k  :
//                (clksel == 2'b10) ? ce_16k :
//                clk_32k;

assign clk_en = //ce_4k;
                (clksel == 2'b00) ? ce_5k  :
                (clksel == 2'b01) ? ce_10k  :
                (clksel == 2'b10) ? ce_15k :
                ce_20k;

assign cpu_clk_en = clk_en;


// BUFGCE_1: Global Clock Buffer with Clock Enable and Output State 1
//           Spartan-6
// Xilinx HDL Language Template, version 14.7

BUFGCE_1 BUFGCE_1_instCpu_clk (
   .O(cpu_clk), // 1-bit output: Clock buffer output
   .CE(clk_en), // 1-bit input: Clock buffer select  // clock enable 1x, 2x, 4x, 8x
   .I(clk)      // 1-bit input: Clock buffer input (S=0)
);

// End of BUFGCE_1_inst instantiation

endmodule
