----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:29:50 05/05/2011 
-- Design Name: 
-- Module Name:    please_wait - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity please_wait is
    Port ( CLK_n : in  STD_LOGIC;
				--CLK8 : in  STD_LOGIC_VECTOR (2 downto 0);
           WAIT_n : in  STD_LOGIC;
           CLK_WAIT_n : out  STD_LOGIC);
end please_wait;

architecture Behavioral of please_wait is
--	signal WAIT_n_delay:std_logic:='0';
begin

-- repos en 0
--CLK_WAIT_n<=CLK_n and WAIT_n;
-- repos en 1
CLK_WAIT_n<=CLK_n or not(WAIT_n);
	
--	CLK_WAIT_n<=CLK_n and WAIT_n_delay;-- WAIT_n;
--	wait_cover_clk: process(CLK8(1))
--	begin
--		if rising_edge(CLK8(1)) then
--			if CLK8(2)='1' then
--				-- rien
--			else
--				if WAIT_n='1' then
--					WAIT_n_delay<='1';
--				else
--					WAIT_n_delay<='0';
--				end if;
--			end if;
--		end if;
--	end process;
end Behavioral;

