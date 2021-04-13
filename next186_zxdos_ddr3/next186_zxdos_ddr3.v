`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:42:35 04/13/2021 
// Design Name: 
// Module Name:    next186_zxdos_ddr3 
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
module next186_zxdos_ddr3(
		input CLK_50MHZ,

		inout  [15:0]	mcb3_dram_dq,
		output [13:0]	mcb3_dram_a,
		output [2:0]	mcb3_dram_ba,
		output			mcb3_dram_ras_n,
		output			mcb3_dram_cas_n,
		output			mcb3_dram_we_n,
		output			mcb3_dram_odt,
		output			mcb3_dram_reset_n,
		output			mcb3_dram_cke,
		output			mcb3_dram_dm,
		inout				mcb3_dram_udqs,
		inout				mcb3_dram_udqs_n,
		output			mcb3_dram_udm,
		inout				mcb3_dram_dqs,
		inout				mcb3_dram_dqs_n,
		output			mcb3_dram_ck,
		output			mcb3_dram_ck_n,
		inout				mcb3_rzq,
		
		output [1:0]LED,
		input [1:0]BTN,

		output AUDIO_L,
		output AUDIO_R,
		
		inout PS2CLKA,
		inout PS2CLKB,
		inout PS2DATA,
		inout PS2DATB,
		
		output [5:0]VGA_R,
		output [5:0]VGA_G,
		output [5:0]VGA_B,
		output VGA_HSYNC,
		output VGA_VSYNC,
		
		output SD_nCS,
		output SD_DI,
		output SD_CK,
		input SD_DO//,
		/*
		inout [3:0]GPIO
		*/
    );

	wire [1:0] LED_int;
	assign LED = {~LED_int[1], ~LED_int[0]};

	system sys_inst
	(
		.CLK_50MHZ(CLK_50MHZ),
		
		.VGA_R(VGA_R),
		.VGA_G(VGA_G),
		.VGA_B(VGA_B),
		.VGA_HSYNC(VGA_HSYNC),
		.VGA_VSYNC(VGA_VSYNC),
		
		.LED(LED_int),
		
		.BTN_RESET(~BTN[0]),
		.BTN_NMI(~BTN[1]),
		
		.SD_n_CS(SD_nCS),
		.SD_DI(SD_DI),
		.SD_CK(SD_CK),
		.SD_DO(SD_DO),
		
		.AUD_L(AUDIO_L),
		.AUD_R(AUDIO_R),
	 	
		.PS2_CLK1(PS2CLKA),
		.PS2_DATA1(PS2DATA),
		.PS2_CLK2(PS2CLKB),
		.PS2_DATA2(PS2DATB),
		
		.mcb3_dram_dq           (mcb3_dram_dq),  
		.mcb3_dram_a            (mcb3_dram_a),  
		.mcb3_dram_ba           (mcb3_dram_ba),
		.mcb3_dram_ras_n        (mcb3_dram_ras_n),                        
		.mcb3_dram_cas_n        (mcb3_dram_cas_n),                        
		.mcb3_dram_we_n         (mcb3_dram_we_n),                          
		.mcb3_dram_odt          (mcb3_dram_odt),
		.mcb3_dram_cke          (mcb3_dram_cke),                          
		.mcb3_dram_ck           (mcb3_dram_ck),                          
		.mcb3_dram_ck_n         (mcb3_dram_ck_n),       
		.mcb3_dram_dqs          (mcb3_dram_dqs),                          
		.mcb3_dram_dqs_n        (mcb3_dram_dqs_n),
		.mcb3_dram_udqs         (mcb3_dram_udqs),    // for X16 parts                        
		.mcb3_dram_udqs_n       (mcb3_dram_udqs_n),  // for X16 parts
		.mcb3_dram_udm          (mcb3_dram_udm),     // for X16 parts
		.mcb3_dram_dm           (mcb3_dram_dm),
		.mcb3_dram_reset_n      (mcb3_dram_reset_n),
		.mcb3_rzq               (mcb3_rzq)
	);
	
endmodule
