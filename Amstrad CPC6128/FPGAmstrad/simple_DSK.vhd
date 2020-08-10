library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity simple_DSK is
	Generic (
		MAX_SECTORS:integer:=16;--9;
		MAX_TRACKS:integer:=128--40 -- 40 par face 79+1
	);
    Port ( --CLK_bourin : in STD_LOGIC; -- horloge d'indexation
           CLK8 : in STD_LOGIC_VECTOR (2 downto 0);
           reset : in STD_LOGIC;
           A10_A8_A7 : in  STD_LOGIC_VECTOR (2 downto 0);
           A0 : in  STD_LOGIC;
           IO_RD : in  STD_LOGIC;
           IO_WR : in  STD_LOGIC;
           D_command : in  STD_LOGIC_VECTOR (7 downto 0);
           Dout : inout  STD_LOGIC_VECTOR (7 downto 0);
           dsk_Di : in  STD_LOGIC_VECTOR (7 downto 0); -- pour l'indexation DSK<=>simple_DSK
			  dsk_Do : out  STD_LOGIC_VECTOR (7 downto 0); -- pour l'indexation DSK<=>simple_DSK
           dsk_A : out  STD_LOGIC_VECTOR (20 downto 0);
           dsk_W : out  STD_LOGIC;
			  dsk_info:in std_logic_vector(4 downto 0);
			  --phase_color : out STD_LOGIC_VECTOR (2 downto 0);
			  --M1_n:in STD_LOGIC;
			  dsk_transmit : out STD_LOGIC -- direct transmission between DSK and Z80 following dsk_A/dsk_R/dsk_W
			  --indexing: out STD_LOGIC -- z80 must wait (sur le reset du z80)
			  --is_ucpm : in std_logic
			  --indexing_done:out std_logic
			  );
			  	attribute keep : string;
				attribute keep of dsk_info : signal is "TRUE";
				attribute clock_signal : string;
				attribute clock_signal of dsk_info : signal is "NO";
end simple_DSK;

architecture Behavioral of simple_DSK is
	constant REQ_MASTER : STD_LOGIC_VECTOR (7 downto 0):=x"80";
	constant DATA_IN_OUT : STD_LOGIC_VECTOR (7 downto 0):=x"40";
	constant COMMAND_BUSY : STD_LOGIC_VECTOR (7 downto 0):=x"10";
	constant EXEC_MODE : STD_LOGIC_VECTOR (7 downto 0):=x"20";

	signal status:STD_LOGIC_VECTOR (7 downto 0);
	
	constant ST0_SEEK_END : std_logic_vector(7 downto 0):=x"20";
	
	constant ETAT_OSEF:integer range 0 to 4:=0;
	constant ETAT_READ_DIAGNOSTIC:integer range 0 to 4:=1;
	constant ETAT_READ:integer range 0 to 4:=2;
	constant ETAT_SEEK:integer range 0 to 4:=3;
	constant ETAT_WRITE:integer range 0 to 4:=4;
	
	constant PHASE_ATTENTE_COMMANDE:integer range 0 to 4:=0;
	constant PHASE_COMMAND:integer range 0 to 4:=1;
	constant PHASE_EXECUTION_READ:integer range 0 to 4:=2;
	constant PHASE_EXECUTION_WRITE:integer range 0 to 4:=3;
	constant PHASE_RESULT:integer range 0 to 4:=4;

	signal phase:integer range 0 to 4;

	
begin

--phase_color <= conv_std_logic_vector(phase,phase_color'length);
status <= REQ_MASTER when phase = PHASE_ATTENTE_COMMANDE
	else REQ_MASTER or COMMAND_BUSY when phase = PHASE_COMMAND
	else REQ_MASTER or COMMAND_BUSY or EXEC_MODE when phase = PHASE_EXECUTION_READ
	else REQ_MASTER or COMMAND_BUSY or EXEC_MODE or DATA_IN_OUT when phase = PHASE_EXECUTION_WRITE
	else REQ_MASTER or COMMAND_BUSY or DATA_IN_OUT when phase = PHASE_RESULT
	else REQ_MASTER;
	
-- vue qu'on doit prendre en compte directement les commandes demandés par le z80
-- il va faloir gérer la RAM directement
cortex:process(CLK8(0),reset)
	variable current_track:integer range 0 to MAX_TRACKS-1;
	variable current_sector:integer range 0 to MAX_SECTORS-1;
	variable dsk_info_mem:std_logic_vector(dsk_info'range);
	variable current_byte:integer;
	--type sector_size_type is array(0 to 4) of integer;
	--constant SECTOR_SIZES:sector_size_type:=(128,256,512,1024,2048);--(x"80",x"100",x"200",x"400",x"800",x"1000",x"1800");
	constant SECTOR_SIZE:integer:=512; -- les formats protégés sont SECTOR_SIZES(6)
	
	type params_type is array(0 to 7) of std_logic_vector(7 downto 0);
	type results_type is array(0 to 6) of std_logic_vector(7 downto 0);
	variable command_restant:integer range 0 to 8;
	variable params:params_type; -- à empiler params(command_restant)
	variable exec_restant:integer;
	variable exec_restant_write:integer;
	variable result_restant:integer range 0 to 7;
	variable results:results_type; -- à dépiler results(result_restant)
	type chrn_type is array(0 to 3) of std_logic_vector(7 downto 0);
	variable chrn:chrn_type;
	-- track 0 ou +
	-- sector 0 ou +
	-- return [sectTrack,sectSize,sectId,sectSize]
	function getCHRN (track: in integer range 0 to MAX_TRACKS-1;sector: in integer range 0 to MAX_SECTORS-1;dsk_info:std_logic_vector(4 downto 0)) return chrn_type is
		variable chrn:chrn_type;
		variable sector_zone_mem:std_logic_vector(7 downto 0);
		variable side_mem:std_logic_vector(7 downto 0);
	begin
		sector_zone_mem:= dsk_info(3 downto 0) & x"1";
		side_mem:="0000000" & dsk_info(4);
		--return (track_id(track),x"00",sector_ids_of_tracks(track,sector),sector_sizes_of_tracks(track,sector));
-- "C:/Users/freemac/BuildYourOwnZ80Computer/simple_DSK.vhd" line 170: Index value(s) does not match array range, simulation mismatch.
		--if ucpm='1' then
		--	chrn:=(conv_std_logic_vector(track,8),x"00",conv_std_logic_vector(sector,8)+x"41",x"02");
		--else
			chrn:=(conv_std_logic_vector(track,8),side_mem,conv_std_logic_vector(sector,8)+ sector_zone_mem,x"02");
		--end if;
		return chrn;
	end getCHRN;
	-- retourne le pointeur dans memory
	function getData(chrn: in chrn_type) return std_logic_vector is
		variable address:std_logic_vector(20 downto 0); -- simulator Cannot access 'dsk_a' from inside pure function 'getdata'. --dsk_A'range);
		variable pff:std_logic_vector(7 downto 0);
	begin
		pff:="0000" & chrn(2)(3 downto 0);
		pff:=pff-1;
		-- no_side on A(18) for 512KB compatibility of most games.
		--00 RAM ROM
		--11 00 dsk NOT NOT
		--10 01 dsk NOT NOT
		--01 10 dsk NOT NOT
		-- changement de formule
		address:= chrn(1)(0) & not(chrn(0)(6)) & not(chrn(0)(5)) & not(chrn(0)(4)) & chrn(0)(3 downto 0) & pff(3 downto 0) & "0" & x"00";
		return address;
	end getData;
	variable etat:integer range 0 to 4;
	variable command:std_logic_vector(7 downto 0);
	variable check_dsk_face:boolean;
	variable dsk_A_mem:STD_LOGIC_VECTOR (dsk_A'range);
	variable data:std_logic_vector(7 downto 0);
	variable was_concerned:boolean:=false;
	variable do_update:boolean;
begin
--	dsk_A<=dsk_A_mem;

	if reset='1' then
		Dout<=(others=>'Z');
		dsk_A<=(others=>'0');
		current_track:=0;
		current_sector:=0;
		command_restant:=0;
		exec_restant:=0;
		result_restant:=0;
		phase <=PHASE_ATTENTE_COMMANDE;
		etat:=ETAT_OSEF;
		dsk_transmit<='0';
		dsk_Do<=(others=>'Z');
		dsk_W<='0';
		data:=(others=>'0');
		
		was_concerned:=false;
		do_update:=false;
	else
		if rising_edge(CLK8(0)) then

if CLK8(2)='1' then
	-- CRTC working
else
	-- z80 working
if CLK8(1)='0' then
if (IO_RD='1' or IO_WR='1') and A10_A8_A7=b"010"  then
	-- I am concerned
	if was_concerned then --and M1_n='1'
		-- on touche surtout à rien
		do_update:=false;
		was_concerned:=true;
	else
		-- nouveau
		do_update:=true;
		was_concerned:=true;
	end if;
--elsif A10_A8_A7=b"010"  then
--	-- I was concerned ?
--	if was_concerned then --and M1_n='1'
--		-- on touche surtout à rien
--		do_update:=false;
--		was_concerned:=true;
--	else
--		-- I wait again to be concerned...
--		do_update:=false;
--		was_concerned:=false;
--	end if;
else
	-- I am not concerned : liberation entrée/sorties
	if CLK8(1)='0' then
		dsk_W<='0';
		dsk_Do<=(others=>'Z');
		Dout<=(others=>'Z');
	end if;
	was_concerned:=false;
	do_update:=false;
end if;
end if;
if do_update then
			if CLK8(1)='0' then
				-- z80 is solved
				dsk_W<='0';
				dsk_Do<=(others=>'Z');
				Dout<=(others=>'Z');
				if (IO_RD='1' and A10_A8_A7=b"010" and A0='0') then
					-- read status
				elsif (IO_RD='1' and A10_A8_A7=b"010" and A0='1') then
					-- read data
					if phase=PHASE_EXECUTION_READ then
						if exec_restant>0 then
							exec_restant:=exec_restant-1;
						end if;
						if etat=ETAT_READ then
							--dsk_transmit<='1';
							--if current_byte>=SECTOR_SIZES(chrn(3)) then
							if current_byte>=SECTOR_SIZE then
								current_sector:=current_sector+1;
								--if sector_count_of_tracks(current_track)>=current_sector then
								if MAX_SECTORS>=current_sector then
									current_sector:=0;
									current_track:=current_track+1;
									if MAX_TRACKS>=current_track then
										current_track:=0; -- rotate XD
									end if;
								end if;
								current_byte:=0;
							end if;
							chrn:=getCHRN(current_track,current_sector,dsk_info_mem);
							dsk_A_mem:=getData(chrn)+current_byte;
							dsk_A<=dsk_A_mem;
							dsk_transmit<='1';
							current_byte:=current_byte+1;
						else
							-- BIZARRE
						end if;
					elsif phase=PHASE_RESULT then
						-- au second tick
					else
						-- BIZARRE
					end if;
				elsif (IO_WR='1' and A10_A8_A7=b"010" and A0='0') then
					-- BIZARRE
				elsif (IO_WR='1' and A10_A8_A7=b"010" and A0='1') then
					-- write data
					
					if phase=PHASE_EXECUTION_WRITE then
						if exec_restant_write>0 then
							exec_restant_write:=exec_restant_write-1;
						end if;
						if etat=ETAT_WRITE then
							--if current_byte>=SECTOR_SIZES(chrn(3)) then
							if current_byte>=SECTOR_SIZE then
								current_sector:=current_sector+1;
								--if sector_count_of_tracks(current_track)>=current_sector then
								if MAX_SECTORS>=current_sector then
									current_sector:=0;
									current_track:=current_track+1;
									if MAX_TRACKS>=current_track then
										current_track:=0; -- rotate XD
									end if;
								end if;
								current_byte:=0;
							end if;
							chrn:=getCHRN(current_track,current_sector,dsk_info_mem);
							dsk_A_mem:=getData(chrn)+current_byte;
							dsk_A<=dsk_A_mem;
							dsk_W<='1';
							data:=D_command;
							dsk_Do<=data;
							dsk_transmit<='1';
							current_byte:=current_byte+1;
						else
							-- BIZARRE
						end if;
					end if;
					-- au second tick
				end if;
			elsif CLK8(1)='1' then
				-- conclude
				if (IO_RD='1' and A10_A8_A7=b"010" and A0='0') then
					-- read status
					Dout<=status;
				elsif (IO_RD='1' and A10_A8_A7=b"010" and A0='1') then
					if phase=PHASE_EXECUTION_READ then
						if etat=ETAT_READ then
							data:=dsk_Di; --(others=>'0');
							Dout<=data;
							dsk_transmit<='0';
							if exec_restant=0 then
								phase<=PHASE_RESULT;
								result_restant:=7;
								results(6):=ST0_SEEK_END; -- ST0
								results(5):=x"00"; -- ST1
								results(4):=x"00"; -- ST2
								results(3):=params(6); -- C
								results(2):=params(5); -- H
								results(1):=params(4); -- R
								results(0):=params(3); -- N
							end if;
						end if;
					elsif phase=PHASE_RESULT then
						if result_restant>0 then
							result_restant:=result_restant-1;
							data:=results(result_restant); -- dépile
							Dout<=data;
							if result_restant=0 then
								phase<=PHASE_ATTENTE_COMMANDE;
								etat:=ETAT_OSEF;
							end if;
						else
							-- BIZARRE
						end if;
					end if;
				elsif (IO_WR='1' and A10_A8_A7=b"010" and A0='0') then
					-- BIZARRE
				elsif (IO_WR='1' and A10_A8_A7=b"010" and A0='1') then
					-- write data
					if phase=PHASE_EXECUTION_WRITE then
						-- not implemented
						if etat=ETAT_WRITE then
							dsk_transmit<='0';
							dsk_W<='0';
							dsk_Do<=(others=>'Z');
							if exec_restant_write=0 then
								phase<=PHASE_RESULT;
								result_restant:=7;
								results(6):=ST0_SEEK_END; -- ST0
								results(5):=x"00"; -- ST1
								results(4):=x"00"; -- ST2
								results(3):=params(6); -- C
								results(2):=params(5); -- H
								results(1):=params(2); --params(4); -- R EOT
								results(0):=params(3); -- N
							end if;
						end if;
					elsif phase=PHASE_ATTENTE_COMMANDE then
						command_restant:=0;
						exec_restant:=0;
						exec_restant_write:=0;
						result_restant:=0;
						etat:=ETAT_OSEF;
						check_dsk_face:=true;
						dsk_info_mem:=dsk_info;
						phase<=PHASE_ATTENTE_COMMANDE;
						-- MT MF et SK (les trois premiers bits de D on s'en fou)
						command:=D_command and x"1f";
						case command is
							when x"02" => -- read diagnostic
								command_restant:=8; -- dont EOT qui détermine jusqu'où il faut lire buffer
								etat:=ETAT_READ_DIAGNOSTIC;
								phase<=PHASE_COMMAND;
							when x"03" => -- specify
								command_restant:=2;
								phase<=PHASE_COMMAND;
							when x"05" => -- write data
								command_restant:=8;
								etat:=ETAT_WRITE;
								phase<=PHASE_COMMAND;
							when x"06" => -- read
								command_restant:=8;
								etat:=ETAT_READ;
								phase<=PHASE_COMMAND;
							when x"07" => -- recalibrate
								command_restant:=1;
								phase<=PHASE_COMMAND;
								-- goto track 0
								current_track:=0;
								current_sector:=0;
								dsk_info_mem(4):='0'; -- side 0
							when x"08" => -- sense interrupt status : status information about the FDC at the end of operation
								result_restant:=2;
								phase<=PHASE_RESULT;
								results(1):=ST0_SEEK_END;
								results(0):=conv_std_logic_vector(current_track,8); -- PCN : Present Cylinder Number
							when x"0a" => -- read id
								command_restant:=1; -- select drive/side : osef
								chrn:=getCHRN(current_track,current_sector,dsk_info_mem);
								result_restant:=7;
								--etat:=ETAT_READ_ID; -- sort of ETAT_OSEF
								phase<=PHASE_COMMAND;
								results(6):=ST0_SEEK_END;
								results(5):=x"00"; -- ST1
								results(4):=x"00"; -- ST2
								results(3):=chrn(0);
								results(2):=chrn(1);
								results(1):=chrn(2);
								results(0):=chrn(3);
							when x"0f" => -- seek : changement de track
								command_restant:=2;
								etat:=ETAT_SEEK;
								phase<=PHASE_COMMAND;


								
								
							when others => --BIZARRE
						end case;
					elsif phase=PHASE_COMMAND then
						if command_restant>0 then
							command_restant:=command_restant-1;
							params(command_restant):=D_command;
							if check_dsk_face then
								check_dsk_face:=false;
								-- HD : physical HEAD
								dsk_info_mem(4):=D_command(2) and dsk_info_mem(4); -- HD US1 US0
							end if;
						end if;
						if command_restant=0 then
							if etat=ETAT_READ_DIAGNOSTIC then
								-- params select C H R N EOT GPL DTL
								result_restant:=7;
								results(6):=ST0_SEEK_END;
								results(5):=x"00"; -- ST1
								results(4):=x"00"; -- ST2
								results(3):=params(6); -- C
								results(2):=params(5);-- H
								results(1):=params(2); -- EOT as sector_id
								current_track:=conv_integer(params(6));
--								for t in 0 to MAX_TRACKS-1 loop
--									if track_id(t)=params(6) then
--										current_track:=t;
--									end if;
--								end loop;
--								for s in 0 to MAX_SECTORS-1 loop
--									--if sector_ids_of_tracks(current_track,s)=params(2) then
--									if sector_ids(s)=params(2) then
--										current_sector:=s;
--									end if;
--								end loop;
								current_sector:=conv_integer(params(2)(3 downto 0))-1;
								--results(0):=sector_sizes_of_tracks(current_track,current_sector); -- N
								results(0):=x"02"; -- N
							elsif etat=ETAT_READ then
								-- params select C H R N EOT GPL DTL
								if params(3)>0 then -- N
									exec_restant:=SECTOR_SIZE;--S(params(3)); -- SECTOR_SIZES(params(3))
								else
									exec_restant:=conv_integer(params(0));
								end if;
								current_track:=conv_integer(params(6));
--								for t in 0 to MAX_TRACKS-1 loop
--									if track_id(t)=params(6) then
--										current_track:=t;
--									end if;
--								end loop;
--								for s in 0 to MAX_SECTORS-1 loop
--									--if sector_ids_of_tracks(current_track,s)=params(4) then
--									if sector_ids(s)=params(4) then
--										current_sector:=s;
--									end if;
--								end loop;
								current_sector:=conv_integer(params(4)(3 downto 0))-1;
								current_byte:=0;
							elsif etat=ETAT_SEEK then
								-- params select NCN
								current_track:=conv_integer(params(0)); -- NCN
--								for t in 0 to MAX_TRACKS-1 loop
--									if track_id(t)=params(0) then -- NCN
--										current_track:=t;
--									end if;
--								end loop;
								current_sector:=0;
								current_byte:=0;
							elsif etat=ETAT_WRITE then
								-- params select C H R N EOT GPL DTL
								if params(3)>0 then -- N
									exec_restant_write:=SECTOR_SIZE;--S(params(3)); -- SECTOR_SIZES(params(3))
								else
									exec_restant_write:=conv_integer(params(0)); -- DTL
								end if;
								current_track:=conv_integer(params(6));
								current_sector:=conv_integer(params(4)(3 downto 0))-1;
								current_byte:=0;
								
							end if;
							if exec_restant>0 then
								phase<=PHASE_EXECUTION_READ; -- on passe en mode execution_read
								--dsk_transmit<='1';
							elsif exec_restant_write>0 then
								phase<=PHASE_EXECUTION_WRITE;
							elsif result_restant>0 then
								phase<=PHASE_RESULT; -- on passe en mode RESULT
							else
								phase<=PHASE_ATTENTE_COMMANDE;
							end if;
						end if;
					end if;
				end if;
			end if;
end if; --do_update
end if;
		end if;
	end if;
end process cortex;
end Behavioral;
