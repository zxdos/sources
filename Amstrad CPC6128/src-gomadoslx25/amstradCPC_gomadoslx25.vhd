--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : amstradCPC_gomadoslx25.vhf
-- /___/   /\     Timestamp : 02/23/2020 10:07:56
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: f:\Xilinx\14.7\ISE_DS\ISE\bin\nt64\unwrapped\sch2hdl.exe -sympath D:/Documentacao/Eletronica/FPGA/zxuno-master/cores/FPGAmstrad-1.1/BuildYourOwnZ80Computer/ipcore_dir -intstyle ise -family spartan6 -flat -suppress -vhdl amstradCPC_gomadoslx25.vhf -w D:/Documentacao/Eletronica/FPGA/zxuno-master/cores/FPGAmstrad-1.1/BuildYourOwnZ80Computer/amstradCPC_gomadoslx25.sch
--Design Name: amstradCPC_gomadoslx25
--Device: spartan6
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--

-------------------------------------------------------------------------------
--
-- ZX Spectrum Next top by Victor Trucco - 2020
-- Port to gomados+ LX25 by AvlixA
-------------------------------------------------------------------------------

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity amstradCPC_gomadoslx25 is
   port ( 
	 -- Clocks
      clock_50_i        : in    std_logic;

      -- SRAM (AS7C34096)
      -- ram_addr_o        : out   std_logic_vector(18 downto 0)  := (others => '0'); -- gomadoslx25
      ram_addr_o        : out   std_logic_vector(20 downto 0)  := (others => '0'); -- gomadoslx25
      ram_data_io       : inout std_logic_vector(15 downto 0)  := (others => 'Z');
      ram_oe_n_o        : out   std_logic                      := '1';
      ram_we_n_o        : out   std_logic                      := '1';
      ram_ce_n_o        : out   std_logic_vector( 3 downto 0)  := (others => '1');
      ram_ub_n_o        : out   std_logic                      := '1'; -- gomadoslx25
		ram_lb_n_o        : out   std_logic                      := '0'; -- gomadoslx25

      -- PS2
      ps2_clk_io        : inout std_logic                      := 'Z';
      ps2_data_io       : inout std_logic                      := 'Z';
      ps2_pin6_io       : inout std_logic                      := 'Z';  -- Mouse clock
      ps2_pin2_io       : inout std_logic                      := 'Z';  -- Mouse data

      -- SD Card
      sd_cs0_n_o        : out   std_logic                      := '1';
      sd_cs1_n_o        : out   std_logic                      := '1';
      sd_sclk_o         : out   std_logic                      := '0';
      sd_mosi_o         : out   std_logic                      := '0';
      sd_miso_i         : in    std_logic;

      -- Flash
      flash_cs_n_o      : out   std_logic                      := '1';
      flash_sclk_o      : out   std_logic                      := '0';
      flash_mosi_o      : out   std_logic                      := '0';
      flash_miso_i      : in    std_logic;
      flash_wp_o        : out   std_logic                      := '0';
      flash_hold_o      : out   std_logic                      := '1';

      -- Joystick
		-- gomadoslx25
--      joyp1_i           : in    std_logic;
--      joyp2_i           : in    std_logic;
--      joyp3_i           : in    std_logic;
--      joyp4_i           : in    std_logic;
--      joyp6_i           : in    std_logic;
--      joyp7_o           : out   std_logic                      := '1';
--      joyp9_i           : in    std_logic;
--      joysel_o          : out   std_logic                      := '0';
		JOY_CLK				: out    std_logic;
		JOY_LOAD				: out    std_logic;
		JOY_DATA				: in    std_logic;

      -- Audio
      audioext_l_o      : out   std_logic                      := '0';
      audioext_r_o      : out   std_logic                      := '0';
      audioint_o        : out   std_logic                      := '0';

      -- K7
      ear_port_i        : in    std_logic;
      mic_port_o        : out   std_logic                      := '0';

      -- Buttons
      btn_divmmc_n_i    : in    std_logic;
      btn_multiface_n_i : in    std_logic;
      btn_reset_n_i     : in    std_logic;

      -- Matrix keyboard
      keyb_row_o        : out   std_logic_vector( 7 downto 0)  := (others => 'Z');
      keyb_col_i        : in    std_logic_vector( 6 downto 0);

--      -- Bus
--      bus_rst_n_io      : inout std_logic                      := 'Z';
--      bus_clk35_o       : out   std_logic                      := 'Z';
--      bus_addr_o        : out   std_logic_vector(15 downto 0)  := (others => 'Z');
--      bus_data_io       : inout std_logic_vector( 7 downto 0)  := (others => 'Z');
--      bus_int_n_io      : inout std_logic                      := 'Z';
--      bus_nmi_n_i       : in    std_logic;
--      bus_ramcs_i       : in    std_logic;
--      bus_romcs_i       : in    std_logic;
--      bus_wait_n_i      : in    std_logic;
--      bus_halt_n_o      : out   std_logic                      := 'Z';
--      bus_iorq_n_o      : out   std_logic                      := 'Z';
--      bus_m1_n_o        : out   std_logic                      := 'Z';
--      bus_mreq_n_o      : out   std_logic                      := 'Z';
--      bus_rd_n_o        : out   std_logic                      := 'Z';
--      bus_wr_n_o        : out   std_logic                      := 'Z';
--      bus_rfsh_n_o      : out   std_logic                      := 'Z';
--      bus_busreq_n_i    : in    std_logic;
--      bus_busack_n_o    : out   std_logic                      := 'Z';
--      bus_iorqula_n_i   : in    std_logic;

      -- VGA
      rgb_r_o           : out   std_logic_vector( 2 downto 0)  := (others => '0');
      rgb_g_o           : out   std_logic_vector( 2 downto 0)  := (others => '0');
      rgb_b_o           : out   std_logic_vector( 2 downto 0)  := (others => '0');
      hsync_o           : out   std_logic                      := '1';
      vsync_o           : out   std_logic                      := '1';
      csync_o           : out   std_logic                      := 'Z'

--      -- HDMI
--      hdmi_p_o          : out   std_logic_vector(3 downto 0);
--      hdmi_n_o          : out   std_logic_vector(3 downto 0);

--      -- I2C (RTC and HDMI)
--      i2c_scl_io        : inout std_logic                      := 'Z';
--      i2c_sda_io        : inout std_logic                      := 'Z';

--      -- ESP
--      esp_gpio0_io      : inout std_logic                      := 'Z';
--      esp_gpio2_io      : inout std_logic                      := 'Z';
--      esp_rx_i          : in    std_logic;
--      esp_tx_o          : out   std_logic                      := '1';

--      -- PI GPIO
--      accel_io          : inout std_logic_vector(27 downto 0)  := (others => 'Z');

--      -- Vacant pins
--      extras_io         : inout std_logic := 'Z'
			 );
end amstradCPC_gomadoslx25;

architecture BEHAVIORAL of amstradCPC_gomadoslx25 is
   signal CLK8      : std_logic_vector (2 downto 0);
   signal crtc_A    : std_logic_vector (15 downto 0);
   signal RESET_n   : std_logic;
	signal reset_seq  : std_logic_vector (15 downto 0);
   signal file_loaded : std_logic;

   signal XLXN_717  : std_logic;
   signal XLXN_731  : std_logic;
   signal XLXN_732  : std_logic_vector (7 downto 0);
   signal XLXN_736  : std_logic;
   signal XLXN_737  : std_logic_vector (20 downto 0);
   signal XLXN_744  : std_logic;
   signal XLXN_745  : std_logic_vector (12 downto 0);
   signal XLXN_746  : std_logic_vector (7 downto 0);
   signal XLXN_750  : std_logic;
   signal XLXN_751  : std_logic_vector (4 downto 0);
   component bootloader_sd_MUSER_amstradCPC_gomadoslx25
      port ( MISO        : in    std_logic; 
             CLK4MHz     : in    std_logic; 
             key_reset   : in    std_logic; 
             ram_Do       : out std_logic_vector (7 downto 0); 
             MOSI        : out   std_logic; 
             ram_A       : out   std_logic_vector (20 downto 0); 
             SCLK        : out   std_logic; 
             ram_W_n     : out   std_logic; 
             SS_n        : out   std_logic; 
             FILE_LOADED : out   std_logic; 
             dsk_info    : out   std_logic_vector (4 downto 0));
   end component;
   
   component amstrad_video_MUSER_amstradCPC_gomadoslx25
      port ( crtc_W    : in    std_logic; 
             crtc_D    : in    std_logic_vector (7 downto 0); 
             crtc_A    : in    std_logic_vector (14 downto 0); 
             CLK4MHz   : in    std_logic; 
             CLK25MHz  : in    std_logic; 
             palette_D : in    std_logic_vector (7 downto 0); 
             palette_A : in    std_logic_vector (12 downto 0); 
             palette_W : in    std_logic; 
             HSYNC     : out   std_logic; 
             VSYNC     : out   std_logic; 
             RED3      : out   std_logic_vector (2 downto 0); 
             GREEN3    : out   std_logic_vector (2 downto 0); 
             BLUE3     : out   std_logic_vector (2 downto 0));
   end component;
   
   component amstrad_motherboard_MUSER_amstradCPC_gomadoslx25
      port ( init_A    : in    std_logic_vector (20 downto 0); 
             init_W_n  : in    std_logic; 
             CLK16MHz  : in    std_logic; 
             PS2_CLK   : in    std_logic; 
             PS2_DATA  : in    std_logic; 
             RESET_n   : in    std_logic; 
             JOYSTICK1 : in    std_logic_vector (6 downto 0); 
             CLK_PWM   : in    std_logic; 
             dsk_info  : in    std_logic_vector (4 downto 0); 
             ram_Di    : in    std_logic_vector (7 downto 0); 
				 ram_Do    : out   std_logic_vector (7 downto 0); 
             CLK8      : out   std_logic_vector (2 downto 0); 
             ram_A     : out   std_logic_vector (20 downto 0); 
             crtc_A    : out   std_logic_vector (15 downto 0); 
             crtc_W    : out   std_logic; 
             ram_W_n   : out   std_logic; 
             crtc_D    : out   std_logic_vector (7 downto 0); 
             palette_W : out   std_logic; 
             palette_A : out   std_logic_vector (12 downto 0); 
             palette_D : out   std_logic_vector (7 downto 0); 
             key_reset : out   std_logic; 
             audio_AB  : out   std_logic; 
             audio_BC  : out   std_logic);
   end component;
   
   component divideby3
      port ( CLK50MHz : in    std_logic; 
             CLK16MHz : out   std_logic);
   end component;
	
	-- SRAM
	signal sram_addr : std_logic_vector( 20 downto 0);
	signal sram_cs_n : std_logic_vector( 3 downto 0);
	signal ram_data_to_sram : std_logic_vector( 7 downto 0);
	signal ram_data_from_sram : std_logic_vector( 7 downto 0);
 	signal sram_we_n : std_logic;  
	
	-- Joystick
	--signal joy1_s				: std_logic_vector( 5 downto 0);
	--signal joy2_s				: std_logic_vector( 5 downto 0);
	signal joy1_s				: std_logic_vector( 11 downto 0);
	signal joy2_s				: std_logic_vector( 11 downto 0);
	signal joysel_s			: std_logic;
	signal hsync_aux			: std_logic;

begin


-- joystick gomadoslx25
--	-- joystick multiplex
--	process (XLXN_717)
--	begin
--		if rising_edge(XLXN_717) then
--			joysel_s <= not joysel_s;
--			
--			if joysel_s = '0' then
--				joy1_s <= joyp9_i & joyp6_i & joyp4_i & joyp3_i & joyp2_i & joyp1_i;
--			else
--			   joy2_s <= joyp9_i & joyp6_i & joyp4_i & joyp3_i & joyp2_i & joyp1_i;
--			end if;
--			
--			
--		end if;
--	end process;

	-- joystick next signal: active high - START/MODE A/X B/Y/F2 C/Z/F1 U D L R
	-- joystick gomadoslx25
	-- Joysticks
	los_joysticks: entity work.joydecoder
	port map (
      --clk			=> CLK8(2), --4mhz
		clk			=> not XLXN_717, --16Mhz 
      joy_data    => JOY_DATA,
      joy_clk     => JOY_CLK,
      joy_load_n    => JOY_LOAD,
		reset			=> not reset_seq(7),
		hsync_n_s	=> not hsync_aux,
	
		joy1_o      => joy1_s,  -- MXYZ SACB RLDU  Negative Logic
		joy2_o  		=> joy2_s   -- MXYZ SACB RLDU  Negative Logic
   );
--	los_joysticks: entity work.joydecoder
--	port map (
--      --clk			=> CLK8(2), --4mhz
--		clk			=> XLXN_717, --16Mhz 
--      joy_data    => JOY_DATA,
--      joy_clk     => JOY_CLK,
--      joy_load    => JOY_LOAD,
--		clock_locked => '1',
--		hsync_n_s	=> hsync_aux,
--	
--		--joy1_o      => joy1_s,  -- MXYZ SACB RLDU  Negative Logic
--		--joy2_o  		=> joy2_s   -- MXYZ SACB RLDU  Negative Logic
--	   joy1up		=> joy1_s(0),
--	   joy1down		=> joy1_s(1),
--	   joy1left		=> joy1_s(2),
--	   joy1right	=> joy1_s(3),
--	   joy1fire1		=> joy1_s(4),
--	   joy1fire2		=> joy1_s(5),
--	   joy1fire3		=> joy1_s(6),
--	   --joy1start,
--	   joy2up		=> joy2_s(0),
--	   joy2down		=> joy2_s(1),
--	   joy2left		=> joy2_s(2),
--	   joy2right	=> joy2_s(3),
--	   joy2fire1		=> joy2_s(4),
--	   joy2fire2		=> joy2_s(5),
--	   joy2fire3		=> joy2_s(6)
--	   --joy2start  
--
--   );
	

	
	--	joysel_o <= joysel_s; --gomadoslx25
	--RESET_n <= '1'; --test gomadoslx25
	process(XLXN_717,file_loaded) is 
	begin
		if rising_edge(XLXN_717) then
			if file_loaded='0' then
				reset_seq <= (others=>'0');
			else
				reset_seq <= reset_seq(14 downto 0) & '1';
			end if;
		end if;
	end process;
	
	--RESET_n <= reset_seq(7);
	RESET_n <= file_loaded;
	
   XLXI_462 : bootloader_sd_MUSER_amstradCPC_gomadoslx25
      port map (CLK4MHz=>CLK8(2),
                key_reset=>XLXN_750,
                MISO=>sd_miso_i,
                dsk_info(4 downto 0)=>XLXN_751(4 downto 0),
                --FILE_LOADED=>RESET_n,
					 FILE_LOADED=>file_loaded,
                MOSI=>sd_mosi_o,
                ram_A(20 downto 0)=>XLXN_737(20 downto 0),
                ram_W_n=>XLXN_736,
                SCLK=>sd_sclk_o,
                SS_n=>sd_cs0_n_o,
                ram_Do(7 downto 0)=>ram_data_to_sram(7 downto 0));
   
   XLXI_511 : amstrad_video_MUSER_amstradCPC_gomadoslx25
      port map (CLK4MHz=>CLK8(2),
                CLK25MHz=> clock_50_i,
                crtc_A(14 downto 0)=>crtc_A(14 downto 0),
                crtc_D(7 downto 0)=>XLXN_732(7 downto 0),
                crtc_W=>XLXN_731,
                palette_A(12 downto 0)=>XLXN_745(12 downto 0),
                palette_D(7 downto 0)=>XLXN_746(7 downto 0),
                palette_W=>XLXN_744,
                BLUE3(2 downto 0)=>rgb_b_o(2 downto 0),
                GREEN3(2 downto 0)=>rgb_g_o(2 downto 0),
                --HSYNC=>hsync_o,
					 HSYNC=>hsync_aux,
                RED3(2 downto 0)=>rgb_r_o(2 downto 0),
                VSYNC=>vsync_o);
	hsync_o <= not hsync_aux;


	
   XLXI_512 : amstrad_motherboard_MUSER_amstradCPC_gomadoslx25
      port map (CLK_PWM=>XLXN_717,
                CLK16MHz=>XLXN_717,
                dsk_info(4 downto 0)=>XLXN_751(4 downto 0),
                init_A(20 downto 0)=>XLXN_737(20 downto 0),
                init_W_n=>XLXN_736,
                --JOYSTICK1(6 downto 0)=>'1' & joy1_s(5 downto 0),
					 JOYSTICK1(6 downto 0) => joy1_s(6 downto 0),
                PS2_CLK=>PS2_CLK_io,
                PS2_DATA=>PS2_DATA_io,
                RESET_n=>RESET_n,
                audio_AB=>audioext_l_o,
                audio_BC=>audioext_r_o,
                CLK8(2 downto 0)=>CLK8(2 downto 0),
                crtc_A(15 downto 0)=>crtc_A(15 downto 0),
                crtc_D(7 downto 0)=>XLXN_732(7 downto 0),
                crtc_W=>XLXN_731,
                key_reset=>XLXN_750,
                palette_A(12 downto 0)=>XLXN_745(12 downto 0),
                palette_D(7 downto 0)=>XLXN_746(7 downto 0),
                palette_W=>XLXN_744,
                ram_A(20 downto 0)=>sram_addr,
                ram_W_n=>sram_we_n,
                ram_Di => ram_data_from_sram,
					 ram_Do => ram_data_to_sram
					 ); 
   
	ram_data_io <= ram_data_to_sram & ram_data_to_sram when sram_we_n = '0' else (others=>'Z');
	
-- gomadoslx25	
--	ram_data_from_sram <= ram_data_io(15 downto 8) when sram_addr(19) = '1' else ram_data_io(7 downto 0);
   ram_data_from_sram <= ram_data_io(7 downto 0);-- gomadoslx25	

-- gomadoslx25	
--	sram_cs_n <= 
--	"1110" when sram_addr(20 downto 19) = "00" else   
--	"1101" when sram_addr(20 downto 19) = "01" else   
--	"1011" when sram_addr(20 downto 19) = "10" else   
--	"0111";
--	
--   ram_addr_o <= sram_addr(18 downto 0);

   ram_addr_o <= sram_addr; -- gomadoslx25
	ram_ub_n_o <= '1'; -- gomadoslx25
	ram_lb_n_o <= '0'; -- gomadoslx25
	ram_we_n_o <= sram_we_n;	
   ram_oe_n_o <= '0';
	ram_ce_n_o <= sram_cs_n;
	
   XLXI_514 : divideby3
      port map (CLK50MHz=>clock_50_i,
                CLK16MHz=>XLXN_717);
					 
					 
--	-- TODO: add support for HDMI output
--    OBUFDS_c0  : OBUFDS port map ( O  => hdmi_p_o(0), OB => hdmi_n_o(0), I => '0');
--    OBUFDS_c1  : OBUFDS port map ( O  => hdmi_p_o(1), OB => hdmi_n_o(1), I => '0');
--    OBUFDS_c2  : OBUFDS port map ( O  => hdmi_p_o(2), OB => hdmi_n_o(2), I => '0');
--    OBUFDS_clk : OBUFDS port map ( O  => hdmi_p_o(3), OB => hdmi_n_o(3), I => '0');


   
end BEHAVIORAL;




----- CELL CB4CE_HXILINX_amstradCPC_gomadoslx25 -----


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity CB4CE_HXILINX_amstradCPC_gomadoslx25 is
  
port (
    CEO  : out STD_LOGIC;
    Q0   : out STD_LOGIC;
    Q1   : out STD_LOGIC;
    Q2   : out STD_LOGIC;
    Q3   : out STD_LOGIC;
    TC   : out STD_LOGIC;
    C    : in STD_LOGIC;
    CE   : in STD_LOGIC;
    CLR  : in STD_LOGIC
    );
end CB4CE_HXILINX_amstradCPC_gomadoslx25;

architecture Behavioral of CB4CE_HXILINX_amstradCPC_gomadoslx25 is

  signal COUNT : STD_LOGIC_VECTOR(3 downto 0) := (others => '0');
  constant TERMINAL_COUNT : STD_LOGIC_VECTOR(3 downto 0) := (others => '1');
  
begin

process(C, CLR)
begin
  if (CLR='1') then
    COUNT <= (others => '0');
  elsif (C'event and C = '1') then
    if (CE='1') then 
      COUNT <= COUNT+1;
    end if;
  end if;
end process;

TC   <= '1' when (COUNT = TERMINAL_COUNT) else '0';
CEO  <= '1' when ((COUNT = TERMINAL_COUNT) and CE='1') else '0';

Q3 <= '1' when (COUNT(3) = '1') else '0';
Q2 <= '1' when (COUNT(2) = '1') else '0';
Q1 <= '1' when (COUNT(1) = '1') else '0';
Q0 <= '1' when (COUNT(0) = '1') else '0';

end Behavioral;


library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity joykeyb_MUSER_amstradCPC_gomadoslx25 is
   port ( CLK4MHz   : in    std_logic; 
          joystick1 : in    std_logic_vector (6 downto 0); 
          PPI_portC : in    std_logic_vector (3 downto 0); 
          PS2_CLK   : in    std_logic; 
          PS2_DATA  : in    std_logic; 
          key_reset : out   std_logic; 
          PPI_portA : out   std_logic_vector (7 downto 0));
end joykeyb_MUSER_amstradCPC_gomadoslx25;

architecture BEHAVIORAL of joykeyb_MUSER_amstradCPC_gomadoslx25 is
   signal XLXN_27   : std_logic_vector (9 downto 0);
   signal XLXN_28   : std_logic;
   signal XLXN_29   : std_logic_vector (7 downto 0);
   signal XLXN_30   : std_logic;
   signal XLXN_31   : std_logic;
   component Keyboard
      port ( datain   : in    std_logic; 
             clkin    : in    std_logic; 
             fclk     : in    std_logic; 
             fok      : out   std_logic; 
             scancode : out   std_logic_vector (7 downto 0));
   end component;
   
   component KEYBOARD_driver
      port ( CLK       : in    std_logic; 
             press     : in    std_logic; 
             unpress   : in    std_logic; 
             portC     : in    std_logic_vector (3 downto 0); 
             joystick1 : in    std_logic_vector (6 downto 0); 
             keycode   : in    std_logic_vector (9 downto 0); 
             key_reset : out   std_logic; 
             portA     : out   std_logic_vector (7 downto 0));
   end component;
   
   component KEYBOARD_controller
      port ( CLK         : in    std_logic; 
             fok         : in    std_logic; 
             scancode_in : in    std_logic_vector (7 downto 0); 
             press       : out   std_logic; 
             unpress     : out   std_logic; 
             keycode     : out   std_logic_vector (9 downto 0));
   end component;
   
begin
   XLXI_1 : Keyboard
      port map (clkin=>PS2_CLK,
                datain=>PS2_DATA,
                fclk=>CLK4MHz,
                fok=>XLXN_28,
                scancode(7 downto 0)=>XLXN_29(7 downto 0));
   
   XLXI_2 : KEYBOARD_driver
      port map (CLK=>CLK4MHz,
                joystick1(6 downto 0)=>joystick1(6 downto 0),
                keycode(9 downto 0)=>XLXN_27(9 downto 0),
                portC(3 downto 0)=>PPI_portC(3 downto 0),
                press=>XLXN_30,
                unpress=>XLXN_31,
                key_reset=>key_reset,
                portA(7 downto 0)=>PPI_portA(7 downto 0));
   
   XLXI_3 : KEYBOARD_controller
      port map (CLK=>CLK4MHz,
                fok=>XLXN_28,
                scancode_in(7 downto 0)=>XLXN_29(7 downto 0),
                keycode(9 downto 0)=>XLXN_27(9 downto 0),
                press=>XLXN_30,
                unpress=>XLXN_31);
   
end BEHAVIORAL;



library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity amstrad_motherboard_MUSER_amstradCPC_gomadoslx25 is
   port ( CLK_PWM   : in    std_logic; 
          CLK16MHz  : in    std_logic; 
          dsk_info  : in    std_logic_vector (4 downto 0); 
          init_A    : in    std_logic_vector (20 downto 0); 
          init_W_n  : in    std_logic; 
          JOYSTICK1 : in    std_logic_vector (6 downto 0); 
          PS2_CLK   : in    std_logic; 
          PS2_DATA  : in    std_logic; 
          RESET_n   : in    std_logic; 
          audio_AB  : out   std_logic; 
          audio_BC  : out   std_logic; 
          CLK8      : out   std_logic_vector (2 downto 0); 
          crtc_A    : out   std_logic_vector (15 downto 0); 
          crtc_D    : out   std_logic_vector (7 downto 0); 
          crtc_W    : out   std_logic; 
          key_reset : out   std_logic; 
          palette_A : out   std_logic_vector (12 downto 0); 
          palette_D : out   std_logic_vector (7 downto 0); 
          palette_W : out   std_logic; 
          ram_A     : out   std_logic_vector (20 downto 0); 
          ram_W_n   : out   std_logic; 
          ram_Di     : in std_logic_vector (7 downto 0);
          ram_Do     : out std_logic_vector (7 downto 0)
			 );
end amstrad_motherboard_MUSER_amstradCPC_gomadoslx25;

architecture BEHAVIORAL of amstrad_motherboard_MUSER_amstradCPC_gomadoslx25 
      is
   attribute BOX_TYPE   : string ;
   attribute HU_SET     : string ;
   signal A            : std_logic_vector (15 downto 0);
   signal D            : std_logic_vector (7 downto 0);
   signal IO_RD        : std_logic;
   signal IO_REQ       : std_logic;
   signal IO_WR        : std_logic;
   signal LED1         : std_logic;
   signal LED2         : std_logic;
   signal MEM_RD       : std_logic;
   signal MEM_WR       : std_logic;
   signal n_crtc_vsync : std_logic;
   signal portC        : std_logic_vector (7 downto 0);
   signal RAMBank      : std_logic_vector (2 downto 0);
   signal ROMbank      : std_logic_vector (3 downto 0);
   signal un           : std_logic;
   signal vram_A       : std_logic_vector (17 downto 0);
   signal XLXN_16      : std_logic;
   signal XLXN_38      : std_logic;
   signal XLXN_58      : std_logic;
   signal XLXN_75      : std_logic;
   signal XLXN_86      : std_logic;
   signal XLXN_118     : std_logic;
   signal XLXN_180     : std_logic;
   signal XLXN_283     : std_logic_vector (7 downto 0);
   signal XLXN_427     : std_logic_vector (20 downto 0);
   signal XLXN_435     : std_logic;
   signal XLXN_462     : std_logic_vector (7 downto 0);
   signal XLXN_464     : std_logic;
   signal XLXN_470     : std_logic;
   signal XLXN_473     : std_logic;
   signal XLXN_474     : std_logic;
   signal XLXN_475     : std_logic;
   signal XLXN_498     : std_logic;
   signal XLXN_499     : std_logic;
   signal XLXN_518     : std_logic_vector (7 downto 0);
   signal XLXN_519     : std_logic_vector (7 downto 0);
   signal XLXN_542     : std_logic;
   signal XLXN_555     : std_logic;
   signal XLXN_556     : std_logic;
   signal XLXN_621     : std_logic;
   signal XLXN_633     : std_logic;
   signal XLXN_785     : std_logic;
   signal XLXN_786     : std_logic;
   signal XLXN_787     : std_logic;
   signal XLXN_806     : std_logic;
   signal XLXN_814     : std_logic;
   signal XLXN_824     : std_logic;
   signal XLXN_826     : std_logic;
   signal XLXN_835     : std_logic;
   signal XLXN_845     : std_logic;
   signal XLXN_848     : std_logic;
   signal XLXN_849     : std_logic;
   signal XLXN_852     : std_logic;
   signal XLXN_857     : std_logic_vector (1 downto 0);
   signal XLXN_858     : std_logic;
   signal XLXN_861     : std_logic_vector (7 downto 0);
   signal XLXN_862     : std_logic;
   signal XLXN_864     : std_logic;
   signal zero         : std_logic;
   signal CLK8_DUMMY   : std_logic_vector (2 downto 0);
   signal crtc_A_DUMMY : std_logic_vector (15 downto 0);
   component T80se
      port ( RESET_n : in    std_logic; 
             CLK_n   : in    std_logic; 
             CLKEN   : in    std_logic; 
             WAIT_n  : in    std_logic; 
             INT_n   : in    std_logic; 
             NMI_n   : in    std_logic; 
             BUSRQ_n : in    std_logic; 
             DI      : in    std_logic_vector (7 downto 0); 
             M1_n    : out   std_logic; 
             MREQ_n  : out   std_logic; 
             IORQ_n  : out   std_logic; 
             RD_n    : out   std_logic; 
             WR_n    : out   std_logic; 
             A       : out   std_logic_vector (15 downto 0); 
             DO      : out   std_logic_vector (7 downto 0); 
             RFSH_n  : out   std_logic; 
             HALT_n  : out   std_logic; 
             BUSAK_n : out   std_logic);
   end component;
   
   component simple_GateArray
      port ( CLK        : in    std_logic; 
             IO_REQ_W   : in    std_logic; 
             A15_A14    : in    std_logic_vector (1 downto 0); 
             D          : in    std_logic_vector (7 downto 0); 
             lowerROMen : out   std_logic; 
             upperROMen : out   std_logic; 
             MODE       : out   std_logic_vector (1 downto 0); 
             RAMbank    : out   std_logic_vector (2 downto 0));
   end component;
   
   component simple_GateArrayInterrupt
      port ( IO_REQ_W      : in    std_logic; 
             IO_REQ_R      : in    std_logic; 
             IO_ACK        : in    std_logic; 
             M1_n          : in    std_logic; 
             reset         : in    std_logic; 
             CLK8          : in    std_logic_vector (2 downto 0); 
             A15_A14_A9_A8 : in    std_logic_vector (3 downto 0); 
             MODE_select   : in    std_logic_vector (1 downto 0); 
             D             : in    std_logic_vector (7 downto 0); 
             Dout          : inout std_logic_vector (7 downto 0); 
             ram_D         : in    std_logic_vector (7 downto 0); 
             crtc_VSYNC    : out   std_logic; 
             crtc_W        : out   std_logic; 
             crtc_transmit : out   std_logic; 
             int           : out   std_logic; 
             WAIT_n        : out   std_logic; 
             palette_W     : out   std_logic; 
             crtc_A        : out   std_logic_vector (15 downto 0); 
             crtc_D        : out   std_logic_vector (7 downto 0); 
             palette_A     : out   std_logic_vector (12 downto 0); 
             palette_D     : out   std_logic_vector (7 downto 0));
   end component;
   
   component VCC
      port ( P : out   std_logic);
   end component;
   attribute BOX_TYPE of VCC : component is "BLACK_BOX";
   
   component AND2
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of AND2 : component is "BLACK_BOX";
   
   component AmstradRAMROM
      port ( wr_z80     : in    std_logic; 
             lowerROMen : in    std_logic; 
             upperROMen : in    std_logic; 
             A          : in    std_logic_vector (15 downto 0); 
             RAMbank    : in    std_logic_vector (2 downto 0); 
             ROMbank    : in    std_logic_vector (3 downto 0); 
             ram_A      : out   std_logic_vector (17 downto 0));
   end component;
   
   component INV
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute BOX_TYPE of INV : component is "BLACK_BOX";
   
   component GND
      port ( G : out   std_logic);
   end component;
   attribute BOX_TYPE of GND : component is "BLACK_BOX";
   
   component RAM_driver
      port ( rd    : in    std_logic; 
             wr    : in    std_logic; 
             reset : in    std_logic; 
             CLK8  : in    std_logic_vector (2 downto 0); 
             Din   : in    std_logic_vector (7 downto 0); 
             Dout  : inout std_logic_vector (7 downto 0); 
             ram_Di : in std_logic_vector (7 downto 0); 
				  ram_Do : out std_logic_vector (7 downto 0); 
             ram_W : out   std_logic);
   end component;
   
   component simple_DSK
      port ( reset        : in    std_logic; 
             A0           : in    std_logic; 
             IO_RD        : in    std_logic; 
             IO_WR        : in    std_logic; 
             CLK8         : in    std_logic_vector (2 downto 0); 
             A10_A8_A7    : in    std_logic_vector (2 downto 0); 
             D_command    : in    std_logic_vector (7 downto 0); 
             dsk_info     : in    std_logic_vector (4 downto 0); 
             Dout         : inout std_logic_vector (7 downto 0); 
             dsk_Di        : in std_logic_vector (7 downto 0);
				dsk_Do        : out std_logic_vector (7 downto 0);				 
				dsk_W        : out   std_logic; 
             dsk_transmit : out   std_logic; 
             dsk_A        : out   std_logic_vector (20 downto 0));
   end component;
   
   component ROMselect
      port ( CLK     : in    std_logic; 
             A13     : in    std_logic; 
             IO_WR   : in    std_logic; 
             D       : in    std_logic_vector (7 downto 0); 
             ROMbank : out   std_logic_vector (3 downto 0));
   end component;
   
   component AmstradRAMDSK
      port ( dsk_transmit  : in    std_logic; 
             crtc_transmit : in    std_logic; 
             init_done     : in    std_logic; 
             A             : in    std_logic_vector (17 downto 0); 
             dsk_A         : in    std_logic_vector (20 downto 0); 
             init_A        : in    std_logic_vector (20 downto 0); 
             crtc_A        : in    std_logic_vector (15 downto 0); 
             ram_A         : out   std_logic_vector (20 downto 0));
   end component;
   
   component YM2149
      port ( I_A9_L  : in    std_logic; 
             I_A8    : in    std_logic; 
             I_BDIR  : in    std_logic; 
             I_BC2   : in    std_logic; 
             I_BC1   : in    std_logic; 
             I_SEL_L : in    std_logic; 
             ENA     : in    std_logic; 
             RESET_L : in    std_logic; 
             CLK     : in    std_logic; 
             I_DA    : in    std_logic_vector (7 downto 0); 
             I_IOA   : in    std_logic_vector (7 downto 0); 
             O_DA    : out   std_logic_vector (7 downto 0); 
             O_AUDIO : out   std_logic_vector (7 downto 0));
   end component;
   
   component CB4CE_HXILINX_amstradCPC_gomadoslx25
      port ( C   : in    std_logic; 
             CE  : in    std_logic; 
             CLR : in    std_logic; 
             CEO : out   std_logic; 
             Q0  : out   std_logic; 
             Q1  : out   std_logic; 
             Q2  : out   std_logic; 
             Q3  : out   std_logic; 
             TC  : out   std_logic);
   end component;
   
   component joykeyb_MUSER_amstradCPC_gomadoslx25
      port ( PS2_CLK   : in    std_logic; 
             PS2_DATA  : in    std_logic; 
             CLK4MHz   : in    std_logic; 
             PPI_portC : in    std_logic_vector (3 downto 0); 
             joystick1 : in    std_logic_vector (6 downto 0); 
             PPI_portA : out   std_logic_vector (7 downto 0); 
             key_reset : out   std_logic);
   end component;
   
   component AND3
      port ( I0 : in    std_logic; 
             I1 : in    std_logic; 
             I2 : in    std_logic; 
             O  : out   std_logic);
   end component;
   attribute BOX_TYPE of AND3 : component is "BLACK_BOX";
   
   component PWM
      port ( clk      : in    std_logic; 
             clk_ref  : in    std_logic; 
             PWM_in   : in    std_logic_vector (7 downto 0); 
             PWM_out  : out   std_logic; 
             PWM_out2 : out   std_logic);
   end component;
   
   component pio
      port ( iowr   : in    std_logic; 
             cpuclk : in    std_logic; 
             addr   : in    std_logic_vector (1 downto 0); 
             datain : in    std_logic_vector (7 downto 0); 
             PAO    : out   std_logic_vector (7 downto 0); 
             PCO    : out   std_logic_vector (7 downto 0); 
             DO     : inout std_logic_vector (7 downto 0); 
             cs     : in    std_logic; 
             iord   : in    std_logic; 
             RESET  : in    std_logic; 
             PBI    : in    std_logic_vector (7 downto 0); 
             PAI    : in    std_logic_vector (7 downto 0));
   end component;
   
   attribute HU_SET of XLXI_399 : label is "XLXI_399_0";
   attribute HU_SET of XLXI_579 : label is "XLXI_579_1";
begin
   CLK8(2 downto 0) <= CLK8_DUMMY(2 downto 0);
   crtc_A(15 downto 0) <= crtc_A_DUMMY(15 downto 0);
   AmstradT80 : T80se
      port map (BUSRQ_n=>XLXN_16,
                CLKEN=>XLXN_16,
                CLK_n=>CLK8_DUMMY(2),
                DI(7 downto 0)=>XLXN_283(7 downto 0),
                INT_n=>XLXN_814,
                NMI_n=>XLXN_16,
                RESET_n=>RESET_n,
                WAIT_n=>XLXN_806,
                A(15 downto 0)=>A(15 downto 0),
                BUSAK_n=>open,
                DO(7 downto 0)=>D(7 downto 0),
                HALT_n=>open,
                IORQ_n=>XLXN_75,
                MREQ_n=>XLXN_58,
                M1_n=>XLXN_845,
                RD_n=>XLXN_86,
                RFSH_n=>open,
                WR_n=>XLXN_38);
   
   GA : simple_GateArray
      port map (A15_A14(1 downto 0)=>A(15 downto 14),
                CLK=>XLXN_435,
                D(7 downto 0)=>D(7 downto 0),
                IO_REQ_W=>IO_WR,
                lowerROMen=>LED1,
                MODE(1 downto 0)=>XLXN_857(1 downto 0),
                RAMbank(2 downto 0)=>RAMBank(2 downto 0),
                upperROMen=>LED2);
   
   GA_interrupt : simple_GateArrayInterrupt
      port map (A15_A14_A9_A8(3)=>A(15),
                A15_A14_A9_A8(2)=>A(14),
                A15_A14_A9_A8(1)=>A(9),
                A15_A14_A9_A8(0)=>A(8),
                CLK8(2 downto 0)=>CLK8_DUMMY(2 downto 0),
                D(7 downto 0)=>D(7 downto 0),
                IO_ACK=>XLXN_826,
                IO_REQ_R=>IO_RD,
                IO_REQ_W=>IO_WR,
                MODE_select(1 downto 0)=>XLXN_857(1 downto 0),
                M1_n=>XLXN_845,
                reset=>XLXN_858,
                crtc_A(15 downto 0)=>crtc_A_DUMMY(15 downto 0),
                crtc_D(7 downto 0)=>crtc_D(7 downto 0),
                crtc_transmit=>XLXN_852,
                crtc_VSYNC=>n_crtc_vsync,
                crtc_W=>crtc_W,
                int=>XLXN_835,
                palette_A(12 downto 0)=>palette_A(12 downto 0),
                palette_D(7 downto 0)=>palette_D(7 downto 0),
                palette_W=>palette_W,
                WAIT_n=>XLXN_806,
                Dout(7 downto 0)=>XLXN_283(7 downto 0),
                ram_D(7 downto 0)=> ram_Di --input
					 ); 
   
   XLXI_168 : VCC
      port map (P=>XLXN_16);
   
   XLXI_170 : AND2
      port map (I0=>XLXN_785,
                I1=>XLXN_786,
                O=>MEM_WR);
   
   XLXI_173 : AmstradRAMROM
      port map (A(15 downto 0)=>A(15 downto 0),
                lowerROMen=>LED1,
                RAMbank(2 downto 0)=>RAMBank(2 downto 0),
                ROMbank(3 downto 0)=>ROMbank(3 downto 0),
                upperROMen=>LED2,
                wr_z80=>MEM_WR,
                ram_A(17 downto 0)=>vram_A(17 downto 0));
   
   XLXI_181 : INV
      port map (I=>XLXN_58,
                O=>XLXN_786);
   
   XLXI_183 : INV
      port map (I=>XLXN_75,
                O=>IO_REQ);
   
   XLXI_184 : AND2
      port map (I0=>IO_REQ,
                I1=>XLXN_785,
                O=>IO_WR);
   
   XLXI_186 : INV
      port map (I=>XLXN_86,
                O=>XLXN_787);
   
   XLXI_187 : AND2
      port map (I0=>XLXN_787,
                I1=>XLXN_786,
                O=>MEM_RD);
   
   XLXI_219 : AND2
      port map (I0=>XLXN_787,
                I1=>IO_REQ,
                O=>IO_RD);
   
   XLXI_223 : GND
      port map (G=>XLXN_118);
   
   XLXI_224 : RAM_driver
      port map (CLK8(2 downto 0)=>CLK8_DUMMY(2 downto 0),
                Din(7 downto 0)=>D(7 downto 0),
                rd=>MEM_RD,
                reset=>XLXN_858,
                wr=>MEM_WR,
                ram_W=>XLXN_555,
                Dout(7 downto 0)=>XLXN_283(7 downto 0),
                ram_Di(7 downto 0)=>ram_Di(7 downto 0),
					 ram_Do(7 downto 0)=>ram_Do(7 downto 0)
					 );
   
   XLXI_226 : INV
      port map (I=>XLXN_555,
                O=>XLXN_556);
   
   XLXI_243 : INV
      port map (I=>CLK8_DUMMY(2),
                O=>XLXN_435);
   
   XLXI_253 : GND
      port map (G=>zero);
   
   XLXI_256 : VCC
      port map (P=>un);
   
   XLXI_257 : INV
      port map (I=>IO_RD,
                O=>XLXN_864);
   
   XLXI_258 : INV
      port map (I=>IO_WR,
                O=>XLXN_180);
   
   XLXI_297 : INV
      port map (I=>CLK8_DUMMY(2),
                O=>XLXN_633);
   
   XLXI_307 : INV
      port map (I=>RESET_n,
                O=>XLXN_858);
   
   XLXI_332 : INV
      port map (I=>XLXN_835,
                O=>XLXN_814);
   
   XLXI_344 : simple_DSK
      port map (A0=>A(0),
                A10_A8_A7(2)=>A(10),
                A10_A8_A7(1)=>A(8),
                A10_A8_A7(0)=>A(7),
                CLK8(2 downto 0)=>CLK8_DUMMY(2 downto 0),
                dsk_info(4 downto 0)=>dsk_info(4 downto 0),
                D_command(7 downto 0)=>D(7 downto 0),
                IO_RD=>IO_RD,
                IO_WR=>IO_WR,
                reset=>XLXN_858,
                dsk_A(20 downto 0)=>XLXN_427(20 downto 0),
                dsk_transmit=>XLXN_621,
                dsk_W=>XLXN_849,
                Dout(7 downto 0)=>XLXN_283(7 downto 0),
                dsk_Di(7 downto 0)=>ram_Di(7 downto 0),
					 dsk_Do(7 downto 0)=>ram_Do(7 downto 0)
					 );
   
   XLXI_345 : ROMselect
      port map (A13=>A(13),
                CLK=>XLXN_435,
                D(7 downto 0)=>D(7 downto 0),
                IO_WR=>IO_WR,
                ROMbank(3 downto 0)=>ROMbank(3 downto 0));
   
   XLXI_348 : AmstradRAMDSK
      port map (A(17 downto 0)=>vram_A(17 downto 0),
                crtc_A(15 downto 0)=>crtc_A_DUMMY(15 downto 0),
                crtc_transmit=>XLXN_852,
                dsk_A(20 downto 0)=>XLXN_427(20 downto 0),
                dsk_transmit=>XLXN_621,
                init_A(20 downto 0)=>init_A(20 downto 0),
                init_done=>RESET_n,
                ram_A(20 downto 0)=>ram_A(20 downto 0));
   
   XLXI_349 : YM2149
      port map (CLK=>XLXN_862,
                ENA=>XLXN_473,
                I_A8=>XLXN_464,
                I_A9_L=>XLXN_475,
                I_BC1=>portC(6),
                I_BC2=>XLXN_470,
                I_BDIR=>portC(7),
                I_DA(7 downto 0)=>XLXN_462(7 downto 0),
                I_IOA(7 downto 0)=>XLXN_518(7 downto 0),
                I_SEL_L=>XLXN_474,
                RESET_L=>RESET_n,
                O_AUDIO(7 downto 0)=>XLXN_861(7 downto 0),
                O_DA(7 downto 0)=>XLXN_519(7 downto 0));
   
   XLXI_350 : VCC
      port map (P=>XLXN_464);
   
   XLXI_351 : VCC
      port map (P=>XLXN_470);
   
   XLXI_355 : GND
      port map (G=>XLXN_475);
   
   XLXI_377 : VCC
      port map (P=>XLXN_473);
   
   XLXI_383 : VCC
      port map (P=>XLXN_498);
   
   XLXI_384 : GND
      port map (G=>XLXN_499);
   
   XLXI_385 : VCC
      port map (P=>XLXN_474);
   
   XLXI_399 : CB4CE_HXILINX_amstradCPC_gomadoslx25
      port map (C=>XLXN_633,
                CE=>XLXN_498,
                CLR=>XLXN_499,
                CEO=>open,
                Q0=>open,
                Q1=>XLXN_862,
                Q2=>open,
                Q3=>open,
                TC=>open);
   
   XLXI_414 : VCC
      port map (P=>XLXN_542);
   
   XLXI_417 : INV
      port map (I=>CLK16MHz,
                O=>CLK8_DUMMY(0));
   
   XLXI_475 : AND2
      port map (I0=>XLXN_824,
                I1=>IO_REQ,
                O=>XLXN_826);
   
   XLXI_476 : INV
      port map (I=>XLXN_845,
                O=>XLXN_824);
   
   XLXI_494 : joykeyb_MUSER_amstradCPC_gomadoslx25
      port map (CLK4MHz=>XLXN_633,
                joystick1(6 downto 0)=>JOYSTICK1(6 downto 0),
                PPI_portC(3 downto 0)=>portC(3 downto 0),
                PS2_CLK=>PS2_CLK,
                PS2_DATA=>PS2_DATA,
                key_reset=>key_reset,
                PPI_portA(7 downto 0)=>XLXN_518(7 downto 0));
   
   XLXI_549 : INV
      port map (I=>XLXN_38,
                O=>XLXN_785);
   
   XLXI_575 : AND3
      port map (I0=>XLXN_556,
                I1=>init_W_n,
                I2=>XLXN_848,
                O=>ram_W_n);
   
   XLXI_576 : INV
      port map (I=>XLXN_849,
                O=>XLXN_848);
   
   XLXI_579 : CB4CE_HXILINX_amstradCPC_gomadoslx25
      port map (C=>CLK16MHz,
                CE=>XLXN_542,
                CLR=>XLXN_118,
                CEO=>open,
                Q0=>CLK8_DUMMY(1),
                Q1=>CLK8_DUMMY(2),
                Q2=>open,
                Q3=>open,
                TC=>open);
   
--   XLXI_580 : PWM
--      port map (clk=>CLK_PWM,
--                clk_ref=>XLXN_862,
--                PWM_in(7 downto 0)=>XLXN_861(7 downto 0),
--                PWM_out=>audio_AB,
--               PWM_out2=>audio_BC
--					 );
					 
	dac_l : entity work.dac 
	port map
	(
		clk_i   => XLXN_633, --CLK_PWM,
		--res_i => '1',
		res_i  => not RESET_n,
		dac_i   => XLXN_861(7 downto 0),
		dac_o   => audio_AB
	);
	dac_r : entity work.dac 
	port map
	(
		clk_i   => XLXN_633, --CLK_PWM,
		--res_i => '1',
		res_i  => not RESET_n,
		dac_i   => XLXN_861(7 downto 0),
		dac_o   => audio_BC
	);
   
   XLXI_582 : pio
      port map (addr(1 downto 0)=>A(9 downto 8),
                cpuclk=>XLXN_633,
                cs=>A(11),
                datain(7 downto 0)=>D(7 downto 0),
                iord=>XLXN_864,
                iowr=>XLXN_180,
                PAI(7 downto 0)=>XLXN_519(7 downto 0),
                PBI(7)=>zero,
                PBI(6)=>zero,
                PBI(5)=>zero,
                PBI(4)=>un,
                PBI(3)=>un,
                PBI(2)=>un,
                PBI(1)=>zero,
                PBI(0)=>n_crtc_vsync,
                RESET=>XLXN_858,
                PAO(7 downto 0)=>XLXN_462(7 downto 0),
                PCO(7 downto 0)=>portC(7 downto 0),
                DO(7 downto 0)=>XLXN_283(7 downto 0));
   
end BEHAVIORAL;



library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity VRAM32Ko_Amstrad_MUSER_amstradCPC_gomadoslx25 is
   port ( vga_A    : in    std_logic_vector (14 downto 0); 
          vga_CLK  : in    std_logic; 
          vram_A   : in    std_logic_vector (14 downto 0); 
          vram_CLK : in    std_logic; 
          vram_D   : in    std_logic_vector (7 downto 0); 
          vram_W   : in    std_logic; 
          vga_D    : out   std_logic_vector (7 downto 0));
end VRAM32Ko_Amstrad_MUSER_amstradCPC_gomadoslx25;

architecture BEHAVIORAL of VRAM32Ko_Amstrad_MUSER_amstradCPC_gomadoslx25 is
   attribute BOX_TYPE   : string ;
   signal XLXN_19  : std_logic;
   signal XLXN_21  : std_logic;
   signal XLXN_23  : std_logic;
   signal XLXN_31  : std_logic;
   signal XLXN_40  : std_logic_vector (7 downto 0);
   signal XLXN_46  : std_logic_vector (7 downto 0);
   component VRAM_Amstrad
      port ( vram_CLK : in    std_logic; 
             vga_CLK  : in    std_logic; 
             vram_A   : in    std_logic_vector (13 downto 0); 
             vga_A    : in    std_logic_vector (13 downto 0); 
             vram_W   : in    std_logic; 
             vram_D   : in    std_logic_vector (7 downto 0); 
             vga_D    : out   std_logic_vector (7 downto 0));
   end component;
   
   component and_then
      port ( A : in    std_logic; 
             B : in    std_logic; 
             C : out   std_logic);
   end component;
   
   component INV
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute BOX_TYPE of INV : component is "BLACK_BOX";
   
   component SELECT8
      port ( s1    : in    std_logic; 
             DATA1 : in    std_logic_vector (7 downto 0); 
             DATA2 : in    std_logic_vector (7 downto 0); 
             DATA0 : out   std_logic_vector (7 downto 0));
   end component;
   
begin
   XLXI_1 : VRAM_Amstrad
      port map (vga_A(13 downto 0)=>vga_A(13 downto 0),
                vga_CLK=>vga_CLK,
                vram_A(13 downto 0)=>vram_A(13 downto 0),
                vram_CLK=>vram_CLK,
                vram_D(7 downto 0)=>vram_D(7 downto 0),
                vram_W=>XLXN_19,
                vga_D(7 downto 0)=>XLXN_40(7 downto 0));
   
   XLXI_2 : and_then
      port map (A=>vram_W,
                B=>XLXN_21,
                C=>XLXN_19);
   
   XLXI_3 : INV
      port map (I=>vram_A(14),
                O=>XLXN_21);
   
   XLXI_4 : SELECT8
      port map (DATA1(7 downto 0)=>XLXN_40(7 downto 0),
                DATA2(7 downto 0)=>XLXN_46(7 downto 0),
                s1=>XLXN_23,
                DATA0(7 downto 0)=>vga_D(7 downto 0));
   
   XLXI_5 : INV
      port map (I=>vga_A(14),
                O=>XLXN_23);
   
   XLXI_6 : VRAM_Amstrad
      port map (vga_A(13 downto 0)=>vga_A(13 downto 0),
                vga_CLK=>vga_CLK,
                vram_A(13 downto 0)=>vram_A(13 downto 0),
                vram_CLK=>vram_CLK,
                vram_D(7 downto 0)=>vram_D(7 downto 0),
                vram_W=>XLXN_31,
                vga_D(7 downto 0)=>XLXN_46(7 downto 0));
   
   XLXI_7 : and_then
      port map (A=>vram_W,
                B=>vram_A(14),
                C=>XLXN_31);
   
end BEHAVIORAL;



library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity amstrad_video_MUSER_amstradCPC_gomadoslx25 is
   port ( CLK4MHz   : in    std_logic; 
          CLK25MHz  : in    std_logic; 
          crtc_A    : in    std_logic_vector (14 downto 0); 
          crtc_D    : in    std_logic_vector (7 downto 0); 
          crtc_W    : in    std_logic; 
          palette_A : in    std_logic_vector (12 downto 0); 
          palette_D : in    std_logic_vector (7 downto 0); 
          palette_W : in    std_logic; 
          BLUE3     : out   std_logic_vector (2 downto 0); 
          GREEN3    : out   std_logic_vector (2 downto 0); 
          HSYNC     : out   std_logic; 
          RED3      : out   std_logic_vector (2 downto 0); 
          VSYNC     : out   std_logic);
end amstrad_video_MUSER_amstradCPC_gomadoslx25;

architecture BEHAVIORAL of amstrad_video_MUSER_amstradCPC_gomadoslx25 is
   signal XLXN_684  : std_logic_vector (7 downto 0);
   signal XLXN_693  : std_logic_vector (14 downto 0);
   signal XLXN_694  : std_logic_vector (12 downto 0);
   signal XLXN_705  : std_logic_vector (7 downto 0);
   component VRAM32Ko_Amstrad_MUSER_amstradCPC_gomadoslx25
      port ( vram_CLK : in    std_logic; 
             vga_CLK  : in    std_logic; 
             vram_A   : in    std_logic_vector (14 downto 0); 
             vga_A    : in    std_logic_vector (14 downto 0); 
             vram_W   : in    std_logic; 
             vram_D   : in    std_logic_vector (7 downto 0); 
             vga_D    : out   std_logic_vector (7 downto 0));
   end component;
   
   component PALETTE_RAM
      port ( CLKI : in    std_logic; 
             CLKO : in    std_logic; 
             WR   : in    std_logic; 
             AI   : in    std_logic_vector (12 downto 0); 
             AO   : in    std_logic_vector (12 downto 0); 
             DI   : in    std_logic_vector (7 downto 0); 
             DO   : out   std_logic_vector (7 downto 0));
   end component;
   
   component aZRaEL_vram2vgaAmstradMiaow
      port ( CLK_25MHz : in    std_logic; 
             DATA      : in    std_logic_vector (7 downto 0); 
             PALETTE_D : in    std_logic_vector (7 downto 0); 
             VSYNC     : out   std_logic; 
             HSYNC     : out   std_logic; 
             ADDRESS   : out   std_logic_vector (14 downto 0); 
             PALETTE_A : out   std_logic_vector (12 downto 0); 
             RED       : out   std_logic_vector (2 downto 0); 
             GREEN     : out   std_logic_vector (2 downto 0); 
             BLUE      : out   std_logic_vector (2 downto 0));
   end component;
   
begin
   XLXI_474 : VRAM32Ko_Amstrad_MUSER_amstradCPC_gomadoslx25
      port map (vga_A(14 downto 0)=>XLXN_693(14 downto 0),
                vga_CLK=>CLK25MHz,
                vram_A(14 downto 0)=>crtc_A(14 downto 0),
                vram_CLK=>CLK4MHz,
                vram_D(7 downto 0)=>crtc_D(7 downto 0),
                vram_W=>crtc_W,
                vga_D(7 downto 0)=>XLXN_705(7 downto 0));
   
   XLXI_475 : PALETTE_RAM
      port map (AI(12 downto 0)=>palette_A(12 downto 0),
                AO(12 downto 0)=>XLXN_694(12 downto 0),
                CLKI=>CLK4MHz,
                CLKO=>CLK25MHz,
                DI(7 downto 0)=>palette_D(7 downto 0),
                WR=>palette_W,
                DO(7 downto 0)=>XLXN_684(7 downto 0));
   
   XLXI_476 : aZRaEL_vram2vgaAmstradMiaow
      port map (CLK_25MHz=>CLK25MHz,
                DATA(7 downto 0)=>XLXN_705(7 downto 0),
                PALETTE_D(7 downto 0)=>XLXN_684(7 downto 0),
                ADDRESS(14 downto 0)=>XLXN_693(14 downto 0),
                BLUE(2 downto 0)=>BLUE3(2 downto 0),
                GREEN(2 downto 0)=>GREEN3(2 downto 0),
                HSYNC=>HSYNC,
                PALETTE_A(12 downto 0)=>XLXN_694(12 downto 0),
                RED(2 downto 0)=>RED3(2 downto 0),
                VSYNC=>VSYNC);
   
end BEHAVIORAL;



library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity bootloader_sd_MUSER_amstradCPC_gomadoslx25 is
   port ( CLK4MHz     : in    std_logic; 
          key_reset   : in    std_logic; 
          MISO        : in    std_logic; 
          dsk_info    : out   std_logic_vector (4 downto 0); 
          FILE_LOADED : out   std_logic; 
          MOSI        : out   std_logic; 
          ram_A       : out   std_logic_vector (20 downto 0); 
          ram_W_n     : out   std_logic; 
          SCLK        : out   std_logic; 
          SS_n        : out   std_logic; 
          ram_Do       : out std_logic_vector (7 downto 0));
end bootloader_sd_MUSER_amstradCPC_gomadoslx25;

architecture BEHAVIORAL of bootloader_sd_MUSER_amstradCPC_gomadoslx25 is
   attribute BOX_TYPE   : string ;
   signal INIT_DONE   : std_logic;
   signal ram_W       : std_logic;
   signal XLXN_52     : std_logic_vector (7 downto 0);
   signal XLXN_55     : std_logic_vector (31 downto 0);
   signal XLXN_57     : std_logic;
   signal XLXN_61     : std_logic;
   signal XLXN_76     : std_logic;
   component SDRAM_SPIMASTER
      port ( SCLK          : in    std_logic; 
             MISO          : in    std_logic; 
             spi_R         : in    std_logic; 
             address       : in    std_logic_vector (31 downto 0); 
             MOSI          : out   std_logic; 
             spi_Rdone     : out   std_logic; 
             spi_init_done : out   std_logic; 
             data_out      : out   std_logic_vector (7 downto 0));
   end component;
   
   component SDRAM_FAT32_LOADER
      port ( CLK            : in    std_logic; 
             spi_done       : in    std_logic; 
             spi_init_done  : in    std_logic; 
             key_reset      : in    std_logic; 
             spi_D          : in    std_logic_vector (7 downto 0); 
             ram_Do          : out std_logic_vector (7 downto 0); 
             ram_W          : out   std_logic; 
             spi_do         : out   std_logic; 
             load_init_done : out   std_logic; 
             ram_A          : out   std_logic_vector (20 downto 0); 
             spi_A          : out   std_logic_vector (31 downto 0); 
             dsk_info       : out   std_logic_vector (4 downto 0));
   end component;
   
   component INV
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute BOX_TYPE of INV : component is "BLACK_BOX";
   
   component VCC
      port ( P : out   std_logic);
   end component;
   attribute BOX_TYPE of VCC : component is "BLACK_BOX";
   
begin
   XLXI_1 : SDRAM_SPIMASTER
      port map (address(31 downto 0)=>XLXN_55(31 downto 0),
                MISO=>MISO,
                SCLK=>CLK4MHz,
                spi_R=>XLXN_61,
                data_out(7 downto 0)=>XLXN_52(7 downto 0),
                MOSI=>MOSI,
                spi_init_done=>INIT_DONE,
                spi_Rdone=>XLXN_57);
   
   XLXI_7 : SDRAM_FAT32_LOADER
      port map (CLK=>CLK4MHz,
                key_reset=>key_reset,
                spi_D(7 downto 0)=>XLXN_52(7 downto 0),
                spi_done=>XLXN_57,
                spi_init_done=>INIT_DONE,
                dsk_info(4 downto 0)=>dsk_info(4 downto 0),
                load_init_done=>FILE_LOADED,
                ram_A(20 downto 0)=>ram_A(20 downto 0),
                ram_W=>ram_W,
                spi_A(31 downto 0)=>XLXN_55(31 downto 0),
                spi_do=>XLXN_61,
                ram_Do(7 downto 0)=>ram_Do(7 downto 0));
   
   XLXI_26 : INV
      port map (I=>ram_W,
                O=>ram_W_n);
   
   XLXI_40 : INV
      port map (I=>XLXN_76,
                O=>SS_n);
   
   XLXI_41 : VCC
      port map (P=>XLXN_76);
   
   XLXI_64 : INV
      port map (I=>CLK4MHz,
                O=>SCLK);
   
end BEHAVIORAL;


