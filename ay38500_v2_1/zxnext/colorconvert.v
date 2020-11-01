`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:00:03 01/25/2020 
// Design Name: 
// Module Name:    colorconvert 
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
module colorconvert(
	 //input wire  clkvideo,
    input wire  hsync,
	 input wire  [5:0] gamesel,
	 input wire  [3:0] vincomp,
	 input wire  [3:0] vmode,
    output wire [12:0] voutrgb
    );
	reg [12:0] colorOut = 0;
	//wire [12:0] colorOut;
	
	assign voutrgb = colorOut;
	
	wire ballOut;
	wire showBall = 1'b1;
	wire lpOut;
	wire rpOut;
	wire scorefieldOut;
	wire [10:0] eval;
	assign rpOut         = vincomp[0];
	assign lpOut         = vincomp[1];
	assign scorefieldOut = vincomp[2];
	assign ballOut       = vincomp[3];
	
//	assign eval = {hsync, (ballOut & showBall),lpOut,rpOut,scorefieldOut,vmode};
	assign eval[10] = hsync;
	assign eval[9:7] = (!gamesel[5]) ? 3'b001 : //tennis
						    (!gamesel[4]) ? 3'b010 : //soccer
							 (!gamesel[3]) ? 3'b011 : //squash
							 (!gamesel[2]) ? 3'b100 : //practice
							 ( gamesel[1] & gamesel[0] ) ? 3'b010 : //handicap == soccer
																	 3'b000; // resto
	assign eval[6:4] = (ballOut & showBall) ? 3'b001 : //ball
						    (lpOut) 				 ? 3'b010 : //left paddle
							 (rpOut) 				 ? 3'b011 : //right paddle
							 (scorefieldOut) 		 ? 3'b100 : //scorefield
															3'b000; // resto
	assign eval[3:0] = vmode;
 
		
	always @* begin
	  if ( eval[10] == 1'b1 )
			colorOut <= 12'h000; //hsync
	  else
	    casex ( eval )
//// HSYNC
//				11'b1_xxx_xxx_xxxx: colorOut <= 12'h000; //hsync
// Mono				
				11'b0_xxx_001_0000: colorOut <= 12'hFFF; //Mono
				11'b0_xxx_010_0000: colorOut <= 12'hFFF; //Mono
				11'b0_xxx_011_0000: colorOut <= 12'hFFF; //Mono
				11'b0_xxx_100_0000: colorOut <= 12'hFFF; //Mono
				11'b0_xxx_000_0000: colorOut <= 12'h000; //Mono
//Greyscale
				11'b0_xxx_001_0001: colorOut <= 12'hFFF; //Greyscale
				11'b0_xxx_010_0001: colorOut <= 12'hFFF; //Greyscale
				11'b0_xxx_011_0001: colorOut <= 12'h000; //Greyscale
				11'b0_xxx_100_0001: colorOut <= 12'hFFF; //Greyscale
				11'b0_xxx_000_0001: colorOut <= 12'h999; //Greyscale
//RGB1
				11'b0_xxx_001_0010: colorOut <= 12'hF00; //RGB1
				11'b0_xxx_010_0010: colorOut <= 12'h0F0; //RGB1
				11'b0_xxx_011_0010: colorOut <= 12'h0F0; //RGB1
				11'b0_xxx_100_0010: colorOut <= 12'h00F; //RGB1
				11'b0_xxx_000_0010: colorOut <= 12'h000; //RGB1

//RGB2
				11'b0_xxx_001_0011: colorOut <= 12'hFFF;//RGB2
				11'b0_xxx_010_0011: colorOut <= 12'h00F;//RGB2
				11'b0_xxx_011_0011: colorOut <= 12'hF00;//RGB2
				11'b0_xxx_100_0011: colorOut <= 12'h0F0;//RGB2
				11'b0_xxx_000_0011: colorOut <= 12'h000;//RGB2

//Field
				11'b0_xxx_001_0100: colorOut <= 12'h000;//Field
				11'b0_xxx_010_0100: colorOut <= 12'hF00;//Field
				11'b0_xxx_011_0100: colorOut <= 12'h00F;//Field
				11'b0_xxx_100_0100: colorOut <= 12'hFFF;//Field
				11'b0_xxx_000_0100: colorOut <= 12'h4F4;//Field

//Ice
				11'b0_xxx_001_0101: colorOut <= 12'h000;//Ice
				11'b0_xxx_010_0101: colorOut <= 12'hF00;//Ice
				11'b0_xxx_011_0101: colorOut <= 12'h030;//Ice
				11'b0_xxx_100_0101: colorOut <= 12'h55F;//Ice
				11'b0_xxx_000_0101: colorOut <= 12'hCCF;//Ice

//Christmas
				11'b0_xxx_001_0110: colorOut <= 12'hFFF;//Christmas
				11'b0_xxx_010_0110: colorOut <= 12'hF00;//Christmas
				11'b0_xxx_011_0110: colorOut <= 12'h030;//Christmas
				11'b0_xxx_100_0110: colorOut <= 12'hFFF;//Christmas
				11'b0_xxx_000_0110: colorOut <= 12'h000;//Christmas

//Marksman
				11'b0_xxx_001_0111: colorOut <= 12'hFFF;//Marksman
				11'b0_xxx_010_0111: colorOut <= 12'hFF0;//Marksman
				11'b0_xxx_011_0111: colorOut <= 12'h000;//Marksman
				11'b0_xxx_100_0111: colorOut <= 12'hFFF;//Marksman
				11'b0_xxx_000_0111: colorOut <= 12'h0D0;//Marksman

//Las Vegas
				11'b0_xxx_001_1000: colorOut <= 12'hFF0;//Las Vegas
				11'b0_xxx_010_1000: colorOut <= 12'hFF0;//Las Vegas
				11'b0_xxx_011_1000: colorOut <= 12'hF0F;//Las Vegas
				11'b0_xxx_100_1000: colorOut <= 12'hF90;//Las Vegas
				11'b0_xxx_000_1000: colorOut <= 12'h000;//Las Vegas

//TRQ Colors
				11'b0_xxx_001_1010: colorOut <= 12'hFFF;//TRQ  - white
				11'b0_xxx_010_1010: colorOut <= 12'hFF0;//TRQ  - yellow
				11'b0_xxx_011_1010: colorOut <= 12'h00F;//TRQ  - blue
				11'b0_xxx_100_1010: colorOut <= 12'hF0F;//TRQ  - magenta
				11'b0_xxx_000_1010: colorOut <= 12'h4F4;//TRQ  - green


//AY-3-8515 colors *****************************

//AY-3-8515 tennis
				11'b0_001_001_1001: colorOut <= 12'hFFF;//ball - white
				11'b0_001_010_1001: colorOut <= 12'h00F;//lpad - blue
				11'b0_001_011_1001: colorOut <= 12'hF0F;//rpad - magenta
				11'b0_001_100_1001: colorOut <= 12'hFF0;//scfld - yellow
				11'b0_001_000_1001: colorOut <= 12'h0F0;//rest - green
//AY-3-8515 soccer//handicap
				11'b0_010_001_1001: colorOut <= 12'hFFF;//ball - white
				11'b0_010_010_1001: colorOut <= 12'hF00;//lpad - red
				11'b0_010_011_1001: colorOut <= 12'h008;//rpad - dark blue
				11'b0_010_100_1001: colorOut <= 12'h0FF;//scfld - cyan
				11'b0_010_000_1001: colorOut <= 12'h00F;//rest - blue
//AY-3-8515 squash
				11'b0_011_001_1001: colorOut <= 12'hFFF;//ball - white
				11'b0_011_010_1001: colorOut <= 12'hFF0;//lpad - yellow
				11'b0_011_011_1001: colorOut <= 12'h00F;//rpad - blue
				11'b0_011_100_1001: colorOut <= 12'hFCC;//scfld - light red
				11'b0_011_000_1001: colorOut <= 12'hF0F;//rest - magenta
//AY-3-8515 practice
				11'b0_100_001_1001: colorOut <= 12'hFFF;//ball - white
				11'b0_100_010_1001: colorOut <= 12'h00F;//lpad - blue
				11'b0_100_011_1001: colorOut <= 12'hA22;//rpad - brown
				11'b0_100_100_1001: colorOut <= 12'h0F0;//scfld - green
				11'b0_100_000_1001: colorOut <= 12'h096;//rest - cyan-green

//	  Modo sin definir
				11'b0_xxx_001_xxxx: colorOut <= 12'hFFF; //Mono
				11'b0_xxx_010_xxxx: colorOut <= 12'hF00; //RGB1
				11'b0_xxx_011_xxxx: colorOut <= 12'hF00; //RGB1
				11'b0_xxx_100_xxxx: colorOut <= 12'hFFF; //Mono
				11'b0_xxx_000_xxxx: colorOut <= 12'h000; //Mono

//	  Otros ??
				default: colorOut <= 12'h000;//valor por defecto
	    endcase
	end
endmodule
