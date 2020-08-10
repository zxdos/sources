----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:39:53 12/16/2017 
-- Design Name: 
-- Module Name:    ZXUNO_DSK_SELECT - Behavioral 
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
use IEEE.std_logic_arith.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ZXUNO_DSK_SELECT is
    Generic (
		WELCOME_ADDR:STD_LOGIC_VECTOR (15 downto 0):=x"CAFE";
		MAX_DSK_NUMBER_SQRT:integer:=8;
		CARAC_NOT_READY:std_logic_vector(7 downto 0):=x"00";
		CARAC_END_OF_NAME:std_logic_vector(7 downto 0):=x"01"
    );
    Port ( CLK4MHz : in STD_LOGIC;
	        A : in  STD_LOGIC_VECTOR (15 downto 0);
           Din : in  STD_LOGIC_VECTOR (7 downto 0);
           --Dout : inout  STD_LOGIC_VECTOR (7 downto 0):=(others=>'Z');
			  --rd:in std_logic;
			  wr:in std_logic;
           ZDSK_NUMBER : out  STD_LOGIC_VECTOR (MAX_DSK_NUMBER_SQRT-1 downto 0)
			  --ZDSK_doSelect : out  STD_LOGIC; -- no Wait_n needed by here
			  --ZDSK_doInsert : out  STD_LOGIC; -- Wait_n needed by here
           --ZDSK_CARAC : in  STD_LOGIC_VECTOR (7 downto 0);
           --ZDSK_doCarac : in  STD_LOGIC;
           --ZDSK_doneCarac : out  STD_LOGIC
			  );
			  
  			  --	attribute keep : string;
			--	attribute keep of ZDSK_CARAC : signal is "TRUE";

end ZXUNO_DSK_SELECT;

architecture Behavioral of ZXUNO_DSK_SELECT is

	--constant D_W_NEXT    :std_logic_vector(7 downto 0):="00000001";
	--constant D_W_PREVIOUS:std_logic_vector(7 downto 0):="00000010";
	--constant D_W_INSERT  :std_logic_vector(7 downto 0):="00000100";
	--constant D_W_FIRST   :std_logic_vector(7 downto 0):="00000011";
	
	--constant D_R_NUMBER_H   :std_logic_vector(7 downto 0):="10000000";
	--constant D_R_NUMBER_L   :std_logic_vector(7 downto 0):="01000000";
	
begin

zxuno:process(CLK4MHz)
	variable dsk_number_mem:STD_LOGIC_VECTOR(MAX_DSK_NUMBER_SQRT-1 downto 0):=(others=>'0');
	variable old_wr_mem:std_logic:='0';
	--variable old_rd_mem:std_logic:='0';
	--variable doInsert_mem:std_logic:='0';
	--variable doSelect_mem:std_logic:='0';
	--variable Dout_mem:std_logic_vector(7 downto 0);
	variable Din_mem:std_logic_vector(7 downto 0);
	--variable doneCarac_mem:std_logic:='0';
begin
	if rising_edge(CLK4MHz) then
		--Dout<=(others=>'Z');
		--doInsert_mem:='0';
		--doSelect_mem:='0';
		if wr='1' and old_wr_mem='0' and A=WELCOME_ADDR then
			dsk_number_mem:=Din;
--			Din_mem:=Din;
--			if (Din_mem and D_W_NEXT)=D_W_NEXT then
--				-- OUT &CAFE,64+1:PRINT INP(&CAFE)
--				-- => does print 1 2 3 (disk number L (a value lower than 256))
--				dsk_number_mem:=dsk_number_mem+1;
--				doSelect_mem:='1';
--			elsif (Din_mem and D_W_PREVIOUS)=D_W_PREVIOUS then
--				-- OUT &CAFE,64+2:PRINT INP(&CAFE)
--				-- => does print 0 ?
--				if dsk_number_mem>0 then
--					dsk_number_mem:=dsk_number_mem-1;
--					doSelect_mem:='1';
--				end if;
--			elsif (Din_mem and D_W_FIRST)=D_W_FIRST then
--				-- OUT &CAFE,64+2:PRINT INP(&CAFE)
--				-- => does print 0
--				dsk_number_mem:=(others=>'0');
--				doSelect_mem:='1';
--			end if;
--			if (Din_mem and D_W_INSERT)=D_W_INSERT then
--				-- OUT &CAFE,4
--				-- does nothing yet
--				doInsert_mem:='1';
--			end if;
--			if doneCarac_mem='1' then
--				-- relaxing
--				doneCarac_mem:='0';
--			end if;
--		elsif rd='1' and old_rd_mem='0' and A=WELCOME_ADDR then
--			if (Din_mem and D_R_NUMBER_H)=D_R_NUMBER_H then
--				-- OUT &CAFE,128:PRINT INP(&CAFE)
--				-- does print the high part of current DSK_NUMBER (usefull if disk selected is higher than 256)
--				Dout_mem:=dsk_number_mem(15 downto 8);
--				if doneCarac_mem='1' then
--					-- relaxing
--					doneCarac_mem:='0';
--				end if;
--			elsif (Din_mem and D_R_NUMBER_L)=D_R_NUMBER_L then
--				-- OUT &CAFE,64:PRINT INP(&CAFE)
--				-- does print the disk number (lower than 256 here)
--				Dout_mem:=dsk_number_mem(7 downto 0);
--				if doneCarac_mem='1' then
--					-- relaxing
--					doneCarac_mem:='0';
--				end if;
--			else -- D_R_CARAC
--				-- OUT &CAFE,0:PRINT CHR$(INP(&CAFE))
--				-- does normaly print file name and special characters : CARAC_NOT_READY/CARAC_END_OF_NAME
--				-- actualy does print Z (one time on both ?)
--				if doneCarac_mem='1' then
--					-- buzy
--					Dout_mem:=CARAC_NOT_READY;
--				elsif ZDSK_doCarac='1' then
--					Dout_mem:=ZDSK_CARAC;
--					--if Dout_mem=CARAC_END_OF_NAME then
--					--	-- end of name
--					--end if;
--				else
--					-- buzy
--					Dout_mem:=CARAC_NOT_READY;
--				end if;
--				if doneCarac_mem='1' then
--					-- relaxing
--					doneCarac_mem:='0';
--				elsif ZDSK_doCarac='1' then
--					doneCarac_mem:='1'; -- end of fire !
--				end if;
--			end if;
--		else
--			if doneCarac_mem='1' then
--				-- relaxing
--				doneCarac_mem:='0';
--			end if;
		end if;
--		if rd='1' and A=WELCOME_ADDR then
--			Dout<=Dout_mem;
--		end if;
		old_wr_mem:=wr;
		--old_rd_mem:=rd;
		ZDSK_NUMBER<=dsk_number_mem;
		--ZDSK_doSelect<=doSelect_mem;
		--ZDSK_doInsert<=doInsert_mem;
		--ZDSK_doneCarac<=doneCarac_mem;
	end if;
end process zxuno;

end Behavioral;

