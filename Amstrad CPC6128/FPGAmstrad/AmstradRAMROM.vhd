----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:53:09 01/12/2011 
-- Design Name: 
-- Module Name:    AmstradRAMROM - Behavioral 
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

-- Amstrad ADRESS SOLVER

entity AmstradRAMROM is
    Port ( A : in STD_LOGIC_VECTOR (15 downto 0);
           wr_z80 : in STD_LOGIC;
			  --wr_io_z80 : in STD_LOGIC;
           lowerROMen : in  STD_LOGIC;
           upperROMen : in  STD_LOGIC;
           ram_A : out  STD_LOGIC_VECTOR (17 downto 0);
			  RAMbank:in STD_LOGIC_VECTOR (2 downto 0);
			  ROMbank:in STD_LOGIC_VECTOR (3 downto 0) -- upper ROM number
			  );
end AmstradRAMROM;


--sequenceur necessaire : on ne peut pas prédire ADDR_W ou ADDR_R
architecture Behavioral of AmstradRAMROM is
begin
--read : c'est direct
--write : il faut préparer l'adresse avant
--on suppose qu'on a memreq avant un rd ou wr, donc tantque non read on pose l'adresse de write
--	ram_A(15)<=A(15) when wr_z80='1' or (A(15)='0' and A(14)='1')
--	or (A(15)='1' and A(14)='0')
--	or (lowerROMen='0' and A(15)='0')
--	or (upperROMen='0' and A(15)='1')
--	else A(15) when A(15)='0'
--	else '0' when A(15)='1';
--
--	ram_A(14 downto 0)<=A(14 downto 0) when wr_z80='1' or (A(15)='0' and A(14)='1')
--	or (A(15)='1' and A(14)='0')
--	or (lowerROMen='0' and A(15)='0')
--	or (upperROMen='0' and A(15)='1')
--	else A(14 downto 0) when A(15)='0'
--	else A(14 downto 0) when A(15)='1';
--
--	
--	ram_A(17 downto 16)<=('0','0') when wr_z80='1' or (A(15)='0' and A(14)='1')
--	or (A(15)='1' and A(14)='0')
--	or (lowerROMen='0' and A(15)='0')
--	or (upperROMen='0' and A(15)='1')
--	else ('0','1');
--	
--	ram_A(18)<='0'; -- sera utilisé pour la disquette
--	--ram_D <= z80_D when (wr_z80='1' or wr_io_z80='1') else (others=>'Z');
--	
--
--
--
--
--
--						elsif D(4 downto 2)="000" then
--							-- select RAMbank on upperRAM
--							if D(1 downto 0)="00" then
--								-- RAM centrale linaire, bank deconnectee
--							elsif D(1 downto 0)="01" then
--								-- bnak3 de la premiere page en C000-FFFF
--							elsif D(1 downto 0)="10" then
--								-- acces totale extention RAM (les autre 64k des 128k)
--							elsif D(1 downto 0)="11" then
--								--bank 3 (0 1 2 3) de la premiere page 64k en &C000-&FFFF et RAM centrale C000-FFFF en 4000-7FFF
--							end if;
--




	--ram_A(18)<='0'; -- sera utilisé pour la disquette

	ram_A(17 downto 14)<=b"0000" when wr_z80='0' and lowerROMen='1' and (A(15)='0' and A(14)='0') -- lowerROM
--		else b"0001" when wr_z80='0' and upperROMen='1' and not (ROMbank=b"0111") and (A(15)='1' and A(14)='1') --upperROM0
		else b"0010" when wr_z80='0' and upperROMen='1' and ROMbank=b"0111" and (A(15)='1' and A(14)='1') --upperROM7
		--MAXAM.ROM else b"0011" when wr_z80='0' and upperROMen='1' and ROMbank=b"0001" and (A(15)='1' and A(14)='1') --upperROM1
		else b"0001" when wr_z80='0' and upperROMen='1' and (A(15)='1' and A(14)='1') --upperROM0
		

-- cpcWiki
-- http://www.cpcwiki.eu/index.php/Gate_Array
-- -Address-     0      1      2      3      4      5      6      7
-- 0000-3FFF   RAM_0  RAM_0  RAM_4  RAM_0  RAM_0  RAM_0  RAM_0  RAM_0
-- 4000-7FFF   RAM_1  RAM_1  RAM_5  RAM_3  RAM_4  RAM_5  RAM_6  RAM_7
-- 8000-BFFF   RAM_2  RAM_2  RAM_6  RAM_2  RAM_2  RAM_2  RAM_2  RAM_2
-- C000-FFFF   RAM_3  RAM_7  RAM_7  RAM_7  RAM_3  RAM_3  RAM_3  RAM_3
--http://www.grimware.org/doku.php/documentations/devices/gatearray
		
		else b"1100" when RAMbank="100" and (A(15)='0' and A(14)='1')
		else b"1101" when RAMbank="101" and (A(15)='0' and A(14)='1')
		else b"1110" when RAMbank="110" and (A(15)='0' and A(14)='1')
		else b"1111" when RAMbank="111" and (A(15)='0' and A(14)='1')
		else b"10" &  A(15 downto 14) when RAMbank(2)='1'
		
		else b"10" &  A(15 downto 14) when RAMbank="000"
		else b"11" &  A(15 downto 14) when RAMbank="010"
		else b"1111" when RAMbank="001" and (A(15)='1' and A(14)='1')
		else b"10" &  A(15 downto 14) when RAMbank="001"
		else b"1011" when RAMbank="011" and (A(15)='0' and A(14)='1')
		else b"1111" when RAMbank="011" and (A(15)='1' and A(14)='1')
		else b"10" &  A(15 downto 14) when RAMbank="011";
		
		
		-- quasar ...
--		else b"1100" when RAMbank="100" and (A(15)='1' and A(14)='0')
--		else b"1101" when RAMbank="101" and (A(15)='1' and A(14)='0')
--		else b"1110" when RAMbank="110" and (A(15)='1' and A(14)='0')
--		else b"1111" when RAMbank="111" and (A(15)='1' and A(14)='0')
--		else b"10" &  A(15 downto 14) when RAMbank(2)='1'
--		else b"10" &  A(15 downto 14) when RAMbank="000"
--		else b"11" &  A(15 downto 14) when RAMbank="010"
--		else b"1111" when RAMbank="001" and (A(15)='1' and A(14)='1')
--		else b"10" &  A(15 downto 14) when RAMbank="001"
--		else b"1011" when RAMbank="011" and (A(15)='1' and A(14)='0')
--		else b"1111" when RAMbank="011" and (A(15)='1' and A(14)='1')
--		else b"10" &  A(15 downto 14) when RAMbank="011";
		
		--else b"10"& A(15) & A(14) when RAMbank=b"0000" -- RAMbank0
		--else b"11"& A(15) & A(14) ; -- RAMbank1
		
	ram_A(13 downto 0)<=A(13 downto 0);
	
	
	
	
	
end Behavioral;

