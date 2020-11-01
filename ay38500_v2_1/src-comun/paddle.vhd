-- Paddle input circuitry for Atari Super Breakout
-- This interfaces the player control knob that moves the paddle. The original hardware
-- used an analog potentiometer that was read by comparing the voltage of a ramp generated
-- by a charging capacitor against the voltage from the pot wiper. That could be duplicated 
-- with external circuitry but here an optical encoder will be used. The hardware included 
-- two channels but Super Breakout only made use of one.
-- 2017 James Sweet
--
-- This is free software: you can redistribute
-- it and/or modify it under the terms of the GNU General
-- Public License as published by the Free Software
-- Foundation, either version 3 of the License, or (at your
-- option) any later version.
--
-- This is distributed in the hope that it will
-- be useful, but WITHOUT ANY WARRANTY; without even the
-- implied warranty of MERCHANTABILITY or FITNESS FOR A
-- PARTICULAR PURPOSE. See the GNU General Public License
-- for more details.

library IEEE;
use IEEE.STD_LOGIC_1164.all;
--use IEEE.STD_LOGIC_ARITH.all;
use ieee.numeric_std.all;
--use IEEE.std_logic_signed.all;

entity paddle is 
port(		
			CLK6			: in  std_logic;
			Hsync 		: in  std_logic;
			Enc_A			: in  std_logic;
			Enc_B			: in  std_logic;
			Vblank			: in	std_logic;
			Direction : out STD_LOGIC;
		   EncEnable : out STD_LOGIC;
			Sense1			: out std_logic
			);
end paddle;

architecture rtl of paddle is

signal sense1_int	: std_logic;
signal comp1_n: std_logic;
signal ramp: integer range 0 to 600;
--signal position: integer range 0 to 600;
signal pad_pos: integer range 40 to 250;
signal position: STD_LOGIC_VECTOR (9 downto 0);

COMPONENT quadrature_decoder
	GENERIC(
		positions						:	INTEGER := 16; 		--size of the position counter (i.e. number of positions counted)
		debounce_time					:	INTEGER := 50_000; 	--number of clock cycles required to register a new position = debounce_time + 2
		set_origin_debounce_time	:	INTEGER := 500_000);	--number of clock cycles required to register a new set_origin_n value = set_origin_debounce_time + 2
	PORT(
		clk				:	IN			STD_LOGIC;										--system clock
		a					:	IN			STD_LOGIC;										--quadrature encoded signal a
		b					:	IN			STD_LOGIC;  									--quadrature encoded signal b
		set_origin_n	:	IN			STD_LOGIC;  									--active-low synchronous clear of position counter
		direction		:	OUT		STD_LOGIC;										--direction of last change, 1 = positive, 0 = negative
		position			:	BUFFER	INTEGER RANGE 0 TO positions-1 := 0);	--current position relative to index or initial value
END COMPONENT;

begin

-- Ramp is reset by Vblank pulse and begins to rise
Ramp_Compare: process(Hsync, Vblank)
begin
	if rising_edge(Hsync) then
		if Vblank = '1' then
			comp1_n <= '0';
			ramp <= 0;
		else
			ramp <= ramp + 1;
		end if;
		
		if ramp > pad_pos then 
			comp1_n <= '1';
		end if;
	end if;
end process;
	
-- output
Sense1 <= comp1_n;

-- If the pulse from the ramp comparator comes too soon after Vblank the paddle interrupt is triggered too 
-- early and this causes problems so make the minimum position. 
--pad_pos <= (position + 40); --enough for 400 points encoder
pad_pos <= to_integer(unsigned(position(9 downto 1))) + 25 ; --half the value for 600 points encoder

-- Interface for the quadrature encoder. The optical encoder used in the prototype has a very high resolution, it 
-- will be necessary to adjust values for other encoders
--encoder: entity work.quadrature_decoder
--	generic map(
--		positions => 2000, 		--size of the position counter (i.e. number of positions counted)
--		debounce_time => 500, 	--number of clock cycles required to register a new position = debounce_time + 2
--		set_origin_debounce_time => 50_000)	--number of clock cycles required to register a new set_origin_n value = set_origin_debounce_time + 2
--	port map(
--		clk => clk6,								--system clock
--		a => Enc_a,									--quadrature encoded signal a
--		b => Enc_b,									--quadrature encoded signal b
--		set_origin_n => '1',  					--active-low synchronous clear of position counter
--		direction => open,						--direction of last change, 1 = positive, 0 = negative
--		position => position
--		);

encoder: entity work.QuadratureDecoder
	port map(
		Clk => clk6,								--system clock
		QuadA => Enc_a,									--quadrature encoded signal a
		QuadB => Enc_b,									--quadrature encoded signal b
		Direction => Direction,
		EncEnable => EncEnable,
		Position => position
		);

end rtl;
