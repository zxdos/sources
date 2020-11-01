`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:09:08 10/31/2020 
// Design Name: 
// Module Name:    random_speed_angle 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Random speed and angle generator for pong ay-3-8500 
// 	Implementation of circuit fig.13 in GIMINI1978.pdf manual:
//    To enhace the excitement and challenge of the various games,
//    this option provides random variations of the ball speed and
//    random changes in the ball rebound angle as the games are being played.
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module random_speed_angle(
	 input wire i_score,
    input wire i_sound,
    input wire i_ball,
    input wire i_manualsp,
    input wire i_randomsp,
    input wire i_manualan,
    input wire i_randoman,
    output wire o_angle,
    output wire o_speed
    );
	 
	reg reg_1 = 0, reg_2 = 0, reg_3 = 0, reg_4 = 0, reg_5 = 0;
	
	//If not random speed set manual speed selection
	assign o_speed = i_randomsp ? reg_5  : i_manualsp;
	
	//If not random angle set manual angle selection
	assign o_angle = i_randoman ? !reg_3 : i_manualan;
	
	//reg 1 logic
	always @(posedge i_ball) begin
		if (!i_score)
			reg_1 <= 1'b0;
		else
			reg_1 <= !reg_1;
	end

	//reg 2 logic
	always @(negedge i_ball) begin
		reg_2 <= reg_1;
	end
	
	//reg 3 logic
	always @(posedge reg_2) begin
		reg_3 <= !reg_3;
	end
	
	//reg 4 logic
	always @(posedge reg_3) begin
		reg_4 <= !reg_4;
	end

	//reg 5 logic
	always @(posedge i_sound) begin
		reg_5 <= reg_4;
	end

endmodule
