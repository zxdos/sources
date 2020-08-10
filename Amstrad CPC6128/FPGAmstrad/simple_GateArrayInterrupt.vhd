library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_arith.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- alors voyons ça au clair
-- 12/13 maj de l'offset après au dessus de 9 ça ne sert à rien
-- 0 1 2 3 déclenche setEvents => étrange ce sont justement tout ce qui touche à l'HORIZONTAL
-- 7 semble chatouilleux si sa valeur est 0 mais ça semble être une erreur de coding
-- 3 lance setReg3(value) qui règlent étrangement hsyncWidth et vsyncWidth
-- 6 lance setReg6() guili pour une démo
-- 8 lance setReg8(value) interlace

-- ink 0,2,20
-- speed ink 1,1
entity simple_GateArrayInterrupt is
	Generic (--LATENCE_MEM_WR:integer:=1;
	M1_OFFSET:integer :=3;
	--NB_HSYNC_BY_INTERRUPT:integer:=52; --52; -- 52 normalement 52
	NB_LINEH_BY_VSYNC:integer:=24+1; --4--5-- VSYNC normalement 4 HSYNC
	-- continuer sur cette voie, fixer le moment de l'interruption exactement à la fin de la HSYNC
	--j'ai HDISP donc je peut déterminer les chronos exacte et faire un générateur fixe.
	-- 39*8=312   /40=7.8 /52=6 /32=9.75
  VRAM_HDsp:integer:=800/16; -- des mots de 16bit, contenant plus ou moins de pixels... pensons en référence mode 2, du 800x600 mode 2
  VRAM_VDsp:integer:=600/2;
  VRAM_Hoffset:integer:=12; -- 63*16-46*16
  VRAM_Voffset:integer:=14 --+(600/2-480/2)/2 -- n'influe pas sur superposition rupture-ink image (car eux dépendent du temps), influe seulement sur position image sur l'écran
  --VDecal_negatif:integer:=(600-480)/2
	);
    Port ( CLK8 : in  STD_LOGIC_VECTOR(2 downto 0);
           IO_REQ_W : in  STD_LOGIC;
			  IO_REQ_R : in  STD_LOGIC;
           A15_A14_A9_A8 : in  STD_LOGIC_VECTOR (3 downto 0);
			  MODE_select:in STD_LOGIC_VECTOR (1 downto 0);
           D : in  STD_LOGIC_VECTOR (7 downto 0);
			  Dout : inout  STD_LOGIC_VECTOR (7 downto 0):=(others=>'Z');
			  crtc_VSYNC : out STD_LOGIC:='0';
			  IO_ACK : in STD_LOGIC;
			  --crtc_A est aussi vram_A une fois sur deux :/
			  crtc_A:out STD_LOGIC_VECTOR (15 downto 0):=(others=>'0'); --sim
			  crtc_W:out STD_LOGIC:='0'; -- alternance 2MHz déphasé     ===//
			  crtc_D:out std_logic_vector(7 downto 0);
			  crtc_transmit:out STD_LOGIC:='0';
           int : out  STD_LOGIC:='1';
			  M1_n : in  STD_LOGIC;
			  --MEM_WR:in std_logic;
			  --WAIT_MEM_n : out  STD_LOGIC:='1';
           WAIT_n : out  STD_LOGIC:='1';
			  
			  ram_D : in  STD_LOGIC_VECTOR (7 downto 0);
			  
			  palette_A: out STD_LOGIC_VECTOR (12 downto 0):=(others=>'0');
			  palette_D: out std_logic_vector(7 downto 0);
			  palette_W: out std_logic;
			  reset:in  STD_LOGIC
			  
			  );
end simple_GateArrayInterrupt;

architecture Behavioral of simple_GateArrayInterrupt is
	-- init values are for test bench datasheet !
--	signal RHtot:std_logic_vector(7 downto 0):="00010000";
--	signal RHdisp:std_logic_vector(7 downto 0):="00000111";
--	signal RHsyncpos:std_logic_vector(7 downto 0):="00001001";
--	signal RHwidth:std_logic_vector(3 downto 0):="0100";
--	signal RVwidth:std_logic_vector(4 downto 0):="00011";
--	signal RVtot:std_logic_vector(6 downto 0):="0011000";
--	signal RVtotAdjust:std_logic_vector(4 downto 0):="00010";
--	signal RVdisp:std_logic_vector(6 downto 0):="0001111";
--	signal RVsyncpos:std_logic_vector(6 downto 0):="0010011";
--	signal RRmax:std_logic_vector(4 downto 0):="00011";
	
	-- init values are for test bench javacpc !
	signal RHtot:std_logic_vector(7 downto 0):="00111111";
	signal RHdisp:std_logic_vector(7 downto 0):="00101000";
	signal RHsyncpos:std_logic_vector(7 downto 0):="00101110";
	signal RHwidth:std_logic_vector(3 downto 0):="1110";
	signal RVwidth:std_logic_vector(3 downto 0):="1000";
	signal RVtot:std_logic_vector(6 downto 0):="0100110";
	signal RVtotAdjust:std_logic_vector(4 downto 0):="00000";
	signal RVdisp:std_logic_vector(6 downto 0):="0011001";
	signal RVsyncpos:std_logic_vector(6 downto 0):="0011110";
	signal RRmax:std_logic_vector(4 downto 0):="00111";

	constant DO_NOTHING : STD_LOGIC:='0';
	constant DO_HSYNC : STD_LOGIC:='1';
	constant DO_VSYNC : STD_LOGIC:='1';
	
	signal OFFSET:STD_LOGIC_VECTOR(13 downto 0):="110000" & "00000000";--(others=>'0');

	signal vsync:std_logic;
	signal hsync:std_logic;
	
	signal CLK4MHz : STD_LOGIC;
	
	signal crtc_R:STD_LOGIC:='0'; -- variable commune local

	type pen_type is array(15 downto 0) of integer range 0 to 31;
	signal pen:pen_type; --:=(4,12,21,28,24,29,12,5,13,22,6,23,30,0,31,14);
	--signal border:integer range 0 to 31;
	--signal crtc_A_i:STD_LOGIC_VECTOR (15 downto 0); -- test A/D
begin

-- scan de la RAM (de manière intrusive) par le CRTC, puis envoi à la VRAM
	process(CLK8(0),reset) is -- transmit
		variable D2:STD_LOGIC_VECTOR (7 downto 0):=(others=>'0');
		variable crtc_R_do:boolean:=false;-- test A/D
	begin
		crtc_D<=D2;
		if reset='1' then
			crtc_transmit<='0'; -- relax
--			ram_D<=(others=>'Z'); -- relax
		else
			-- address is solving
			if rising_edge(CLK8(0)) then
				crtc_transmit<='0';
			--	ram_D<=(others=>'Z'); -- relax (read only)
				if CLK8(2)='1' then
					-- CRTC working
					if CLK8(1)='0' then
						-- address is solved
						if crtc_R='1' then
							crtc_transmit<='1';
							crtc_R_do:=true;
						else
							crtc_R_do:=false;
						end if;
					elsif CLK8(1)='1' then
						if crtc_R_do then
							D2:=ram_D;
							--D2:=crtc_A_i(8 downto 1); -- test A/D : fail
						end if;
					end if;
				else
					-- z80 working
				end if;
			end if;
		end if;
	end process;

	CLK4MHz<=not(CLK8(2)); -- cad l'inverse de l'horloge du z80

ctrcConfig_process:process(CLK4MHz,reset) is
	variable reg_select32 : std_logic_vector(7 downto 0);
	variable reg_select : integer range 0 to 17;
	type registres_type is array(0 to 17) of std_logic_vector(7 downto 0);
	variable registres:registres_type;
		
	constant A9_WRITE:std_logic:='0';
	
	variable ink:STD_LOGIC_VECTOR(3 downto 0);
	variable border_ink:STD_LOGIC;
	variable ink_color:STD_LOGIC_VECTOR(4 downto 0);
	variable pen_mem:pen_type;--:=(4,12,21,28,24,29,12,5,13,22,6,23,30,0,31,14);
	--variable border_mem:integer range 0 to 31;
begin
	if reset='1' then
		Dout<=(others=>'Z'); -- relax
	elsif rising_edge(CLK4MHz) then
		
		if IO_REQ_W='1' and A15_A14_A9_A8(3) = '0' and A15_A14_A9_A8(2) = '1' then
			if D(7) ='0' then
				-- ink -- osef
				if D(6)='0' then
					border_ink:=D(4);
					ink:=D(3 downto 0);
				else
					ink_color:=D(4 downto 0);
					if border_ink='0' then
						pen_mem(conv_integer(ink)):=conv_integer(ink_color);
						pen<=pen_mem;
					--else
					--	border_mem:=conv_integer(ink_color);
					--	border<=border_mem;
					end if;
				end if;
			end if;
		end if;
		
		-- Test qui réduit le nombre de caractères affichés en largeur :
		--
		-- OUT &BC00,1
		-- OUT &BD00,20
		-- OUT &BD00,40
	
		if (IO_REQ_W or IO_REQ_R)='1' and A15_A14_A9_A8(2)='0' then
			if A15_A14_A9_A8(1)=A9_WRITE then
				Dout<=(others=>'Z');
				if A15_A14_A9_A8(0)='0' then
					reg_select32:=D and x"1F";
					if reg_select32<=x"11" then -- < 17
						reg_select:=conv_integer(reg_select32);
					else
						reg_select:=17; -- out of range :p
					end if;
				else
					registres(reg_select):=D;
					case reg_select is
						when 0=>
							RHtot<=registres(0);
						when 1=>
							RHdisp<=registres(1);
						when 2=>
							RHsyncpos<=registres(2);
						when 3=>
	-- selon datasheet et Arnold (Arnold dit qu'il y a une table de conversion HSYNC crtc.c.GA_HSyncWidth)
							RHwidth<=registres(3)(3 downto 0); -- DataSheet
							RVwidth<=registres(3)(7 downto 4); -- CRTC0
						when 4=>
							RVtot<=registres(4)(RVtot'range) ;
						when 5=>
							RVtotAdjust<=registres(5)(RVtotAdjust'range);
						when 6=>
							RVdisp<=registres(6)(RVdisp'range);
						when 7=>
							RVsyncpos<=registres(7)(RVsyncpos'range);
						when 8=>NULL;
							-- interlace & skew
						when 9=>
							-- max raster adress
							RRmax<=registres(9)(RRmax'range);
						when 10=>NULL;
							-- cursor start raster 
						when 11=>NULL;
							-- cursor end raster
						when 12=>
							-- start adress H
							OFFSET<=registres(12)(5 downto 0) & registres(13);
						when 13=>
							-- start adress L
							OFFSET<=registres(12)(5 downto 0) & registres(13);
						when 14=>NULL;
							-- cursor H
						when 15=>NULL;
							-- cursor L
						when 16=>NULL;
							--light pen H
						when 17=>NULL;
							--light pen L
					end case;
				end if;
			else
				-- A9_READ
				Dout<=(others=>'1');
--				if A15_A14_A9_A8(0)='1' then
--					if reg_select32 = x"0A" then -- R10
--						Dout<=registres(10) and x"7f"; -- applying the write mask here
--					elsif reg_select32 = x"0B" then -- R11
--						Dout<=registres(11) and x"1f"; -- applying the write mask here
--					elsif reg_select32 = x"0C" then -- R12
--						--CRTC0 HD6845S/MC6845: Start Address Registers (R12 and R13) can be read.
--						Dout<=registres(12) and x"3f";  -- applying the write mask here
--					elsif reg_select32 = x"0D" then -- R13
--						Dout<=registres(13); -- type 0
--						--CRTC0 HD6845S/MC6845: Start Address Registers (R12 and R13) can be read.
--					elsif reg_select32 = x"0E" then -- R14
--						Dout<=registres(14) and x"3f"; -- applying the write mask here
--					elsif reg_select32 = x"0F" then -- R15	
--						Dout<=registres(15);-- all types
--					elsif reg_select32 = x"10" then -- R16
--						--	Light Pen Address (read only, don't dependant on write !!!) - "Emulator Sucks"
--						Dout<=x"00"; --registres(16) and x"3f";-- all types
--					elsif reg_select32 = x"11" then -- R17
--						--	Light Pen Address (read only, don't dependant on write !!!) - "Emulator Sucks"
--						Dout<=x"00"; --registres(17);-- all types
--					elsif reg_select32 = x"FF" then
--						-- registers 18-30 read as 0 on type1, register 31 reads as 0x0ff.
--						Dout<=x"FF";
--					else
--						-- 1. On type 0 and 1, if a Write Only register is read from, "0" is returned.
--						-- registers 18-31 read as 0, on type 0 and 2.
--						-- registers 18-30 read as 0 on type1
--						Dout<=x"00";
--					end if;
--				end if;
			end if;
		else
			Dout<=(others=>'Z');
		end if;
		
		pen<=pen_mem;

	end if;
end process ctrcConfig_process;

	-- ATTENTION : partie CRTC testé et validé via testbench
simple_GateArray_process : process(CLK4MHz) is
 
 variable compteur1MHz : integer range 0 to 3:=0;
	variable dispV:std_logic:='0';
	variable dispH:std_logic:='0';
	variable disp_VRAM:std_logic:='0';
	--variable bug_has_top_disp:boolean:=false;
	-- selon Quazar 300 fois par seconde
	-- selon une trace dans google de www.cepece.info/amstrad/docs/garray.html j'ai
	-- "In the CPC the Gate Array generates maskable interrupts, to do this it uses the HSYNC and VSYNC signals from CRTC, a 6-bit internal counter and monitors..."
-- à lire aussi peut etre : http://www.cpcwiki.eu/index.php/Synchronising_with_the_CRTC_and_display 
		-- selon http://cpcrulez.fr/coding_amslive04-z80.htm
		variable horizontal_counter : std_logic_vector(7 downto 0):=(others=>'0'); --640/16
		variable line_counter : std_logic_vector(7 downto 0):=(others=>'0');
		variable raster_counter:std_logic_vector(7 downto 0):=(others=>'0');
		variable etat_rgb : STD_LOGIC:=DO_NOTHING;
		variable etat_hsync : STD_LOGIC:=DO_NOTHING;
		variable etat_monitor_hsync : STD_LOGIC_VECTOR(3 downto 0):=(others=>DO_NOTHING);
		variable etat_vsync : STD_LOGIC:=DO_NOTHING;
		variable etat_monitor_vsync : STD_LOGIC_VECTOR(3 downto 0):=(others=>DO_NOTHING);
		variable etat_monitor_vhsync : STD_LOGIC_VECTOR(3 downto 0):=(others=>DO_NOTHING);

		variable ADRESSE_maStore_mem:STD_LOGIC_VECTOR(13 downto 0):=(others=>'0');
		variable ADRESSE_MAcurrent_mem:STD_LOGIC_VECTOR(13 downto 0):=(others=>'0');
		variable crtc_A_mem:std_logic_vector(14 downto 0):=(others=>'0'); --memoire 16bit
		variable vram_A_mem:std_logic_vector(14 downto 0):=(others=>'0'); --memoire 16bit

		variable was_M1_1:boolean:=false;
		variable waiting:boolean:=false;
		--variable waiting_MEMWR:integer range 0 to LATENCE_MEM_WR:=LATENCE_MEM_WR;
		--variable was_MEMWR_0:boolean:=false;
		
		--(128*1024)/64 2*1024=2^11
		variable zap_scan:boolean:=true; -- il n'y a pas eu de blank donc ne pas scanner la mémoire

		variable vram_vertical_offset_counter:integer:=0;
		variable vram_vertical_counter:integer:=0;
		variable in_800x600:boolean:=false;
		variable vram_horizontal_offset_counter:integer:=0;
		variable vram_horizontal_counter:integer:=0;
		constant IS_H_MIDDLE :integer:=VRAM_HDsp/2;

		variable palette_A_mem:std_logic_vector(13 downto 0):=(others=>'0');
		variable palette_D_mem:std_logic_vector(7 downto 0);
		--variable disp_begin_mem:std_logic:='0';
		variable palette_horizontal_counter:integer range 0 to 1+16+1:=1+16+1; --640/16
		variable palette_color:integer range 0 to 16-1;

		variable RVtotAdjust_mem:std_logic_vector(7 downto 0):=(others=>'0');
		variable RVtotAdjust_do:boolean:=false;

		variable hSyncCount:std_logic_vector(3 downto 0):=(others=>'0');
		variable vSyncCount:std_logic_vector(3 downto 0):=(others=>'0');

	begin
		if falling_edge(CLK4MHz) then
		
		compteur1MHz:=(compteur1MHz+1) mod 4;
		
crtc_R<='0';
crtc_W<='0';
palette_W<='0';

-- Crazy Car II n'aime pas le little_reset
			-- asphalt IACK sans test sur int_mem
			-- compteur jamais supérieur à 52
			-- z80 mode 1 : the byte need no be sent, as the z80 restarts at logical address x38 regardless(z80 datasheet)
			case compteur1MHz is
			when 0=>
				-- CRTC0
				etat_monitor_hsync:=etat_monitor_hsync(2 downto 0) & etat_monitor_hsync(0);
				if horizontal_counter=RHsyncpos and RHwidth/=x"0" then
					hSyncCount:= x"0";
					etat_hsync:=DO_HSYNC;
					etat_monitor_hsync(0):=DO_HSYNC;
hsync<='1'; -- selon javacpc,grimware et arnold
				elsif etat_hsync=DO_HSYNC then
					hSyncCount:=hSyncCount+1;
					if hSyncCount=RHwidth then
						etat_hsync:=DO_NOTHING;
hsync<='0';
					elsif hSyncCount=1+4 then
						etat_monitor_hsync:="0000";
					end if;
				end if;

				--http://www.phenixinformatique.com/modules/newbb/viewtopic.php?topic_id=4316&forum=9
				--Dans les spécifications originale du CRTC, il n'y a aucun controle sur la durée du VSync, de plus, les bits 4 à 7 du R3 sont inutilisés. Certains constructeurs ont donc "récupéré" ces bits libres pour y coller leurs propres "features", pour la plupart liées au VSync (un peu comme le mode entrelacé du R8, d'ou les incompatiblités d'un type de CRTC à l'autre).
				--PPI read CRTC.isVSYnc bool
				if horizontal_counter = 0 then
					etat_monitor_vsync:=etat_monitor_vsync(2 downto 0) & etat_monitor_vsync(0);
					if raster_counter=0 and line_counter=RVsyncpos then
						vSyncCount:= x"0";
						etat_vsync:=DO_VSYNC;
						etat_monitor_vsync(0):=DO_VSYNC;
crtc_VSYNC<='1'; -- c'est bien 1 ici car il faut qu'un interrupt pendant le vsync=1 sinon border va trop vite
vsync<='1';
					elsif etat_vsync=DO_VSYNC then
						vSyncCount:=vSyncCount+1;
						if vSyncCount=RVwidth then
							etat_vsync:=DO_NOTHING;
							etat_monitor_vsync:="0000";
crtc_VSYNC<='0';
vsync<='0';
						elsif vSyncCount=2+2 then
							etat_monitor_vsync:="0000";
						end if;
					end if;
				end if;
				etat_monitor_vhsync:=etat_monitor_vhsync(2 downto 0) & etat_monitor_vsync(2);

				if zap_scan then
					dispH:='0';
				elsif horizontal_counter = 0 then
					dispH:='1';
				elsif horizontal_counter=RHdisp then
					dispH:='0';
					if raster_counter=RRMax then
						ADRESSE_maStore_mem:=ADRESSE_maStore_mem + RHDisp;
					end if;
				end if;
				if line_counter=0 then
					dispV:='1';
				elsif line_counter=RVDisp and raster_counter=0 then
					dispV:='0';
				end if;

				if dispH='1' and dispV='1' then
					-- http://quasar.cpcscene.com/doku.php?id=assem:crtc
					crtc_A_mem(14 downto 0):=ADRESSE_MAcurrent_mem(13 downto 12) & raster_counter(2 downto 0) & ADRESSE_MAcurrent_mem(9 downto 0);

					--http://cpcrulez.fr/coding_amslive02-balayage_video.htm dit :
					--MA(13 downto 12) & RA(2 downto 0) & MA(9 downto 0) & CCLK
				else
					crtc_A_mem:=(others=>'0');
				end if;
				crtc_A(15 downto 0)<=crtc_A_mem(14 downto 0) & '0';
				crtc_R<='1';

-- vram_A : adresse sur la VRAM32Ko
-- la vram_A doit être scannée pour du 800x600 constant, et affiché sur du 640x480 centré constant.
-- crtc_A : adresse physique

-- VRAM_HDsp VRAM_VDsp
-- on va y aller tout dou
if etat_monitor_vsync(2)=DO_VSYNC and etat_monitor_vsync(3)=DO_NOTHING then
	vram_vertical_offset_counter:=0;
end if;
if etat_monitor_hsync(2)=DO_HSYNC and etat_monitor_hsync(3)=DO_NOTHING then
	if vram_vertical_counter<VRAM_VDsp then
		vram_vertical_counter:=vram_vertical_counter+1;
	end if;
	if vram_vertical_offset_counter<VRAM_Voffset then
		vram_vertical_offset_counter:=vram_vertical_offset_counter+1;
	elsif vram_vertical_offset_counter=VRAM_Voffset then
		vram_vertical_offset_counter:=vram_vertical_offset_counter+1;
		vram_vertical_counter:=0;
	end if;
	vram_horizontal_offset_counter:=0;
end if;

-- là on scan du 800x600 selon VSYNC et HSYNC, donc on peut écrire du border...
if vram_horizontal_counter<VRAM_HDsp then
	vram_horizontal_counter:=vram_horizontal_counter+1;
end if;
if vram_horizontal_offset_counter<VRAM_Hoffset then
	vram_horizontal_offset_counter:=vram_horizontal_offset_counter+1;
elsif vram_horizontal_offset_counter=VRAM_Hoffset then
	vram_horizontal_offset_counter:=vram_horizontal_offset_counter+1;
	vram_horizontal_counter:=0;
end if;


if vram_vertical_counter<VRAM_VDsp and vram_horizontal_counter<VRAM_HDsp then
	--if vram_vertical_counter<VDecal_negatif/2 then
	--	in_800x600:=false;
	--	disp_VRAM:='0';
	--else
		in_800x600:=true;
		disp_VRAM:='1';
	--end if;
	if vram_horizontal_counter=0 and vram_vertical_counter= 0 then
		palette_A_mem:=(others=>'0');
	end if;
	vram_A_mem:=conv_std_logic_vector(vram_vertical_counter*VRAM_HDsp+vram_horizontal_counter,vram_A_mem'length);
else
	-- do kill disp
	disp_VRAM:='0';
	in_800x600:=false;
end if;


				-- le CRTC est séparé de la gatearray donc il y a un temps de retard ?
				-- pas sûr car c'est du gate array (une table de vérité barbare) sur état (et non sur front !)
				if horizontal_counter=RHtot and RHtot/=0 then
					horizontal_counter:=(others=>'0');
					if (raster_counter=RRMax and line_counter=RVTot and RVtotAdjust=0 and not(RVtotAdjust_do))
						or (RVtotAdjust_do and RVtotAdjust_mem=RVtotAdjust) then
							RVtotAdjust_do:=false;
							raster_counter:=(others=>'0');
							zap_scan:=false;
							ADRESSE_maStore_mem:=OFFSET(13 downto 0);
							line_counter:=(others=>'0');
							ADRESSE_MAcurrent_mem:=ADRESSE_maStore_mem;
					elsif raster_counter=RRMax then
						raster_counter:=(others=>'0');
						if line_counter=RVTot and not(RVtotAdjust_do) then
							RVtotAdjust_mem:=x"01";
							RVtotAdjust_do:=true;
						elsif RVtotAdjust_do then
							RVtotAdjust_mem:=RVtotAdjust_mem+1;
						end if;
						ADRESSE_MAcurrent_mem:=ADRESSE_maStore_mem;
						line_counter:=(line_counter+1) and x"7F";
					else
						raster_counter:=(raster_counter + 1) and x"1F";
						if RVtotAdjust_do then
							RVtotAdjust_mem:=RVtotAdjust_mem+1;
						end if;
						ADRESSE_MAcurrent_mem:=ADRESSE_maStore_mem;
					end if;
				else
					horizontal_counter:=(horizontal_counter+1) and x"7F";
					ADRESSE_MAcurrent_mem:=ADRESSE_maStore_mem+horizontal_counter;
				end if;


			when 1=>
				crtc_A(15 downto 0)<=vram_A_mem(14 downto 0) & '0';
				if dispH='1' and dispV='1' and disp_VRAM='1' then
					crtc_W<='1';
				end if;

			when 2=>
				crtc_A(15 downto 0)<=crtc_A_mem(14 downto 0) & '1';
				crtc_R<='1';
			when 3=>
				crtc_A(15 downto 0)<=vram_A_mem(14 downto 0) & '1';
				if dispH='1' and dispV='1' and disp_VRAM='1' then
					crtc_W<='1';
				end if;
			end case;
			
			
			
			
-- là on scan du 800x600 selon VSYNC et HSYNC, donc on peut écrire du border...
			if palette_horizontal_counter<1+16+1 then
					palette_horizontal_counter:=palette_horizontal_counter+1;
			elsif in_800x600 and vram_horizontal_counter=IS_H_MIDDLE and compteur1MHz=0 then
				palette_horizontal_counter:=0;
				--if vram_vertical_counter=VDecal_negatif/2 then
					-- Arkanoid and -Ecole has strange bottom border :/
				--	bug_has_top_disp:=(dispH='1' and dispV='1');
				--end if;
			end if;
			-- on nourri la palette
			if palette_horizontal_counter<1 then
				palette_A<=palette_A_mem(12 downto 0);
				--if bug_has_top_disp then
				--	palette_D_mem:="000000" & MODE_select;
				--if dispH='1' and dispV='1' then
					palette_D_mem:="000000" & MODE_select;
				--else
				--	palette_D_mem:=conv_std_logic_vector(border,5) & "1" & MODE_select;
				--end if;
				palette_D<=palette_D_mem;
				if palette_A_mem(13)='0' then
					palette_W<='1';
				end if;
				palette_A_mem:=palette_A_mem+1;
			elsif palette_horizontal_counter<1+16 then
				palette_A<=palette_A_mem(12 downto 0);
				if palette_horizontal_counter = 1 then
					palette_color:=0;
				else
					palette_color:=palette_color+1;
				end if;
				palette_D_mem:=conv_std_logic_vector(pen(palette_color),8);
				palette_D<=palette_D_mem;
				if palette_A_mem(13)='0' then
					palette_W<='1';
				end if;
				palette_A_mem:=palette_A_mem+1;
			end if;
		
			
			
			
			
			
			
			
			--if was_MEMWR_0 and MEM_WR='1' then
			--	waiting_MEMWR:=0;
			--end if;
			
			--if waiting_MEMWR<LATENCE_MEM_WR then
			--	waiting_MEMWR:=waiting_MEMWR+1;
				--WAIT_MEM_n<='0';
			--else
				--WAIT_MEM_n<='1';
				if waiting then
					WAIT_n<='0';
				else
					WAIT_n<='1';
				end if;

				--z80_synchronise	
				if M1_n='0' and was_M1_1 and compteur1MHz=M1_OFFSET then
					-- M---M---M---
					-- 012301230123
					-- cool
					waiting:=false;
					WAIT_n<='1';
				elsif waiting and compteur1MHz=M1_OFFSET then
					waiting:=false;
					WAIT_n<='1';
				elsif waiting then
					-- quand on pose un wait, cet idiot il garde M1_n=0 le tour suivant
				elsif M1_n='0' and was_M1_1 then
					-- M--M---M---
					-- 012301230123
					-- M--MW---M---
					-- 012301230123
					
					-- M-M---M---
					-- 012301230123
					-- M-MWW---M---
					-- 012301230123
				
					-- M----M---M---
					-- 0123012301230123
					-- M----MWWW---M---
					-- 0123012301230123
				
					-- pas cool
					WAIT_n<='0';
					waiting:=true;
				elsif compteur1MHz=M1_OFFSET and not(waiting) then
					-- il existe des instruction de plus de 4 Tstate (je confirme)
				end if;
			--end if;
			if M1_n='1' then
				was_M1_1:=true;
			else
				was_M1_1:=false;
			end if;
			--if MEM_WR='0' then
			--	was_MEMWR_0:=true;
			--else
			--	was_MEMWR_0:=false;
			--end if;

			
		end if;
	end process simple_GateArray_process;

--http://www.cpcwiki.eu/index.php/Synchronising_with_the_CRTC_and_display
--	di                      ;; disable maskable interrupts
--	im 1                    ;; interrupt mode 0 (jump to interrupt handler at &0038)
--
--	ld hl,&c9fb             ;; poke EI,RET to interrupt handler.
--	ld (&0038),hl
--	ei                      ;; enable interrupts
--
--	;; first synchronise with the vsync
--	ld b,&f5
--	.vsync_sync
--	in a,(c)
--	rra
--	jr nc,vsync_sync
--
--	;; wait 3 interrupts so we are close to the position
--	;; we want
--	halt
--	halt
--	halt
--	;; at this point we are synchronised to the monitor draw cycle
--
--	;; now waste some time until we are at the exact point
--	ld b,32
--	.waste_time
--	djnz waste_time
--
--	;; we are now synchronised to exactly the point we want
--	.
--	.
--	.



Markus_interrupt_process: process(CLK4MHz,reset) is
		variable InterruptLineCount : std_logic_vector(5 downto 0); -- a 6-bit counter, reset state is 0
		variable InterruptSyncCount:integer range 0 to 2;
		variable etat_hsync_old : STD_LOGIC:='0';
		variable etat_vsync_old : STD_LOGIC:='0';
	begin
		if reset='1' then
			int<='0'; -- relax
			InterruptLineCount:=(others=>'0');
			InterruptSyncCount:=2;
			etat_hsync_old:='0';
			etat_vsync_old:='0';
		elsif rising_edge(CLK4MHz) then

		-- no IO_ACK_old => CPCTEST ok
		if IO_ACK='1' then --and IO_ACK_old='0' then
--the Gate Array will reset bit5 of the counter
--Once the Z80 acknowledges the interrupt, the GA clears bit 5 of the scan line counter.
-- When the interrupt is acknowledged, this is sensed by the Gate-Array. The top bit (bit 5), of the counter is set to "0" and the interrupt request is cleared. This prevents the next interrupt from occuring closer than 32 HSYNCs time. http://cpctech.cpc-live.com/docs/ints.html
			--InterruptLineCount &= 0x1f;
			InterruptLineCount(5):= '0';
-- following Grimware legends : When the CPU acknowledge the interrupt (eg. it is going to jump to the interrupt vector), the Gate Array will reset bit5 of the counter, so the next interrupt can't occur closer than 32 HSync.
			--compteur52(5 downto 1):= (others=>'0'); -- following JavaCPC 2015
-- the interrupt request remains active until the Z80 acknowledges it. http://cpctech.cpc-live.com/docs/ints.html
			int<='0'; -- following JavaCPC 2015
		end if;
		--IO_ACK_old:=IO_ACK;
		
		
		-- InterruptLineCount begin
			--http://www.cpcwiki.eu/index.php/Synchronising_with_the_CRTC_and_display
			if IO_REQ_W='1' and A15_A14_A9_A8(3) = '0' and A15_A14_A9_A8(2) = '1' then
				if D(7) ='0' then
					-- ink -- osef
				else
					if D(6) = '0' then
						-- It only applies once
						if D(4) = '1' then
							InterruptLineCount:=(others=>'0');
	--Grimware : if set (1), this will (only) reset the interrupt counter. --int<='0'; -- JavaCPC 2015
	--the interrupt request is cleared and the 6-bit counter is reset to "0".  -- http://cpctech.cpc-live.com/docs/ints.html
							int<='0';
						end if;
	-- JavaCPC 2015 : always old_delay_feature:=D(4); -- It only applies once ????
					else 
						-- rambank -- osef pour 464
					end if;
				end if;
			end if;
			
			
			--The GA has a counter that increments on every falling edge of the CRTC generated HSYNC signal.
			--hSyncEnd()
			if etat_hsync_old='1' and hsync='0' then
			-- It triggers 6 interrupts per frame http://pushnpop.net/topic-452-1.html
				-- JavaCPC interrupt style...
				--if (++InterruptLineCount == 52) {
				InterruptLineCount:=InterruptLineCount+1;
				if conv_integer(InterruptLineCount)=52 then -- Asphalt ? -- 52="110100"
					--Once this counter reaches 52, the GA raises the INT signal and resets the counter to 0.
					--InterruptLineCount = 0;
					InterruptLineCount:=(others=>'0');
					--GateArray_Interrupt();
					int<='1';
				end if;
				
				--if (InterruptSyncCount > 0 && --InterruptSyncCount == 0) {
				if InterruptSyncCount < 2 then
					InterruptSyncCount := InterruptSyncCount + 1;
					if InterruptSyncCount = 2 then
						--if (InterruptLineCount >= 32) {
						if conv_integer(InterruptLineCount)>=32 then
							--GateArray_Interrupt();
							int<='1';
						--else
							--int<='0'; -- Circle- DEMO ? / Markus JavaCPC doesn't have this instruction
						end if;
						--InterruptLineCount = 0;
						InterruptLineCount:=(others=>'0');
					end if;
				end if;
			end if;
			
			--vSyncStart()
			if vsync='1' and etat_vsync_old='0' then
				--A VSYNC triggers a delay action of 2 HSYNCs in the GA
				--In both cases the following interrupt requests are synchronised with the VSYNC. 
				-- JavaCPC
				--InterruptSyncCount = 2;
				InterruptSyncCount := 0;
			end if;
			-- InterruptLineCount end
			
			
			
			etat_hsync_old:=hsync;
			etat_vsync_old:=vsync;
		end if;
	end process Markus_interrupt_process;

--
----Interrupt Generation Facility of the Amstrad Gate Array
----The GA has a counter that increments on every falling edge of the CRTC generated HSYNC signal. Once this counter reaches 52, the GA raises the INT signal and resets the counter to 0.
----A VSYNC triggers a delay action of 2 HSYNCs in the GA, at the completion of which the scan line count in the GA is compared to 32. If the counter is below 32, the interrupt generation is suppressed. If it is greater than or equal to 32, an interrupt is issued. Regardless of whether or not an interrupt is raised, the scan line counter is reset to 0.
----The GA has a software controlled interrupt delay feature. The GA scan line counter will be cleared immediately upon enabling this option (bit 4 of ROM/mode control). It only applies once and has to be reissued if more than one interrupt needs to be delayed.
----Once the Z80 acknowledges the interrupt, the GA clears bit 5 of the scan line counter. 
--GAinterrupt : process(CLK4MHz,vsync,hsync)
--	variable compteur52 : std_logic_vector(5 downto 0):=(others=>'0'); -- a 6-bit counter
--	variable hsync_was_1:boolean:=false;
--	variable vsync_was_0:boolean:=false;
--	variable zap_next:boolean:=false;
--	variable zap_next_next:boolean:=false;
--	--variable next_sync:boolean:=false;
--	variable old_delay_feature:std_logic:='0';
--begin
--	
----	Interrupt Generation Facility of the Amstrad Gate Array
----The GA has a counter that increments on every falling edge of the CRTC generated HSYNC signal.
----Once this counter reaches 52, the GA raises the INT signal and resets the counter to 0.
----A VSYNC triggers a delay action of 2 HSYNCs in the GA, at the completion of which the scan line
----count in the GA is compared to 32. If the counter is below 32, the interrupt generation is
----suppressed. If it is greater than or equal to 32, an interrupt is issued. Regardless of whether
----or not an interrupt is raised, the scan line counter is reset to 0.
----The GA has a software controlled interrupt delay feature. The GA scan line counter will be
----cleared immediately upon enabling this option (bit 4 of ROM/mode control). It only applies once
----and has to be reissued if more than one interrupt needs to be delayed.
----Once the Z80 acknowledges the interrupt, the GA clears bit 5 of the scan line counter.
--
----Je pense que suppressed signifie ici passer à zéro le signal INTERRUPT, puis raises passer à
----un le signal INTERRUPT (déclenchement). Au IO_ACK bien entendu on passe à zéro le signal
----INTERRUPT
--	
----selon ma rétro-ingéniérie de Space Invaders sur MameVHDL, en fait le IO_ACK se déclanche lorsque l'interruption décide de finalement commencer, et lors du IO_ACK, le DATA_BUS est lu (selon l'interruption ça joue)
--	if rising_edge(CLK4MHz) then
--		if IO_ACK='1' then
--			--the Gate Array will reset bit5 of the counter
--			int<='0'; -- supposé.
--			--Once the Z80 acknowledges the interrupt, the GA clears bit 5 of the scan line counter.
--			compteur52(5):='0'; -- selon grimware et JavaCPC
--		end if;
--		
--		if IO_REQ_W='1' and A15_A14_A9_A8(3) = '0' and A15_A14_A9_A8(2) = '1' then
--			if D(7) ='0' then
--				-- ink -- osef
--			else
--				if D(6) = '0' then
--					-- It only applies once
--					if D(4) = '1' and old_delay_feature='0'then
--						compteur52:=(others=>'0');
--					end if;
--					old_delay_feature:=D(4); -- It only applies once ????
--				else 
--					-- rambank -- osef pour 464
--				end if;
--			end if;
--		end if;
--		
--		if vsync_was_0 and vsync='1' then
--			--A VSYNC triggers a delay action of 2 HSYNCs in the GA
--			zap_next:=true;
--			zap_next_next:=false;
--		end if;
--		--The GA has a counter that increments on every falling edge of the CRTC generated HSYNC signal.
--		if hsync='0' and hsync_was_1 then
--			compteur52:=compteur52+1;
--
--			if zap_next then
--				zap_next:=false;
--				zap_next_next:=true;
--			elsif zap_next_next then
--				zap_next_next:=false;
--				--at the completion of which the scan line
--				--count in the GA is compared to 32. 
--				if conv_integer(compteur52)<32 then
--					--If the counter is below 32, the interrupt generation is suppressed.
--					int<='0';
--				else
--					--If it is greater than or equal to 32, an interrupt is issued.
--					int<='1';
--				end if;
--				--Regardless of whether or not an interrupt is raised, the scan line counter is reset to 0.
--				compteur52:=(others=>'0');
--			elsif conv_integer(compteur52)=NB_HSYNC_BY_INTERRUPT then -- asphalt ? -- 52="110100"
--				--Once this counter reaches 52, the GA raises the INT signal and resets the counter to 0.
--				compteur52:=(others=>'0');
--				int<='1';
--			end if;
--		end if;
--		if hsync='1' then
--			hsync_was_1:=true;
--		else
--			hsync_was_1:=false;
--		end if;
--		if vsync='0' then
--			vsync_was_0:=true;
--		else
--			vsync_was_0:=false;
--		end if;
--
--	end if;
--end process;
end Behavioral;
