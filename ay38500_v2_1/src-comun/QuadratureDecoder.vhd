----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:31:04 10/25/2020 
-- Design Name: 
-- Module Name:    QuadratureDecoder - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
--use IEEE.NUMERIC_STD.ALL;
--use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity QuadratureDecoder is
    Port ( QuadA : in  STD_LOGIC;
           QuadB : in  STD_LOGIC;
           Clk : in  STD_LOGIC;
			  Direction : out STD_LOGIC;
			  EncEnable : out STD_LOGIC;
           Position : out  STD_LOGIC_VECTOR (9 downto 0));
end QuadratureDecoder;

architecture Behavioral of QuadratureDecoder is

signal QuadA_Delayed: STD_LOGIC_VECTOR(2 downto 0) := "000";
signal QuadB_Delayed: STD_LOGIC_VECTOR(2 downto 0) := "000";

signal Count_Enable: STD_LOGIC;
signal Count_Direction: STD_LOGIC;

signal Count: unsigned(9 downto 0) := "0000000000";

begin

process (Clk)
begin
	if Clk='1' and Clk'event then
		QuadA_Delayed <= (QuadA_Delayed(1), QuadA_Delayed(0), QuadA);
		QuadB_Delayed <= (QuadB_Delayed(1), QuadB_Delayed(0), QuadB);
		if Count_Enable='1' then
			if Count_Direction='1' then
				if Count < 400 then
					Count <= Count + 1;
				end if;
				Position <= conv_std_logic_vector(Count, 10);
			else
				if Count > 0 then
					Count <= Count - 1;
				end if;
				Position <= conv_std_logic_vector(Count, 10);
			end if;
		end if;
	end if;
end process;

Count_Enable <= QuadA_Delayed(1) xor QuadA_Delayed(2) xor QuadB_Delayed(1)
				xor QuadB_Delayed(2);
Count_Direction <= QuadA_Delayed(1) xor QuadB_Delayed(2);
Direction <= Count_Direction;
EncEnable <= Count_Enable;

end Behavioral;

