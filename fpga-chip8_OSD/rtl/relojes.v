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
    output clk120M,
    output clk60M,
    output clk25M,
    output clk8M,
    output clk13M5,
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



//----------------------------------------------------------------------------
// "Output    Output      Phase     Duty      Pk-to-Pk        Phase"
// "Clock    Freq (MHz) (degrees) Cycle (%) Jitter (ps)  Error (ps)"
//----------------------------------------------------------------------------
// CLK_OUT1____60.000______0.000______50.0______259.778____213.839
// CLK_OUT2_____8.000______0.000______50.0______389.784____213.839
// CLK_OUT3____25.000______0.000______50.0______311.133____213.839
// CLK_OUT4____13.636______0.000______50.0______351.207____213.839
//
//----------------------------------------------------------------------------
// "Input Clock   Freq (MHz)    Input Jitter (UI)"
//----------------------------------------------------------------------------
// __primary__________50.000____________0.010


  // Clocking primitive
  //------------------------------------
  // Instantiation of the PLL primitive
  //    * Unused inputs are tied off
  //    * Unused outputs are labeled unused
  wire [15:0] do_unused;
  wire        drdy_unused;
  wire        locked_unused;
  wire        clkfbout;
  wire        clkfbout_buf;
  wire        clkout4_unused;
  wire        clkout5_unused;

  PLL_BASE
  #(.BANDWIDTH              ("OPTIMIZED"),
    .CLK_FEEDBACK           ("CLKFBOUT"),
    .COMPENSATION           ("SYSTEM_SYNCHRONOUS"),
    .DIVCLK_DIVIDE          (1),
    .CLKFBOUT_MULT          (12),
    .CLKFBOUT_PHASE         (0.000),
    .CLKOUT0_DIVIDE         (5),  //antes 10
    .CLKOUT0_PHASE          (0.000),
    .CLKOUT0_DUTY_CYCLE     (0.500),
    .CLKOUT1_DIVIDE         (75),
    .CLKOUT1_PHASE          (0.000),
    .CLKOUT1_DUTY_CYCLE     (0.500),
    .CLKOUT2_DIVIDE         (24),
    .CLKOUT2_PHASE          (0.000),
    .CLKOUT2_DUTY_CYCLE     (0.500),
    .CLKOUT3_DIVIDE         (44),
    .CLKOUT3_PHASE          (0.000),
    .CLKOUT3_DUTY_CYCLE     (0.500),
    .CLKIN_PERIOD           (20.000),
    .REF_JITTER             (0.010))
  pll_base_inst
    // Output clocks
   (.CLKFBOUT              (clkfbout),
    .CLKOUT0               (clkout0),
    .CLKOUT1               (clkout1),
    .CLKOUT2               (clkout2),
    .CLKOUT3               (clkout3),
    .CLKOUT4               (clkout4_unused),
    .CLKOUT5               (clkout5_unused),
    .LOCKED                (locked_unused),
    .RST                   (1'b0),
     // Input clock control
    .CLKFBIN               (clkfbout_buf),
    .CLKIN                 (clkin));

  // Output buffering
  //-----------------------------------
  BUFG clkf_buf
   (.O (clkfbout_buf),
    .I (clkfbout));

  BUFG clkout1_buf
   //(.O   (clk60M),
   (.O   (clk120M),
    .I   (clkout0));  

  BUFG clkout2_buf
   (.O   (clk25M),
    .I   (clkout2));

  BUFG clkout3_buf
   (.O   (clk8M),
    .I   (clkout1));

  BUFG clkout4_buf
   (.O   (clk13M5),
    .I   (clkout3));
    
  assign clk = clk120M;
  
  wire   clk_en ;
  reg    ce_5k, ce_10k, ce_15k, ce_20k, ce_50m;
  reg  [11:0]  ce_cnt = 12'b0, ce_cnt15 = 12'b0;
  reg   ce_cnt60M = 1'b0, ce_60M;

  // Clock enable generation
  always @ (posedge clk) begin
    ce_cnt60M = ~ce_cnt60M;
    if (ce_cnt60M == 1'b1) ce_60M = 1'b1; else ce_60M = 1'b0;
    
    if ( ce_60M == 1'b1) begin
       if (ce_cnt == 12'd2999 && ce_60M == 1'b1) begin
           ce_cnt = 12'b0;
           ce_20k = 1'b1;
       end else begin
           ce_cnt = ce_cnt + 12'd1;
           ce_20k = 1'b0;
       end

       if (ce_cnt15 == 12'd3999) begin
              ce_cnt15 = 12'b0;
              ce_15k = 1'b1;
       end else begin
              ce_cnt15 = ce_cnt15 + 12'd1;
              ce_15k = 1'b0;
       end

    end else begin
       ce_20k = 1'b0;
       ce_15k = 1'b0;    
    end
       
    if (ce_cnt[0] == 1'b1 && ce_60M == 1'b1) ce_50m = 1'b1;
    else ce_50m = 1'b0;
   
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

// BUFGCE_1: Global Clock Buffer with Clock Enable and Output State 1
//           Spartan-6
// Xilinx HDL Language Template, version 14.7
BUFGCE_1 BUFGCE_1_inst60M (
   .O(clk60M), // 1-bit output: Clock buffer output
   .CE(ce_60M), // 1-bit input: Clock buffer select
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
