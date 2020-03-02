`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Create Date:    14:32:06 12/28/2019 
// Module Name:  modo_juego 
// Project Name: pong ay38500 zxdos
// Target Devices: ZXDOS
// Description: Game mode selection AY-3-8500 pong core for ZXDOS
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module modo_juego(
    input wire clk, 
	 input wire  reset,
	 input wire  [6:0] i_gamesel,
    output wire  o_tennis,
    output wire  o_soccer,
    output wire  o_squash,
    output wire  o_practice,
    output wire  o_rifle1,
	 output wire  o_rifle2
    );
	
	reg  r_tenn, r_socc, r_squa, r_prac, r_rif1, r_rif2;
	
	//asignaciones modo juego -> 0 seleccionado
	assign o_tennis = r_tenn; //tennisDWN ? 1'b0 : 1'b1;
	assign o_soccer = r_socc;
	assign o_squash = r_squa;
	assign o_practice = r_prac;
	assign o_rifle1 = r_rif1; //rifle1DWN ? 1'b0 : 1'b1;
	assign o_rifle2 = r_rif2;
	
	always @(posedge clk) begin
		//Reseteo registros utilizados
		if (reset) begin
			r_tenn <= 1'b0;
			r_socc <= 1'b1;
			r_squa <= 1'b1;
			r_prac <= 1'b1;
			r_rif1 <= 1'b1;
			r_rif2 <= 1'b1;
		end else begin
			case(i_gamesel)
             // first joystick
             7'b0000001: //tennis
								begin
									r_tenn <= 1'b0;
									r_socc <= 1'b1;
									r_squa <= 1'bZ;
									r_prac <= 1'bZ;
									r_rif1 <= 1'bZ;
									r_rif2 <= 1'bZ;
								end 
             7'b0000010: //soccer
				 				begin
									r_tenn <= 1'b1;
									r_socc <= 1'b0;
									r_squa <= 1'bZ;
									r_prac <= 1'bZ;
									r_rif1 <= 1'bZ;
									r_rif2 <= 1'bZ;
								end 
             7'b0000100: //squash
				 				begin
									r_tenn <= 1'b1;
									r_socc <= 1'b1;
									r_squa <= 1'b0;
									r_prac <= 1'bZ;
									r_rif1 <= 1'bZ;
									r_rif2 <= 1'bZ;
								end 
             7'b0001000: //practice
				 				begin
									r_tenn <= 1'b1;
									r_socc <= 1'b1;
									r_squa <= 1'bZ;
									r_prac <= 1'b0;
									r_rif1 <= 1'bZ;
									r_rif2 <= 1'bZ;
								end 
             7'b0010000: //rifle1
				 				begin
									r_tenn <= 1'bZ;
									r_socc <= 1'bZ;
									r_squa <= 1'b1;
									r_prac <= 1'b1;
									r_rif1 <= 1'b0;
									r_rif2 <= 1'bZ;
								end 
             7'b0100000: //rifle2
				 				begin
									r_tenn <= 1'bZ;
									r_socc <= 1'bZ;
									r_squa <= 1'b1;
									r_prac <= 1'b1;
									r_rif1 <= 1'b1;
									r_rif2 <= 1'b0;
								end 
             7'b1000000: //extra game
				 				begin
									r_tenn <= 1'bZ;
									r_socc <= 1'bZ;
									r_squa <= 1'bZ;
									r_prac <= 1'bZ;
									r_rif1 <= 1'bZ;
									r_rif2 <= 1'bZ;
								end 
			endcase
		end
	end	

endmodule
