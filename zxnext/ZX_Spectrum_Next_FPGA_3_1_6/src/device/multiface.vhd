
-- Multiface
-- Copyright 2020 Victor Trucco, Fabio Belavenuto and Alvin Albrecht
--
-- This file is part of the ZX Spectrum Next Project
-- <https://gitlab.com/SpectrumNext/ZX_Spectrum_Next_FPGA/tree/master/cores>
--
-- The ZX Spectrum Next FPGA source code is free software: you can 
-- redistribute it and/or modify it under the terms of the GNU General 
-- Public License as published by the Free Software Foundation, either 
-- version 3 of the License, or (at your option) any later version.
--
-- The ZX Spectrum Next FPGA source code is distributed in the hope 
-- that it will be useful, but WITHOUT ANY WARRANTY; without even the 
-- implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
-- PURPOSE.  See the GNU General Public License for more details.
--
-- You should have received a copy of the GNU General Public License
-- along with the ZX Spectrum Next FPGA source code.  If not, see 
-- <https://www.gnu.org/licenses/>.

-- Multiface 1 schematics:
-- http://www.worldofspectrum.org/pub/sinclair/technical-docs/Multiface1_Schematics.png
--
-- Port write 1F,9F: NMI_ACTIVE off
-- Port read 1F: MF_ENABLE off
-- Port read 9F: MF_ENABLE on
-- NMI_ACTIVE: 0=on holds /nmi low and prevents further button activations
-- MF_ENABLE: 0=on asserts /romcs and pages in multiface memory
-- 0x66 instruction fetch: immediate MF_ENABLE on if NMI_ACTIVE on
-- NMI_ACTIVE off and button press: NMI_ACTIVE on

-- Multiface 128 schematics:
-- http://projectspeccy.com/wp-content/uploads/2017/09/Spectrum_Multiface_128_v1.00-1.jpg

-- Multiface 3:
-- 
-- Port write BF,3F: NMI_ACTIVE off
-- Port write BF: INVISIBLE on
-- Port read BF: MF_ENABLE off
-- Port read 3F: if INVISIBLE off, MF_ENABLE on else MF_ENABLE off
-- Port read 1F3F: if INVISIBLE off, return port 1ffd
-- Port read 7F3F: if INVISIBLE off, return port 7ffd
-- NMI_ACTIVE: 0=on holds /nmi low and prevents further button activations
-- MF_ENABLE: 0=on asserts /romcs and pages in multiface memory
-- 0x66 instruction fetch: immediate MF_ENABLE on if NMI_ACTIVE on
-- NMI_ACTIVE off and button press: INVISIBLE off, NMI_ACTIVE on

library ieee;
use ieee.std_logic_1164.all;

entity multiface is
   port (
      reset_i              : in std_logic;
      clock_i              : in std_logic;
      
      cpu_a_i              : in std_logic_vector(15 downto 0);
      cpu_mreq_n_i         : in std_logic;
      cpu_m1_n_i           : in std_logic;
      
      port_1ffd_i          : in std_logic_vector(7 downto 0);
      port_7ffd_i          : in std_logic_vector(7 downto 0);
      port_fe_border_i     : in std_logic_vector(2 downto 0);
      
      enable_i             : in std_logic;
      button_i             : in std_logic;
      
      mode_48_i            : in std_logic;
      mode_128_i           : in std_logic;
      mode_p3_i            : in std_logic;
      
      port_mf_enable_rd_i  : in std_logic;
      port_mf_enable_wr_i  : in std_logic;
      port_mf_disable_rd_i : in std_logic;
      port_mf_disable_wr_i : in std_logic;
      
      nmi_active_o         : out std_logic;
      
      mf_mem_en_o          : out std_logic;
      
      mf_port_en_o         : out std_logic;
      mf_port_dat_o        : out std_logic_vector(7 downto 0)
   );
end entity;

architecture rtl of multiface is

   signal reset            : std_logic;
   
   signal port_io_dly      : std_logic;
   
   signal button_pulse     : std_logic;
   signal nmi_active       : std_logic;
   
   signal invisible        : std_logic;
   signal invisible_eff    : std_logic;
   
   signal fetch_66         : std_logic;
   signal mf_enable        : std_logic;
   signal mf_enable_eff    : std_logic;

begin

   reset <= reset_i or not enable_i;

   -- edge detection on port io
   
   process (clock_i)
   begin
      if rising_edge(clock_i) then
         if reset = '1' then
            port_io_dly <= '0';
         else
            port_io_dly <= port_mf_enable_rd_i or port_mf_enable_wr_i or port_mf_disable_rd_i or port_mf_disable_wr_i;
         end if;
      end if;
   end process;

   -- nmi_active (1 = nmi asserted)
   
   button_pulse <= button_i and not nmi_active;
   
   process (clock_i)
   begin
      if rising_edge(clock_i) then
         if reset = '1' then
            nmi_active <= '0';
         elsif button_pulse = '1' then
            nmi_active <= '1';
         elsif (port_mf_enable_wr_i = '1' or port_mf_disable_wr_i = '1' or (port_mf_disable_rd_i = '1' and mode_p3_i = '1')) and port_io_dly = '0' then
            nmi_active <= '0';
         end if;
      end if;
   end process;
   
   nmi_active_o <= nmi_active;
   
   -- invisible (1 = invisible)
   
   process (clock_i)
   begin
      if rising_edge(clock_i) then
         if reset = '1' then
            invisible <= '1';
         elsif button_pulse = '1' then
            invisible <= '0';
         elsif ((port_mf_disable_wr_i = '1' and mode_p3_i = '0') or (port_mf_enable_wr_i = '1' and mode_p3_i = '1')) and port_io_dly = '0' then
            invisible <= '1';
         end if;
      end if;
   end process;
   
   invisible_eff <= invisible and not mode_48_i;

   -- mf_enable (1 = memory paged in)
   
   fetch_66 <= '1' when cpu_a_i = X"0066" and cpu_m1_n_i = '0' and nmi_active = '1' else '0';
   
   process (clock_i)
   begin
      if rising_edge(clock_i) then
         if reset = '1' then
            mf_enable <= '0';
         elsif fetch_66 = '1' and cpu_mreq_n_i = '0' then
            mf_enable <= '1';
         elsif port_mf_disable_rd_i = '1' then
            mf_enable <= '0';
         elsif port_mf_enable_rd_i = '1' then
            mf_enable <= not invisible_eff;
         end if;
      end if;
   end process;
   
   mf_enable_eff <= mf_enable or fetch_66;
   
   -- multiface memory
   
   mf_mem_en_o <= '1' when cpu_a_i(15 downto 14) = "00" and mf_enable_eff = '1' else '0';
   
   -- port read
   
   mf_port_en_o <= '1' when port_mf_enable_rd_i = '1' and invisible_eff = '0' and (mode_128_i = '1' or (mode_p3_i = '1' and (cpu_a_i(15 downto 8) = X"1F" or cpu_a_i(15 downto 8) = X"7F" or cpu_a_i(15 downto 8) = X"FE"))) else '0';
   mf_port_dat_o <= (port_7ffd_i(3) & "1111111") when mode_128_i = '1' else port_7ffd_i when cpu_a_i(15 downto 8) = X"7F" else port_1ffd_i when cpu_a_i(15 downto 8) = X"1F" else ("00000" & port_fe_border_i);

end architecture;
