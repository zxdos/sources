----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:29:58 12/23/2017 
-- Design Name: 
-- Module Name:    ZXUNO_CLOCKS - Behavioral 
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

entity ZXUNO_CLOCKS is
    Port ( CLK50MHz : in  STD_LOGIC;
           CLK25MHz : out  STD_LOGIC;
           CLK4MHz : out  STD_LOGIC;
           CLK8 : out  STD_LOGIC_VECTOR (2 downto 0));
end ZXUNO_CLOCKS;

architecture Behavioral of ZXUNO_CLOCKS is

begin


end Behavioral;

