`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Create Date:    10:19:47 12/29/2019 
// Module Name:    paddle_control 
// Project Name:   pong ay38500 zxdos
// Target Devices: ZXDOS
// Description: 	 Paddle control unit
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module
	paddle_control(
    input wire clock,  //clock 2MHz
	 input wire clk16,  //clock 16MHz
	 input wire hsync,
	 input wire reset,
 	 input wire resetChip,
	 input wire i_lpDWN,
    input wire i_rpDWN,
	 input wire [7:0] i_joy1, 
	 input wire [7:0] i_joy2, 
	 input wire [9:0] i_key_joy1,
	 input wire [9:0] i_key_joy2,
	 input wire [1:0] i_enc1,
	 input wire [1:0] i_enc2,
//	 input wire [1:0] i_enc3,
//	 input wire [1:0] i_enc4,
	 input wire i_four_players,
    output wire o_lpctrl,
    output wire o_rpctrl
    );
	//Parámetro para cambiar valor de paleta cada PTO * 0,5us (debe ser de8 bits)
	parameter PTO = 128;
	 
	// Control entrada paletas
	//assign o_lpctrl = i_lpDWN ? 1'b0 : 1'bz; // solo válido para un circuito físico con RC
	//assign o_rpctrl = i_rpDWN ? 1'b0 : 1'bz; // solo válido para un circuito físico con RC
	//Control 2/4 jugadores
	reg r_LpadDouble = 0;
	reg r_RpadDouble = 0;
	always @(posedge i_lpDWN) begin
		r_LpadDouble <= !r_LpadDouble;
	end
	always @(posedge i_rpDWN) begin
		r_RpadDouble <= !r_RpadDouble;
	end
	
	wire lpctrl1, lpctrl2;
	wire rpctrl1, rpctrl2;
	assign o_lpctrl = (lpctrl1 && !r_LpadDouble) 
							|| (lpctrl1 && r_LpadDouble && !i_four_players)
							|| (lpctrl2 && r_LpadDouble && i_four_players);
	assign o_rpctrl = (rpctrl1 && !r_RpadDouble) 
							|| (rpctrl1 && r_RpadDouble && !i_four_players)
							|| (rpctrl2 && r_RpadDouble && i_four_players);

	//Control mediante paddle Encoder - paleta derecha 1 
	// movim por joystick 4 jugadores / joy+keyborad 2 jugadores / enconder joyst.2, pin 1,2
	wire [1:0] steerR1,steerR2; //simulación encoder mediante teclado/joytick
	reg  [1:0] steerR_aux, enc1_aux, encR_aux;
	
	// Control de cambio steer o encoder para envíar a dedodificador de encoder
	always @(posedge clk16) begin
		steerR_aux <= steerR1;
		enc1_aux <= i_enc1[1:0];
		if (steerR_aux != steerR1) //envíar cambio steer (teclado/joystick)
			encR_aux <= steerR1;
		else if (enc1_aux != i_enc1[1:0]) //enviar cambio encoder
			encR_aux <= i_enc1[1:0];
	end

	paddle paddle_encoderR1(
		.Clk6(clk16),
		.Hsync(hsync),
		.Enc_A(encR_aux[0]),
		.Enc_B(encR_aux[1]),
		.Vblank( i_rpDWN ),
		.Direction(),
		.EncEnable(),
		.Sense1( rpctrl1 )
		);

	joy2quad steerjoy2quadR1
	(
		.CLK(clock),
		.clkdiv('d8000),
		
		.right(!i_joy1[0] || (i_key_joy1[3] && !i_four_players)),
		.left(!i_joy1[1] || (i_key_joy1[2] && !i_four_players)),
		
		.steer(steerR1)
	);


	// control paleta derecha 2
	// movim por keyboard solo 4 jugadores
	paddle paddle_encoderR2(
		.Clk6(clk16),
		.Hsync(hsync),
		.Enc_A(steerR2[0]),
		.Enc_B(steerR2[1]),
		.Vblank( i_rpDWN ),
		.Direction(),
		.EncEnable(),
		.Sense1( rpctrl2 )
		);

	joy2quad steerjoy2quadR2
	(
		.CLK(clock),
		.clkdiv('d8000),
		
		.right(i_key_joy1[3] && i_four_players),
		.left(i_key_joy1[2] && i_four_players),
		
		.steer(steerR2)
	);

	//Control mediante paddle Encoder - paleta izquierda 1 
	// movim por joystick 4 jugadores / joy+keyborad 2 jugadores / enconder joyst.2, pin 1,2
	wire [1:0] steerL1,steerL2; //simulación encoder mediante teclado/joytick
	reg  [1:0] steerL_aux, enc2_aux, encL_aux;
	
	// Control de cambio steer o encoder para envíar a dedodificador de encoder
	always @(posedge clk16) begin
		steerL_aux <= steerL1;
		enc2_aux <= i_enc2[1:0];
		if (steerL_aux != steerL1) //envíar cambio steer (teclado/joystick)
			encL_aux <= steerL1;
		else if (enc2_aux != i_enc2[1:0]) //enviar cambio encoder
			encL_aux <= i_enc2[1:0];
	end

	paddle paddle_encoderL1(
		.Clk6(clk16),
		.Hsync(hsync),
		.Enc_A(encL_aux[0]),
		.Enc_B(encL_aux[1]),
		.Vblank( i_lpDWN ),
		.Direction(),
		.EncEnable(),
		.Sense1( lpctrl1 )
		);

	joy2quad steerjoy2quadL1
	(
		.CLK(clock),
		.clkdiv('d8000),
		
		.right(!i_joy2[0] || (i_key_joy2[3] && !i_four_players)),
		.left(!i_joy2[1] || (i_key_joy2[2] && !i_four_players)),
		
		.steer(steerL1)
	);


	// control paleta izquierda 2
	// movim por keyboard solo 4 jugadores
	paddle paddle_encoderL2(
		.Clk6(clk16),
		.Hsync(hsync),
		.Enc_A(steerL2[0]),
		.Enc_B(steerL2[1]),
		.Vblank( i_lpDWN ),
		.Direction(),
		.EncEnable(),
		.Sense1( lpctrl2 )
		);

	joy2quad steerjoy2quadL2
	(
		.CLK(clock),
		.clkdiv('d8000),
		
		.right(i_key_joy2[3] && i_four_players),
		.left(i_key_joy2[2] && i_four_players),
		
		.steer(steerL2)
	);
	
endmodule
