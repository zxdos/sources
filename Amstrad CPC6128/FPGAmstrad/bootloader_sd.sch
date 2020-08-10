<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="MISO" />
        <signal name="MOSI" />
        <signal name="XLXN_52(7:0)" />
        <signal name="XLXN_55(31:0)" />
        <signal name="ram_D(7:0)" />
        <signal name="ram_A(20:0)" />
        <signal name="ram_W" />
        <signal name="XLXN_57" />
        <signal name="INIT_DONE" />
        <signal name="XLXN_61" />
        <signal name="SCLK" />
        <signal name="ram_W_n" />
        <signal name="SS_n" />
        <signal name="XLXN_76" />
        <signal name="CLK4MHz" />
        <signal name="FILE_LOADED" />
        <signal name="key_reset" />
        <signal name="dsk_info(4:0)" />
        <port polarity="Input" name="MISO" />
        <port polarity="Output" name="MOSI" />
        <port polarity="BiDirectional" name="ram_D(7:0)" />
        <port polarity="Output" name="ram_A(20:0)" />
        <port polarity="Output" name="SCLK" />
        <port polarity="Output" name="ram_W_n" />
        <port polarity="Output" name="SS_n" />
        <port polarity="Input" name="CLK4MHz" />
        <port polarity="Output" name="FILE_LOADED" />
        <port polarity="Input" name="key_reset" />
        <port polarity="Output" name="dsk_info(4:0)" />
        <blockdef name="SDRAM_SPIMASTER">
            <timestamp>2017-12-30T16:55:6</timestamp>
            <line x2="384" y1="160" y2="160" x1="320" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <rect width="256" x="64" y="-256" height="496" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <blockdef name="SDRAM_FAT32_LOADER">
            <timestamp>2018-1-14T16:48:3</timestamp>
            <line x2="0" y1="224" y2="224" x1="64" />
            <line x2="432" y1="224" y2="224" x1="368" />
            <line x2="0" y1="96" y2="96" x1="64" />
            <line x2="432" y1="96" y2="96" x1="368" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <rect width="64" x="0" y="-76" height="24" />
            <line x2="0" y1="-64" y2="-64" x1="64" />
            <line x2="432" y1="-352" y2="-352" x1="368" />
            <rect width="64" x="368" y="-172" height="24" />
            <line x2="432" y1="-160" y2="-160" x1="368" />
            <rect width="64" x="368" y="-108" height="24" />
            <line x2="432" y1="-96" y2="-96" x1="368" />
            <rect width="64" x="368" y="-44" height="24" />
            <line x2="432" y1="-32" y2="-32" x1="368" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="304" x="64" y="-384" height="692" />
            <rect width="64" x="368" y="-268" height="24" />
            <line x2="432" y1="-256" y2="-256" x1="368" />
        </blockdef>
        <blockdef name="vcc">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-64" x1="64" />
            <line x2="64" y1="0" y2="-32" x1="64" />
            <line x2="32" y1="-64" y2="-64" x1="96" />
        </blockdef>
        <block symbolname="SDRAM_SPIMASTER" name="XLXI_1">
            <blockpin signalname="CLK4MHz" name="SCLK" />
            <blockpin signalname="MISO" name="MISO" />
            <blockpin signalname="XLXN_61" name="spi_R" />
            <blockpin signalname="XLXN_55(31:0)" name="address(31:0)" />
            <blockpin signalname="MOSI" name="MOSI" />
            <blockpin signalname="XLXN_57" name="spi_Rdone" />
            <blockpin signalname="INIT_DONE" name="spi_init_done" />
            <blockpin signalname="XLXN_52(7:0)" name="data_out(7:0)" />
        </block>
        <block symbolname="SDRAM_FAT32_LOADER" name="XLXI_7">
            <blockpin signalname="CLK4MHz" name="CLK" />
            <blockpin signalname="XLXN_57" name="spi_done" />
            <blockpin signalname="INIT_DONE" name="spi_init_done" />
            <blockpin signalname="key_reset" name="key_reset" />
            <blockpin signalname="XLXN_52(7:0)" name="spi_D(7:0)" />
            <blockpin signalname="ram_D(7:0)" name="ram_D(7:0)" />
            <blockpin signalname="ram_W" name="ram_W" />
            <blockpin signalname="XLXN_61" name="spi_do" />
            <blockpin signalname="FILE_LOADED" name="load_init_done" />
            <blockpin signalname="ram_A(20:0)" name="ram_A(20:0)" />
            <blockpin signalname="XLXN_55(31:0)" name="spi_A(31:0)" />
            <blockpin signalname="dsk_info(4:0)" name="dsk_info(4:0)" />
        </block>
        <block symbolname="inv" name="XLXI_26">
            <blockpin signalname="ram_W" name="I" />
            <blockpin signalname="ram_W_n" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_40">
            <blockpin signalname="XLXN_76" name="I" />
            <blockpin signalname="SS_n" name="O" />
        </block>
        <block symbolname="vcc" name="XLXI_41">
            <blockpin signalname="XLXN_76" name="P" />
        </block>
        <block symbolname="inv" name="XLXI_64">
            <blockpin signalname="CLK4MHz" name="I" />
            <blockpin signalname="SCLK" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <branch name="MISO">
            <wire x2="432" y1="752" y2="752" x1="320" />
            <wire x2="432" y1="752" y2="1024" x1="432" />
            <wire x2="672" y1="1024" y2="1024" x1="432" />
        </branch>
        <branch name="MOSI">
            <wire x2="1632" y1="960" y2="960" x1="1056" />
            <wire x2="1680" y1="784" y2="784" x1="1632" />
            <wire x2="1632" y1="784" y2="960" x1="1632" />
        </branch>
        <instance x="2160" y="768" name="XLXI_7" orien="R0">
        </instance>
        <branch name="ram_D(7:0)">
            <wire x2="2704" y1="672" y2="672" x1="2592" />
        </branch>
        <branch name="ram_A(20:0)">
            <wire x2="2704" y1="608" y2="608" x1="2592" />
        </branch>
        <branch name="ram_W">
            <attrtext style="alignment:SOFT-BCENTER" attrname="Name" x="2624" y="416" type="branch" />
            <wire x2="2624" y1="416" y2="416" x1="2592" />
            <wire x2="2640" y1="416" y2="416" x1="2624" />
        </branch>
        <branch name="INIT_DONE">
            <attrtext style="alignment:SOFT-LEFT" attrname="Name" x="1664" y="1344" type="branch" />
            <wire x2="1600" y1="1344" y2="1344" x1="1056" />
            <wire x2="1664" y1="1344" y2="1344" x1="1600" />
            <wire x2="1600" y1="992" y2="1344" x1="1600" />
            <wire x2="2160" y1="992" y2="992" x1="1600" />
        </branch>
        <branch name="SCLK">
            <wire x2="704" y1="320" y2="320" x1="656" />
            <wire x2="704" y1="320" y2="448" x1="704" />
            <wire x2="704" y1="448" y2="448" x1="688" />
        </branch>
        <branch name="ram_W_n">
            <wire x2="2880" y1="416" y2="416" x1="2864" />
            <wire x2="2880" y1="304" y2="416" x1="2880" />
        </branch>
        <instance x="1968" y="1280" name="XLXI_40" orien="R0" />
        <branch name="SS_n">
            <wire x2="2192" y1="1248" y2="1312" x1="2192" />
        </branch>
        <instance x="1840" y="1248" name="XLXI_41" orien="R0" />
        <branch name="XLXN_76">
            <wire x2="1904" y1="1248" y2="1312" x1="1904" />
            <wire x2="1952" y1="1312" y2="1312" x1="1904" />
            <wire x2="1952" y1="1248" y2="1312" x1="1952" />
            <wire x2="1968" y1="1248" y2="1248" x1="1952" />
        </branch>
        <iomarker fontsize="28" x="320" y="752" name="MISO" orien="R180" />
        <iomarker fontsize="28" x="1680" y="784" name="MOSI" orien="R0" />
        <iomarker fontsize="28" x="2704" y="672" name="ram_D(7:0)" orien="R0" />
        <iomarker fontsize="28" x="2704" y="608" name="ram_A(20:0)" orien="R0" />
        <iomarker fontsize="28" x="656" y="320" name="SCLK" orien="R180" />
        <iomarker fontsize="28" x="2192" y="1312" name="SS_n" orien="R90" />
        <branch name="CLK4MHz">
            <wire x2="400" y1="640" y2="640" x1="208" />
            <wire x2="544" y1="640" y2="640" x1="400" />
            <wire x2="544" y1="640" y2="960" x1="544" />
            <wire x2="672" y1="960" y2="960" x1="544" />
            <wire x2="1328" y1="640" y2="640" x1="544" />
            <wire x2="464" y1="448" y2="448" x1="400" />
            <wire x2="400" y1="448" y2="640" x1="400" />
            <wire x2="2160" y1="416" y2="416" x1="1328" />
            <wire x2="1328" y1="416" y2="640" x1="1328" />
        </branch>
        <branch name="FILE_LOADED">
            <wire x2="2608" y1="992" y2="992" x1="2592" />
            <wire x2="2752" y1="992" y2="992" x1="2608" />
        </branch>
        <branch name="XLXN_52(7:0)">
            <wire x2="1856" y1="1152" y2="1152" x1="1056" />
            <wire x2="1856" y1="704" y2="1152" x1="1856" />
            <wire x2="2160" y1="704" y2="704" x1="1856" />
        </branch>
        <branch name="XLXN_57">
            <wire x2="1648" y1="1088" y2="1088" x1="1056" />
            <wire x2="1648" y1="864" y2="1088" x1="1648" />
            <wire x2="2160" y1="864" y2="864" x1="1648" />
        </branch>
        <branch name="XLXN_55(31:0)">
            <wire x2="656" y1="1152" y2="1488" x1="656" />
            <wire x2="2656" y1="1488" y2="1488" x1="656" />
            <wire x2="672" y1="1152" y2="1152" x1="656" />
            <wire x2="2656" y1="736" y2="736" x1="2592" />
            <wire x2="2656" y1="736" y2="1488" x1="2656" />
        </branch>
        <branch name="XLXN_61">
            <wire x2="368" y1="1088" y2="1472" x1="368" />
            <wire x2="2640" y1="1472" y2="1472" x1="368" />
            <wire x2="672" y1="1088" y2="1088" x1="368" />
            <wire x2="2640" y1="864" y2="864" x1="2592" />
            <wire x2="2640" y1="864" y2="1472" x1="2640" />
        </branch>
        <instance x="672" y="1184" name="XLXI_1" orien="R0">
        </instance>
        <iomarker fontsize="28" x="208" y="640" name="CLK4MHz" orien="R180" />
        <iomarker fontsize="28" x="2752" y="992" name="FILE_LOADED" orien="R0" />
        <instance x="464" y="480" name="XLXI_64" orien="R0" />
        <branch name="key_reset">
            <wire x2="2160" y1="480" y2="480" x1="2128" />
        </branch>
        <iomarker fontsize="28" x="2128" y="480" name="key_reset" orien="R180" />
        <iomarker fontsize="28" x="2880" y="304" name="ram_W_n" orien="R270" />
        <instance x="2640" y="448" name="XLXI_26" orien="R0" />
        <branch name="dsk_info(4:0)">
            <wire x2="2624" y1="512" y2="512" x1="2592" />
        </branch>
        <iomarker fontsize="28" x="2624" y="512" name="dsk_info(4:0)" orien="R0" />
    </sheet>
</drawing>