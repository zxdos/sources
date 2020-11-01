--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:10:23 12/15/2019
-- Design Name:   
-- Module Name:   /home/avlixa/FPGA/ZXDOS/ay38500/zxdos/tb/relojes_tb.vhd
-- Project Name:  pong_ay3500_zxdos
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cuatro_relojes
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
 
ENTITY relojes_tb IS
END relojes_tb;
 
ARCHITECTURE behavior OF relojes_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT cuatro_relojes
    PORT(
         CLK_IN1 : IN  std_logic;
         CLK_OUT1 : OUT  std_logic;
         CLK_OUT2 : OUT  std_logic;
         CLK_OUT3 : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK_IN1 : std_logic := '0';

 	--Outputs
   signal CLK_OUT1 : std_logic;
   signal CLK_OUT2 : std_logic;
   signal CLK_OUT3 : std_logic;

   -- Clock period definitions
   constant CLK_IN1_period : time := 20 ns;
   constant CLK_OUT1_period : time := 10 ns;
   constant CLK_OUT2_period : time := 10 ns;
   constant CLK_OUT3_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: cuatro_relojes PORT MAP (
          CLK_IN1 => CLK_IN1,
          CLK_OUT1 => CLK_OUT1,
          CLK_OUT2 => CLK_OUT2,
          CLK_OUT3 => CLK_OUT3
        );

   -- Clock process definitions
   CLK_IN1_process :process
   begin
		CLK_IN1 <= '0';
		wait for CLK_IN1_period/2;
		CLK_IN1 <= '1';
		wait for CLK_IN1_period/2;
   end process;
 
--   CLK_OUT1_process :process
--   begin
--		CLK_OUT1 <= '0';
--		wait for CLK_OUT1_period/2;
--		CLK_OUT1 <= '1';
--		wait for CLK_OUT1_period/2;
--   end process;
-- 
--   CLK_OUT2_process :process
--   begin
--		CLK_OUT2 <= '0';
--		wait for CLK_OUT2_period/2;
--		CLK_OUT2 <= '1';
--		wait for CLK_OUT2_period/2;
--   end process;
-- 
--   CLK_OUT3_process :process
--   begin
--		CLK_OUT3 <= '0';
--		wait for CLK_OUT3_period/2;
--		CLK_OUT3 <= '1';
--		wait for CLK_OUT3_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_IN1_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
