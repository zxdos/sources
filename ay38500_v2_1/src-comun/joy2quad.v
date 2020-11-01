//============================================================================
//  joy2quad
//
//  Take in digital joystick buttons, and try to estimate a quadrature encoder
//
// 
//  This makes an offset wave pattern for each keyboard stroke.  It might
//  be a good extension to change the size of the wave based on how long the joystick
//  is held down. 
//
//  Copyright (c) 2019 Alan Steremberg - alanswx
//
//   
//============================================================================
// digital joystick button to quadrature encoder

module joy2quad
(
	input wire CLK,
	input wire [31:0] clkdiv,
	
	input wire right,
	input wire left,
	
	output reg [1:0] steer
);


	reg [3:0] state = 0;
	reg [31:0] count = 0;
	reg [4:0] count2 = 0;
	reg [1:0] count3 = 0;

	always @(posedge CLK) begin
	 if (count >0)
	  begin 
		count=count-1;
		if (left == 0 && right == 0) begin
			count2=1;
			count3=0;
		end
	 end
	 else
	 begin
		 count=clkdiv >> count3;
		 count2=count2 + 1;
		 if (count2==0 && count3!=3) begin
			count3=count3+1;
		 end
		 casex(state)
			4'b0000: 
			  begin
				 steer=2'b00;
				 if (left==1)
				 begin
					state=4'b0001;
				 end
				 if (right==1)
				 begin
					state=4'b0101;
				 end

				 end
			4'b0001: 
			  begin
				 steer=2'b00;
				 state=4'b0010;
			  end
			4'b0010: 
			  begin
				 steer=2'b01;
				 state=3'b0011;
			  end
			4'b0011: 
			  begin
				 steer=2'b11;
				 state=4'b0100;
			  end
			4'b0100: 
			  begin
				 steer=2'b10;
				 state=4'b000;
			  end
			4'b0101: 
			  begin
				 steer=2'b00;
				 state=4'b0110;
			  end
			4'b0110: 
			  begin
				 steer=2'b10;
				 state=4'b0111;
			  end
			4'b0111: 
			  begin
				 steer=2'b11;
				 state=4'b1000;
			  end
			4'b1000: 
			  begin
				 steer=2'b01;
				 state=4'b0000;
				 
			  end
		 endcase
	 end
	end
endmodule