<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="ram_D(7:0)" />
        <signal name="RESET_n" />
        <signal name="CLK50MHz" />
        <signal name="MISO" />
        <signal name="MOSI" />
        <signal name="SCLK" />
        <signal name="SS_n" />
        <signal name="BLUE3(2:0)" />
        <signal name="GREEN3(2:0)" />
        <signal name="RED3(2:0)" />
        <signal name="VSYNC" />
        <signal name="HSYNC" />
        <signal name="XLXN_717" />
        <signal name="ram_W_n" />
        <signal name="ram_A(20:0)" />
        <signal name="PS2_DATA" />
        <signal name="PS2_CLK" />
        <signal name="XLXN_731" />
        <signal name="XLXN_732(7:0)" />
        <signal name="crtc_A(14:0)" />
        <signal name="XLXN_736" />
        <signal name="XLXN_737(20:0)" />
        <signal name="CLK8(2)" />
        <signal name="CLK8(2:0)" />
        <signal name="crtc_A(15:0)" />
        <signal name="XLXN_744" />
        <signal name="XLXN_745(12:0)" />
        <signal name="XLXN_746(7:0)" />
        <signal name="JOYSTICK1(6:0)" />
        <signal name="AUDIO_L" />
        <signal name="AUDIO_R" />
        <signal name="XLXN_750" />
        <signal name="XLXN_751(4:0)" />
        <port polarity="BiDirectional" name="ram_D(7:0)" />
        <port polarity="Input" name="CLK50MHz" />
        <port polarity="Input" name="MISO" />
        <port polarity="Output" name="MOSI" />
        <port polarity="Output" name="SCLK" />
        <port polarity="Output" name="SS_n" />
        <port polarity="Output" name="BLUE3(2:0)" />
        <port polarity="Output" name="GREEN3(2:0)" />
        <port polarity="Output" name="RED3(2:0)" />
        <port polarity="Output" name="VSYNC" />
        <port polarity="Output" name="HSYNC" />
        <port polarity="Output" name="ram_W_n" />
        <port polarity="BiDirectional" name="ram_A(20:0)" />
        <port polarity="Input" name="PS2_DATA" />
        <port polarity="Input" name="PS2_CLK" />
        <port polarity="Input" name="JOYSTICK1(6:0)" />
        <port polarity="Output" name="AUDIO_L" />
        <port polarity="Output" name="AUDIO_R" />
        <blockdef name="bootloader_sd">
            <timestamp>2018-1-14T16:48:49</timestamp>
            <rect width="64" x="432" y="20" height="24" />
            <line x2="496" y1="32" y2="32" x1="432" />
            <line x2="0" y1="-464" y2="-464" x1="64" />
            <line x2="496" y1="-608" y2="-608" x1="432" />
            <rect width="64" x="432" y="-556" height="24" />
            <line x2="496" y1="-544" y2="-544" x1="432" />
            <rect width="64" x="432" y="-492" height="24" />
            <line x2="496" y1="-480" y2="-480" x1="432" />
            <line x2="496" y1="-288" y2="-288" x1="432" />
            <line x2="496" y1="-224" y2="-224" x1="432" />
            <line x2="496" y1="-160" y2="-160" x1="432" />
            <line x2="496" y1="-32" y2="-32" x1="432" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="368" x="64" y="-704" height="816" />
        </blockdef>
        <blockdef name="amstrad_video">
            <timestamp>2019-11-16T19:8:18</timestamp>
            <rect width="64" x="0" y="20" height="24" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <rect width="64" x="0" y="84" height="24" />
            <line x2="0" y1="96" y2="96" x1="64" />
            <line x2="0" y1="160" y2="160" x1="64" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <rect width="64" x="0" y="-428" height="24" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-364" height="24" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="464" y1="-608" y2="-608" x1="400" />
            <line x2="464" y1="-496" y2="-496" x1="400" />
            <rect width="64" x="400" y="-284" height="24" />
            <line x2="464" y1="-272" y2="-272" x1="400" />
            <rect width="64" x="400" y="-172" height="24" />
            <line x2="464" y1="-160" y2="-160" x1="400" />
            <rect width="64" x="400" y="-60" height="24" />
            <line x2="464" y1="-48" y2="-48" x1="400" />
            <rect width="336" x="64" y="-640" height="880" />
        </blockdef>
        <blockdef name="amstrad_motherboard">
            <timestamp>2019-11-17T16:3:44</timestamp>
            <line x2="448" y1="496" y2="496" x1="384" />
            <line x2="448" y1="272" y2="272" x1="384" />
            <rect width="64" x="384" y="324" height="24" />
            <line x2="448" y1="336" y2="336" x1="384" />
            <rect width="64" x="384" y="388" height="24" />
            <line x2="448" y1="400" y2="400" x1="384" />
            <rect width="64" x="0" y="-748" height="24" />
            <line x2="0" y1="-736" y2="-736" x1="64" />
            <line x2="0" y1="-640" y2="-640" x1="64" />
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-256" y2="-256" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="448" y1="-736" y2="-736" x1="384" />
            <rect width="64" x="384" y="-620" height="24" />
            <line x2="448" y1="-608" y2="-608" x1="384" />
            <line x2="448" y1="-544" y2="-544" x1="384" />
            <rect width="64" x="384" y="-492" height="24" />
            <line x2="448" y1="-480" y2="-480" x1="384" />
            <line x2="448" y1="-352" y2="-352" x1="384" />
            <rect width="64" x="384" y="-300" height="24" />
            <line x2="448" y1="-288" y2="-288" x1="384" />
            <rect width="64" x="384" y="-172" height="24" />
            <line x2="448" y1="-160" y2="-160" x1="384" />
            <rect width="64" x="384" y="-108" height="24" />
            <line x2="448" y1="-96" y2="-96" x1="384" />
            <line x2="448" y1="-432" y2="-432" x1="384" />
            <line x2="448" y1="-400" y2="-400" x1="384" />
            <line x2="0" y1="112" y2="112" x1="64" />
            <rect width="320" x="64" y="-768" height="1292" />
            <rect width="64" x="0" y="484" height="24" />
            <line x2="0" y1="496" y2="496" x1="64" />
        </blockdef>
        <blockdef name="divideby3">
            <timestamp>2019-11-16T15:35:8</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <block symbolname="bootloader_sd" name="XLXI_462">
            <blockpin signalname="MISO" name="MISO" />
            <blockpin signalname="CLK8(2)" name="CLK4MHz" />
            <blockpin signalname="XLXN_750" name="key_reset" />
            <blockpin signalname="ram_D(7:0)" name="ram_D(7:0)" />
            <blockpin signalname="MOSI" name="MOSI" />
            <blockpin signalname="XLXN_737(20:0)" name="ram_A(20:0)" />
            <blockpin signalname="SCLK" name="SCLK" />
            <blockpin signalname="XLXN_736" name="ram_W_n" />
            <blockpin signalname="SS_n" name="SS_n" />
            <blockpin signalname="RESET_n" name="FILE_LOADED" />
            <blockpin signalname="XLXN_751(4:0)" name="dsk_info(4:0)" />
        </block>
        <block symbolname="amstrad_video" name="XLXI_511">
            <blockpin signalname="XLXN_731" name="crtc_W" />
            <blockpin signalname="XLXN_732(7:0)" name="crtc_D(7:0)" />
            <blockpin signalname="crtc_A(14:0)" name="crtc_A(14:0)" />
            <blockpin signalname="CLK8(2)" name="CLK4MHz" />
            <blockpin signalname="CLK50MHz" name="CLK25MHz" />
            <blockpin signalname="XLXN_746(7:0)" name="palette_D(7:0)" />
            <blockpin signalname="XLXN_745(12:0)" name="palette_A(12:0)" />
            <blockpin signalname="XLXN_744" name="palette_W" />
            <blockpin signalname="HSYNC" name="HSYNC" />
            <blockpin signalname="VSYNC" name="VSYNC" />
            <blockpin signalname="RED3(2:0)" name="RED3(2:0)" />
            <blockpin signalname="GREEN3(2:0)" name="GREEN3(2:0)" />
            <blockpin signalname="BLUE3(2:0)" name="BLUE3(2:0)" />
        </block>
        <block symbolname="amstrad_motherboard" name="XLXI_512">
            <blockpin signalname="XLXN_737(20:0)" name="init_A(20:0)" />
            <blockpin signalname="XLXN_736" name="init_W_n" />
            <blockpin signalname="XLXN_717" name="CLK16MHz" />
            <blockpin signalname="PS2_CLK" name="PS2_CLK" />
            <blockpin signalname="PS2_DATA" name="PS2_DATA" />
            <blockpin signalname="RESET_n" name="RESET_n" />
            <blockpin signalname="JOYSTICK1(6:0)" name="JOYSTICK1(6:0)" />
            <blockpin signalname="XLXN_717" name="CLK_PWM" />
            <blockpin signalname="XLXN_751(4:0)" name="dsk_info(4:0)" />
            <blockpin signalname="ram_D(7:0)" name="ram_D(7:0)" />
            <blockpin signalname="CLK8(2:0)" name="CLK8(2:0)" />
            <blockpin signalname="ram_A(20:0)" name="ram_A(20:0)" />
            <blockpin signalname="crtc_A(15:0)" name="crtc_A(15:0)" />
            <blockpin signalname="XLXN_731" name="crtc_W" />
            <blockpin signalname="ram_W_n" name="ram_W_n" />
            <blockpin signalname="XLXN_732(7:0)" name="crtc_D(7:0)" />
            <blockpin signalname="XLXN_744" name="palette_W" />
            <blockpin signalname="XLXN_745(12:0)" name="palette_A(12:0)" />
            <blockpin signalname="XLXN_746(7:0)" name="palette_D(7:0)" />
            <blockpin signalname="XLXN_750" name="key_reset" />
            <blockpin signalname="AUDIO_L" name="audio_AB" />
            <blockpin signalname="AUDIO_R" name="audio_BC" />
        </block>
        <block symbolname="divideby3" name="XLXI_514">
            <blockpin signalname="CLK50MHz" name="CLK50MHz" />
            <blockpin signalname="XLXN_717" name="CLK16MHz" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="7040" height="5440">
        <instance x="6144" y="736" name="XLXI_462" orien="R0">
        </instance>
        <branch name="MISO">
            <wire x2="6144" y1="272" y2="272" x1="6064" />
        </branch>
        <branch name="MOSI">
            <wire x2="6688" y1="128" y2="128" x1="6640" />
        </branch>
        <branch name="SCLK">
            <wire x2="6672" y1="512" y2="512" x1="6640" />
        </branch>
        <branch name="SS_n">
            <wire x2="6688" y1="704" y2="704" x1="6640" />
        </branch>
        <iomarker fontsize="28" x="6064" y="272" name="MISO" orien="R180" />
        <iomarker fontsize="28" x="6688" y="704" name="SS_n" orien="R0" />
        <iomarker fontsize="28" x="6672" y="512" name="SCLK" orien="R0" />
        <iomarker fontsize="28" x="6688" y="128" name="MOSI" orien="R0" />
        <branch name="BLUE3(2:0)">
            <wire x2="4848" y1="1440" y2="1440" x1="4784" />
        </branch>
        <iomarker fontsize="28" x="4848" y="1440" name="BLUE3(2:0)" orien="R0" />
        <branch name="GREEN3(2:0)">
            <wire x2="4848" y1="1328" y2="1328" x1="4784" />
        </branch>
        <iomarker fontsize="28" x="4848" y="1328" name="GREEN3(2:0)" orien="R0" />
        <branch name="RED3(2:0)">
            <wire x2="4848" y1="1216" y2="1216" x1="4784" />
        </branch>
        <iomarker fontsize="28" x="4848" y="1216" name="RED3(2:0)" orien="R0" />
        <branch name="VSYNC">
            <wire x2="4848" y1="880" y2="880" x1="4784" />
        </branch>
        <branch name="HSYNC">
            <wire x2="4832" y1="992" y2="992" x1="4784" />
        </branch>
        <iomarker fontsize="28" x="4848" y="880" name="VSYNC" orien="R0" />
        <iomarker fontsize="28" x="4832" y="992" name="HSYNC" orien="R0" />
        <branch name="CLK50MHz">
            <wire x2="560" y1="1152" y2="1152" x1="384" />
            <wire x2="608" y1="1152" y2="1152" x1="560" />
            <wire x2="2032" y1="848" y2="848" x1="560" />
            <wire x2="3168" y1="848" y2="848" x1="2032" />
            <wire x2="3168" y1="848" y2="1456" x1="3168" />
            <wire x2="4320" y1="1456" y2="1456" x1="3168" />
            <wire x2="560" y1="848" y2="1152" x1="560" />
        </branch>
        <branch name="ram_W_n">
            <wire x2="1936" y1="1264" y2="1264" x1="1872" />
        </branch>
        <iomarker fontsize="28" x="1936" y="1264" name="ram_W_n" orien="R0" />
        <branch name="ram_A(20:0)">
            <wire x2="1904" y1="1392" y2="1392" x1="1872" />
        </branch>
        <iomarker fontsize="28" x="1904" y="1392" name="ram_A(20:0)" orien="R0" />
        <iomarker fontsize="28" x="2400" y="1760" name="ram_D(7:0)" orien="R270" />
        <branch name="PS2_DATA">
            <wire x2="1424" y1="1744" y2="1744" x1="1392" />
        </branch>
        <iomarker fontsize="28" x="1392" y="1744" name="PS2_DATA" orien="R180" />
        <iomarker fontsize="28" x="1392" y="1648" name="PS2_CLK" orien="R180" />
        <branch name="XLXN_732(7:0)">
            <wire x2="3072" y1="1520" y2="1520" x1="1872" />
            <wire x2="3072" y1="1072" y2="1520" x1="3072" />
            <wire x2="4320" y1="1072" y2="1072" x1="3072" />
        </branch>
        <bustap x2="2480" y1="1456" y2="1360" x1="2480" />
        <branch name="crtc_A(14:0)">
            <wire x2="2128" y1="1136" y2="1616" x1="2128" />
            <wire x2="4320" y1="1136" y2="1136" x1="2128" />
        </branch>
        <bustap x2="2128" y1="1712" y2="1616" x1="2128" />
        <branch name="XLXN_744">
            <wire x2="3360" y1="2272" y2="2272" x1="1872" />
            <wire x2="3360" y1="1648" y2="2272" x1="3360" />
            <wire x2="4320" y1="1648" y2="1648" x1="3360" />
        </branch>
        <branch name="XLXN_745(12:0)">
            <wire x2="3424" y1="2336" y2="2336" x1="1872" />
            <wire x2="3424" y1="1584" y2="2336" x1="3424" />
            <wire x2="4320" y1="1584" y2="1584" x1="3424" />
        </branch>
        <branch name="XLXN_746(7:0)">
            <wire x2="3504" y1="2400" y2="2400" x1="1872" />
            <wire x2="3504" y1="1520" y2="2400" x1="3504" />
            <wire x2="4320" y1="1520" y2="1520" x1="3504" />
        </branch>
        <branch name="CLK8(2)">
            <wire x2="2480" y1="1328" y2="1360" x1="2480" />
            <wire x2="2592" y1="1328" y2="1328" x1="2480" />
            <wire x2="2592" y1="1328" y2="1456" x1="2592" />
            <wire x2="3056" y1="1456" y2="1456" x1="2592" />
            <wire x2="2592" y1="704" y2="1328" x1="2592" />
            <wire x2="6144" y1="704" y2="704" x1="2592" />
            <wire x2="4320" y1="1392" y2="1392" x1="3056" />
            <wire x2="3056" y1="1392" y2="1456" x1="3056" />
        </branch>
        <iomarker fontsize="28" x="384" y="1152" name="CLK50MHz" orien="R180" />
        <branch name="ram_D(7:0)">
            <wire x2="2400" y1="1840" y2="1840" x1="1872" />
            <wire x2="6880" y1="1840" y2="1840" x1="2400" />
            <wire x2="2400" y1="1760" y2="1840" x1="2400" />
            <wire x2="6880" y1="192" y2="192" x1="6640" />
            <wire x2="6880" y1="192" y2="1840" x1="6880" />
        </branch>
        <branch name="crtc_A(15:0)">
            <wire x2="2128" y1="1712" y2="1712" x1="1872" />
        </branch>
        <branch name="XLXN_731">
            <wire x2="2160" y1="1648" y2="1648" x1="1872" />
            <wire x2="2160" y1="1008" y2="1648" x1="2160" />
            <wire x2="4320" y1="1008" y2="1008" x1="2160" />
        </branch>
        <branch name="CLK8(2:0)">
            <wire x2="2480" y1="1456" y2="1456" x1="1872" />
        </branch>
        <branch name="RESET_n">
            <wire x2="1168" y1="1840" y2="2800" x1="1168" />
            <wire x2="6928" y1="2800" y2="2800" x1="1168" />
            <wire x2="1424" y1="1840" y2="1840" x1="1168" />
            <wire x2="6928" y1="448" y2="448" x1="6640" />
            <wire x2="6928" y1="448" y2="2800" x1="6928" />
        </branch>
        <branch name="PS2_CLK">
            <wire x2="1424" y1="1648" y2="1648" x1="1392" />
        </branch>
        <branch name="XLXN_717">
            <wire x2="1056" y1="1216" y2="1216" x1="992" />
            <wire x2="1056" y1="1216" y2="1456" x1="1056" />
            <wire x2="1424" y1="1456" y2="1456" x1="1056" />
            <wire x2="1056" y1="1456" y2="2112" x1="1056" />
            <wire x2="1424" y1="2112" y2="2112" x1="1056" />
        </branch>
        <branch name="XLXN_736">
            <wire x2="1136" y1="1360" y2="2880" x1="1136" />
            <wire x2="6960" y1="2880" y2="2880" x1="1136" />
            <wire x2="1424" y1="1360" y2="1360" x1="1136" />
            <wire x2="6960" y1="576" y2="576" x1="6640" />
            <wire x2="6960" y1="576" y2="2880" x1="6960" />
        </branch>
        <branch name="XLXN_737(20:0)">
            <wire x2="6672" y1="16" y2="16" x1="1360" />
            <wire x2="6672" y1="16" y2="256" x1="6672" />
            <wire x2="1360" y1="16" y2="1264" x1="1360" />
            <wire x2="1424" y1="1264" y2="1264" x1="1360" />
            <wire x2="6672" y1="256" y2="256" x1="6640" />
        </branch>
        <instance x="4320" y="1488" name="XLXI_511" orien="R0">
        </instance>
        <branch name="JOYSTICK1(6:0)">
            <wire x2="1904" y1="1904" y2="1904" x1="1872" />
        </branch>
        <iomarker fontsize="28" x="1904" y="1904" name="JOYSTICK1(6:0)" orien="R0" />
        <branch name="AUDIO_L">
            <wire x2="1904" y1="1568" y2="1568" x1="1872" />
        </branch>
        <iomarker fontsize="28" x="1904" y="1568" name="AUDIO_L" orien="R0" />
        <branch name="AUDIO_R">
            <wire x2="1904" y1="1600" y2="1600" x1="1872" />
        </branch>
        <iomarker fontsize="28" x="1904" y="1600" name="AUDIO_R" orien="R0" />
        <instance x="1424" y="2000" name="XLXI_512" orien="R0">
        </instance>
        <branch name="XLXN_750">
            <wire x2="5280" y1="2496" y2="2496" x1="1872" />
            <wire x2="6144" y1="448" y2="448" x1="5280" />
            <wire x2="5280" y1="448" y2="2496" x1="5280" />
        </branch>
        <instance x="608" y="1248" name="XLXI_514" orien="R0">
        </instance>
        <branch name="XLXN_751(4:0)">
            <wire x2="1424" y1="2496" y2="2496" x1="1376" />
            <wire x2="1376" y1="2496" y2="2704" x1="1376" />
            <wire x2="3184" y1="2704" y2="2704" x1="1376" />
            <wire x2="6720" y1="2704" y2="2704" x1="3184" />
            <wire x2="6720" y1="768" y2="768" x1="6640" />
            <wire x2="6720" y1="768" y2="2704" x1="6720" />
        </branch>
    </sheet>
</drawing>