--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:54:17 12/15/2019
-- Design Name:   
-- Module Name:   /home/avlixa/FPGA/ZXDOS/ay38500/zxdos/tb/pong_tb.vhd
-- Project Name:  pong_ay3500_zxdos
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: pong_ay38500_zxdos
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY pong_tb IS
END pong_tb;
 
ARCHITECTURE behavior OF pong_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT pong_ay38500_zxdos
    PORT(
         CLOCK_50 : IN  std_logic;
         LED1 : OUT  std_logic;
         LED3 : OUT  std_logic;
         VGA_HS : OUT  std_logic;
         VGA_VS : OUT  std_logic;
         VGA_R : OUT  std_logic_vector(5 downto 0);
         VGA_G : OUT  std_logic_vector(5 downto 0);
         VGA_B : OUT  std_logic_vector(5 downto 0);
         stdn : OUT  std_logic;
         stdnb : OUT  std_logic;
         AUDIO_L : OUT  std_logic;
         AUDIO_R : OUT  std_logic;
         ps2_data : INOUT  std_logic;
         ps2_clk : INOUT  std_logic;
         sram_addr : OUT  std_logic_vector(20 downto 0);
         sram_data : IN  std_logic_vector(7 downto 0);
         sram_we_n : OUT  std_logic;
         SPI_CLK : OUT  std_logic;
         SPI_MOSI : OUT  std_logic;
         SPI_MISO : IN  std_logic;
         CONF_DATA0 : OUT  std_logic;
			
			JOY_CLK : OUT  std_logic;
			JOY_LOAD : OUT  std_logic;
			JOY_DATA  : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLOCK_50 : std_logic := '0';
   signal sram_data : std_logic_vector(7 downto 0) := (others => '0');
   signal SPI_MISO : std_logic := '0';
	signal JOY_DATA : std_logic := '0';
	
	--BiDirs
   signal ps2_data : std_logic;
   signal ps2_clk : std_logic;

 	--Outputs
   signal LED1 : std_logic;
   signal LED3 : std_logic;
   signal VGA_HS : std_logic;
   signal VGA_VS : std_logic;
   signal VGA_R : std_logic_vector(5 downto 0);
   signal VGA_G : std_logic_vector(5 downto 0);
   signal VGA_B : std_logic_vector(5 downto 0);
   signal stdn : std_logic;
   signal stdnb : std_logic;
   signal AUDIO_L : std_logic;
   signal AUDIO_R : std_logic;
   signal sram_addr : std_logic_vector(20 downto 0);
   signal sram_we_n : std_logic;
   signal SPI_CLK : std_logic;
   signal SPI_MOSI : std_logic;
   signal CONF_DATA0 : std_logic;
	signal JOY_CLK : std_logic;
	signal JOY_LOAD : std_logic;

   -- Clock period definitions
   constant CLOCK_50_period : time := 20 ns;
   constant ps2_clk_period : time := 10 ns;
   constant SPI_CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: pong_ay38500_zxdos PORT MAP (
          CLOCK_50 => CLOCK_50,
          LED1 => LED1,
          LED3 => LED3,
          VGA_HS => VGA_HS,
          VGA_VS => VGA_VS,
          VGA_R => VGA_R,
          VGA_G => VGA_G,
          VGA_B => VGA_B,
          stdn => stdn,
          stdnb => stdnb,
          AUDIO_L => AUDIO_L,
          AUDIO_R => AUDIO_R,
          ps2_data => ps2_data,
          ps2_clk => ps2_clk,
          sram_addr => sram_addr,
          sram_data => sram_data,
          sram_we_n => sram_we_n,
          SPI_CLK => SPI_CLK,
          SPI_MOSI => SPI_MOSI,
          SPI_MISO => SPI_MISO,
          CONF_DATA0 => CONF_DATA0,
			 JOY_CLK => JOY_CLK,
			JOY_LOAD => JOY_LOAD,
			JOY_DATA => JOY_DATA
        );

   -- Clock process definitions
   CLOCK_50_process :process
   begin
		CLOCK_50 <= '0';
		wait for CLOCK_50_period/2;
		CLOCK_50 <= '1';
		wait for CLOCK_50_period/2;
   end process;
 
--   ps2_clk_process :process
--   begin
--		ps2_clk <= '0';
--		wait for ps2_clk_period/2;
--		ps2_clk <= '1';
--		wait for ps2_clk_period/2;
--   end process;
-- 
--   SPI_CLK_process :process
--   begin
--		SPI_CLK <= '0';
--		wait for SPI_CLK_period/2;
--		SPI_CLK <= '1';
--		wait for SPI_CLK_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

		JOY_DATA <= '1';

      wait for CLOCK_50_period*100;

      -- insert stimulus here 

      wait;
   end process;

END;
