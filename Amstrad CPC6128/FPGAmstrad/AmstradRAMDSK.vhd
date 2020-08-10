----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:14:01 01/26/2011 
-- Design Name: 
-- Module Name:    AmstradRAMDSK - Behavioral 
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

entity AmstradRAMDSK is
    Port ( A : in  STD_LOGIC_VECTOR (17 downto 0);
           dsk_A : in  STD_LOGIC_VECTOR (20 downto 0);
			  init_A : in  STD_LOGIC_VECTOR (20 downto 0);
			  crtc_A : in  STD_LOGIC_VECTOR (15 downto 0);
			  --VRAM01:in STD_LOGIC;
           dsk_transmit : in  STD_LOGIC;
			  crtc_transmit : in  STD_LOGIC;
			  init_done : in  STD_LOGIC;
           ram_A : out  STD_LOGIC_VECTOR (20 downto 0)
           --ram_LB : out  STD_LOGIC;
           --ram_UB : out  STD_LOGIC
			  );
end AmstradRAMDSK;

architecture Behavioral of AmstradRAMDSK is

begin

ram_A(13 downto 0)<= init_A(13 downto 0) when init_done='0' else dsk_A(13 downto 0) when dsk_transmit='1' else crtc_A(13 downto 0) when crtc_transmit='1' else A(13 downto 0); -- address is solving
ram_A(17 downto 14)<= init_A(17 downto 14) when init_done='0' else dsk_A(17 downto 14) when dsk_transmit='1' else "10" & crtc_A(15 downto 14) when crtc_transmit='1' else A(17 downto 14); -- address is solving
ram_A(20 downto 18)<= init_A(20 downto 18) when init_done='0' else dsk_A(20 downto 18) when dsk_transmit='1' else (others=>'0'); -- address is solving
--death byte
--ram_A(22 downto 21)<=(others=>'1');
-- sim
--ram_A(22 downto 21)<=(others=>'0');

--ram_LB<='0';
--ram_UB<='0';

end Behavioral;

