/*
 * Release 1 7/5/2019
 * Wrapper to interface the verilog AY-3-8500 to the tinyFPGA BX board
 *
 * Thanks to Suverman, Erika, Ewen McNeill, and Dylan Lipsitz
 * for supporting this work on Patreon,
 * and to Luke Valenty for making this wonderful little board
 * (also anti-thanks to him for using spaces instead of tabs in the example top.v file)
 */

module top (
	input CLK,    // 16MHz clock
	output LED,   // User/boot LED next to power LED
	output USBPU,  // USB pull-up resistor

	input PIN_2, //Manual Serve
	input PIN_3, //Ball Angle
	input PIN_4, //Bat Size
	input PIN_5, //Ball Speed
	input PIN_6, //Practice
	input PIN_7, //Squash
	input PIN_8, //Soccer
	input PIN_9, //Tennis
	input PIN_10, //Rifle1
	input PIN_11, //Rifle2
	input PIN_12, //Reset
	output PIN_14, //SYNC
	output PIN_15, //Video
	inout PIN_18, //Left Player
	inout PIN_19, //Right Player
	output PIN_13 //Sound

);
	// drive USB pull-up resistor to '0' to disable USB
	assign USBPU = 0;
	// divide 16Mhz clock by 8
	reg [2:0] clockdivider = 0;
	wire slow_clock = clockdivider[2:2];
	always @(posedge CLK) begin
		clockdivider <= clockdivider + 1;
	end
	wire reset;
	wire sync;
	wire sound;
	wire sfOut;
	wire lpOut;
	wire rpOut;

	wire ballOut;
	wire ballSpeed;
	wire manServe;
	wire batSize;
	wire ballAngle;

	wire practice;
	wire squash;
	wire soccer;
	wire tennis;
	wire rifle1;
	wire rifle2;

	wire lpDWN;
	wire rpDWN;
	wire rifle1DWN;
	wire tennisDWN;
	assign PIN_14 = sync;
	assign PIN_15 = ballOut | sfOut | lpOut | rpOut;
	assign PIN_18 = lpDWN ? 1'b0 : 1'bz;
	assign PIN_19 = rpDWN ? 1'b0 : 1'bz;
	assign PIN_13 = sound;
	SB_IO #(.PIN_TYPE(6'b 0000_01),.PULLUP(1'b 1)) pin2pu(.PACKAGE_PIN(PIN_2),.D_IN_0(manServe));
	SB_IO #(.PIN_TYPE(6'b 0000_01),.PULLUP(1'b 1)) pin3pu(.PACKAGE_PIN(PIN_3),.D_IN_0(ballAngle));
	SB_IO #(.PIN_TYPE(6'b 0000_01),.PULLUP(1'b 1)) pin4pu(.PACKAGE_PIN(PIN_4),.D_IN_0(batSize));
	SB_IO #(.PIN_TYPE(6'b 0000_01),.PULLUP(1'b 1)) pin5pu(.PACKAGE_PIN(PIN_5),.D_IN_0(ballSpeed));
	SB_IO #(.PIN_TYPE(6'b 0000_01),.PULLUP(1'b 1)) pin6pu(.PACKAGE_PIN(PIN_6),.D_IN_0(practice));
	SB_IO #(.PIN_TYPE(6'b 0000_01),.PULLUP(1'b 1)) pin7pu(.PACKAGE_PIN(PIN_7),.D_IN_0(squash));
	SB_IO #(.PIN_TYPE(6'b 0000_01),.PULLUP(1'b 1)) pin8pu(.PACKAGE_PIN(PIN_8),.D_IN_0(soccer));
	SB_IO #(.PIN_TYPE(6'b 0000_01),.PULLUP(1'b 1)) pin9pu(.PACKAGE_PIN(PIN_9),.D_IN_0(tennis));
	SB_IO #(.PIN_TYPE(6'b 0000_01),.PULLUP(1'b 1)) pin10pu(.PACKAGE_PIN(PIN_10),.D_IN_0(rifle1));
	SB_IO #(.PIN_TYPE(6'b 0000_01),.PULLUP(1'b 1)) pin11pu(.PACKAGE_PIN(PIN_11),.D_IN_0(rifle2));
	SB_IO #(.PIN_TYPE(6'b 0000_01),.PULLUP(1'b 1)) pin12pu(.PACKAGE_PIN(PIN_12),.D_IN_0(reset));
	ay38500NTSC chip(rpOut,lpOut,ballOut,manServe,rpDWN,PIN_19,ballAngle,lpDWN,PIN_18,batSize,ballSpeed,sync,sound,slow_clock,0,rifle1DWN,rifle1,rifle2,1,tennisDWN,tennis,sfOut,soccer,squash,practice,reset);
	//assign LED = sound;
endmodule