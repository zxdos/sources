/*  This file is part of AY-3-8500-1.
    AY-3-8500-1 program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AY-3-8500-1 program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with AY-3-8500-1.  If not, see <http://www.gnu.org/licenses/>.

    Author: Avlixa Twitter: @avlixa
    Version: 1.0
    Date: 25-12-2019 */

// Based on jotego jtgng_keyboard

module keyboard(
    input wire clk,
    input wire rst,

    // ps2 interface
    input wire ps2_clk,
    input wire ps2_data,

    // decodes keys
    output reg [9:0] key_joy1,
    output reg [9:0] key_joy2,
    output reg [6:0] key_gamesel,
	 output reg key_start,
    output reg key_reset,
	 output wire key_hardreset,
	 output reg key_modovideo
);

wire valid;
wire error;

reg key_released;
reg key_extended;
wire [7:0] ps2byte;

reg key_CTRL;
reg key_ALT;
reg key_BKSP;

/* Joystick 1
	Left e06b, right e074, up e075, down e072, - Cursores
   CTRL = 14, space = 29, alt = 11, 
** Joystick 2	
	up "r" 2d, down "f" 2b, left "d" 23, right "g" 34,
	"a" 1c, "s" 1b,"q" 15,

** Teclas de control
	"F1" 05, "F3" 04,
	"1" 16, "2" 1e, "3" 26, "4" 26, "5" 2e, "6" 36, "7" 3d
** Otras
	"P" 4d, "W" 1d, "z" 1a, "x" 22, "c" 21
*/
					  
always @(posedge clk) begin
    if(rst) begin
      key_released <= 1'b0;
      key_extended <= 1'b0;
      key_joy1 <=  'd0;
      key_joy2 <=  'd0;
		key_gamesel <=  'd0;
      key_start<= 2'd0;
      key_reset<= 1'b0;
		key_modovideo<= 1'b0;
		key_CTRL<= 1'b0;
		key_ALT<= 1'b0;
		key_BKSP<= 1'b0;		
    end else begin
        // ps2 decoder has received a valid ps2byte
        if(valid) begin
            if(ps2byte == 8'he0)
                // extended key code
					key_extended <= 1'b1;
				else if(ps2byte == 8'hf0)
						 // release code
					key_released <= 1'b1;
				else begin
                key_extended <= 1'b0;
                key_released <= 1'b0;

                case({key_extended, ps2byte})
                    // first joystick
                    9'h0_29: key_joy1[6] <= !key_released;   // Button 3
                    9'h0_11: key_joy1[5] <= !key_released;   // Button 2
                    9'h0_14: begin
									  key_joy1[4] <= !key_released;   // Button 1
									  key_CTRL <= !key_released; //CTRL	
									  end
                    9'h1_75: key_joy1[3] <= !key_released;   // Up
                    9'h1_72: key_joy1[2] <= !key_released;   // Down
                    9'h1_6b: key_joy1[1] <= !key_released;   // Left
                    9'h1_74: key_joy1[0] <= !key_released;   // Right
                    // second joystick
                    9'h0_15: key_joy2[6] <= !key_released;   // Button 3
                    9'h0_1b: key_joy2[5] <= !key_released;   // Button 2
                    9'h0_1c: key_joy2[4] <= !key_released;   // Button 1
                    9'h0_2d: key_joy2[3] <= !key_released;   // Up
                    9'h0_2b: key_joy2[2] <= !key_released;   // Down
                    9'h0_23: key_joy2[1] <= !key_released;   // Left
                    9'h0_34: key_joy2[0] <= !key_released;   // Right
                    // system control
                    9'h0_05: key_start <= !key_released; //F1
                    9'h0_04: key_reset <= !key_released; //F3
						  9'h0_7e: key_modovideo <= !key_released; //Blq.desp.
						  //9'h0_14: key_CTRL <= !key_released; //CTRL
						  9'h0_11: key_ALT <= !key_released; //ALT
						  9'h0_66: key_BKSP <= !key_released; //Backspace
						  // Game selection
						  9'h0_16: key_gamesel[0] <= !key_released;   // 1 - Game 1
						  9'h0_1e: key_gamesel[1] <= !key_released;   // 2 - Game 2
						  9'h0_26: key_gamesel[2] <= !key_released;   // 3 - Game 3
						  9'h0_25: key_gamesel[3] <= !key_released;   // 4 - Game 4
						  9'h0_2e: key_gamesel[4] <= !key_released;   // 5 - Game 5
						  9'h0_36: key_gamesel[5] <= !key_released;   // 6 - Game 6
						  9'h0_3d: key_gamesel[6] <= !key_released;   // 7 - Game 7
                endcase
            end
        end
    end
end

assign key_hardreset = key_CTRL && key_ALT && key_BKSP;

// the ps2 decoder has been taken from the zx spectrum core
ps2_intf ps2_keyboard (
    .CLK     ( clk           ),
    .nRESET  ( !rst          ),

    // PS/2 interface
    .PS2_CLK  ( ps2_clk         ),
    .PS2_DATA ( ps2_data        ),

    // ps2byte-wide data interface - only valid for one clock
    // so must be latched externally if required
    .DATA         ( ps2byte   ),
    .VALID    ( valid  ),
    .ERROR    ( error  )
);


endmodule
