-- jepalza, sustituidos esquemas por IPCORE

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

ENTITY VRAM_Amstrad IS
	 port ( vga_A    : in    std_logic_vector (13 downto 0); 
			  vga_CLK  : in    std_logic; 
			  vram_A   : in    std_logic_vector (13 downto 0); 
			  vram_CLK : in    std_logic; 
			  vram_D   : in    std_logic_vector (7 downto 0);  
			  vram_W   : in    std_logic; 
			  vga_D    : out   std_logic_vector (7 downto 0)
			  );
END VRAM_Amstrad;


ARCHITECTURE Behavioral OF VRAM_Amstrad IS

COMPONENT xilinx_syncram_dp
  PORT (
    clka : IN STD_LOGIC;
    wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    addra : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
    dina : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    douta : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    clkb : IN STD_LOGIC;
    web : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    addrb : IN STD_LOGIC_VECTOR(13 DOWNTO 0);
    dinb : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    doutb : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
  );
END COMPONENT;

BEGIN

your_instance_name : xilinx_syncram_dp
  PORT MAP (
    clka  => vram_CLK,
	 addra => vram_A,
	 dina  => vram_D,
	 douta => open,
	 wea(0)=> vram_W,
	 
    clkb  => vga_CLK,
	 addrb => vga_A,
    dinb  => "00000000",
	 doutb => vga_D,
	 web(0)=> '0'
	 );

END Behavioral;
