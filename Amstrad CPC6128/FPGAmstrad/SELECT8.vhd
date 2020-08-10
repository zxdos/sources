----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:28:34 11/26/2011 
-- Design Name: 
-- Module Name:    SELECT8 - Behavioral 
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

entity SELECT8 is
    Port ( DATA1 : in  STD_LOGIC_VECTOR (7 downto 0);
           DATA2 : in  STD_LOGIC_VECTOR (7 downto 0);
           DATA0 : out  STD_LOGIC_VECTOR (7 downto 0);
           s1 : in  STD_LOGIC);
end SELECT8;

architecture Behavioral of SELECT8 is

begin
	DATA0<=DATA1 when s1='1' else DATA2;
end Behavioral;

