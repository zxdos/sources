<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan6" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="IO_WR" />
        <signal name="A(15:0)" />
        <signal name="XLXN_118" />
        <signal name="MEM_RD" />
        <signal name="LED1" />
        <signal name="LED2" />
        <signal name="CLK8(2:0)" />
        <signal name="A(13)" />
        <signal name="RAMBank(2:0)" />
        <signal name="ROMbank(3:0)" />
        <signal name="XLXN_283(7:0)" />
        <signal name="vram_A(17:0)" />
        <signal name="XLXN_427(20:0)" />
        <signal name="ram_D(7:0)" />
        <signal name="XLXN_542" />
        <signal name="ram_A(20:0)" />
        <signal name="init_A(20:0)" />
        <signal name="XLXN_555" />
        <signal name="XLXN_556" />
        <signal name="init_W_n" />
        <signal name="A(15:14)" />
        <signal name="CLK8(0)" />
        <signal name="CLK8(2)" />
        <signal name="MEM_WR" />
        <signal name="XLXN_621" />
        <signal name="XLXN_435" />
        <signal name="CLK16MHz" />
        <signal name="D(7:0)" />
        <signal name="XLXN_58" />
        <signal name="XLXN_75" />
        <signal name="XLXN_180" />
        <signal name="A(9:8)" />
        <signal name="zero,zero,zero,un,un,un,zero,n_crtc_vsync" />
        <signal name="IO_RD" />
        <signal name="A(10),A(8),A(7)" />
        <signal name="A(0)" />
        <signal name="XLXN_462(7:0)" />
        <signal name="XLXN_464" />
        <signal name="XLXN_470" />
        <signal name="XLXN_473" />
        <signal name="XLXN_474" />
        <signal name="XLXN_475" />
        <signal name="XLXN_518(7:0)" />
        <signal name="XLXN_519(7:0)" />
        <signal name="XLXN_498" />
        <signal name="XLXN_499" />
        <signal name="XLXN_86" />
        <signal name="XLXN_38" />
        <signal name="PS2_CLK" />
        <signal name="PS2_DATA" />
        <signal name="IO_REQ" />
        <signal name="crtc_A(15:0)" />
        <signal name="portC(3:0)" />
        <signal name="RESET_n" />
        <signal name="XLXN_633" />
        <signal name="XLXN_16" />
        <signal name="portC(7)" />
        <signal name="portC(6)" />
        <signal name="zero" />
        <signal name="un" />
        <signal name="XLXN_785" />
        <signal name="XLXN_786" />
        <signal name="XLXN_787" />
        <signal name="JOYSTICK1(6:0)" />
        <signal name="XLXN_814" />
        <signal name="XLXN_824" />
        <signal name="XLXN_826" />
        <signal name="n_crtc_vsync" />
        <signal name="XLXN_806" />
        <signal name="XLXN_835" />
        <signal name="crtc_W" />
        <signal name="A(15),A(14),A(9),A(8)" />
        <signal name="XLXN_845" />
        <signal name="ram_W_n" />
        <signal name="XLXN_848" />
        <signal name="XLXN_849" />
        <signal name="crtc_D(7:0)" />
        <signal name="XLXN_852" />
        <signal name="palette_W" />
        <signal name="palette_A(12:0)" />
        <signal name="palette_D(7:0)" />
        <signal name="XLXN_857(1:0)" />
        <signal name="XLXN_858" />
        <signal name="CLK8(1)" />
        <signal name="CLK_PWM" />
        <signal name="key_reset" />
        <signal name="audio_AB" />
        <signal name="XLXN_861(7:0)" />
        <signal name="XLXN_862" />
        <signal name="dsk_info(4:0)" />
        <signal name="XLXN_864" />
        <signal name="A(11)" />
        <signal name="portC(7:0)" />
        <signal name="audio_BC" />
        <port polarity="Output" name="CLK8(2:0)" />
        <port polarity="BiDirectional" name="ram_D(7:0)" />
        <port polarity="Output" name="ram_A(20:0)" />
        <port polarity="Input" name="init_A(20:0)" />
        <port polarity="Input" name="init_W_n" />
        <port polarity="Input" name="CLK16MHz" />
        <port polarity="Input" name="PS2_CLK" />
        <port polarity="Input" name="PS2_DATA" />
        <port polarity="Output" name="crtc_A(15:0)" />
        <port polarity="Input" name="RESET_n" />
        <port polarity="Input" name="JOYSTICK1(6:0)" />
        <port polarity="Output" name="crtc_W" />
        <port polarity="Output" name="ram_W_n" />
        <port polarity="Output" name="crtc_D(7:0)" />
        <port polarity="Output" name="palette_W" />
        <port polarity="Output" name="palette_A(12:0)" />
        <port polarity="Output" name="palette_D(7:0)" />
        <port polarity="Input" name="CLK_PWM" />
        <port polarity="Output" name="key_reset" />
        <port polarity="Output" name="audio_AB" />
        <port polarity="Input" name="dsk_info(4:0)" />
        <port polarity="Output" name="audio_BC" />
        <blockdef name="vcc">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-64" x1="64" />
            <line x2="64" y1="0" y2="-32" x1="64" />
            <line x2="32" y1="-64" y2="-64" x1="96" />
        </blockdef>
        <blockdef name="simple_GateArray">
            <timestamp>2011-12-8T20:15:47</timestamp>
            <line x2="0" y1="160" y2="160" x1="64" />
            <rect width="64" x="368" y="84" height="24" />
            <line x2="432" y1="96" y2="96" x1="368" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="432" y1="-160" y2="-160" x1="368" />
            <line x2="432" y1="-96" y2="-96" x1="368" />
            <line x2="432" y1="32" y2="32" x1="368" />
            <rect width="64" x="368" y="20" height="24" />
            <rect width="304" x="64" y="-192" height="372" />
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
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="AmstradRAMROM">
            <timestamp>2018-1-4T19:40:4</timestamp>
            <rect width="64" x="0" y="116" height="24" />
            <line x2="0" y1="128" y2="128" x1="64" />
            <rect width="64" x="0" y="180" height="24" />
            <line x2="0" y1="192" y2="192" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <line x2="0" y1="0" y2="0" x1="64" />
            <rect width="256" x="64" y="-320" height="568" />
        </blockdef>
        <blockdef name="gnd">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-96" x1="64" />
            <line x2="52" y1="-48" y2="-48" x1="76" />
            <line x2="60" y1="-32" y2="-32" x1="68" />
            <line x2="40" y1="-64" y2="-64" x1="88" />
            <line x2="64" y1="-64" y2="-80" x1="64" />
            <line x2="64" y1="-128" y2="-96" x1="64" />
        </blockdef>
        <blockdef name="ROMselect">
            <timestamp>2011-4-18T15:7:58</timestamp>
            <line x2="0" y1="32" y2="32" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-172" height="24" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="256" x="64" y="-192" height="256" />
        </blockdef>
        <blockdef name="AmstradRAMDSK">
            <timestamp>2018-1-11T18:32:30</timestamp>
            <line x2="0" y1="32" y2="32" x1="64" />
            <rect width="64" x="0" y="84" height="24" />
            <line x2="0" y1="96" y2="96" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <line x2="0" y1="160" y2="160" x1="64" />
            <rect width="64" x="0" y="148" height="24" />
            <line x2="0" y1="128" y2="128" x1="64" />
            <rect width="256" x="64" y="-192" height="376" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
        </blockdef>
        <blockdef name="RAM_driver">
            <timestamp>2017-12-27T17:27:43</timestamp>
            <line x2="0" y1="32" y2="32" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <rect width="64" x="320" y="-172" height="24" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <rect width="256" x="64" y="-320" height="364" />
        </blockdef>
        <blockdef name="T80se">
            <timestamp>2019-11-17T16:3:26</timestamp>
            <line x2="0" y1="-608" y2="-608" x1="64" />
            <line x2="0" y1="-528" y2="-528" x1="64" />
            <line x2="0" y1="-448" y2="-448" x1="64" />
            <line x2="0" y1="-368" y2="-368" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-208" y2="-208" x1="64" />
            <line x2="0" y1="-128" y2="-128" x1="64" />
            <rect width="64" x="0" y="-60" height="24" />
            <line x2="0" y1="-48" y2="-48" x1="64" />
            <line x2="384" y1="-608" y2="-608" x1="320" />
            <line x2="384" y1="-544" y2="-544" x1="320" />
            <line x2="384" y1="-480" y2="-480" x1="320" />
            <line x2="384" y1="-416" y2="-416" x1="320" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <rect width="256" x="64" y="-640" height="640" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
        </blockdef>
        <blockdef name="simple_GateArrayInterrupt">
            <timestamp>2018-1-8T18:57:12</timestamp>
            <rect width="64" x="0" y="660" height="24" />
            <line x2="0" y1="672" y2="672" x1="64" />
            <line x2="416" y1="528" y2="528" x1="352" />
            <rect width="64" x="352" y="564" height="24" />
            <line x2="416" y1="576" y2="576" x1="352" />
            <rect width="64" x="352" y="612" height="24" />
            <line x2="416" y1="624" y2="624" x1="352" />
            <line x2="0" y1="416" y2="416" x1="64" />
            <line x2="0" y1="480" y2="480" x1="64" />
            <rect width="64" x="352" y="404" height="24" />
            <line x2="416" y1="416" y2="416" x1="352" />
            <rect width="64" x="0" y="276" height="24" />
            <line x2="0" y1="288" y2="288" x1="64" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="416" y1="-224" y2="-224" x1="352" />
            <line x2="416" y1="-32" y2="-32" x1="352" />
            <line x2="416" y1="96" y2="96" x1="352" />
            <line x2="416" y1="160" y2="160" x1="352" />
            <rect width="64" x="352" y="148" height="24" />
            <line x2="416" y1="-160" y2="-160" x1="352" />
            <line x2="0" y1="128" y2="128" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="416" y1="208" y2="208" x1="352" />
            <rect width="64" x="352" y="244" height="24" />
            <line x2="416" y1="256" y2="256" x1="352" />
            <rect width="64" x="352" y="356" height="24" />
            <line x2="416" y1="368" y2="368" x1="352" />
            <rect width="288" x="64" y="-256" height="944" />
        </blockdef>
        <blockdef name="simple_DSK">
            <timestamp>2018-1-14T16:47:55</timestamp>
            <rect width="64" x="0" y="20" height="24" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="480" y1="-480" y2="-480" x1="416" />
            <rect width="64" x="416" y="-236" height="24" />
            <line x2="480" y1="-224" y2="-224" x1="416" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <rect width="64" x="416" y="-172" height="24" />
            <line x2="480" y1="-160" y2="-160" x1="416" />
            <rect width="64" x="416" y="-108" height="24" />
            <line x2="480" y1="-96" y2="-96" x1="416" />
            <line x2="480" y1="-352" y2="-352" x1="416" />
            <rect width="352" x="64" y="-512" height="572" />
        </blockdef>
        <blockdef name="YM2149">
            <timestamp>2019-11-17T15:24:14</timestamp>
            <line x2="0" y1="-736" y2="-736" x1="64" />
            <line x2="0" y1="-672" y2="-672" x1="64" />
            <line x2="0" y1="-608" y2="-608" x1="64" />
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="320" y="-412" height="24" />
            <line x2="384" y1="-400" y2="-400" x1="320" />
            <rect width="64" x="320" y="-236" height="24" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <rect width="256" x="64" y="-768" height="700" />
        </blockdef>
        <blockdef name="PWM">
            <timestamp>2019-11-17T14:53:23</timestamp>
            <line x2="0" y1="32" y2="32" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="256" x="64" y="-128" height="184" />
            <line x2="384" y1="32" y2="32" x1="320" />
        </blockdef>
        <blockdef name="cb4ce">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <rect width="256" x="64" y="-512" height="448" />
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="320" y1="-256" y2="-256" x1="384" />
            <line x2="320" y1="-320" y2="-320" x1="384" />
            <line x2="320" y1="-384" y2="-384" x1="384" />
            <line x2="320" y1="-448" y2="-448" x1="384" />
            <line x2="64" y1="-128" y2="-144" x1="80" />
            <line x2="80" y1="-112" y2="-128" x1="64" />
            <line x2="320" y1="-128" y2="-128" x1="384" />
            <line x2="64" y1="-32" y2="-32" x1="192" />
            <line x2="192" y1="-64" y2="-32" x1="192" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="320" y1="-192" y2="-192" x1="384" />
        </blockdef>
        <blockdef name="joykeyb">
            <timestamp>2017-12-31T20:14:3</timestamp>
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="432" y="-364" height="24" />
            <line x2="496" y1="-352" y2="-352" x1="432" />
            <rect width="64" x="432" y="-124" height="24" />
            <line x2="496" y1="-112" y2="-112" x1="432" />
            <rect width="368" x="64" y="-384" height="312" />
            <line x2="496" y1="-240" y2="-240" x1="432" />
        </blockdef>
        <blockdef name="and3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
        </blockdef>
        <blockdef name="pio">
            <timestamp>2018-1-13T22:56:45</timestamp>
            <rect width="256" x="64" y="-576" height="576" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="320" y="-556" height="24" />
            <line x2="384" y1="-544" y2="-544" x1="320" />
            <rect width="64" x="320" y="-300" height="24" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
        </blockdef>
        <block symbolname="simple_GateArray" name="GA">
            <blockpin signalname="XLXN_435" name="CLK" />
            <blockpin signalname="IO_WR" name="IO_REQ_W" />
            <blockpin signalname="A(15:14)" name="A15_A14(1:0)" />
            <blockpin signalname="D(7:0)" name="D(7:0)" />
            <blockpin signalname="LED1" name="lowerROMen" />
            <blockpin signalname="LED2" name="upperROMen" />
            <blockpin signalname="XLXN_857(1:0)" name="MODE(1:0)" />
            <blockpin signalname="RAMBank(2:0)" name="RAMbank(2:0)" />
        </block>
        <block symbolname="AmstradRAMROM" name="XLXI_173">
            <blockpin signalname="MEM_WR" name="wr_z80" />
            <blockpin signalname="LED1" name="lowerROMen" />
            <blockpin signalname="LED2" name="upperROMen" />
            <blockpin signalname="A(15:0)" name="A(15:0)" />
            <blockpin signalname="RAMBank(2:0)" name="RAMbank(2:0)" />
            <blockpin signalname="ROMbank(3:0)" name="ROMbank(3:0)" />
            <blockpin signalname="vram_A(17:0)" name="ram_A(17:0)" />
        </block>
        <block symbolname="inv" name="XLXI_243">
            <blockpin signalname="CLK8(2)" name="I" />
            <blockpin signalname="XLXN_435" name="O" />
        </block>
        <block symbolname="vcc" name="XLXI_414">
            <blockpin signalname="XLXN_542" name="P" />
        </block>
        <block symbolname="gnd" name="XLXI_223">
            <blockpin signalname="XLXN_118" name="G" />
        </block>
        <block symbolname="inv" name="XLXI_226">
            <blockpin signalname="XLXN_555" name="I" />
            <blockpin signalname="XLXN_556" name="O" />
        </block>
        <block symbolname="AmstradRAMDSK" name="XLXI_348">
            <blockpin signalname="XLXN_621" name="dsk_transmit" />
            <blockpin signalname="XLXN_852" name="crtc_transmit" />
            <blockpin signalname="RESET_n" name="init_done" />
            <blockpin signalname="vram_A(17:0)" name="A(17:0)" />
            <blockpin signalname="XLXN_427(20:0)" name="dsk_A(20:0)" />
            <blockpin signalname="init_A(20:0)" name="init_A(20:0)" />
            <blockpin signalname="crtc_A(15:0)" name="crtc_A(15:0)" />
            <blockpin signalname="ram_A(20:0)" name="ram_A(20:0)" />
        </block>
        <block symbolname="ROMselect" name="XLXI_345">
            <blockpin signalname="XLXN_435" name="CLK" />
            <blockpin signalname="A(13)" name="A13" />
            <blockpin signalname="IO_WR" name="IO_WR" />
            <blockpin signalname="D(7:0)" name="D(7:0)" />
            <blockpin signalname="ROMbank(3:0)" name="ROMbank(3:0)" />
        </block>
        <block symbolname="RAM_driver" name="XLXI_224">
            <blockpin signalname="MEM_RD" name="rd" />
            <blockpin signalname="MEM_WR" name="wr" />
            <blockpin signalname="XLXN_858" name="reset" />
            <blockpin signalname="CLK8(2:0)" name="CLK8(2:0)" />
            <blockpin signalname="D(7:0)" name="Din(7:0)" />
            <blockpin signalname="XLXN_283(7:0)" name="Dout(7:0)" />
            <blockpin signalname="ram_D(7:0)" name="ram_D(7:0)" />
            <blockpin signalname="XLXN_555" name="ram_W" />
        </block>
        <block symbolname="vcc" name="XLXI_168">
            <blockpin signalname="XLXN_16" name="P" />
        </block>
        <block symbolname="inv" name="XLXI_183">
            <blockpin signalname="XLXN_75" name="I" />
            <blockpin signalname="IO_REQ" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_184">
            <blockpin signalname="IO_REQ" name="I0" />
            <blockpin signalname="XLXN_785" name="I1" />
            <blockpin signalname="IO_WR" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_170">
            <blockpin signalname="XLXN_785" name="I0" />
            <blockpin signalname="XLXN_786" name="I1" />
            <blockpin signalname="MEM_WR" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_186">
            <blockpin signalname="XLXN_86" name="I" />
            <blockpin signalname="XLXN_787" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_187">
            <blockpin signalname="XLXN_787" name="I0" />
            <blockpin signalname="XLXN_786" name="I1" />
            <blockpin signalname="MEM_RD" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_219">
            <blockpin signalname="XLXN_787" name="I0" />
            <blockpin signalname="IO_REQ" name="I1" />
            <blockpin signalname="IO_RD" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_257">
            <blockpin signalname="IO_RD" name="I" />
            <blockpin signalname="XLXN_864" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_258">
            <blockpin signalname="IO_WR" name="I" />
            <blockpin signalname="XLXN_180" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_297">
            <blockpin signalname="CLK8(2)" name="I" />
            <blockpin signalname="XLXN_633" name="O" />
        </block>
        <block symbolname="simple_DSK" name="XLXI_344">
            <blockpin signalname="XLXN_858" name="reset" />
            <blockpin signalname="A(0)" name="A0" />
            <blockpin signalname="IO_RD" name="IO_RD" />
            <blockpin signalname="IO_WR" name="IO_WR" />
            <blockpin signalname="CLK8(2:0)" name="CLK8(2:0)" />
            <blockpin signalname="A(10),A(8),A(7)" name="A10_A8_A7(2:0)" />
            <blockpin signalname="D(7:0)" name="D_command(7:0)" />
            <blockpin signalname="dsk_info(4:0)" name="dsk_info(4:0)" />
            <blockpin signalname="XLXN_283(7:0)" name="Dout(7:0)" />
            <blockpin signalname="ram_D(7:0)" name="dsk_D(7:0)" />
            <blockpin signalname="XLXN_849" name="dsk_W" />
            <blockpin signalname="XLXN_621" name="dsk_transmit" />
            <blockpin signalname="XLXN_427(20:0)" name="dsk_A(20:0)" />
        </block>
        <block symbolname="inv" name="XLXI_332">
            <blockpin signalname="XLXN_835" name="I" />
            <blockpin signalname="XLXN_814" name="O" />
        </block>
        <block symbolname="YM2149" name="XLXI_349">
            <blockpin signalname="XLXN_475" name="I_A9_L" />
            <blockpin signalname="XLXN_464" name="I_A8" />
            <blockpin signalname="portC(7)" name="I_BDIR" />
            <blockpin signalname="XLXN_470" name="I_BC2" />
            <blockpin signalname="portC(6)" name="I_BC1" />
            <blockpin signalname="XLXN_474" name="I_SEL_L" />
            <blockpin signalname="XLXN_473" name="ENA" />
            <blockpin signalname="RESET_n" name="RESET_L" />
            <blockpin signalname="XLXN_862" name="CLK" />
            <blockpin signalname="XLXN_462(7:0)" name="I_DA(7:0)" />
            <blockpin signalname="XLXN_518(7:0)" name="I_IOA(7:0)" />
            <blockpin signalname="XLXN_519(7:0)" name="O_DA(7:0)" />
            <blockpin signalname="XLXN_861(7:0)" name="O_AUDIO(7:0)" />
        </block>
        <block symbolname="vcc" name="XLXI_350">
            <blockpin signalname="XLXN_464" name="P" />
        </block>
        <block symbolname="vcc" name="XLXI_351">
            <blockpin signalname="XLXN_470" name="P" />
        </block>
        <block symbolname="gnd" name="XLXI_355">
            <blockpin signalname="XLXN_475" name="G" />
        </block>
        <block symbolname="vcc" name="XLXI_377">
            <blockpin signalname="XLXN_473" name="P" />
        </block>
        <block symbolname="vcc" name="XLXI_385">
            <blockpin signalname="XLXN_474" name="P" />
        </block>
        <block symbolname="cb4ce" name="XLXI_399">
            <blockpin signalname="XLXN_633" name="C" />
            <blockpin signalname="XLXN_498" name="CE" />
            <blockpin signalname="XLXN_499" name="CLR" />
            <blockpin name="CEO" />
            <blockpin name="Q0" />
            <blockpin signalname="XLXN_862" name="Q1" />
            <blockpin name="Q2" />
            <blockpin name="Q3" />
            <blockpin name="TC" />
        </block>
        <block symbolname="vcc" name="XLXI_383">
            <blockpin signalname="XLXN_498" name="P" />
        </block>
        <block symbolname="gnd" name="XLXI_384">
            <blockpin signalname="XLXN_499" name="G" />
        </block>
        <block symbolname="inv" name="XLXI_181">
            <blockpin signalname="XLXN_58" name="I" />
            <blockpin signalname="XLXN_786" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_549">
            <blockpin signalname="XLXN_38" name="I" />
            <blockpin signalname="XLXN_785" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_476">
            <blockpin signalname="XLXN_845" name="I" />
            <blockpin signalname="XLXN_824" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_307">
            <blockpin signalname="RESET_n" name="I" />
            <blockpin signalname="XLXN_858" name="O" />
        </block>
        <block symbolname="joykeyb" name="XLXI_494">
            <blockpin signalname="PS2_CLK" name="PS2_CLK" />
            <blockpin signalname="PS2_DATA" name="PS2_DATA" />
            <blockpin signalname="XLXN_633" name="CLK4MHz" />
            <blockpin signalname="portC(3:0)" name="PPI_portC(3:0)" />
            <blockpin signalname="JOYSTICK1(6:0)" name="joystick1(6:0)" />
            <blockpin signalname="XLXN_518(7:0)" name="PPI_portA(7:0)" />
            <blockpin signalname="key_reset" name="key_reset" />
        </block>
        <block symbolname="and2" name="XLXI_475">
            <blockpin signalname="XLXN_824" name="I0" />
            <blockpin signalname="IO_REQ" name="I1" />
            <blockpin signalname="XLXN_826" name="O" />
        </block>
        <block symbolname="vcc" name="XLXI_256">
            <blockpin signalname="un" name="P" />
        </block>
        <block symbolname="gnd" name="XLXI_253">
            <blockpin signalname="zero" name="G" />
        </block>
        <block symbolname="and3" name="XLXI_575">
            <blockpin signalname="XLXN_556" name="I0" />
            <blockpin signalname="init_W_n" name="I1" />
            <blockpin signalname="XLXN_848" name="I2" />
            <blockpin signalname="ram_W_n" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_576">
            <blockpin signalname="XLXN_849" name="I" />
            <blockpin signalname="XLXN_848" name="O" />
        </block>
        <block symbolname="simple_GateArrayInterrupt" name="GA_interrupt">
            <blockpin signalname="IO_WR" name="IO_REQ_W" />
            <blockpin signalname="IO_RD" name="IO_REQ_R" />
            <blockpin signalname="XLXN_826" name="IO_ACK" />
            <blockpin signalname="XLXN_845" name="M1_n" />
            <blockpin signalname="XLXN_858" name="reset" />
            <blockpin signalname="CLK8(2:0)" name="CLK8(2:0)" />
            <blockpin signalname="A(15),A(14),A(9),A(8)" name="A15_A14_A9_A8(3:0)" />
            <blockpin signalname="XLXN_857(1:0)" name="MODE_select(1:0)" />
            <blockpin signalname="D(7:0)" name="D(7:0)" />
            <blockpin signalname="XLXN_283(7:0)" name="Dout(7:0)" />
            <blockpin signalname="ram_D(7:0)" name="ram_D(7:0)" />
            <blockpin signalname="n_crtc_vsync" name="crtc_VSYNC" />
            <blockpin signalname="crtc_W" name="crtc_W" />
            <blockpin signalname="XLXN_852" name="crtc_transmit" />
            <blockpin signalname="XLXN_835" name="int" />
            <blockpin signalname="XLXN_806" name="WAIT_n" />
            <blockpin signalname="palette_W" name="palette_W" />
            <blockpin signalname="crtc_A(15:0)" name="crtc_A(15:0)" />
            <blockpin signalname="crtc_D(7:0)" name="crtc_D(7:0)" />
            <blockpin signalname="palette_A(12:0)" name="palette_A(12:0)" />
            <blockpin signalname="palette_D(7:0)" name="palette_D(7:0)" />
        </block>
        <block symbolname="inv" name="XLXI_417">
            <blockpin signalname="CLK16MHz" name="I" />
            <blockpin signalname="CLK8(0)" name="O" />
        </block>
        <block symbolname="cb4ce" name="XLXI_579">
            <blockpin signalname="CLK16MHz" name="C" />
            <blockpin signalname="XLXN_542" name="CE" />
            <blockpin signalname="XLXN_118" name="CLR" />
            <blockpin name="CEO" />
            <blockpin signalname="CLK8(1)" name="Q0" />
            <blockpin signalname="CLK8(2)" name="Q1" />
            <blockpin name="Q2" />
            <blockpin name="Q3" />
            <blockpin name="TC" />
        </block>
        <block symbolname="PWM" name="XLXI_580">
            <blockpin signalname="CLK_PWM" name="clk" />
            <blockpin signalname="XLXN_862" name="clk_ref" />
            <blockpin signalname="XLXN_861(7:0)" name="PWM_in(7:0)" />
            <blockpin signalname="audio_AB" name="PWM_out" />
            <blockpin signalname="audio_BC" name="PWM_out2" />
        </block>
        <block symbolname="T80se" name="AmstradT80">
            <blockpin signalname="RESET_n" name="RESET_n" />
            <blockpin signalname="CLK8(2)" name="CLK_n" />
            <blockpin signalname="XLXN_16" name="CLKEN" />
            <blockpin signalname="XLXN_806" name="WAIT_n" />
            <blockpin signalname="XLXN_814" name="INT_n" />
            <blockpin signalname="XLXN_16" name="NMI_n" />
            <blockpin signalname="XLXN_16" name="BUSRQ_n" />
            <blockpin signalname="XLXN_283(7:0)" name="DI(7:0)" />
            <blockpin signalname="XLXN_845" name="M1_n" />
            <blockpin signalname="XLXN_58" name="MREQ_n" />
            <blockpin signalname="XLXN_75" name="IORQ_n" />
            <blockpin signalname="XLXN_86" name="RD_n" />
            <blockpin signalname="XLXN_38" name="WR_n" />
            <blockpin signalname="A(15:0)" name="A(15:0)" />
            <blockpin signalname="D(7:0)" name="DO(7:0)" />
            <blockpin name="RFSH_n" />
            <blockpin name="HALT_n" />
            <blockpin name="BUSAK_n" />
        </block>
        <block symbolname="pio" name="XLXI_582">
            <blockpin signalname="XLXN_180" name="iowr" />
            <blockpin signalname="XLXN_633" name="cpuclk" />
            <blockpin signalname="A(9:8)" name="addr(1:0)" />
            <blockpin signalname="D(7:0)" name="datain(7:0)" />
            <blockpin signalname="XLXN_462(7:0)" name="PAO(7:0)" />
            <blockpin signalname="portC(7:0)" name="PCO(7:0)" />
            <blockpin signalname="XLXN_283(7:0)" name="DO(7:0)" />
            <blockpin signalname="A(11)" name="cs" />
            <blockpin signalname="XLXN_864" name="iord" />
            <blockpin signalname="XLXN_858" name="RESET" />
            <blockpin signalname="zero,zero,zero,un,un,un,zero,n_crtc_vsync" name="PBI(7:0)" />
            <blockpin signalname="XLXN_519(7:0)" name="PAI(7:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="7040" height="5440">
        <branch name="A(15:0)">
            <wire x2="1728" y1="3168" y2="3168" x1="1664" />
            <wire x2="2480" y1="480" y2="480" x1="1728" />
            <wire x2="1728" y1="480" y2="3168" x1="1728" />
            <wire x2="3264" y1="304" y2="304" x1="2480" />
            <wire x2="3264" y1="304" y2="544" x1="3264" />
            <wire x2="3472" y1="544" y2="544" x1="3264" />
            <wire x2="2480" y1="304" y2="480" x1="2480" />
            <wire x2="4464" y1="176" y2="176" x1="3264" />
            <wire x2="4464" y1="176" y2="1088" x1="4464" />
            <wire x2="3264" y1="176" y2="304" x1="3264" />
        </branch>
        <branch name="XLXN_118">
            <wire x2="2000" y1="1696" y2="1696" x1="1952" />
        </branch>
        <branch name="MEM_RD">
            <wire x2="2976" y1="2608" y2="2608" x1="2352" />
            <wire x2="3056" y1="1248" y2="1248" x1="2976" />
            <wire x2="2976" y1="1248" y2="2608" x1="2976" />
        </branch>
        <branch name="LED1">
            <wire x2="3472" y1="416" y2="416" x1="3200" />
        </branch>
        <branch name="LED2">
            <wire x2="3472" y1="480" y2="480" x1="3200" />
        </branch>
        <branch name="A(13)">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="1344" y="192" type="branch" />
            <wire x2="1536" y1="192" y2="192" x1="1344" />
        </branch>
        <branch name="RAMBank(2:0)">
            <wire x2="3328" y1="672" y2="672" x1="3200" />
            <wire x2="3328" y1="672" y2="768" x1="3328" />
            <wire x2="3472" y1="768" y2="768" x1="3328" />
        </branch>
        <branch name="ROMbank(3:0)">
            <wire x2="2384" y1="192" y2="192" x1="1920" />
            <wire x2="2384" y1="192" y2="832" x1="2384" />
            <wire x2="3472" y1="832" y2="832" x1="2384" />
        </branch>
        <branch name="XLXN_283(7:0)">
            <wire x2="1280" y1="3216" y2="3216" x1="1200" />
            <wire x2="1200" y1="3216" y2="3344" x1="1200" />
            <wire x2="2592" y1="3344" y2="3344" x1="1200" />
            <wire x2="6384" y1="3344" y2="3344" x1="2592" />
            <wire x2="2592" y1="3344" y2="4752" x1="2592" />
            <wire x2="2592" y1="4752" y2="4752" x1="2512" />
            <wire x2="2592" y1="2352" y2="3344" x1="2592" />
            <wire x2="4096" y1="2352" y2="2352" x1="2592" />
            <wire x2="4096" y1="1376" y2="1376" x1="3440" />
            <wire x2="4096" y1="1376" y2="1632" x1="4096" />
            <wire x2="4096" y1="1632" y2="2352" x1="4096" />
            <wire x2="5520" y1="1632" y2="1632" x1="4096" />
            <wire x2="5520" y1="1216" y2="1216" x1="5488" />
            <wire x2="5520" y1="1216" y2="1632" x1="5520" />
            <wire x2="6384" y1="2992" y2="2992" x1="6304" />
            <wire x2="6384" y1="2992" y2="3344" x1="6384" />
        </branch>
        <branch name="vram_A(17:0)">
            <wire x2="3536" y1="1600" y2="1600" x1="3440" />
            <wire x2="3440" y1="1600" y2="1936" x1="3440" />
            <wire x2="4368" y1="1936" y2="1936" x1="3440" />
            <wire x2="4368" y1="608" y2="608" x1="3856" />
            <wire x2="4368" y1="608" y2="1936" x1="4368" />
        </branch>
        <branch name="XLXN_427(20:0)">
            <wire x2="3024" y1="2288" y2="3296" x1="3024" />
            <wire x2="6320" y1="3296" y2="3296" x1="3024" />
            <wire x2="3456" y1="2288" y2="2288" x1="3024" />
            <wire x2="3536" y1="1664" y2="1664" x1="3456" />
            <wire x2="3456" y1="1664" y2="2288" x1="3456" />
            <wire x2="6320" y1="2928" y2="2928" x1="6304" />
            <wire x2="6320" y1="2928" y2="3296" x1="6320" />
        </branch>
        <branch name="ram_D(7:0)">
            <wire x2="3472" y1="1632" y2="1632" x1="3296" />
            <wire x2="3472" y1="1632" y2="1920" x1="3472" />
            <wire x2="6368" y1="1920" y2="1920" x1="3472" />
            <wire x2="6368" y1="1920" y2="3056" x1="6368" />
            <wire x2="3472" y1="1504" y2="1504" x1="3440" />
            <wire x2="3472" y1="1504" y2="1632" x1="3472" />
            <wire x2="6368" y1="1168" y2="1168" x1="5488" />
            <wire x2="6368" y1="1168" y2="1920" x1="6368" />
            <wire x2="6368" y1="3056" y2="3056" x1="6304" />
        </branch>
        <branch name="XLXN_542">
            <wire x2="2000" y1="1536" y2="1536" x1="1968" />
        </branch>
        <branch name="ram_A(20:0)">
            <wire x2="3936" y1="1664" y2="1664" x1="3920" />
            <wire x2="3936" y1="1664" y2="1680" x1="3936" />
            <wire x2="3984" y1="1680" y2="1680" x1="3936" />
            <wire x2="3984" y1="1664" y2="1680" x1="3984" />
        </branch>
        <branch name="init_A(20:0)">
            <wire x2="3536" y1="1792" y2="1792" x1="3280" />
        </branch>
        <branch name="XLXN_555">
            <wire x2="3552" y1="1248" y2="1248" x1="3440" />
        </branch>
        <branch name="XLXN_556">
            <wire x2="4080" y1="1248" y2="1248" x1="3776" />
            <wire x2="4080" y1="1248" y2="1264" x1="4080" />
            <wire x2="4096" y1="1264" y2="1264" x1="4080" />
        </branch>
        <branch name="init_W_n">
            <wire x2="4096" y1="1200" y2="1200" x1="3872" />
        </branch>
        <branch name="A(15:14)">
            <wire x2="2768" y1="480" y2="480" x1="2576" />
        </branch>
        <branch name="CLK8(0)">
            <wire x2="2480" y1="1152" y2="1152" x1="1808" />
            <wire x2="2480" y1="1152" y2="1344" x1="2480" />
            <wire x2="1808" y1="1152" y2="1184" x1="1808" />
        </branch>
        <branch name="XLXN_621">
            <wire x2="3488" y1="1648" y2="1648" x1="3392" />
            <wire x2="3392" y1="1648" y2="2000" x1="3392" />
            <wire x2="6400" y1="2000" y2="2000" x1="3392" />
            <wire x2="6400" y1="2000" y2="2800" x1="6400" />
            <wire x2="3536" y1="1536" y2="1536" x1="3488" />
            <wire x2="3488" y1="1536" y2="1648" x1="3488" />
            <wire x2="6400" y1="2800" y2="2800" x1="6304" />
        </branch>
        <branch name="XLXN_435">
            <wire x2="1536" y1="384" y2="384" x1="1472" />
            <wire x2="1472" y1="384" y2="736" x1="1472" />
            <wire x2="2720" y1="736" y2="736" x1="1472" />
            <wire x2="2768" y1="736" y2="736" x1="2720" />
            <wire x2="2720" y1="736" y2="816" x1="2720" />
            <wire x2="2800" y1="816" y2="816" x1="2720" />
            <wire x2="2800" y1="816" y2="1088" x1="2800" />
            <wire x2="2800" y1="1088" y2="1088" x1="2752" />
        </branch>
        <branch name="CLK16MHz">
            <wire x2="1808" y1="1600" y2="1600" x1="1536" />
            <wire x2="2000" y1="1600" y2="1600" x1="1808" />
            <wire x2="1808" y1="1408" y2="1600" x1="1808" />
        </branch>
        <instance x="2768" y="576" name="GA" orien="R0">
        </instance>
        <bustap x2="2576" y1="480" y2="480" x1="2480" />
        <instance x="3472" y="640" name="XLXI_173" orien="R0">
        </instance>
        <instance x="2528" y="1120" name="XLXI_243" orien="R0" />
        <text style="fontsize:40;fontname:Arial" x="2192" y="948">12.5MHz (presque 16MHz)</text>
        <instance x="1968" y="1600" name="XLXI_414" orien="R270" />
        <instance x="1824" y="1632" name="XLXI_223" orien="R90" />
        <instance x="3552" y="1280" name="XLXI_226" orien="R0" />
        <instance x="3536" y="1696" name="XLXI_348" orien="R0">
        </instance>
        <instance x="1536" y="352" name="XLXI_345" orien="R0">
        </instance>
        <instance x="3056" y="1536" name="XLXI_224" orien="R0">
        </instance>
        <bustap x2="2480" y1="1344" y2="1344" x1="2576" />
        <bustap x2="2480" y1="1408" y2="1408" x1="2576" />
        <bustap x2="2480" y1="1472" y2="1472" x1="2576" />
        <iomarker fontsize="28" x="3984" y="1664" name="ram_A(20:0)" orien="R270" />
        <iomarker fontsize="28" x="3296" y="1632" name="ram_D(7:0)" orien="R180" />
        <iomarker fontsize="28" x="1536" y="1600" name="CLK16MHz" orien="R180" />
        <branch name="XLXN_58">
            <wire x2="1744" y1="2720" y2="2720" x1="1664" />
        </branch>
        <branch name="XLXN_75">
            <wire x2="1744" y1="2784" y2="2784" x1="1664" />
        </branch>
        <branch name="XLXN_180">
            <wire x2="1664" y1="4192" y2="4192" x1="1072" />
            <wire x2="1664" y1="4192" y2="4368" x1="1664" />
            <wire x2="2128" y1="4368" y2="4368" x1="1664" />
        </branch>
        <branch name="A(9:8)">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="1936" y="4560" type="branch" />
            <wire x2="2128" y1="4560" y2="4560" x1="1936" />
        </branch>
        <branch name="zero,zero,zero,un,un,un,zero,n_crtc_vsync">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="2000" y="4752" type="branch" />
            <wire x2="2128" y1="4752" y2="4752" x1="2000" />
        </branch>
        <branch name="IO_RD">
            <wire x2="768" y1="3584" y2="4256" x1="768" />
            <wire x2="848" y1="4256" y2="4256" x1="768" />
            <wire x2="2416" y1="3584" y2="3584" x1="768" />
            <wire x2="2416" y1="3024" y2="3024" x1="2352" />
            <wire x2="2416" y1="3024" y2="3104" x1="2416" />
            <wire x2="2416" y1="3104" y2="3584" x1="2416" />
            <wire x2="2448" y1="3104" y2="3104" x1="2416" />
            <wire x2="2448" y1="3104" y2="3376" x1="2448" />
            <wire x2="4944" y1="3376" y2="3376" x1="2448" />
            <wire x2="5072" y1="1280" y2="1280" x1="4944" />
            <wire x2="4944" y1="1280" y2="2864" x1="4944" />
            <wire x2="4944" y1="2864" y2="3376" x1="4944" />
            <wire x2="5824" y1="2864" y2="2864" x1="4944" />
        </branch>
        <branch name="A(10),A(8),A(7)">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="5664" y="3056" type="branch" />
            <wire x2="5824" y1="3056" y2="3056" x1="5664" />
        </branch>
        <branch name="A(0)">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="5696" y="2800" type="branch" />
            <wire x2="5824" y1="2800" y2="2800" x1="5696" />
        </branch>
        <branch name="XLXN_462(7:0)">
            <wire x2="3808" y1="4240" y2="4240" x1="2512" />
            <wire x2="3808" y1="4240" y2="4272" x1="3808" />
            <wire x2="5056" y1="4272" y2="4272" x1="3808" />
        </branch>
        <branch name="XLXN_464">
            <wire x2="5056" y1="3760" y2="3760" x1="4976" />
        </branch>
        <branch name="XLXN_470">
            <wire x2="5056" y1="3888" y2="3888" x1="4992" />
        </branch>
        <branch name="XLXN_473">
            <wire x2="5056" y1="4080" y2="4080" x1="4992" />
        </branch>
        <branch name="XLXN_474">
            <wire x2="5056" y1="4016" y2="4016" x1="5008" />
        </branch>
        <branch name="XLXN_475">
            <wire x2="5056" y1="3696" y2="3696" x1="4960" />
        </branch>
        <branch name="XLXN_518(7:0)">
            <wire x2="5632" y1="4832" y2="4832" x1="3936" />
            <wire x2="5040" y1="3616" y2="4336" x1="5040" />
            <wire x2="5056" y1="4336" y2="4336" x1="5040" />
            <wire x2="5632" y1="3616" y2="3616" x1="5040" />
            <wire x2="5632" y1="3616" y2="4832" x1="5632" />
        </branch>
        <branch name="XLXN_519(7:0)">
            <wire x2="2048" y1="4688" y2="5344" x1="2048" />
            <wire x2="5616" y1="5344" y2="5344" x1="2048" />
            <wire x2="2128" y1="4688" y2="4688" x1="2048" />
            <wire x2="5616" y1="4032" y2="4032" x1="5440" />
            <wire x2="5616" y1="4032" y2="5344" x1="5616" />
        </branch>
        <branch name="XLXN_498">
            <wire x2="6000" y1="4864" y2="4864" x1="5888" />
        </branch>
        <branch name="XLXN_499">
            <wire x2="6000" y1="5024" y2="5024" x1="5888" />
        </branch>
        <branch name="XLXN_86">
            <wire x2="1744" y1="2848" y2="2848" x1="1664" />
        </branch>
        <branch name="XLXN_38">
            <wire x2="1744" y1="2912" y2="2912" x1="1664" />
        </branch>
        <branch name="PS2_CLK">
            <wire x2="3440" y1="4896" y2="4896" x1="2928" />
        </branch>
        <branch name="PS2_DATA">
            <wire x2="3440" y1="4960" y2="4960" x1="2944" />
        </branch>
        <branch name="portC(3:0)">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="3232" y="5088" type="branch" />
            <wire x2="3440" y1="5088" y2="5088" x1="3232" />
        </branch>
        <branch name="XLXN_633">
            <wire x2="1232" y1="4064" y2="4064" x1="1136" />
            <wire x2="2992" y1="4064" y2="4064" x1="1232" />
            <wire x2="1136" y1="4064" y2="4496" x1="1136" />
            <wire x2="1696" y1="4496" y2="4496" x1="1136" />
            <wire x2="1696" y1="4496" y2="4544" x1="1696" />
            <wire x2="2064" y1="4544" y2="4544" x1="1696" />
            <wire x2="2064" y1="4544" y2="5024" x1="2064" />
            <wire x2="3440" y1="5024" y2="5024" x1="2064" />
            <wire x2="2128" y1="4496" y2="4496" x1="1696" />
            <wire x2="1232" y1="3984" y2="4064" x1="1232" />
            <wire x2="3888" y1="3968" y2="3968" x1="2992" />
            <wire x2="3888" y1="3968" y2="4496" x1="3888" />
            <wire x2="5600" y1="4496" y2="4496" x1="3888" />
            <wire x2="5600" y1="4496" y2="4928" x1="5600" />
            <wire x2="6000" y1="4928" y2="4928" x1="5600" />
            <wire x2="2992" y1="3968" y2="4064" x1="2992" />
        </branch>
        <branch name="XLXN_16">
            <wire x2="1184" y1="2640" y2="2816" x1="1184" />
            <wire x2="1280" y1="2816" y2="2816" x1="1184" />
            <wire x2="1184" y1="2816" y2="3056" x1="1184" />
            <wire x2="1280" y1="3056" y2="3056" x1="1184" />
            <wire x2="1184" y1="3056" y2="3136" x1="1184" />
            <wire x2="1280" y1="3136" y2="3136" x1="1184" />
        </branch>
        <branch name="portC(7)">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="4960" y="3824" type="branch" />
            <wire x2="5056" y1="3824" y2="3824" x1="4960" />
        </branch>
        <branch name="portC(6)">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="4944" y="3952" type="branch" />
            <wire x2="5056" y1="3952" y2="3952" x1="4944" />
        </branch>
        <instance x="1120" y="2640" name="XLXI_168" orien="R0" />
        <instance x="1744" y="2816" name="XLXI_183" orien="R0" />
        <instance x="2096" y="2848" name="XLXI_184" orien="R0" />
        <instance x="2096" y="2976" name="XLXI_170" orien="R0" />
        <instance x="1744" y="2880" name="XLXI_186" orien="R0" />
        <instance x="2096" y="2704" name="XLXI_187" orien="R0" />
        <instance x="2096" y="3120" name="XLXI_219" orien="R0" />
        <instance x="848" y="4288" name="XLXI_257" orien="R0" />
        <instance x="848" y="4224" name="XLXI_258" orien="R0" />
        <instance x="1200" y="3760" name="XLXI_297" orien="R90" />
        <instance x="5824" y="3152" name="XLXI_344" orien="R0">
        </instance>
        <instance x="608" y="3008" name="XLXI_332" orien="R0" />
        <instance x="5056" y="4432" name="XLXI_349" orien="R0">
        </instance>
        <instance x="4976" y="3824" name="XLXI_350" orien="R270" />
        <instance x="4992" y="3952" name="XLXI_351" orien="R270" />
        <instance x="4832" y="3632" name="XLXI_355" orien="R90" />
        <instance x="4992" y="4144" name="XLXI_377" orien="R270" />
        <instance x="5008" y="4080" name="XLXI_385" orien="R270" />
        <instance x="6000" y="5056" name="XLXI_399" orien="R0" />
        <instance x="5888" y="4928" name="XLXI_383" orien="R270" />
        <instance x="5760" y="4960" name="XLXI_384" orien="R90" />
        <instance x="1744" y="2752" name="XLXI_181" orien="R0" />
        <instance x="1744" y="2944" name="XLXI_549" orien="R0" />
        <instance x="1920" y="3824" name="XLXI_476" orien="R0" />
        <instance x="928" y="2736" name="XLXI_307" orien="R90" />
        <instance x="3440" y="5184" name="XLXI_494" orien="R0">
        </instance>
        <instance x="2176" y="3856" name="XLXI_475" orien="R0" />
        <iomarker fontsize="28" x="2928" y="4896" name="PS2_CLK" orien="R180" />
        <iomarker fontsize="28" x="2944" y="4960" name="PS2_DATA" orien="R180" />
        <branch name="zero">
            <attrtext style="alignment:SOFT-VLEFT" attrname="Name" x="1648" y="5072" type="branch" />
            <wire x2="1648" y1="5072" y2="5152" x1="1648" />
        </branch>
        <branch name="un">
            <attrtext style="alignment:SOFT-VRIGHT" attrname="Name" x="1360" y="5136" type="branch" />
            <wire x2="1360" y1="5088" y2="5136" x1="1360" />
        </branch>
        <instance x="1296" y="5088" name="XLXI_256" orien="R0" />
        <instance x="1584" y="5280" name="XLXI_253" orien="R0" />
        <iomarker fontsize="28" x="3280" y="1792" name="init_A(20:0)" orien="R180" />
        <iomarker fontsize="28" x="1056" y="3504" name="RESET_n" orien="R0" />
        <iomarker fontsize="28" x="3872" y="1200" name="init_W_n" orien="R180" />
        <iomarker fontsize="28" x="2576" y="1296" name="CLK8(2:0)" orien="R270" />
        <iomarker fontsize="28" x="4448" y="2400" name="crtc_A(15:0)" orien="R270" />
        <text style="fontsize:24;fontname:Arial" x="1624" y="4708">000 1 50Hz 101 Schneider X vsync</text>
        <branch name="JOYSTICK1(6:0)">
            <wire x2="3968" y1="5072" y2="5072" x1="3936" />
        </branch>
        <branch name="CLK8(2)">
            <attrtext style="alignment:SOFT-VRIGHT" attrname="Name" x="2464" y="2000" type="branch" />
            <wire x2="1664" y1="2320" y2="2320" x1="1232" />
            <wire x2="1232" y1="2320" y2="2736" x1="1232" />
            <wire x2="1232" y1="2736" y2="3760" x1="1232" />
            <wire x2="1280" y1="2736" y2="2736" x1="1232" />
            <wire x2="2528" y1="1088" y2="1088" x1="1664" />
            <wire x2="1664" y1="1088" y2="1920" x1="1664" />
            <wire x2="2464" y1="1920" y2="1920" x1="1664" />
            <wire x2="2464" y1="1920" y2="2000" x1="2464" />
            <wire x2="1664" y1="1920" y2="2320" x1="1664" />
            <wire x2="2416" y1="1344" y2="1344" x1="2384" />
            <wire x2="2416" y1="1344" y2="1472" x1="2416" />
            <wire x2="2464" y1="1472" y2="1472" x1="2416" />
            <wire x2="2480" y1="1472" y2="1472" x1="2464" />
            <wire x2="2464" y1="1472" y2="1920" x1="2464" />
        </branch>
        <branch name="XLXN_814">
            <wire x2="1280" y1="2976" y2="2976" x1="832" />
        </branch>
        <branch name="XLXN_824">
            <wire x2="2176" y1="3792" y2="3792" x1="2144" />
        </branch>
        <branch name="XLXN_826">
            <wire x2="3200" y1="3760" y2="3760" x1="2432" />
            <wire x2="3200" y1="3120" y2="3760" x1="3200" />
            <wire x2="4928" y1="3120" y2="3120" x1="3200" />
            <wire x2="4928" y1="832" y2="3120" x1="4928" />
            <wire x2="5072" y1="832" y2="832" x1="4928" />
        </branch>
        <branch name="n_crtc_vsync">
            <attrtext style="alignment:SOFT-LEFT" attrname="Name" x="5632" y="576" type="branch" />
            <wire x2="5632" y1="576" y2="576" x1="5488" />
        </branch>
        <branch name="XLXN_806">
            <wire x2="6016" y1="64" y2="64" x1="208" />
            <wire x2="6016" y1="64" y2="640" x1="6016" />
            <wire x2="208" y1="64" y2="3024" x1="208" />
            <wire x2="1264" y1="3024" y2="3024" x1="208" />
            <wire x2="1264" y1="2896" y2="3024" x1="1264" />
            <wire x2="1280" y1="2896" y2="2896" x1="1264" />
            <wire x2="6016" y1="640" y2="640" x1="5488" />
        </branch>
        <branch name="CLK8(2:0)">
            <wire x2="2576" y1="1296" y2="1344" x1="2576" />
            <wire x2="2576" y1="1344" y2="1408" x1="2576" />
            <wire x2="2576" y1="1408" y2="1472" x1="2576" />
            <wire x2="2576" y1="1472" y2="1552" x1="2576" />
            <wire x2="2784" y1="1552" y2="1552" x1="2576" />
            <wire x2="2784" y1="1552" y2="2592" x1="2784" />
            <wire x2="4864" y1="2592" y2="2592" x1="2784" />
            <wire x2="4960" y1="2592" y2="2592" x1="4864" />
            <wire x2="4960" y1="2592" y2="2992" x1="4960" />
            <wire x2="5824" y1="2992" y2="2992" x1="4960" />
            <wire x2="3056" y1="1376" y2="1376" x1="2784" />
            <wire x2="2784" y1="1376" y2="1552" x1="2784" />
            <wire x2="5072" y1="576" y2="576" x1="4864" />
            <wire x2="4864" y1="576" y2="2592" x1="4864" />
        </branch>
        <branch name="IO_WR">
            <attrtext style="alignment:SOFT-LEFT" attrname="Name" x="2496" y="2752" type="branch" />
            <wire x2="784" y1="4112" y2="4192" x1="784" />
            <wire x2="848" y1="4192" y2="4192" x1="784" />
            <wire x2="1760" y1="4112" y2="4112" x1="784" />
            <wire x2="1536" y1="256" y2="256" x1="1504" />
            <wire x2="1504" y1="256" y2="608" x1="1504" />
            <wire x2="2704" y1="608" y2="608" x1="1504" />
            <wire x2="2768" y1="608" y2="608" x1="2704" />
            <wire x2="2704" y1="608" y2="800" x1="2704" />
            <wire x2="2896" y1="800" y2="800" x1="2704" />
            <wire x2="2896" y1="800" y2="2672" x1="2896" />
            <wire x2="3216" y1="2672" y2="2672" x1="2896" />
            <wire x2="3216" y1="2672" y2="2704" x1="3216" />
            <wire x2="5040" y1="2704" y2="2704" x1="3216" />
            <wire x2="5040" y1="2704" y2="2928" x1="5040" />
            <wire x2="5824" y1="2928" y2="2928" x1="5040" />
            <wire x2="1760" y1="2960" y2="4112" x1="1760" />
            <wire x2="2464" y1="2960" y2="2960" x1="1760" />
            <wire x2="2464" y1="2752" y2="2752" x1="2352" />
            <wire x2="2464" y1="2752" y2="2960" x1="2464" />
            <wire x2="2496" y1="2752" y2="2752" x1="2464" />
            <wire x2="2464" y1="2672" y2="2752" x1="2464" />
            <wire x2="2896" y1="2672" y2="2672" x1="2464" />
            <wire x2="5072" y1="1216" y2="1216" x1="5040" />
            <wire x2="5040" y1="1216" y2="2704" x1="5040" />
        </branch>
        <branch name="XLXN_835">
            <wire x2="608" y1="2976" y2="2976" x1="528" />
            <wire x2="528" y1="2976" y2="3440" x1="528" />
            <wire x2="5568" y1="3440" y2="3440" x1="528" />
            <wire x2="5568" y1="768" y2="768" x1="5488" />
            <wire x2="5568" y1="768" y2="3440" x1="5568" />
        </branch>
        <branch name="crtc_W">
            <wire x2="5632" y1="896" y2="896" x1="5488" />
        </branch>
        <iomarker fontsize="28" x="5632" y="896" name="crtc_W" orien="R0" />
        <branch name="crtc_A(15:0)">
            <wire x2="3536" y1="1856" y2="1856" x1="3312" />
            <wire x2="3312" y1="1856" y2="2528" x1="3312" />
            <wire x2="4448" y1="2528" y2="2528" x1="3312" />
            <wire x2="5536" y1="2528" y2="2528" x1="4448" />
            <wire x2="4448" y1="2400" y2="2528" x1="4448" />
            <wire x2="5536" y1="960" y2="960" x1="5488" />
            <wire x2="5536" y1="960" y2="2528" x1="5536" />
        </branch>
        <branch name="A(15),A(14),A(9),A(8)">
            <attrtext style="alignment:SOFT-BCENTER" attrname="Name" x="4656" y="1088" type="branch" />
            <wire x2="4656" y1="1088" y2="1088" x1="4560" />
            <wire x2="5072" y1="1088" y2="1088" x1="4656" />
        </branch>
        <branch name="D(7:0)">
            <attrtext style="alignment:SOFT-VLEFT" attrname="Name" x="1856" y="3184" type="branch" />
            <wire x2="1536" y1="320" y2="320" x1="1456" />
            <wire x2="1456" y1="320" y2="544" x1="1456" />
            <wire x2="2688" y1="544" y2="544" x1="1456" />
            <wire x2="2768" y1="544" y2="544" x1="2688" />
            <wire x2="2688" y1="544" y2="1504" x1="2688" />
            <wire x2="3056" y1="1504" y2="1504" x1="2688" />
            <wire x2="2688" y1="1504" y2="2640" x1="2688" />
            <wire x2="4976" y1="2640" y2="2640" x1="2688" />
            <wire x2="4976" y1="2640" y2="3120" x1="4976" />
            <wire x2="5824" y1="3120" y2="3120" x1="4976" />
            <wire x2="1856" y1="3232" y2="3232" x1="1664" />
            <wire x2="1856" y1="3232" y2="4624" x1="1856" />
            <wire x2="2128" y1="4624" y2="4624" x1="1856" />
            <wire x2="2384" y1="3232" y2="3232" x1="1856" />
            <wire x2="1856" y1="3184" y2="3232" x1="1856" />
            <wire x2="2384" y1="2640" y2="3232" x1="2384" />
            <wire x2="2688" y1="2640" y2="2640" x1="2384" />
            <wire x2="5072" y1="768" y2="768" x1="4976" />
            <wire x2="4976" y1="768" y2="2640" x1="4976" />
        </branch>
        <branch name="XLXN_845">
            <wire x2="1712" y1="2656" y2="2656" x1="1664" />
            <wire x2="1712" y1="2656" y2="3408" x1="1712" />
            <wire x2="1712" y1="3408" y2="3792" x1="1712" />
            <wire x2="1920" y1="3792" y2="3792" x1="1712" />
            <wire x2="5008" y1="3408" y2="3408" x1="1712" />
            <wire x2="5072" y1="928" y2="928" x1="5008" />
            <wire x2="5008" y1="928" y2="3408" x1="5008" />
        </branch>
        <branch name="MEM_WR">
            <wire x2="3792" y1="2880" y2="2880" x1="2352" />
            <wire x2="3312" y1="960" y2="960" x1="3024" />
            <wire x2="3024" y1="960" y2="1312" x1="3024" />
            <wire x2="3056" y1="1312" y2="1312" x1="3024" />
            <wire x2="3024" y1="1312" y2="1952" x1="3024" />
            <wire x2="3792" y1="1952" y2="1952" x1="3024" />
            <wire x2="3792" y1="1952" y2="2880" x1="3792" />
            <wire x2="3472" y1="640" y2="640" x1="3312" />
            <wire x2="3312" y1="640" y2="960" x1="3312" />
        </branch>
        <instance x="4096" y="1328" name="XLXI_575" orien="R0" />
        <branch name="ram_W_n">
            <wire x2="4400" y1="1200" y2="1200" x1="4352" />
        </branch>
        <iomarker fontsize="28" x="4400" y="1200" name="ram_W_n" orien="R0" />
        <branch name="XLXN_848">
            <wire x2="4096" y1="1136" y2="1136" x1="4064" />
        </branch>
        <instance x="3840" y="1168" name="XLXI_576" orien="R0" />
        <branch name="XLXN_849">
            <wire x2="3840" y1="1136" y2="1136" x1="3520" />
            <wire x2="3520" y1="1136" y2="2032" x1="3520" />
            <wire x2="6384" y1="2032" y2="2032" x1="3520" />
            <wire x2="6384" y1="2032" y2="2672" x1="6384" />
            <wire x2="6384" y1="2672" y2="2672" x1="6304" />
        </branch>
        <branch name="IO_REQ">
            <wire x2="1680" y1="2608" y2="2992" x1="1680" />
            <wire x2="2096" y1="2992" y2="2992" x1="1680" />
            <wire x2="2064" y1="2608" y2="2608" x1="1680" />
            <wire x2="2064" y1="2608" y2="2800" x1="2064" />
            <wire x2="1984" y1="2784" y2="2784" x1="1968" />
            <wire x2="2096" y1="2784" y2="2784" x1="1984" />
            <wire x2="1984" y1="2784" y2="2800" x1="1984" />
            <wire x2="2064" y1="2800" y2="2800" x1="1984" />
            <wire x2="1984" y1="2800" y2="3728" x1="1984" />
            <wire x2="2176" y1="3728" y2="3728" x1="1984" />
        </branch>
        <branch name="XLXN_787">
            <wire x2="2000" y1="2848" y2="2848" x1="1968" />
            <wire x2="2000" y1="2848" y2="2864" x1="2000" />
            <wire x2="2080" y1="2864" y2="2864" x1="2000" />
            <wire x2="2080" y1="2864" y2="3056" x1="2080" />
            <wire x2="2096" y1="3056" y2="3056" x1="2080" />
            <wire x2="2000" y1="2816" y2="2848" x1="2000" />
            <wire x2="2080" y1="2816" y2="2816" x1="2000" />
            <wire x2="2096" y1="2640" y2="2640" x1="2080" />
            <wire x2="2080" y1="2640" y2="2816" x1="2080" />
        </branch>
        <branch name="XLXN_786">
            <wire x2="2016" y1="2720" y2="2720" x1="1968" />
            <wire x2="2016" y1="2720" y2="2848" x1="2016" />
            <wire x2="2096" y1="2848" y2="2848" x1="2016" />
            <wire x2="2096" y1="2576" y2="2576" x1="2016" />
            <wire x2="2016" y1="2576" y2="2720" x1="2016" />
        </branch>
        <branch name="XLXN_785">
            <wire x2="2048" y1="2912" y2="2912" x1="1968" />
            <wire x2="2096" y1="2912" y2="2912" x1="2048" />
            <wire x2="2096" y1="2720" y2="2720" x1="2048" />
            <wire x2="2048" y1="2720" y2="2912" x1="2048" />
        </branch>
        <branch name="RESET_n">
            <wire x2="960" y1="2688" y2="2688" x1="912" />
            <wire x2="960" y1="2688" y2="2736" x1="960" />
            <wire x2="1248" y1="2688" y2="2688" x1="960" />
            <wire x2="912" y1="2688" y2="3472" x1="912" />
            <wire x2="1040" y1="3472" y2="3472" x1="912" />
            <wire x2="1040" y1="3472" y2="3504" x1="1040" />
            <wire x2="1056" y1="3504" y2="3504" x1="1040" />
            <wire x2="3968" y1="3472" y2="3472" x1="1040" />
            <wire x2="3968" y1="3472" y2="4144" x1="3968" />
            <wire x2="5056" y1="4144" y2="4144" x1="3968" />
            <wire x2="1008" y1="2624" y2="2624" x1="960" />
            <wire x2="960" y1="2624" y2="2688" x1="960" />
            <wire x2="3536" y1="1728" y2="1728" x1="1008" />
            <wire x2="1008" y1="1728" y2="2624" x1="1008" />
            <wire x2="1280" y1="2656" y2="2656" x1="1248" />
            <wire x2="1248" y1="2656" y2="2688" x1="1248" />
        </branch>
        <branch name="crtc_D(7:0)">
            <wire x2="5664" y1="1056" y2="1056" x1="5488" />
        </branch>
        <iomarker fontsize="28" x="5664" y="1056" name="crtc_D(7:0)" orien="R0" />
        <branch name="XLXN_852">
            <wire x2="3536" y1="1824" y2="1824" x1="3504" />
            <wire x2="3504" y1="1824" y2="2080" x1="3504" />
            <wire x2="5552" y1="2080" y2="2080" x1="3504" />
            <wire x2="5552" y1="1008" y2="1008" x1="5488" />
            <wire x2="5552" y1="1008" y2="2080" x1="5552" />
        </branch>
        <branch name="palette_W">
            <wire x2="5648" y1="1328" y2="1328" x1="5488" />
        </branch>
        <branch name="palette_A(12:0)">
            <wire x2="5648" y1="1376" y2="1376" x1="5488" />
        </branch>
        <branch name="palette_D(7:0)">
            <wire x2="5648" y1="1424" y2="1424" x1="5488" />
        </branch>
        <iomarker fontsize="28" x="5648" y="1328" name="palette_W" orien="R0" />
        <iomarker fontsize="28" x="5648" y="1376" name="palette_A(12:0)" orien="R0" />
        <iomarker fontsize="28" x="5648" y="1424" name="palette_D(7:0)" orien="R0" />
        <branch name="XLXN_857(1:0)">
            <wire x2="3280" y1="608" y2="608" x1="3200" />
            <wire x2="3280" y1="608" y2="944" x1="3280" />
            <wire x2="4848" y1="944" y2="944" x1="3280" />
            <wire x2="4848" y1="944" y2="1472" x1="4848" />
            <wire x2="5072" y1="1472" y2="1472" x1="4848" />
        </branch>
        <branch name="XLXN_858">
            <wire x2="960" y1="2960" y2="3296" x1="960" />
            <wire x2="1664" y1="3296" y2="3296" x1="960" />
            <wire x2="2048" y1="3296" y2="3296" x1="1664" />
            <wire x2="3008" y1="3296" y2="3296" x1="2048" />
            <wire x2="2048" y1="3296" y2="4432" x1="2048" />
            <wire x2="2128" y1="4432" y2="4432" x1="2048" />
            <wire x2="3056" y1="1568" y2="1568" x1="2832" />
            <wire x2="2832" y1="1568" y2="2736" x1="2832" />
            <wire x2="3008" y1="2736" y2="2736" x1="2832" />
            <wire x2="3008" y1="2736" y2="3296" x1="3008" />
            <wire x2="4896" y1="2736" y2="2736" x1="3008" />
            <wire x2="5824" y1="2736" y2="2736" x1="4896" />
            <wire x2="5072" y1="640" y2="640" x1="4896" />
            <wire x2="4896" y1="640" y2="2736" x1="4896" />
        </branch>
        <text style="fontsize:30;fontname:Arial" x="1740" y="4668">110 Orion</text>
        <instance x="5072" y="800" name="GA_interrupt" orien="R0">
        </instance>
        <instance x="1840" y="1408" name="XLXI_417" orien="R270" />
        <branch name="CLK8(1)">
            <wire x2="2448" y1="1280" y2="1280" x1="2384" />
            <wire x2="2448" y1="1280" y2="1408" x1="2448" />
            <wire x2="2480" y1="1408" y2="1408" x1="2448" />
        </branch>
        <instance x="2000" y="1728" name="XLXI_579" orien="R0" />
        <iomarker fontsize="28" x="3968" y="5072" name="JOYSTICK1(6:0)" orien="R0" />
        <branch name="CLK_PWM">
            <wire x2="5888" y1="3856" y2="3856" x1="5840" />
            <wire x2="5888" y1="3856" y2="3936" x1="5888" />
            <wire x2="6064" y1="3936" y2="3936" x1="5888" />
        </branch>
        <iomarker fontsize="28" x="5840" y="3856" name="CLK_PWM" orien="R180" />
        <branch name="key_reset">
            <wire x2="3968" y1="4944" y2="4944" x1="3936" />
        </branch>
        <iomarker fontsize="28" x="3968" y="4944" name="key_reset" orien="R0" />
        <bustap x2="4560" y1="1088" y2="1088" x1="4464" />
        <instance x="6064" y="4032" name="XLXI_580" orien="R0">
        </instance>
        <branch name="audio_AB">
            <wire x2="6496" y1="3936" y2="3936" x1="6448" />
        </branch>
        <iomarker fontsize="28" x="6496" y="3936" name="audio_AB" orien="R0" />
        <branch name="XLXN_861(7:0)">
            <wire x2="5744" y1="4208" y2="4208" x1="5440" />
            <wire x2="6064" y1="4000" y2="4000" x1="5744" />
            <wire x2="5744" y1="4000" y2="4208" x1="5744" />
        </branch>
        <branch name="XLXN_862">
            <wire x2="5056" y1="4208" y2="4208" x1="4864" />
            <wire x2="4864" y1="4208" y2="4432" x1="4864" />
            <wire x2="5808" y1="4432" y2="4432" x1="4864" />
            <wire x2="6448" y1="4432" y2="4432" x1="5808" />
            <wire x2="6448" y1="4432" y2="4800" x1="6448" />
            <wire x2="6064" y1="4064" y2="4064" x1="5808" />
            <wire x2="5808" y1="4064" y2="4368" x1="5808" />
            <wire x2="5808" y1="4368" y2="4432" x1="5808" />
            <wire x2="6416" y1="4672" y2="4672" x1="6384" />
            <wire x2="6416" y1="4672" y2="4800" x1="6416" />
            <wire x2="6448" y1="4800" y2="4800" x1="6416" />
        </branch>
        <instance x="1280" y="3264" name="AmstradT80" orien="R0">
        </instance>
        <branch name="dsk_info(4:0)">
            <wire x2="5824" y1="3184" y2="3184" x1="5792" />
        </branch>
        <iomarker fontsize="28" x="5792" y="3184" name="dsk_info(4:0)" orien="R180" />
        <instance x="2128" y="4784" name="XLXI_582" orien="R0">
        </instance>
        <branch name="XLXN_864">
            <wire x2="1248" y1="4256" y2="4256" x1="1072" />
            <wire x2="1248" y1="4256" y2="4304" x1="1248" />
            <wire x2="2128" y1="4304" y2="4304" x1="1248" />
        </branch>
        <branch name="A(11)">
            <attrtext style="alignment:SOFT-RIGHT" attrname="Name" x="2000" y="4240" type="branch" />
            <wire x2="2128" y1="4240" y2="4240" x1="2000" />
        </branch>
        <branch name="portC(7:0)">
            <attrtext style="alignment:SOFT-LEFT" attrname="Name" x="2688" y="4496" type="branch" />
            <wire x2="2688" y1="4496" y2="4496" x1="2512" />
        </branch>
        <branch name="audio_BC">
            <wire x2="6496" y1="4064" y2="4064" x1="6448" />
        </branch>
        <iomarker fontsize="28" x="6496" y="4064" name="audio_BC" orien="R0" />
    </sheet>
</drawing>