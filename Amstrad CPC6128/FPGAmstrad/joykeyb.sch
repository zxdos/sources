<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="PS2_CLK" />
        <signal name="PS2_DATA" />
        <signal name="CLK4MHz" />
        <signal name="PPI_portC(3:0)" />
        <signal name="XLXN_27(9:0)" />
        <signal name="XLXN_28" />
        <signal name="XLXN_29(7:0)" />
        <signal name="XLXN_30" />
        <signal name="XLXN_31" />
        <signal name="PPI_portA(7:0)" />
        <signal name="joystick1(6:0)" />
        <signal name="key_reset" />
        <port polarity="Input" name="PS2_CLK" />
        <port polarity="Input" name="PS2_DATA" />
        <port polarity="Input" name="CLK4MHz" />
        <port polarity="Input" name="PPI_portC(3:0)" />
        <port polarity="Output" name="PPI_portA(7:0)" />
        <port polarity="Input" name="joystick1(6:0)" />
        <port polarity="Output" name="key_reset" />
        <blockdef name="Keyboard">
            <timestamp>2017-12-30T4:33:44</timestamp>
            <line x2="384" y1="32" y2="32" x1="320" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="320" y="-236" height="24" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <rect width="256" x="64" y="-256" height="320" />
        </blockdef>
        <blockdef name="KEYBOARD_driver">
            <timestamp>2017-12-31T20:13:31</timestamp>
            <line x2="384" y1="160" y2="160" x1="320" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <rect width="64" x="0" y="20" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="0" y1="96" y2="96" x1="64" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <rect width="64" x="320" y="-236" height="24" />
            <line x2="384" y1="0" y2="0" x1="320" />
            <rect width="64" x="320" y="-12" height="24" />
            <rect width="256" x="64" y="-256" height="512" />
        </blockdef>
        <blockdef name="KEYBOARD_controller">
            <timestamp>2017-12-29T20:18:54</timestamp>
            <rect width="336" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="464" y1="-160" y2="-160" x1="400" />
            <line x2="464" y1="-96" y2="-96" x1="400" />
            <rect width="64" x="400" y="-44" height="24" />
            <line x2="464" y1="-32" y2="-32" x1="400" />
        </blockdef>
        <block symbolname="Keyboard" name="XLXI_1">
            <blockpin signalname="PS2_DATA" name="datain" />
            <blockpin signalname="PS2_CLK" name="clkin" />
            <blockpin signalname="CLK4MHz" name="fclk" />
            <blockpin signalname="XLXN_28" name="fok" />
            <blockpin signalname="XLXN_29(7:0)" name="scancode(7:0)" />
        </block>
        <block symbolname="KEYBOARD_controller" name="XLXI_3">
            <blockpin signalname="CLK4MHz" name="CLK" />
            <blockpin signalname="XLXN_28" name="fok" />
            <blockpin signalname="XLXN_29(7:0)" name="scancode_in(7:0)" />
            <blockpin signalname="XLXN_30" name="press" />
            <blockpin signalname="XLXN_31" name="unpress" />
            <blockpin signalname="XLXN_27(9:0)" name="keycode(9:0)" />
        </block>
        <block symbolname="KEYBOARD_driver" name="XLXI_2">
            <blockpin signalname="CLK4MHz" name="CLK" />
            <blockpin signalname="XLXN_30" name="press" />
            <blockpin signalname="XLXN_31" name="unpress" />
            <blockpin signalname="PPI_portC(3:0)" name="portC(3:0)" />
            <blockpin signalname="joystick1(6:0)" name="joystick1(6:0)" />
            <blockpin signalname="XLXN_27(9:0)" name="keycode(9:0)" />
            <blockpin signalname="key_reset" name="key_reset" />
            <blockpin signalname="PPI_portA(7:0)" name="portA(7:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="672" y="736" name="XLXI_1" orien="R0">
        </instance>
        <branch name="PS2_CLK">
            <wire x2="672" y1="576" y2="576" x1="608" />
        </branch>
        <branch name="PS2_DATA">
            <wire x2="672" y1="512" y2="512" x1="608" />
        </branch>
        <branch name="CLK4MHz">
            <wire x2="608" y1="640" y2="640" x1="496" />
            <wire x2="672" y1="640" y2="640" x1="608" />
            <wire x2="608" y1="640" y2="848" x1="608" />
            <wire x2="1104" y1="848" y2="848" x1="608" />
            <wire x2="1408" y1="848" y2="848" x1="1104" />
            <wire x2="1104" y1="528" y2="848" x1="1104" />
            <wire x2="2464" y1="528" y2="528" x1="1104" />
        </branch>
        <iomarker fontsize="28" x="496" y="640" name="CLK4MHz" orien="R180" />
        <iomarker fontsize="28" x="608" y="576" name="PS2_CLK" orien="R180" />
        <iomarker fontsize="28" x="608" y="512" name="PS2_DATA" orien="R180" />
        <branch name="PPI_portC(3:0)">
            <wire x2="2336" y1="656" y2="656" x1="2320" />
            <wire x2="2464" y1="656" y2="656" x1="2336" />
        </branch>
        <instance x="2464" y="752" name="XLXI_2" orien="R0">
        </instance>
        <iomarker fontsize="28" x="2320" y="656" name="PPI_portC(3:0)" orien="R180" />
        <instance x="1408" y="1008" name="XLXI_3" orien="R0">
        </instance>
        <branch name="XLXN_28">
            <wire x2="1232" y1="768" y2="768" x1="1056" />
            <wire x2="1232" y1="768" y2="912" x1="1232" />
            <wire x2="1408" y1="912" y2="912" x1="1232" />
        </branch>
        <branch name="XLXN_29(7:0)">
            <wire x2="1216" y1="512" y2="512" x1="1056" />
            <wire x2="1216" y1="512" y2="976" x1="1216" />
            <wire x2="1408" y1="976" y2="976" x1="1216" />
        </branch>
        <branch name="XLXN_27(9:0)">
            <wire x2="1888" y1="976" y2="976" x1="1872" />
            <wire x2="2096" y1="976" y2="976" x1="1888" />
            <wire x2="2096" y1="784" y2="976" x1="2096" />
            <wire x2="2464" y1="784" y2="784" x1="2096" />
        </branch>
        <branch name="XLXN_30">
            <wire x2="1888" y1="848" y2="848" x1="1872" />
            <wire x2="2080" y1="848" y2="848" x1="1888" />
            <wire x2="2080" y1="720" y2="848" x1="2080" />
            <wire x2="2464" y1="720" y2="720" x1="2080" />
        </branch>
        <branch name="XLXN_31">
            <wire x2="1888" y1="912" y2="912" x1="1872" />
            <wire x2="2160" y1="912" y2="912" x1="1888" />
            <wire x2="2464" y1="848" y2="848" x1="2160" />
            <wire x2="2160" y1="848" y2="912" x1="2160" />
        </branch>
        <branch name="PPI_portA(7:0)">
            <wire x2="2864" y1="528" y2="528" x1="2848" />
            <wire x2="2880" y1="528" y2="528" x1="2864" />
        </branch>
        <iomarker fontsize="28" x="2880" y="528" name="PPI_portA(7:0)" orien="R0" />
        <branch name="joystick1(6:0)">
            <wire x2="2864" y1="752" y2="752" x1="2848" />
            <wire x2="2880" y1="752" y2="752" x1="2864" />
        </branch>
        <iomarker fontsize="28" x="2880" y="752" name="joystick1(6:0)" orien="R0" />
        <branch name="key_reset">
            <wire x2="2880" y1="912" y2="912" x1="2848" />
        </branch>
        <iomarker fontsize="28" x="2880" y="912" name="key_reset" orien="R0" />
    </sheet>
</drawing>