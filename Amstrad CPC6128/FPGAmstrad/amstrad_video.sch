<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="crtc_W" />
        <signal name="crtc_D(7:0)" />
        <signal name="crtc_A(14:0)" />
        <signal name="CLK4MHz" />
        <signal name="CLK25MHz" />
        <signal name="palette_D(7:0)" />
        <signal name="palette_A(12:0)" />
        <signal name="palette_W" />
        <signal name="XLXN_684(7:0)" />
        <signal name="HSYNC" />
        <signal name="VSYNC" />
        <signal name="XLXN_693(14:0)" />
        <signal name="XLXN_694(12:0)" />
        <signal name="XLXN_705(7:0)" />
        <signal name="RED3(2:0)" />
        <signal name="GREEN3(2:0)" />
        <signal name="BLUE3(2:0)" />
        <port polarity="Input" name="crtc_W" />
        <port polarity="Input" name="crtc_D(7:0)" />
        <port polarity="Input" name="crtc_A(14:0)" />
        <port polarity="Input" name="CLK4MHz" />
        <port polarity="Input" name="CLK25MHz" />
        <port polarity="Input" name="palette_D(7:0)" />
        <port polarity="Input" name="palette_A(12:0)" />
        <port polarity="Input" name="palette_W" />
        <port polarity="Output" name="HSYNC" />
        <port polarity="Output" name="VSYNC" />
        <port polarity="Output" name="RED3(2:0)" />
        <port polarity="Output" name="GREEN3(2:0)" />
        <port polarity="Output" name="BLUE3(2:0)" />
        <blockdef name="VRAM32Ko_Amstrad">
            <timestamp>2011-11-26T15:19:44</timestamp>
            <rect width="256" x="64" y="-384" height="384" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-364" height="24" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
        </blockdef>
        <blockdef name="PALETTE_RAM">
            <timestamp>2017-12-27T20:33:46</timestamp>
            <rect width="256" x="64" y="-384" height="384" />
            <rect width="64" x="0" y="-364" height="24" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-364" height="24" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
        </blockdef>
        <blockdef name="aZRaEL_vram2vgaAmstradMiaow">
            <timestamp>2019-11-16T18:57:24</timestamp>
            <rect width="64" x="448" y="20" height="24" />
            <line x2="512" y1="32" y2="32" x1="448" />
            <rect width="64" x="448" y="84" height="24" />
            <line x2="512" y1="96" y2="96" x1="448" />
            <rect width="64" x="448" y="148" height="24" />
            <line x2="512" y1="160" y2="160" x1="448" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="512" y1="-416" y2="-416" x1="448" />
            <line x2="512" y1="-352" y2="-352" x1="448" />
            <rect width="64" x="448" y="-300" height="24" />
            <line x2="512" y1="-288" y2="-288" x1="448" />
            <rect width="64" x="448" y="-236" height="24" />
            <line x2="512" y1="-224" y2="-224" x1="448" />
            <rect width="384" x="64" y="-444" height="636" />
        </blockdef>
        <block symbolname="VRAM32Ko_Amstrad" name="XLXI_474">
            <blockpin signalname="CLK4MHz" name="vram_CLK" />
            <blockpin signalname="CLK25MHz" name="vga_CLK" />
            <blockpin signalname="crtc_A(14:0)" name="vram_A(14:0)" />
            <blockpin signalname="XLXN_693(14:0)" name="vga_A(14:0)" />
            <blockpin signalname="crtc_W" name="vram_W" />
            <blockpin signalname="crtc_D(7:0)" name="vram_D(7:0)" />
            <blockpin signalname="XLXN_705(7:0)" name="vga_D(7:0)" />
        </block>
        <block symbolname="PALETTE_RAM" name="XLXI_475">
            <blockpin signalname="CLK4MHz" name="CLKI" />
            <blockpin signalname="CLK25MHz" name="CLKO" />
            <blockpin signalname="palette_W" name="WR" />
            <blockpin signalname="palette_A(12:0)" name="AI(12:0)" />
            <blockpin signalname="XLXN_694(12:0)" name="AO(12:0)" />
            <blockpin signalname="palette_D(7:0)" name="DI(7:0)" />
            <blockpin signalname="XLXN_684(7:0)" name="DO(7:0)" />
        </block>
        <block symbolname="aZRaEL_vram2vgaAmstradMiaow" name="XLXI_476">
            <blockpin signalname="CLK25MHz" name="CLK_25MHz" />
            <blockpin signalname="XLXN_705(7:0)" name="DATA(7:0)" />
            <blockpin signalname="XLXN_684(7:0)" name="PALETTE_D(7:0)" />
            <blockpin signalname="VSYNC" name="VSYNC" />
            <blockpin signalname="HSYNC" name="HSYNC" />
            <blockpin signalname="XLXN_693(14:0)" name="ADDRESS(14:0)" />
            <blockpin signalname="XLXN_694(12:0)" name="PALETTE_A(12:0)" />
            <blockpin signalname="RED3(2:0)" name="RED(2:0)" />
            <blockpin signalname="GREEN3(2:0)" name="GREEN(2:0)" />
            <blockpin signalname="BLUE3(2:0)" name="BLUE(2:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <branch name="crtc_W">
            <wire x2="544" y1="1136" y2="1136" x1="336" />
        </branch>
        <branch name="crtc_A(14:0)">
            <wire x2="544" y1="1008" y2="1008" x1="368" />
        </branch>
        <branch name="crtc_D(7:0)">
            <wire x2="544" y1="1200" y2="1200" x1="352" />
        </branch>
        <iomarker fontsize="28" x="336" y="1136" name="crtc_W" orien="R180" />
        <iomarker fontsize="28" x="368" y="1008" name="crtc_A(14:0)" orien="R180" />
        <iomarker fontsize="28" x="352" y="1200" name="crtc_D(7:0)" orien="R180" />
        <iomarker fontsize="28" x="224" y="672" name="CLK4MHz" orien="R180" />
        <branch name="CLK25MHz">
            <wire x2="32" y1="224" y2="624" x1="32" />
            <wire x2="32" y1="624" y2="944" x1="32" />
            <wire x2="544" y1="944" y2="944" x1="32" />
            <wire x2="32" y1="944" y2="2544" x1="32" />
            <wire x2="608" y1="2544" y2="2544" x1="32" />
            <wire x2="1472" y1="624" y2="624" x1="32" />
        </branch>
        <iomarker fontsize="28" x="32" y="224" name="CLK25MHz" orien="R270" />
        <instance x="544" y="1232" name="XLXI_474" orien="R0">
        </instance>
        <instance x="608" y="2640" name="XLXI_475" orien="R0">
        </instance>
        <branch name="palette_D(7:0)">
            <wire x2="608" y1="2288" y2="2288" x1="576" />
        </branch>
        <iomarker fontsize="28" x="576" y="2288" name="palette_D(7:0)" orien="R180" />
        <branch name="palette_A(12:0)">
            <wire x2="608" y1="2352" y2="2352" x1="576" />
        </branch>
        <iomarker fontsize="28" x="576" y="2352" name="palette_A(12:0)" orien="R180" />
        <branch name="palette_W">
            <wire x2="608" y1="2480" y2="2480" x1="576" />
        </branch>
        <iomarker fontsize="28" x="576" y="2480" name="palette_W" orien="R180" />
        <branch name="XLXN_684(7:0)">
            <wire x2="1008" y1="2288" y2="2288" x1="992" />
            <wire x2="1248" y1="2192" y2="2192" x1="1008" />
            <wire x2="1008" y1="2192" y2="2288" x1="1008" />
            <wire x2="1248" y1="1008" y2="2192" x1="1248" />
            <wire x2="1472" y1="1008" y2="1008" x1="1248" />
        </branch>
        <branch name="HSYNC">
            <wire x2="2096" y1="688" y2="688" x1="1984" />
        </branch>
        <branch name="VSYNC">
            <wire x2="2096" y1="624" y2="624" x1="1984" />
        </branch>
        <instance x="1472" y="1040" name="XLXI_476" orien="R0">
        </instance>
        <iomarker fontsize="28" x="2096" y="624" name="VSYNC" orien="R0" />
        <iomarker fontsize="28" x="2096" y="688" name="HSYNC" orien="R0" />
        <branch name="XLXN_693(14:0)">
            <wire x2="544" y1="1072" y2="1072" x1="480" />
            <wire x2="480" y1="1072" y2="1296" x1="480" />
            <wire x2="2064" y1="1296" y2="1296" x1="480" />
            <wire x2="2064" y1="752" y2="752" x1="1984" />
            <wire x2="2064" y1="752" y2="1296" x1="2064" />
        </branch>
        <branch name="XLXN_694(12:0)">
            <wire x2="608" y1="2608" y2="2608" x1="592" />
            <wire x2="592" y1="2608" y2="2704" x1="592" />
            <wire x2="3120" y1="2704" y2="2704" x1="592" />
            <wire x2="3120" y1="816" y2="816" x1="1984" />
            <wire x2="3120" y1="816" y2="2704" x1="3120" />
        </branch>
        <branch name="CLK4MHz">
            <wire x2="320" y1="880" y2="880" x1="64" />
            <wire x2="544" y1="880" y2="880" x1="320" />
            <wire x2="64" y1="880" y2="2416" x1="64" />
            <wire x2="608" y1="2416" y2="2416" x1="64" />
            <wire x2="320" y1="672" y2="672" x1="224" />
            <wire x2="320" y1="672" y2="880" x1="320" />
        </branch>
        <branch name="XLXN_705(7:0)">
            <wire x2="1152" y1="880" y2="880" x1="928" />
            <wire x2="1152" y1="816" y2="880" x1="1152" />
            <wire x2="1472" y1="816" y2="816" x1="1152" />
        </branch>
        <branch name="RED3(2:0)">
            <wire x2="2240" y1="1072" y2="1072" x1="1984" />
        </branch>
        <branch name="GREEN3(2:0)">
            <wire x2="2240" y1="1136" y2="1136" x1="1984" />
        </branch>
        <branch name="BLUE3(2:0)">
            <wire x2="2240" y1="1200" y2="1200" x1="1984" />
        </branch>
        <iomarker fontsize="28" x="2240" y="1072" name="RED3(2:0)" orien="R0" />
        <iomarker fontsize="28" x="2240" y="1136" name="GREEN3(2:0)" orien="R0" />
        <iomarker fontsize="28" x="2240" y="1200" name="BLUE3(2:0)" orien="R0" />
    </sheet>
</drawing>