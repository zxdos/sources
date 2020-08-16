-- Listing 13.2
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;
entity osd_font_gen  is
   port(
      clk: in std_logic;
      video_on: in std_logic;
      pixel_x: in std_logic_vector(9 downto 0);
		pixel_y: in std_logic_vector(9 downto 0);
      rgb_text: out std_logic_vector(2 downto 0);
		redefjoy1: in 	std_logic;
		redefjoy2: in 	std_logic;
		redef_curr : in unsigned(2 downto 0)
   );
end osd_font_gen ;

architecture arch of osd_font_gen  is
   signal rom_addr: std_logic_vector(10 downto 0);
   signal char_addr: std_logic_vector(7 downto 0);
	signal nchar: unsigned(4 downto 0);
   signal row_addr: std_logic_vector(3 downto 0);
   signal bit_addr: unsigned(2 downto 0);
   signal font_word: std_logic_vector(7 downto 0);
   signal font_bit, text_bit_on, tbit_next: std_logic;
	signal font_rgb: std_logic_vector(2 downto 0);
	type Matrix_texto is array (natural range <>) of std_logic_vector(7 downto 0); 
	constant linea_texto0	: Matrix_texto(0 to 12) := -- texto "Redefine joy" 
		( x"20", x"52" , x"65" , x"64" , x"65" , x"66" , x"69" , x"6e" , x"65" , x"20" , x"6a" , x"6f" , x"79" );
	constant linea_texto1	: Matrix_texto(0 to 3) := -- texto " 1: " 
		( x"20" , x"31" , x"3a" , x"20" );
	constant linea_texto2	: Matrix_texto(0 to 3) := -- texto " 2: " 
		( x"20" , x"32" , x"3a" , x"20" );
	constant linea_texto3	: Matrix_texto(0 to 11) := -- texto "U D L R F1F2" 
		( x"18" , x"20" , x"19" , x"20" , x"1b" , x"20" , x"1a" , x"20" , x"46" , x"31" , x"46" , x"32" );		
	
   -- delayed pixel count
   signal pix_x1_reg, pix_y1_reg: unsigned(9 downto 0);
   signal pix_x2_reg, pix_y2_reg: unsigned(9 downto 0);
	
begin
   -- instantiate font ROM
   font_unit: entity work.font_rom
      port map(clk=>clk, addr=>rom_addr, data=>font_word);
   -- font ROM interface
	nchar <= unsigned(unsigned(pixel_x(7 downto 3)) - 7 ) when pixel_x(9 downto 8) = "00" else "00000";
	char_addr<= linea_texto0(to_integer(nchar)) when ( to_integer(nchar) < 13 ) else
				   linea_texto1(to_integer(nchar) - 13) when (redefjoy1 = '1' and to_integer(nchar) < 17 ) else
					linea_texto2(to_integer(nchar) - 13) when (redefjoy2 = '1' and to_integer(nchar) < 17 ) else
					linea_texto3(to_integer(nchar) - 17 + to_integer(redef_curr) + to_integer(redef_curr)) 
																    when ( to_integer(nchar) < 19 ) else
					x"20";

   -- registers
   process (clk)
   begin
     if (clk'event and clk='1') then
         pix_x1_reg <= unsigned(pixel_x); -- 2 clock delay
         pix_x2_reg <= pix_x1_reg;
         pix_y1_reg <= unsigned(pixel_y);
         pix_y2_reg <= pix_y1_reg;
     end if;
   end process;

	
   -- font ROM
	row_addr <= pixel_y(4 downto 1);
	rom_addr <= char_addr(6 downto 0) & row_addr;
	bit_addr<=pix_x2_reg(2 downto 0);
	
	font_bit <= font_word(to_integer(not bit_addr))
			  when  (to_integer(unsigned(pix_x2_reg(9 downto 0))) >= 64 and 
						to_integer(unsigned(pix_x2_reg(9 downto 0))) <= 208 and
						 to_integer(unsigned(pixel_y(9 downto 0))) >= 64 and
						 to_integer(unsigned(pixel_y(9 downto 0))) <= 96) else
		'0';

	font_rgb <="010" when font_bit='1' else "000";
	
   -- rgb multiplexing circuit
   process(video_on,font_rgb)
   begin
      if video_on='0' then
         rgb_text <= "000"; --blank
      else
         rgb_text <= font_rgb;
      end if;
   end process;
end arch;
