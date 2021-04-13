#Next186 SoC PC for ZXDOS LX16/LX25 DDR3 boards
Ported from Pipistrello FPGA official core from https://opencores.org/projects/next186_soc_pc

Xilinx ISE 14.7 is required to build the core.

To run this core, Next186_BIOS_zxdos_ddr3.COM is needed to be written on SD card in the first 64 sectors (Ex. at sector 10) or to the latest 16 sectors of the SD card.
Next186_BIOS_zxdos_ddr3.COM is in the software directory.

The following patches has been applied form https://github.com/neurorulez/jammazx1/tree/master/ordenadores/pcxt_186
- opl3.v and BIOS: adlib auto-detection fix.
- bootloader: looks for the BIOS in the first 64 SD sectors and in the latest 16 sectors of the SD card.

