// file: tres_relojes.v
// 
// (c) Copyright 2008 - 2010 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 

`timescale 1ps/1ps
`default_nettype none

module cuatro_relojes
 (// Clock in ports
  input wire        CLK_IN1,
  // Clock out ports
  output wire       CLK_OUT1, //50MHz
  output wire       CLK_OUT2,   // 25Mhz
  output wire       CLK_OUT3   // 6.5Mhz
  //output wire       CLK_OUT4    //50MHz
 );


  wire clkin1,clkout0;
  // Input buffering
  //------------------------------------
  IBUFG clkin1_buf
   (.O (clkin1),
    .I (CLK_IN1));


  // Clocking 

  reg [2:0] clkdivider1 = 3'b000;
  always @(posedge clkin1)
   clkdivider1 <= clkdivider1 + 3'b001;
  
  assign clkout0 = clkdivider1[0];  //25MHz

  reg [2:0] clkdivider2 = 3'b000;
  always @(posedge clkout0)
   clkdivider2 <= clkdivider2 + 3'b001;

  // Output buffering
  //-----------------------------------
  BUFG clkout1_buf
   (.O   (CLK_OUT1),
    .I   (clkin1));  //50Mhz

  BUFG clkout2_buf
   (.O   (CLK_OUT2),
	 .I   (clkout0)); //25Mhz
    //.I   (clkdivider[0]));

  BUFG clkout3_buf
   (.O   (CLK_OUT3),
    .I   (clkdivider2[1])); //6.25 Mhz

//  BUFG clkout4_buf
//   (.O   (CLK_OUT4),
//    .I   (clkdivider[2]));

endmodule
