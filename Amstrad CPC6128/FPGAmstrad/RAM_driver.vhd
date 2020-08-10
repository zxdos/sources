----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:43:35 01/14/2011 
-- Design Name: 
-- Module Name:    RAM_driver - Behavioral 
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

entity RAM_driver is
    Port ( --A : in  STD_LOGIC_VECTOR (18 downto 0);
           CLK8 : in  STD_LOGIC_VECTOR (2 downto 0);
           Din : in  STD_LOGIC_VECTOR (7 downto 0);
           Dout : inout  STD_LOGIC_VECTOR (7 downto 0);
			  rd:in STD_LOGIC;
			  wr:in STD_LOGIC;
           --ram_A : out  STD_LOGIC_VECTOR (17 downto 0);
           ram_W : out  STD_LOGIC:='0'; -- sim
           ram_Di : in  STD_LOGIC_VECTOR (7 downto 0);
			  ram_Do : out  STD_LOGIC_VECTOR (7 downto 0);
			  --ram_LB : out STD_LOGIC;
			  --ram_UB : out STD_LOGIC;
			  reset:in  STD_LOGIC
			  --crtc_R:in STD_LOGIC;
			  --crtc_transmit:out STD_LOGIC:='0';
			 -- crtc_D:out std_logic_vector(7 downto 0)
			  --transmit:in STD_LOGIC;
			  --dsk_A:in STD_LOGIC_VECTOR(17 downto 0)
			  );
end RAM_driver;

architecture Behavioral of RAM_driver is

begin
	

	process(CLK8(0),reset) is -- transmit
		variable D:STD_LOGIC_VECTOR (7 downto 0);
	begin
		
		
		if reset='1' then
			-- relax
			Dout<=(others=>'L');
			ram_W<='0';
			ram_Do<=(others=>'Z');
		else
			
			-- address is solving
			if rising_edge(CLK8(0)) then
			
				ram_W<='0';
				ram_Do<=(others=>'Z');
				
				if CLK8(2)='1' then
					-- CRTC working
					
				else
					-- z80 working
					if CLK8(1)='0' then
						-- address is solved
						if wr='1' then
							ram_Do<=Din;
							ram_W<='1';
						end if;
						Dout<=(others=>'Z');
					elsif CLK8(1)='1' then
						if rd='1' then -- de toute façon on ne peut être qu'en PHASE_EXECUTION_READ :p
							D:=ram_Di;
							Dout<=D;
						end if;
					end if;
				end if;
			end if;
		end if;
	end process;

end Behavioral;

