`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:41:05 12/28/2019 
// Design Name: 
// Module Name:    test_routines 
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
module test_routines(
    input wire clk50,
	 input wire key_reset,
	 input wire host_reset_n
    );

 reg [7:0] poweron_reset = 8'h00;
 always @(posedge clk50) begin
	  
		poweron_reset <= {poweron_reset[6:0],1'b1};
 end

// assign LED1 = 1'b0;
 
// soft reset
 reg [4:0] q = 5'b00000;
 wire reboot_ff;

//// -> este tiempo de reinicio es el de la versión beta
//always @(posedge clkvga) begin
// 	q[0] <= (reset || key_reset || ~host_reset_n); 
//	q[1] <= q[0]; q[2] <= q[1]; q[3] <= q[2]; q[4] <= q[3];
//	reboot_ff <=  // ( q[4] && ( q[3]) && ( q[2]) && ( q[1]) )
//					  //  ( q[4] && ( q[3]) && ( q[2]) && (!q[1]) )
//					    ( q[4] && ( q[3]) && (!q[2]) && (!q[1]) )
//					||	( q[4] && (!q[3]) && (!q[2]) && (!q[1]) );
// end

// -> pruebas con otros tiempos, no están funcionando
 always @(posedge clk50) begin
//	q[0] <= (reset || key_reset || ~host_reset_n); 
//	q[1] <= q[0]; q[2] <= q[1]; q[3] <= q[2]; q[4] <= q[3];
//	reboot_ff <=  // ( q[4] && ( q[3]) && ( q[2]) && ( q[1]) )
//					  //  ( q[4] && ( q[3]) && ( q[2]) && (!q[1]) )
//					  //  ( q[4] && ( q[3]) && (!q[2]) && (!q[1]) )
//						( q[4] && (!q[3]) && (!q[2]) && (!q[1]) );
	if (reset || key_reset || ~host_reset_n) begin
		q <= 5'd1;
	end else begin 
		if ( reboot_ff )
			q <= q + 1;
		else 
			q <= q;
	end
 end
 assign reboot_ff = q[4] || q[3] || q[2] || q[1] || q[0];

 wire resetChip = reboot_ff;
 wire reset 		= ~poweron_reset[7];



wire clk1Hz;
wire clk1Hzb;

// refresing rate around 0,75Hz (50MHz/2^26)
	localparam N = 27;
	// declaración
	reg [N-1:0] q_reg = 0;
	wire [N-1:0] q_next;
	
	//Contador N-bit
	always @(posedge clk50)
		q_reg = q_next;
	//Next state logic
	assign q_next = q_reg + 1;
	
	assign clk1Hz = q_reg[N-1];

//// refresing rate around 16Hz (7MHz/2^22)
 //refresing rate around 1Hz (60Hz/2^6)
	localparam M = 7;
	// declaración
	reg [M-1:0] q_reg2 = 0;
	wire [M-1:0] q_next2;
	
	//Contador N-bit
	always @(posedge vs)
		q_reg2 = q_next2;
	//Next state logic
	assign q_next2 = q_reg2 + 1;
	
	assign clk1Hzb = q_reg2[M-1];


endmodule
