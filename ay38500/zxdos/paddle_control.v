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
	 input wire clk25,  //clock 25MHz
	 input wire reset,
 	 input wire resetChip,
	 input wire i_lpDWN,
    input wire i_rpDWN,
	 input wire [7:0] i_joy1, 
	 input wire [7:0] i_joy2, 
	 input wire [9:0] i_key_joy1,
	 input wire [9:0] i_key_joy2,
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
	// control paleta izquierda 1 
	// movim por joystick 4 jugadores / joy+keyborad 2 jugadores
	single_paddle #( .PTO(PTO),
						.POSINI(150) )
		 paddle_left(
			 .clock(clock),
			 .reset(reset),
			 .resetChip(resetChip),
			 .i_padDWN(i_lpDWN),
			 .i_joy_up(!i_joy1[0]),
			 .i_key_up(i_key_joy2[3] && !i_four_players),	 
			 .i_joy_down(!i_joy1[1]),
			 .i_key_down(i_key_joy2[2] && !i_four_players),
			 .o_padCTRL(lpctrl1)
			 );
	
	// control paleta izquierda 2
	// movim por keyboard solo 4 jugadores
	single_paddle #( .PTO(PTO),
						.POSINI(100) )
		 paddle_left2(
			 .clock(clock),
			 .reset(reset),
			 .resetChip(resetChip),
			 .i_padDWN(i_lpDWN),
			 .i_joy_up( ),
			 .i_key_up(i_key_joy2[3] && i_four_players),	 
			 .i_joy_down( ),
			 .i_key_down(i_key_joy2[2] && i_four_players),
			 .o_padCTRL(lpctrl2)
			 );

	// control paleta derecha 1
	// movim por joystick 4 jugadores / joy+keyborad 2 jugadores
	single_paddle #( .PTO(PTO),
						.POSINI(100) )
		 paddle_right(
			 .clock(clock),
			 .reset(reset),
			 .resetChip(resetChip),
			 .i_padDWN(i_rpDWN),
			 .i_joy_up(!i_joy2[0]),
			 .i_key_up(i_key_joy1[3] && !i_four_players),	 
			 .i_joy_down(!i_joy2[1]),
			 .i_key_down(i_key_joy1[2] && !i_four_players),
			 .o_padCTRL(rpctrl1)
			 );
	// control paleta derecha 2
	// movim por keyboard solo 4 jugadores
	single_paddle #( .PTO(PTO),
						.POSINI(150) )
		 paddle_right2(
			 .clock(clock),
			 .reset(reset),
			 .resetChip(resetChip),
			 .i_padDWN(i_rpDWN),
			 .i_joy_up( ),
			 .i_key_up(i_key_joy1[3] && i_four_players),	 
			 .i_joy_down( ),
			 .i_key_down(i_key_joy1[2] && i_four_players),
			 .o_padCTRL(rpctrl2)
			 );

//****
//	// Control entrada paletas
//	//assign lpIN = lpDWN ? 1'b0 : 1'bz; // solo válido para un circuito físico con RC
//	//assign rpIN = rpDWN ? 1'b0 : 1'bz; // solo válido para un circuito físico con RC
//	reg r_lpIN, r_rpIN;
//	assign lpIN = r_lpIN;
//	assign rpIN = r_rpIN;
//
//	//Parámetro para cambiar valor de paleta cada PTO * 0,5us (debe ser de8 bits)
//	localparam PTO = 128;

//	//Registros de Control paleta izda
//	reg [10:0] cont1ptol;
//	reg [7:0] contNptol;
//	//Cables de Control paleta izda
//	wire [7:0] contNptol_nxt;
//	wire [10:0] cont1ptol_nxt;
//	//contN -> incrementa 1 cada N=PTO // cont1 -> cuenta hasta PTO
//	assign contNptol_nxt = (lpDWN) ? 8'd0 : (cont1ptol == PTO) ? contNptol + 8'd1 : contNptol;
//	assign cont1ptol_nxt = (cont1ptol == PTO || lpDWN) ? 11'd0 : cont1ptol + 11'd1;
//
//	//Registros de Control paleta dcha
//	reg [10:0] cont1ptor;
//	reg [7:0] contNptor;
//	//Cables de Control paleta dcha
//	wire [7:0] contNptor_nxt;
//	wire [10:0] cont1ptor_nxt;
//	//contN -> incrementa 1 cada N=PTO // cont1 -> cuenta hasta PTO
//	assign contNptor_nxt = (rpDWN) ? 8'd0 : (cont1ptor == PTO) ? contNptor + 8'd1 : contNptor;
//	assign cont1ptor_nxt = (cont1ptor == PTO || rpDWN) ? 11'd0 : cont1ptor + 11'd1;
//
//
//	//Posición de la paleta
//	reg [7:0] r_lpPos;
//	reg [7:0] r_rpPos;
//	//Registros para controlar el intervalo entre movimientos y la aceleración
//	reg [17:0] l_temp;
//	reg [4:0] l_acel;
//	reg [17:0] r_temp;
//	reg [4:0] r_acel;
//
//	//Parámetro posición inicial paletas
//	localparam LPINI = 150;
//	localparam RPINI = 100;
//	//Parámetro posición límite campos
//	localparam FLDTOP = 42;
//	localparam FLDBOT = 210; //(234 - 24)
//	
//	always @(posedge clock2M) begin
//
//		//Logica de registro siguiente
//		cont1ptol <= cont1ptol_nxt;
//		contNptol <= contNptol_nxt;
//		cont1ptor <= cont1ptor_nxt;
//		contNptor <= contNptor_nxt;		
//		
//		//Reseteo registros utilizados
//		if (reset) begin
//			r_lpPos <= LPINI;
//			r_rpPos <= RPINI;
//			l_acel <= 5'd1;
//			l_temp <= 18'd0;
//			r_acel <= 5'd1;
//			r_temp <= 18'd0;
//		end else begin
//			// Movimiento jugador izquierdo
//			// Avanza poco a poco al inicio y aumenta la velocidad cuando se deja pulsado
//			if ((!joy1[0] || key_joy2[3]) && r_lpPos >= FLDTOP) begin //left player up
//				l_temp <= l_temp + 1;
//				if (l_temp[15:0] == 0) begin
//					r_lpPos <= r_lpPos - l_acel;
//					if (l_temp == 0 && l_acel != 5'b10000) begin
//						l_acel <= l_acel << 1;
//					end
//				end
//			end else if ((!joy1[1] || key_joy2[2]) && r_lpPos <= FLDBOT) begin //left player down
//				l_temp <= l_temp + 1;
//				if (l_temp[15:0] == 0) begin
//					r_lpPos <= r_lpPos + l_acel;
//					if (l_temp == 0 && l_acel != 5'b10000) begin
//						l_acel <= l_acel << 1;
//					end
//				end			
//			end else begin
//				r_lpPos <= r_lpPos;
//				l_acel <= 5'd1;
//				l_temp <= 18'd0;
//			end
//			
//			// Movimiento jugador derecho
//			// Avanza poco a poco al inicio y aumenta la velocidad cuando se deja pulsado
//			if ((!joy2[0] || key_joy1[3]) && r_rpPos >= FLDTOP) begin//right player up
//				r_temp <= r_temp + 1;
//				if (r_temp[15:0] == 0) begin
//					r_rpPos <= r_rpPos - r_acel;
//					if (r_temp == 0 && r_acel != 5'b10000) begin
//						r_acel <= r_acel << 1;
//					end
//				end				
//			end else if ((!joy2[1] || key_joy1[2]) && r_rpPos <= FLDBOT) begin //right player down
//				r_temp <= r_temp + 1;
//				if (r_temp[15:0] == 0) begin
//					r_rpPos <= r_rpPos + r_acel;
//					if (r_temp == 0 && r_acel != 5'b10000) begin
//						r_acel <= r_acel << 1;
//					end
//				end			
//			end else begin
//				r_rpPos <= r_rpPos;	
//				r_acel <= 5'd1;
//				r_temp <= 18'd0;
//			end
//		end
//
//		// Cambiar control de paleta de 0 a 1 en la línea que le corresponde
//		// Para comenzar a pintar la paleta en el campo
//		// Equivale a la carga de RC (pad de 1MOhm + C 0.1uF)
//		if (lpDWN) begin
//			//Se reinicia con lpDWN con cada sincronismo vertical
//			r_lpIN <= 0;
//		end else begin
//			// paleta izda a X ptos
//			if (resetChip)
//				r_lpIN <= 1'b1;
//			else if (contNptol >= r_lpPos) begin
//				r_lpIN <= 1'b1;
//			end
//		end
//		if (rpDWN) begin
//			//Se reinicia con rpDWN con cada sincronismo vertical
//			r_rpIN <= 0;
//		end else begin
//			// paleta dcha a Y ptos
//			if (resetChip)
//				r_rpIN <= 1'b1;
//			else if (contNptor >= r_rpPos) begin
//				r_rpIN <= 1'b1;
//			end
//		end		
//	end
	
endmodule
