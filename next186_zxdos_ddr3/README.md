# Next186 SoC PC for ZXDOS LX16/LX25 DDR3 boards
Ported from Pipistrello FPGA official core from https://opencores.org/projects/next186_soc_pc

Features:
- Next186 core with 30 MHz CPU (166.66Mhz 32bit Bus)
- 64 MB DDR3 RAM (DDR3-1333 333.33Mhz)
- 40 MHz DSP
- OPL3 support
- PS/2 mouse and keyboard support

Xilinx ISE 14.7 is required to build the core.

To run this core, Next186_BIOS_zxdos_ddr3.COM file is needed to be written on SD card in the first 64 sectors (Ex. at sector 10) or to the latest 16 sectors of the SD card.
Next186_BIOS_zxdos_ddr3.COM file is in the software directory.

The following patches has been applied form https://github.com/neurorulez/jammazx1/tree/master/ordenadores/pcxt_186
- opl3.v and BIOS: adlib auto-detection fix.
- bootloader: looks for the BIOS in the first 64 SD sectors and in the latest 16 sectors of the SD card.

## Device Utilization Summary (ZXDOS LX16):
```
Slice Logic Utilization:
  Number of Slice Registers:                 3,422 out of  18,224   18%
  Number of Slice LUTs:                      8,980 out of   9,112   98%
Slice Logic Distribution:
  Number of occupied Slices:                 2,276 out of   2,278   99%
  Number of MUXCYs used:                     1,236 out of   4,556   27%
  Number of LUT Flip Flop pairs used:        8,990
IO Utilization:
  Number of bonded IOBs:                        83 out of     186   44%
Specific Feature Utilization:
  Number of RAMB16BWERs:                        27 out of      32   84%
  Number of RAMB8BWERs:                          6 out of      64    9%
  Number of BUFIO2/BUFIO2_2CLKs:                 0 out of      32    0%
  Number of BUFIO2FB/BUFIO2FB_2CLKs:             0 out of      32    0%
  Number of BUFG/BUFGMUXs:                       9 out of      16   56%
  Number of DCM/DCM_CLKGENs:                     2 out of       4   50%
  Number of ILOGIC2/ISERDES2s:                   0 out of     248    0%
  Number of IODELAY2/IODRP2/IODRP2_MCBs:        23 out of     248    9%
  Number of OLOGIC2/OSERDES2s:                  47 out of     248   18%
  Number of BSCANs:                              0 out of       4    0%
  Number of BUFHs:                               0 out of     128    0%
  Number of BUFPLLs:                             0 out of       8    0%
  Number of BUFPLL_MCBs:                         1 out of       4   25%
  Number of DSP48A1s:                            6 out of      32   18%
  Number of ICAPs:                               0 out of       1    0%
  Number of MCBs:                                1 out of       2   50%
  Number of PCILOGICSEs:                         0 out of       2    0%
  Number of PLL_ADVs:                            2 out of       2  100%
  Number of PMVs:                                0 out of       1    0%
  Number of STARTUPs:                            0 out of       1    0%
  Number of SUSPEND_SYNCs:                       0 out of       1    0%
```

## Device Utilization Summary (ZXDOS LX25):
```
Slice Logic Utilization:
  Number of Slice Registers:                 3,361 out of  30,064   11%
  Number of Slice LUTs:                      8,127 out of  15,032   54%
Slice Logic Distribution:
  Number of occupied Slices:                 2,666 out of   3,758   70%
  Number of MUXCYs used:                     1,236 out of   7,516   16%
  Number of LUT Flip Flop pairs used:        8,577
IO Utilization:
  Number of bonded IOBs:                        83 out of     186   44%
Specific Feature Utilization:
  Number of RAMB16BWERs:                        36 out of      52   69%
  Number of RAMB8BWERs:                          8 out of     104    7%
  Number of BUFIO2/BUFIO2_2CLKs:                 0 out of      32    0%
  Number of BUFIO2FB/BUFIO2FB_2CLKs:             0 out of      32    0%
  Number of BUFG/BUFGMUXs:                       9 out of      16   56%
  Number of DCM/DCM_CLKGENs:                     2 out of       4   50%
  Number of ILOGIC2/ISERDES2s:                   0 out of     272    0%
  Number of IODELAY2/IODRP2/IODRP2_MCBs:        23 out of     272    8%
  Number of OLOGIC2/OSERDES2s:                  47 out of     272   17%
  Number of BSCANs:                              0 out of       4    0%
  Number of BUFHs:                               0 out of     160    0%
  Number of BUFPLLs:                             0 out of       8    0%
  Number of BUFPLL_MCBs:                         1 out of       4   25%
  Number of DSP48A1s:                            6 out of      38   15%
  Number of ICAPs:                               0 out of       1    0%
  Number of MCBs:                                1 out of       2   50%
  Number of PCILOGICSEs:                         0 out of       2    0%
  Number of PLL_ADVs:                            2 out of       2  100%
  Number of PMVs:                                0 out of       1    0%
  Number of STARTUPs:                            0 out of       1    0%
  Number of SUSPEND_SYNCs:                       0 out of       1    0%
```
