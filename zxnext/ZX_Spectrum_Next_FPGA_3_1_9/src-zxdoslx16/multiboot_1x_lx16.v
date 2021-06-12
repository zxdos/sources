`timescale 1ns / 1ps
`default_nettype none

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:00:24 07/18/2018 
// Design Name: 
// Module Name:    sdramtest 
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

module multiboot (
	 input wire reset_i,
    input wire clk_icap,
	 input wire REBOOT,
	 input wire reboot_core_x,
	 input wire [4:0] reboot_core_id
    );
              
    reg [23:0] spi_addr = 24'h098000;  // default value lx16
	 //reg [23:0] spi_addr = 24'h0B0000;  // default value lx25
    reg [4:0] q = 5'b00000;
    reg reboot_ff = 1'b0;

    always @(posedge clk_icap) begin
      //q[0] <= REBOOT;
		if (reset_i) begin
			q <= 5'b0;
			reboot_ff <= 1'b0;
		end
		else begin
			q[0] <= reboot_sig;
			q[1] <= q[0];
			q[2] <= q[1];
			q[3] <= q[2];
			q[4] <= q[3];
			reboot_ff <= (q[4] && (!q[3]) && (!q[2]) && (!q[1]) );
		end
    end
	 
	 wire reboot_sig; //reboot signal
	 reg reboot_core_tick;
	 reg reboot_core_prev;
	 always @(posedge clk_icap) begin
		if (reset_i) begin
			reboot_core_prev <= 1'b0;
			reboot_core_tick <= 1'b0;
		end
		else begin
			reboot_core_prev <= reboot_core_x || REBOOT;
			if (reboot_core_prev == 1'b0 && (reboot_core_x == 1'b1 || REBOOT == 1'b1)) 
				reboot_core_tick <= 1'b1;
			else
				reboot_core_tick <= 1'b0;
		end
	 end 
	 
	 //assign reboot_sig = REBOOT || reboot_core_x_tick;
	 assign reboot_sig = reboot_core_tick;
		 
	 always @(posedge reboot_core_tick) begin
			spi_addr[11:0] <= 12'h000;
			if (REBOOT) begin
				spi_addr[23:12] <= 12'h098;  // default value lx16
			end
			else begin
	//		  spi_addr <= 24'h10C000; //core 2
			 //spi_addr[23:12] <= 12'h0B0 + 12'h0C4 * ( reboot_core_id - 1'd1 );
			 spi_addr[23:12] <= ( 12'h074 * reboot_core_id ) + 12'h024;
			end
	 end
	 
    multiboot_spartan6 multiboot (
        .CLK(clk_icap),
        //.MBT_RESET(1'b0),
		  .MBT_RESET(reset_i), 
        .MBT_REBOOT(reboot_ff),
        .spi_addr(spi_addr)
    );
endmodule            
    
module multiboot_spartan6 (
    input wire CLK,
    input wire MBT_RESET,
    input wire MBT_REBOOT,
    input wire [23:0] spi_addr
  );

reg  [15:0] icap_din;
reg         icap_ce;
reg         icap_wr;

reg  [15:0] ff_icap_din_reversed;
reg         ff_icap_ce;
reg         ff_icap_wr;


  ICAP_SPARTAN6 ICAP_SPARTAN6_inst (
  
    .CE        (ff_icap_ce),   // Clock enable input
    .CLK       (CLK),         // Clock input
    .I         (ff_icap_din_reversed),  // 16-bit data input
    .WRITE     (ff_icap_wr)    // Write input
  );

//  -------------------------------------------------
//  --  State Machine for ICAP_SPARTAN6 MultiBoot  --
//  -------------------------------------------------


parameter         IDLE     = 0, 
                  SYNC_H   = 1, 
                  SYNC_L   = 2, 
                  
                  CWD_H    = 3,  
                  CWD_L    = 4,  
                                 
                  GEN1_H   = 5,  
                  GEN1_L   = 6,  
                                 
                  GEN2_H   = 7,  
                  GEN2_L   = 8,  
                                 
                  GEN3_H   = 9,  
                  GEN3_L   = 10, 
                                 
                  GEN4_H   = 11, 
                  GEN4_L   = 12, 
                                 
                  GEN5_H   = 13, 
                  GEN5_L   = 14, 
                                 
                  NUL_H    = 15, 
                  NUL_L    = 16, 
                                 
                  MOD_H    = 17, 
                  MOD_L    = 18, 
                                 
                  HCO_H    = 19, 
                  HCO_L    = 20, 
                                 
                  RBT_H    = 21, 
                  RBT_L    = 22, 
                  
                  NOOP_0   = 23, 
                  NOOP_1   = 24,
                  NOOP_2   = 25,
                  NOOP_3   = 26;
                  
                   
reg [4:0]     state;
reg [4:0]     next_state;


always @*
   begin: COMB

      case (state)
      
         IDLE:
            begin
               if (MBT_REBOOT)
                  begin
                     next_state  = SYNC_H;
                     icap_ce     = 0;
                     icap_wr     = 0;
                     icap_din    = 16'hAA99;  // Sync word 1 
                  end
               else
                  begin
                     next_state  = IDLE;
                     icap_ce     = 1;
                     icap_wr     = 1;
                     icap_din    = 16'hFFFF;  // Null 
                  end
            end
            
         SYNC_H:
            begin
               next_state  = SYNC_L;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = 16'h5566;    // Sync word 2
            end

         SYNC_L:
            begin
               next_state  = NUL_H;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = 16'h30A1;    //  Write to Command Register....
            end

        NUL_H:
            begin
              // next_state  = NUL_L;
	       next_state  = GEN1_H;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = 16'h0000;   //  Null Command issued....  value = 0x0000
            end

//Q

         GEN1_H:
            begin
               next_state  = GEN1_L;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = 16'h3261;    //  Escritura a reg GENERAL_1 (bit boot en caliente)
            end

        GEN1_L:
            begin
               next_state  = GEN2_H;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = spi_addr[15:0]; //16'hC000;   //  dreccion SPI BAJA
            end

         GEN2_H:
            begin
               next_state  = GEN2_L;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = 16'h3281;   //  Escritura a reg GENERAL_2
            end

        GEN2_L:
            begin
               next_state  = NUL_L; //MOD_H;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = {8'h03, spi_addr[23:16]}; // 16'h030A;   //  03 lectura SPI opcode + direccion SPI ALTA (03 = 1x, 6B = 4x)
            end
	
///////	Registro MODE (para carga a 4x tras reboot)

        MOD_H:
            begin
               next_state  = MOD_L;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = 16'h3301;   //  Escritura a reg MODE
            end

        MOD_L:
            begin
               next_state  = NUL_L;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = 16'h2100; // Activamos bit de lectura a modo 4x en el proceso de Config
            end				
/////

        NUL_L:
            begin
               next_state  = RBT_H;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = 16'h30A1;    //  Write to Command Register....
            end

        RBT_H:
            begin
               next_state  = RBT_L;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = 16'h000E;    // REBOOT Command 0x000E
            end

//--------------------

        RBT_L:
            begin
               next_state  = NOOP_0;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = 16'h2000;    //  NOOP
            end

        NOOP_0:
            begin
               next_state  = NOOP_1;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = 16'h2000;    // NOOP
            end

        NOOP_1:
            begin
               next_state  = NOOP_2;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = 16'h2000;    // NOOP
            end

        NOOP_2:
            begin
               next_state  = NOOP_3;
               icap_ce     = 0;
               icap_wr     = 0;
               icap_din    = 16'h2000;    // NOOP
            end

//--------------------

        NOOP_3:
            begin
               next_state  = IDLE;
               icap_ce     = 1;
               icap_wr     = 1;
               icap_din    = 16'h1111;    // NULL value
            end
          
        default:
            begin
               next_state  = IDLE;
               icap_ce     = 1;
               icap_wr     = 1;
               icap_din    = 16'h1111;    //  16'h1111"
            end

      endcase
   end

always @(posedge CLK)

   begin:   SEQ
      if (MBT_RESET)
         state <= IDLE;
      else
         state <= next_state;
   end


always @(posedge CLK)

   begin:   ICAP_FF
   
        ff_icap_din_reversed[0]  <= icap_din[7];   //need to reverse bits to ICAP module since D0 bit is read first
        ff_icap_din_reversed[1]  <= icap_din[6]; 
        ff_icap_din_reversed[2]  <= icap_din[5]; 
        ff_icap_din_reversed[3]  <= icap_din[4]; 
        ff_icap_din_reversed[4]  <= icap_din[3]; 
        ff_icap_din_reversed[5]  <= icap_din[2]; 
        ff_icap_din_reversed[6]  <= icap_din[1]; 
        ff_icap_din_reversed[7]  <= icap_din[0]; 
        ff_icap_din_reversed[8]  <= icap_din[15];
        ff_icap_din_reversed[9]  <= icap_din[14];
        ff_icap_din_reversed[10] <= icap_din[13];
        ff_icap_din_reversed[11] <= icap_din[12];
        ff_icap_din_reversed[12] <= icap_din[11];
        ff_icap_din_reversed[13] <= icap_din[10];
        ff_icap_din_reversed[14] <= icap_din[9]; 
        ff_icap_din_reversed[15] <= icap_din[8]; 
        
        ff_icap_ce  <= icap_ce;
        ff_icap_wr  <= icap_wr;
   end       
endmodule
