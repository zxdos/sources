----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:26:18 12/27/2017 
-- Design Name: 
-- Module Name:    DEBUG_SCREEN - Behavioral 
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

entity DEBUG_SCREEN is
	Generic (
		DEBUG_LEDS_W:integer:=32
	);
    Port ( CLK25MHz : in  STD_LOGIC;
           RED : in  STD_LOGIC_VECTOR (2 downto 0);
           GREEN : in  STD_LOGIC_VECTOR (2 downto 0);
           BLUE : in  STD_LOGIC_VECTOR (2 downto 0);
           RED3 : out  STD_LOGIC_VECTOR (2 downto 0);
           GREEN3 : out  STD_LOGIC_VECTOR (2 downto 0);
           BLUE3 : out  STD_LOGIC_VECTOR (2 downto 0);
           VSYNC : in  STD_LOGIC;
           HSYNC : in  STD_LOGIC);
end DEBUG_SCREEN;

architecture Behavioral of DEBUG_SCREEN is

begin
	process (CLK25MHz) is
	begin
	if rising_edge(CLK25MHz);

end Behavioral;

