///////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2019 Xilinx, Inc.
// All Rights Reserved
///////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor     : Xilinx
// \   \   \/     Version    : 14.7
//  \   \         Application: Xilinx CORE Generator
//  /   /         Filename   : clock.veo
// /___/   /\     Timestamp  : mié ago 07 16:43:53 CEST 2019
// \   \  /  \
//  \___\/\___\
//
// Design Name: ISE Instantiation template
///////////////////////////////////////////////////////////////////////////////

// The following must be inserted into your Verilog file for this
// core to be instantiated. Change the instance name and port connections
// (in parentheses) to your own signal names.

//----------- Begin Cut here for INSTANTIATION Template ---// INST_TAG
clock YourInstanceName (
    .CLK_IN1(CLK_IN1), // IN
    .CLK_IN1_P(CLK_IN1_P), // IN
    .CLK_IN1_N(CLK_IN1_N), // IN
    .CLK_IN2(CLK_IN2), // IN
    .CLK_IN2_P(CLK_IN2_P), // IN
    .CLK_IN2_N(CLK_IN2_N), // IN
    .CLK_FB_IN(CLK_FB_IN), // IN
    .CLK_FB_IN_P(CLK_FB_IN_P), // IN
    .CLK_FB_IN_N(CLK_FB_IN_N), // IN
    .DADDR(DADDR), // IN BUS [6:0]
    .DCLK(DCLK), // IN
    .DEN(DEN), // IN
    .DIN(DIN), // IN BUS [15:0]
    .DOUT(DOUT), // OUT BUS [15:0]
    .DRDY(DRDY), // IN
    .DWE(DWE), // IN
    .PROGCLK(PROGCLK), // IN
    .PROGDATA(PROGDATA), // IN
    .PROGEN(PROGEN), // IN
    .PROGDONE(PROGDONE), // OUT
    .PSCLK(PSCLK), // IN
    .PSEN(PSEN), // IN
    .PSINCDEC(PSINCDEC), // IN
    .PSDONE(PSDONE), // OUT
    .CLK_OUT1(CLK_OUT1), // OUT
    .CLK_OUT2(CLK_OUT2), // OUT
    .CLK_OUT3(CLK_OUT3), // OUT
    .CLK_OUT4(CLK_OUT4), // OUT
    .CLK_OUT5(CLK_OUT5), // OUT
    .CLK_OUT6(CLK_OUT6), // OUT
    .CLK_OUT7(CLK_OUT7), // OUT
    .CLKFB_OUT(CLKFB_OUT), // OUT
    .RESET(RESET), // IN
    .POWER_DOWN(POWER_DOWN), // IN
    .FREEZE(FREEZE), // IN
    .INPUT_CLK_STOPPED(INPUT_CLK_STOPPED), // OUT
    .CLKFB_STOPPED(CLKFB_STOPPED), // OUT
    .LOCKED(LOCKED), // OUT
    .STATUS(STATUS) // OUT BUS [2:0]
);

// INST_TAG_END ------ End INSTANTIATION Template ---------

