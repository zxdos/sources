`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Create Date:    10:36:40 12/29/2019 
// Module Name:    single_paddle
// Project Name:   pong ay38500 zxdos
// Target Devices: ZXDOS
// Description: 	 Single paddle control
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module single_paddle(
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
	parameter FLDBOT = 212; //(234 - 24)

	//Registro de control de la paleta
	reg r_padCtrl;

	//Posición de la paleta
	reg [7:0] r_padPos;

	//Registros de Control paleta izda
	reg [10:0] cont1pto;
	reg [7:0] contNpto;
	//Cables de Control paleta izda
	wire [7:0] contNpto_nxt;
	wire [10:0] cont1pto_nxt;
	//contN -> incrementa 1 cada N=PTO // cont1 -> cuenta hasta PTO
	assign contNpto_nxt = (i_padDWN) ? 8'd0 : (cont1pto == PTO) ? contNpto + 8'd1 : contNpto;
	assign cont1pto_nxt = (cont1pto == PTO || i_padDWN) ? 11'd0 : cont1pto + 11'd1;

	//Registros para controlar el intervalo entre movimientos y la aceleración
	reg [17:0] r_temp;
	reg [5:0] r_acel;
	
	always @(posedge clock) begin

		//Logica de registro siguiente
		cont1pto <= cont1pto_nxt;
		contNpto <= contNpto_nxt;
		
		//Reseteo registros utilizados
		if (reset) begin
			r_padPos <= POSINI;
			r_acel <= 'd1;
			r_temp <= 18'd0;
		end else begin
			// Movimiento jugador X
			// Avanza poco a poco al inicio y aumenta la velocidad cuando se deja pulsado
			if ((i_joy_up || i_key_up) && r_padPos >= FLDTOP) begin //left player up
				r_temp <= r_temp + 1;
				if (r_temp[14:0] == 0) begin
					r_padPos <= r_padPos - r_acel;
					if (r_temp == 0 && r_acel != 6'b100000) begin
						r_acel <= r_acel << 1;
					end
				end
			end else if ((i_joy_down || i_key_down) && r_padPos <= FLDBOT) begin //left player down
				r_temp <= r_temp + 1;
				if (r_temp[14:0] == 0) begin
					r_padPos <= r_padPos + r_acel;
					if (r_temp == 0 && r_acel != 6'b100000) begin
						r_acel <= r_acel << 1;
					end
				end			
			end else begin
				r_padPos <= r_padPos;
				r_acel <= 5'd1;
				r_temp <= 18'd0;
			end
		end
		
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
