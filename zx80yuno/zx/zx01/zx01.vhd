----------------------------------------------------------
--  zx01.vhd
--		ZX01 top level
--		==============
--
--  12/15/01	Daniel Wallner : Rewrite of Bodo Wenzels zx97 to SOC
--  02/23/02	Daniel Wallner : Changed to the synchronous t80s
--  03/04/02	Daniel Wallner : Connected INT_n, synchronized reset and added tape_out
--  08/14/02	Daniel Wallner : Changed for xilinx XST
----------------------------------------------------------

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

-- the pads ----------------------------------------------

entity zx01 is
  port (n_reset:   in    std_ulogic;
        clock:     in    std_ulogic;
		  clockvga:  in    std_ulogic;
        kbd_clk:   in    std_ulogic;
        kbd_data:  in    std_ulogic;
--        v_inv:     in    std_ulogic;
        usa_uk:    in    std_ulogic;
        mem16k:    in    std_ulogic;
        video:     out   std_ulogic;
  		  o_vsync: out std_ulogic; --avlixa
		  o_hsync: out std_ulogic; --avlixa
		  modo_video:out   std_ulogic; -- 0 para salida VGA, 1 para VIDEO COMPUESTO
        tape_in:   in    std_ulogic;
        tape_out:  out   std_ulogic;
		  -- Joystick
		  joy_clk:   out   std_ulogic;
		  joy_load:   out  std_ulogic;
		  joy_data:   in   std_ulogic;
		  resetKey:	out	std_logic;
		  MRESET	 :  out	std_logic;
		  osdrgb: out std_logic_vector(2 downto 0);
		  pixel_x: in std_logic_vector(9 downto 0);
		  pixel_y: in std_logic_vector(9 downto 0)
		  );
end;

-- the top level ------------------------------

architecture rtl of zx01 is

  component PS2_MatrixEncoder
  port (Clk:      in std_logic;
        Reset_n:  in std_logic;
        Tick1us:  in std_logic;
        PS2_Clk:  in std_logic;
        PS2_Data: in std_logic;
        Key_Addr: in std_logic_vector(7 downto 0);
        Key_Data: out std_logic_vector(4 downto 0);
		  teclas_f: out std_logic_vector(3 downto 0);
		  resetKey:	out	std_logic;
		  MRESET	 :  out	std_logic;
		  joy1 : in std_logic_vector(7 downto 0);
		  joy2 : in std_logic_vector(7 downto 0);
		  redefjoy1: out	std_logic;
		  redefjoy2: out	std_logic;
		  redef_curr : out unsigned(2 downto 0)
		  );
  end component;

  component T80s 
  generic(
        Mode : integer := 0);
  port (RESET_n		: in std_logic;
        CLK_n		: in std_logic;
        WAIT_n		: in std_logic;
        INT_n		: in std_logic;
        NMI_n		: in std_logic;
        BUSRQ_n		: in std_logic;
        M1_n		: out std_logic;
        MREQ_n		: out std_logic;
        IORQ_n		: out std_logic;
        RD_n		: out std_logic;
        WR_n		: out std_logic;
        RFSH_n		: out std_logic;
        HALT_n		: out std_logic;
        BUSAK_n		: out std_logic;
        A			: out std_logic_vector(15 downto 0);
        DI			: in std_logic_vector(7 downto 0);
        DO			: out std_logic_vector(7 downto 0));
  end component;

  component SSRAM
  generic(
        AddrWidth: integer := 16;
        DataWidth: integer := 8);
  port (Clk:     in std_logic;
        CE_n:    in std_logic;
        WE_n:    in std_logic;
        A:       in std_logic_vector(AddrWidth - 1 downto 0);
        DIn:     in std_logic_vector(DataWidth - 1 downto 0);
        DOut:    out std_logic_vector(DataWidth - 1 downto 0));
  end component;

  component ROM81
  port (clk: in std_logic;
        A:   in std_logic_vector(12 downto 0);
        D:   out std_logic_vector(7 downto 0));
  end component;

  component top
  generic (synchronous: boolean := false);
  port (clock:   in  std_ulogic;
        clock_2: out std_ulogic;
        phi:     in  std_ulogic;
        n_reset: out std_ulogic;
        n_modes: out std_ulogic;
        a_mem_h: out std_ulogic_vector(14 downto 13);
        a_mem_l: out std_ulogic_vector(8 downto 0);
        d_mem_i: in  std_ulogic_vector(7 downto 0);
        a_cpu:   in  std_ulogic_vector(15 downto 0);
        d_cpu_i: in  std_ulogic_vector(7 downto 0);
        d_cpu_o: out std_ulogic_vector(7 downto 0);
        oe_cpu:  out boolean;
        oe_mem:  out boolean;
        n_m1:    in  std_ulogic;
        n_mreq:  in  std_ulogic;
        n_iorq:  in  std_ulogic;
        n_wr:    in  std_ulogic;
        n_rd:    in  std_ulogic;
        n_rfsh:  in  std_ulogic;
        n_nmi:   out std_ulogic;
        n_halt:  in  std_ulogic;
        n_wait:  out std_ulogic;
        n_romcs: out std_ulogic;
        n_ramcs: out std_ulogic;
        kbd_col: in  std_ulogic_vector(4 downto 0);
        usa_uk:  in  std_ulogic;
        video:   out std_ulogic;
        n_sync:  out std_ulogic;
		  o_vsync: out std_ulogic; --avlixa
		  o_hsync: out std_ulogic; --avlixa
        tape_in: in  std_ulogic;
        d_lcd:   out std_ulogic_vector(3 downto 0);
        s:       out std_ulogic;
        cp1:     out std_ulogic;
        cp2:     out std_ulogic);
  end component;

  component osd_font_gen 
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
	end component;

  signal a_mem_h:   std_ulogic_vector(14 downto 13);
  signal a_mem_l:   std_ulogic_vector(8 downto 0);
  signal a_mem:     std_logic_vector(14 downto 0);
  signal a_ram:     std_logic_vector(13 downto 0);
  signal d_ram:     std_logic_vector(7 downto 0);
  signal d_rom:     std_logic_vector(7 downto 0);
  signal n_romcs:   std_ulogic;
  signal n_ramcs:   std_ulogic;
  signal a_cpu:     std_logic_vector(15 downto 0);
  signal n_m1:      std_ulogic;
  signal n_mreq:    std_ulogic;
  signal n_iorq:    std_ulogic;
  signal n_wr:      std_ulogic;
  signal n_rd:      std_ulogic;
  signal n_rfsh:    std_ulogic;
  signal n_nmi:     std_ulogic;
  signal n_halt:    std_ulogic;
  signal n_wait:    std_ulogic;
  signal clock_2:   std_ulogic;
  signal i_phi:     std_ulogic;
  signal i_n_modes: std_ulogic;
  signal d_mem_i:   std_ulogic_vector(7 downto 0);
  signal d_cpu_i:   std_logic_vector(7 downto 0);
  signal d_cpu_o:   std_ulogic_vector(7 downto 0);
  signal Tick1us:   std_logic;
  signal kbd_col:   std_logic_vector(4 downto 0);
  signal kbd_mode:  std_logic_vector(4 downto 0);
  signal i_kbd_col: std_logic_vector(4 downto 0);
  signal i_video:   std_ulogic;
  signal i_n_sync:  std_ulogic;
  signal i_n_reset: std_ulogic;
  signal s_n_reset: std_ulogic;
  signal teclas_f : std_logic_vector(3 downto 0); --jepalza, teclas F1-F2-F3
  signal v_inv, v_invnext 	: std_ulogic;
  signal mod_vid, mod_vidnext  :std_ulogic;
  --Joystick
  signal joy1,joy2: std_logic_vector(7 downto 0);
  signal kbd_col_joy:std_logic_vector(4 downto 0);
  --Osd redefinicion mapeo joystic
  signal redefjoy1: std_logic;
  signal	redefjoy2: std_logic;
  signal	redef_curr : unsigned(2 downto 0);
  signal hsync:    std_ulogic; --avlixa
begin



  process (n_reset, i_phi)
  begin
    if n_reset = '0' then
      s_n_reset <= '0';
    elsif i_phi'event and i_phi = '1' then
      s_n_reset <= '1';
    end if;
  end process;

  process (s_n_reset, i_phi)
    variable cnt : unsigned(1 downto 0);
  begin
    if s_n_reset = '0' then
      cnt := "00";
      Tick1us <= '0';
    elsif i_phi'event and i_phi = '1' then
      if cnt = "00" then
        cnt := "10";
        Tick1us <= '1';
      else
        cnt := cnt - 1;
        Tick1us <= '0';
      end if;
    end if;
  end process;

  c_PS2_MatrixEncoder: PS2_MatrixEncoder
    port map (Clk => i_phi,
              Reset_n => i_n_reset,
              Tick1us => Tick1us,
              PS2_Clk => kbd_clk,
              PS2_Data => kbd_data,
              Key_Addr => a_cpu(15 downto 8),
              Key_Data => kbd_col,
				  teclas_f => teclas_f,  --jepalza, teclas F1-F2-F3 -- modif avlixa
				  resetKey => resetKey,
				  MRESET	  => MRESET,
				  joy1 	  => joy1,
				  joy2 	  => joy2,
				  redefjoy1=> redefjoy1,
				  redefjoy2=> redefjoy2,
				  redef_curr=>redef_curr				  
				  );
  o_hsync <= hsync;
  
  c_osd_font_gen: osd_font_gen 
   port map (
      clk => clockvga,
      video_on=> redefjoy1 or redefjoy2,
      pixel_x=>pixel_x, pixel_y=>pixel_y,
      rgb_text=>osdrgb,
		redefjoy1=>redefjoy1,
		redefjoy2=>redefjoy2,
		redef_curr=>redef_curr
   );

	-- ZX81 keymap:
	-- col(N)=0  0,      1, 2, 3, 4
   -------------------------------	
	-- a( 8)=0 - shift,  z, x, c, v
	-- a( 9)=0 - a,      s, d, f, g
	-- a(10)=0 - q,      w, e, r, t
	-- a(11)=0 - 1,      2, 3, 4, 5
	-- a(12)=0 - 0,      9, 8, 7, 6
	-- a(13)=0 - p,      o, i, u, y
	-- a(14)=0 - return, l, k, j, h
	-- a(15)=0 - space,  ., m, n, b
  
  -- Mapeo fijo de joystick, se ha eliminado por variable pero se mantiene para backspace
  -- joystick 1: 5 - 6 - 7 - 8 -  0 - C
  -- joystick 2: o - a - q - p - SP - M
  kbd_col_joy(0) <= '0' when ((a_cpu(8)='0'  and teclas_f(3) = '1')						--backspace = *shift* + 0
									or (a_cpu(12)='0' and teclas_f(3) = '1'))						--backspace = shift + *0*
									--or	(a_cpu(12)='0' and joy1(4) = '0')-- else kbd_col(0);  -- j1.fire 1   - 0
							      -- or (a_cpu(10)='0' and joy2(0) = '0') -- else kbd_col(0); -- j2.up       - q
									-- or (a_cpu(9)='0' and joy2(1) = '0') --else kbd_col(0);   -- j2.down     - a
									--or (a_cpu(13)='0' and joy2(3) = '0') -- else kbd_col(0); -- j2.right    - p
									-- or (a_cpu(15)='0' and joy2(4) = '0')) else kbd_col(0);   -- j2.fire 1   - SP
									else kbd_col(0);
  kbd_col_joy(1)  <= kbd_col(1);   -- sin mapeo en columna 1
--  kbd_col_joy(1) <= '0' when (a_cpu(13)='0' and joy2(2) = '0') else kbd_col(1);     -- j2.left    - o
  kbd_col_joy(2) <= -- '0' when --((a_cpu(12)='0' and joy1(3) = '0') or --else kbd_col(2);  -- j1.right   - 8
									  --  ((a_cpu(15)='0' and joy2(5) = '0')) else kbd_col(2);   -- j2.fire 2  - M
								   kbd_col(2);
  kbd_col_joy(3) <= --'0' when --((a_cpu(12)='0' and joy1(0) = '0') --else kbd_col(3);  -- j1.up      - 7
								   --or (a_cpu(8)='0' and joy1(5) = '0')) else kbd_col(3);    -- j1.fire 2  - C
									 --  (a_cpu(8)='0' and joy1(5) = '0') else  						-- j1.fire 2  - C
								  kbd_col(3);   
  kbd_col_joy(4) <= --'0' when --((a_cpu(12)='0' and joy1(1) = '0') -- else kbd_col(4); -- j1.down    - 6
									--or	(a_cpu(11)='0' and joy1(2) = '0')) else kbd_col(4);   -- j1.left    - 5
									--	(a_cpu(11)='0' and joy1(2) = '0') else  -- j1.left    - 5
								  kbd_col(4);  
  
--  i_kbd_col <= kbd_mode when i_n_modes = '0' else kbd_col;
  i_kbd_col <= kbd_mode when i_n_modes = '0' else kbd_col_joy;
 
-- up    = joyN[0];
-- down  = joyN[1];
-- left  = joyN[2];
-- right = joyN[3];
-- fire1 = joyN[4];
-- fire2 = joyN[5];
-- fire3 = joyN[6];
-- start = joyN[7];

  
  kbd_mode(3 downto 2) <= "00"; -- PAGE
  kbd_mode(4) <= v_inv;
  kbd_mode(1 downto 0) <= "00"; -- RAM

-- instantiate joystick decoder
   c_Joystick: entity work.joydecoder
      port map(clk=>clock,
		joy_data=>joy_data,
		joy_clk=>joy_clk,
		joy_load=>joy_load,
		clock_locked=> n_reset,
		joy1_o=>joy1,
		joy2_o=>joy2);

  c_Z80: T80s    
    generic map (Mode => 0)
    port map (M1_n => n_m1,
              MREQ_n => n_mreq,
              IORQ_n => n_iorq,
              RD_n => n_rd,
              WR_n => n_wr,
              RFSH_n => n_rfsh,
              HALT_n => n_halt,
				  WAIT_n => n_wait,
              INT_n => a_cpu(6),
              NMI_n => n_nmi,
              RESET_n => s_n_reset,
              BUSRQ_n => '1',
              BUSAK_n => open,
              CLK_n => i_phi,
              A => a_cpu,
              DI => std_logic_vector(d_cpu_o),
              DO => d_cpu_i);

  c_SSRAM: SSRAM
    generic map (AddrWidth => 14)
    port map (Clk => i_phi,
              CE_n => n_ramcs,
              WE_n => n_wr,
              A => a_ram,
              DIn => d_cpu_i,
              DOut => d_ram);

  a_ram <= a_mem(13 downto 0) when mem16k = '1' else "0000" & a_mem(9 downto 0);
				  
  c_ROM81: ROM81
    port map (clk => i_phi,
              A => a_mem(12 downto 0),
              D => d_rom);

  c_top: top
    generic map (true)
    port map (clock,clock_2,i_phi,
              i_n_reset,i_n_modes,
              a_mem_h,a_mem_l,d_mem_i,
              std_ulogic_vector(a_cpu),std_ulogic_vector(d_cpu_i),d_cpu_o,
              open,open,
              n_m1,n_mreq,n_iorq,n_wr,n_rd,n_rfsh,
              n_nmi,n_halt,n_wait,n_romcs,n_ramcs,
              std_ulogic_vector(i_kbd_col),usa_uk,
 --             i_video,i_n_sync,tape_in); -- avlixa
              i_video,i_n_sync,o_vsync,hsync,tape_in); --avlixa

  i_phi <= clock_2;

  a_mem(14 downto 13) <= std_logic_vector(a_mem_h);
  a_mem(12 downto 9) <= a_cpu(12 downto 9);
  a_mem(8 downto 0) <= std_logic_vector(a_mem_l);
  d_mem_i <= std_ulogic_vector(d_rom) when n_ramcs = '1'
        else std_ulogic_vector(d_ram);

  tape_out <= i_n_sync;
  
  -- salidas VGA o VIDEO
  
  -- habilitar para VGA
--  video <= i_video;
  
  -- habilitar para VIDEO
--  video <= '0' when i_n_sync='0' 
--     else 'Z' when i_video='0'
--     else '1';

--  v_inv 	 <= '0';-- when teclas_f="011" else '1' when teclas_f="100"; --f3 video inverso
--  mod_vid <= '0';-- when teclas_f="001" else '1' when teclas_f="010"; --f2 VGA
  modo_video <= mod_vid;

  	process (clock, n_reset)
	begin
		if n_reset = '0' then
			mod_vid <= '0';
			v_inv	  <= '0';
		elsif clock'event and clock = '1' then
			mod_vid <= mod_vidnext;
			v_inv <= v_invnext;

		end if;
	end process;
	mod_vidnext <= not mod_vid when teclas_f(2) = '1' else mod_vid; -- cambio video con Scrl.lock
	--v_invnext   <= not v_inv when teclas_f(1) = '1' else v_inv; -- cambio video inverso con Home
	
  video <= i_video when mod_vid='0'   -- modo VGA si modo_video=0
     else '0' when i_n_sync='0'       -- modo VIDEO
     else 'Z' when i_video='0'
     else '1';

end;

-- end ---------------------------------------------------
