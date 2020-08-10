----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:42:39 12/23/2017 
-- Design Name: 
-- Module Name:    divideby3_bastard - Behavioral 
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

entity divideby3 is
    Port ( CLK50MHz : in  STD_LOGIC;
           --CLK25MHz : out  STD_LOGIC; -- divide by 2
           CLK16MHz : out  STD_LOGIC -- divide by 3
			  );
end divideby3;

architecture Behavioral of divideby3 is

begin
	process(CLK50MHz) is
	variable counter3 : integer range 0 to 2:=0;
	begin
		if rising_edge(CLK50MHz) then
			counter3:=counter3+1;
			if counter3=0 then
				CLK16MHz<='0';
			else
				CLK16MHz<='1';
			end if;
		end if;
	end process;
	
	--process(CLK50MHz) is
	--variable CLK25MHz_mem:std_logic:='0';
	--begin
	--	if falling_edge(CLK50MHz) then
	--		CLK25MHz_mem:=not(CLK25MHz_mem);
	--		CLK25MHz<=CLK25MHz_mem;
	--	end if;
	--end process;
end Behavioral;

