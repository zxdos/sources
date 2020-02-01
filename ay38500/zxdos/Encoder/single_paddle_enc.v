`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Create Date:    10:36:40 12/29/2019 
// Module Name:    single_paddle_enc
// Project Name:   pong ay38500 zxdos
// Target Devices: ZXDOS
// Description: 	 Single paddle control, with encoder enabling
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module single_paddle_enc(
    input wire clock,
	 input wire reset,
	 input wire resetChip,
    input wire i_padDWN,
	 input wire i_joy_up,
	 input wire i_key_up,
	 input wire i_joy_down,
	 input wire i_key_down,
    output wire o_padCTRL
    );

	//Parámetro para cambiar valor de paleta cada PTO * 0,5us (debe ser de8 bits)
	parameter PTO = 128;
	//Parámetro posición inicial paletas
	parameter POSINI = 150;
	//localparam RPINI = 100;
	//Parámetro posición límite campos
	parameter FLDTOP = 42;
	parameter FLDBOT = 210; //(234 - 24)


   //Rotary encoder logic, used in place of a pot to control the paddle
	wire [1:0] steer0;
	//wire [1:0] EncoderA = status[15] ? JOYAV[1] : steer0[1];
	wire EncoderA = steer0[1];
	wire EncoderB = steer0[0];
	wire padCtrl;

	joy2quad steerjoy2quad0
	(
		.CLK(clock),
		//.clkdiv('d22500),
		//.clkdiv('d5500),
		.clkdiv('d500), //mínimo 500
		
		.right(i_joy_down || i_key_down), //down
		.left(i_joy_up || i_key_up),	  //up
		
		.steer(steer0)
	);

	//Posición de la paleta
	wire [7:0] r_padPos;
	//Registro de control de la paleta
	reg r_padCtrl;
	
   paddle paddle_ctrl
	(
		.Clk6(clock),
		.Enc_A(EncoderA),
		.Enc_B(EncoderB),
		.Mask1_n( 1'b1),   //No usado, utilizado en superbreak-out
		.Mask2_n(Mask2_n),
		.Vblank(i_padDWN), //
		.Sense1(padCtrl),
		.Sense2(), //No implementado, segundo potenciometro
		.NMI_n(),   //No usado, utilizado en superbreak-out
		.o_padpos(r_padPos)
	);
	////Linea de salida de la paleta
	//assign o_padCTRL = ~padCtrl;



	//Registros de Control paleta izda
	reg [10:0] cont1pto;
	reg [7:0] contNpto;
	//Cables de Control paleta izda
	wire [7:0] contNpto_nxt;
	wire [10:0] cont1pto_nxt;
	//contN -> incrementa 1 cada N=PTO // cont1 -> cuenta hasta PTO
	assign contNpto_nxt = (i_padDWN) ? 8'd0 : (cont1pto == PTO) ? contNpto + 8'd1 : contNpto;
	assign cont1pto_nxt = (cont1pto == PTO || i_padDWN) ? 11'd0 : cont1pto + 11'd1;

//	//Registros para controlar el intervalo entre movimientos y la aceleración
//	reg [17:0] r_temp;
//	reg [4:0] r_acel;
//	
	always @(posedge clock) begin

		//Logica de registro siguiente
		cont1pto <= cont1pto_nxt;
		contNpto <= contNpto_nxt;
		
//		//Reseteo registros utilizados
//		if (reset) begin
//			r_padPos <= POSINI;
//			r_acel <= 5'd1;
//			r_temp <= 18'd0;
//		end else begin
//			// Movimiento jugador izquierdo
//			// Avanza poco a poco al inicio y aumenta la velocidad cuando se deja pulsado
//			if ((i_joy_up || i_key_up) && r_padPos >= FLDTOP) begin //left player up
//				r_temp <= r_temp + 1;
//				if (r_temp[15:0] == 0) begin
//					r_padPos <= r_padPos - r_acel;
//					if (r_temp == 0 && r_acel != 5'b10000) begin
//						r_acel <= r_acel << 1;
//					end
//				end
//			end else if ((i_joy_down || i_key_down) && r_padPos <= FLDBOT) begin //left player down
//				r_temp <= r_temp + 1;
//				if (r_temp[15:0] == 0) begin
//					r_padPos <= r_padPos + r_acel;
//					if (r_temp == 0 && r_acel != 5'b10000) begin
//						r_acel <= r_acel << 1;
//					end
//				end			
//			end else begin
//				r_padPos <= r_padPos;
//				r_acel <= 5'd1;
//				r_temp <= 18'd0;
//			end
//		end
//		
		// Cambiar control de paleta de 0 a 1 en la línea que le corresponde
		// Para comenzar a pintar la paleta en el campo
		// Equivale a la carga de RC (pad de 1MOhm + C 0.1uF)
		if (i_padDWN) begin
			//Se reinicia con i_padDWN con cada sincronismo vertical
			r_padCtrl <= 0;
		end else begin
			// paleta izda a X ptos
			if (resetChip)
				r_padCtrl <= 1'b1;
			else if (contNpto >= r_padPos) begin
				r_padCtrl <= 1'b1;
			end
		end
	end
	
	//Linea de salida de la paleta
	assign o_padCTRL = r_padCtrl;
	
endmodule
