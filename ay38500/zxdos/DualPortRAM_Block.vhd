----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:07:08 09/27/2019 
-- Design Name: 
-- Module Name:    DualPortRAM_Block - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity DualPortRAM_Block is
   generic(
      ADDR_WIDTH: integer:=9;
      DATA_WIDTH:integer:=7
   );
   port(
      clk: in std_logic;
      wea: in std_logic;
		web: in std_logic;
      addr_a: in std_logic_vector(ADDR_WIDTH-1 downto 0);
      addr_b: in std_logic_vector(ADDR_WIDTH-1 downto 0);
      din_a: in std_logic_vector(DATA_WIDTH-1 downto 0);
		din_b: in std_logic_vector(DATA_WIDTH-1 downto 0);
      dout_a: out std_logic_vector(DATA_WIDTH-1 downto 0);
      dout_b: out std_logic_vector(DATA_WIDTH-1 downto 0)
   );
end DualPortRAM_Block;

architecture Behavioral of DualPortRAM_Block is
   type ram_type is array (0 to 2**ADDR_WIDTH-1)
        of std_logic_vector (DATA_WIDTH-1 downto 0);
   signal ram: ram_type;
   signal addr_a_reg, addr_b_reg:
          std_logic_vector(ADDR_WIDTH-1 downto 0);
begin
   process(clk)
   begin
     if (clk'event and clk = '1') then
        if (wea = '1') then
           ram(to_integer(unsigned(addr_a))) <= din_a;
        end if;
		  if (web = '1') then
           ram(to_integer(unsigned(addr_b))) <= din_b;
        end if;
        addr_a_reg <= addr_a;
        addr_b_reg <= addr_b;
     end if;
   end process;
   dout_a <= ram(to_integer(unsigned(addr_a_reg)));
   dout_b <= ram(to_integer(unsigned(addr_b_reg)));
end Behavioral;

