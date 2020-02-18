# ZX Spectrum Next for ZXDOS
Ported from ZX Spectrum Next oficial core from https://gitlab.com/SpectrumNext/ZX_Spectrum_Next_FPGA

Xilinx ISE 14.7 is required to build the zxdos spectrum next core.

Specific ZXDOS files are in zxdos directory.


# Information from original core:

# ZX Spectrum Next
Xilinx ISE 14.7 is required to build the zx spectrum next core.

A 16MB flash chip connected to the fpga is used to store core bitstreams.  The chip is divided into 32 slots of 512KB each, each of which can store a bitstream.  The first two slots, slot 0 and slot 1, are reserved for the zx next.  Slot 0 contains the anti-brick core, a core intended not to be changed as it is used to rescue the machine if something goes wrong.  Slot 1 contains the zx next core.

The fpga will configure itself using the anti-brick core in slot 0 at power up.  Shortly after, the fpga will reconfigure using the zx next core in slot 1 and the spectrum next will boot per normal after customizing itself using information stored in the file **machines/next/config.ini** on the sd card.

The vhdl source code can be found rooted in **src/**
* **zxnext_pins_issue2.ucf** defines the external pinout of the fpga and the build constraints.
* **zxnext_top_issue2.vhd** contains connections to the external pins and takes care of housekeeping not related to the zx next machine itself.
* **zxnext.vhd** is the implementation of the zx spectrum next. The source code for instantiated modules can be found in surrounding subdirectories.

### BUILDING TBBLUE.TBU

TBBLUE.TBU is a file that contains a header and a zx next core bitstream.  The bitstream stored in this file is copied to slot 1 in the flash chip.  The header contains a crc check and a core version number.

To generate TBBLUE.TBU, first build the zx next core.

1. If you have made changes to the vhdl, make sure the core version number is set correctly at the top of **src/zxnext_top_issue2.vhd** at about line 50.
2. Navigate to **synth-zxnext-issue2/**
3. Double click on **zxnext-issue2.xise** to have ISE automatically load the project.  If this file type is not associated with ISE on your machine, start ISE as you normally would and load this project file from the menu.
4. Right click on "Generate Programming File" as shown in the diagram below and choose "Re-Run All".  You may have to choose the "Implementation View" in the top left and the "Design" tab on the bottom left to see the same panels as shown in the picture.

![Image: Xilinx ISE Screenshot](zxnext-ise-build.png "Xilinx ISE Screenshot")

5. After some time, the build will complete with the bitstream generated into **synth-zxnext-issue2/work/zxnext_top_issue2.bit**
6. Navigate to **tbumaker**
7. Open a command prompt in that directory.  (On windows this may be "FILE->Open Command Prompt")
8. Run "maketbu"
9. Where it asks for a version number, enter the core id as set in step 1 (eg 30100 = 3.01.00)
10. The file "TBBLUE.TBU" will be generated which can then be copied to the root directory on the sd card, replacing the TBBLUE.TBU file already present.

The TBBLUE.TBU file is only used when updating the machine.  The fpga configures itself using the bitstream stored in slot 1 of the flash.  The updater reads the TBBLUE.TBU file, verifies the crc is correct, and then writes it to slot 1.  So the final step to update your machine is to run the updater.

If you would like to perform an anti-brick update, follow the instructions listed in the manual.  An anti-brick update can be used if the zx next core is damaged or bugged such that the zx next core is not operating correctly.  If the zx next core is not operating correctly, then it is best to use the anti-brick core to perform the update to make sure the flash is not incorrectly written.  During an anti-brick update, the machine may only generate a VGA picture.

To perform a regular update using the zx next core, hold "U" while powering up or while doing a hard reset.  The updater screen will appear, let go of "U" and answer yes to perform the update.  You must not interrupt the update process; interrupting the update could damage the contents of slot 1 so that the machine cannot boot up.  Then an anti-brick update would have to be performed to fix slot 1.  When the update is finished, completely power down the machine by disconnecting the power supply and disconnecting hdmi if you are using that.  Wait about 10 seconds, plug in the hdmi and then power up the machine.  If all goes well, the update will be completed.

## BUILDING AN MCS FILE

An mcs file can be used to program the flash chip directly using a jtag interface and cable.  This method does not require the zx next to be on or even functioning.

The mcs file built will hold the contents of slot 0 (the anti-brick core) and slot 1 (the zx next core).

After successfully building the zx next core (see the last section), a file **synth-zxnext-issue2/work/zxnext_top_issue2.bit** is generated.

1. Copy **synth-zxnext-issue2/work/zxnext_top_issue2.bit** to **mcsmaker/**.  There should now be two bit files **next_ab_issue2_top.bit** and **zxnext_top_issue2.bit**.
2. Open a command prompt in **mcsmaker/**
3. Run "mcs_generator_issue2".
4. The mcs file "zxnext.mcs" will be produced.
