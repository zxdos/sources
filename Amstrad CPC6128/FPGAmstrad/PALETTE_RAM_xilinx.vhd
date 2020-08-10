-- jepalza, sustituidos esquemas por IPCORE

LIBRARY ieee;
USE ieee.std_logic_1164.all;

ENTITY PALETTE_RAM IS
	 port ( AI    : in    std_logic_vector (12 downto 0); 
			  CLKI  : in    std_logic; 
			  AO    : in    std_logic_vector (12 downto 0); 
			  CLKO  : in    std_logic; 
			  DI    : in    std_logic_vector (7 downto 0); 
			  WR    : in    std_logic; 
			  DO    : out   std_logic_vector (7 downto 0)
			  );
END PALETTE_RAM;


ARCHITECTURE Behavioral OF PALETTE_RAM IS

COMPONENT PALETTE_RAM2
  PORT (
    clka : IN STD_LOGIC;
    wea : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    addra : IN STD_LOGIC_VECTOR(12 DOWNTO 0);
    dina : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    douta : OUT STD_LOGIC_VECTOR(7 DOWNTO 0);
    clkb : IN STD_LOGIC;
    web : IN STD_LOGIC_VECTOR(0 DOWNTO 0);
    addrb : IN STD_LOGIC_VECTOR(12 DOWNTO 0);
    dinb : IN STD_LOGIC_VECTOR(7 DOWNTO 0);
    doutb : OUT STD_LOGIC_VECTOR(7 DOWNTO 0)
  );
END COMPONENT;

BEGIN

your_instance_name : PALETTE_RAM2
  PORT MAP (
    clka  => CLKI,
	 addra => AI,
    dina  => DI,
    douta => open,
	 wea(0)=> WR,

    clkb  => CLKO,
	 addrb => AO,
	 dinb  => "00000000",
	 doutb => DO,
	 web(0)=> '0'
	 );

END Behavioral;
