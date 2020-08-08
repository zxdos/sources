/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src-gomadoslx25/joydecoder_lx25.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {6U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {4095U, 0U};
static int ng10[] = {3, 0};
static int ng11[] = {0, 0};
static int ng12[] = {5, 0};
static int ng13[] = {4, 0};
static int ng14[] = {7, 0};
static int ng15[] = {6, 0};
static int ng16[] = {11, 0};
static int ng17[] = {8, 0};



static void Always_290_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 6304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(290, ng0);
    t2 = (t0 + 7864);
    *((int *)t2) = 1;
    t3 = (t0 + 6336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(291, ng0);

LAB5:    xsi_set_current_line(292, ng0);
    t4 = (t0 + 2592U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(295, ng0);

LAB10:    xsi_set_current_line(296, ng0);
    t2 = (t0 + 5392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(292, ng0);

LAB9:    xsi_set_current_line(293, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 5, 0LL);
    goto LAB8;

}

static void Always_301_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;

LAB0:    t1 = (t0 + 6552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(301, ng0);
    t2 = (t0 + 7880);
    *((int *)t2) = 1;
    t3 = (t0 + 6584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(302, ng0);

LAB5:    xsi_set_current_line(303, ng0);
    t4 = (t0 + 5232);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(358, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(304, ng0);
    t9 = (t0 + 3712U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(307, ng0);

LAB30:    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB28:    goto LAB25;

LAB9:    xsi_set_current_line(310, ng0);
    t3 = (t0 + 3712U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(322, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB33:    goto LAB25;

LAB11:    xsi_set_current_line(323, ng0);
    t3 = (t0 + 3712U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(326, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB46:    goto LAB25;

LAB13:    xsi_set_current_line(327, ng0);
    t3 = (t0 + 3712U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(337, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB49:    goto LAB25;

LAB15:    xsi_set_current_line(338, ng0);
    t3 = (t0 + 3712U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(341, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB59:    goto LAB25;

LAB17:    xsi_set_current_line(342, ng0);
    t3 = (t0 + 3712U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(349, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB62:    goto LAB25;

LAB19:    xsi_set_current_line(350, ng0);
    t3 = (t0 + 3712U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(353, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB69:    goto LAB25;

LAB21:    xsi_set_current_line(354, ng0);
    t3 = (t0 + 3712U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(357, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB72:    goto LAB25;

LAB26:    xsi_set_current_line(304, ng0);

LAB29:    xsi_set_current_line(305, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 5, 0LL);
    goto LAB28;

LAB31:    xsi_set_current_line(310, ng0);

LAB34:    xsi_set_current_line(311, ng0);
    t5 = (t0 + 4192U);
    t7 = *((char **)t5);
    t5 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(314, ng0);
    t2 = (t0 + 4032U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(317, ng0);

LAB43:    xsi_set_current_line(318, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB41:
LAB37:    goto LAB33;

LAB35:    xsi_set_current_line(311, ng0);

LAB38:    xsi_set_current_line(312, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 5, 0LL);
    goto LAB37;

LAB39:    xsi_set_current_line(314, ng0);

LAB42:    xsi_set_current_line(315, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    goto LAB41;

LAB44:    xsi_set_current_line(324, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 5, 0LL);
    goto LAB46;

LAB47:    xsi_set_current_line(327, ng0);

LAB50:    xsi_set_current_line(328, ng0);
    t5 = (t0 + 4192U);
    t7 = *((char **)t5);
    t5 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(331, ng0);
    t2 = (t0 + 4032U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(334, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB56:
LAB53:    goto LAB49;

LAB51:    xsi_set_current_line(329, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 5, 0LL);
    goto LAB53;

LAB54:    xsi_set_current_line(332, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    goto LAB56;

LAB57:    xsi_set_current_line(339, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 5, 0LL);
    goto LAB59;

LAB60:    xsi_set_current_line(342, ng0);

LAB63:    xsi_set_current_line(343, ng0);
    t5 = (t0 + 4192U);
    t7 = *((char **)t5);
    t5 = (t7 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (~(t18));
    t20 = *((unsigned int *)t7);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(346, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB66:    goto LAB62;

LAB64:    xsi_set_current_line(344, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 5, 0LL);
    goto LAB66;

LAB67:    xsi_set_current_line(351, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 5, 0LL);
    goto LAB69;

LAB70:    xsi_set_current_line(354, ng0);

LAB73:    xsi_set_current_line(355, ng0);
    t5 = ((char*)((ng1)));
    t7 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 5, 0LL);
    goto LAB72;

}

static void Always_363_2(char *t0)
{
    char t13[8];
    char t28[8];
    char t30[8];
    char t55[8];
    char t63[8];
    char t91[8];
    char t106[8];
    char t115[8];
    char t123[8];
    char t161[8];
    char t167[8];
    char t168[8];
    char t169[8];
    char t235[8];
    char t249[8];
    char t256[8];
    char t286[8];
    char t298[8];
    char t307[8];
    char t315[8];
    char t351[8];
    char t355[8];
    char t356[8];
    char t357[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    int t147;
    int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    char *t170;
    char *t171;
    char *t172;
    char *t173;
    char *t174;
    char *t175;
    unsigned int t176;
    int t177;
    char *t178;
    unsigned int t179;
    int t180;
    int t181;
    char *t182;
    unsigned int t183;
    int t184;
    int t185;
    unsigned int t186;
    int t187;
    unsigned int t188;
    unsigned int t189;
    int t190;
    int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    char *t213;
    char *t214;
    char *t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    char *t242;
    char *t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    char *t247;
    char *t248;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    char *t255;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    char *t260;
    char *t261;
    char *t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    char *t270;
    char *t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    char *t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    char *t293;
    char *t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    char *t299;
    char *t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    char *t306;
    char *t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    char *t314;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    char *t319;
    char *t320;
    char *t321;
    unsigned int t322;
    unsigned int t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    char *t329;
    char *t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    unsigned int t339;
    unsigned int t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    char *t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    char *t352;
    char *t353;
    char *t354;
    char *t358;
    char *t359;
    char *t360;
    char *t361;
    char *t362;
    char *t363;
    unsigned int t364;
    char *t365;
    unsigned int t366;
    int t367;
    char *t368;
    unsigned int t369;
    int t370;
    int t371;
    unsigned int t372;
    int t373;
    unsigned int t374;
    unsigned int t375;
    int t376;
    int t377;

LAB0:    t1 = (t0 + 6800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(363, ng0);
    t2 = (t0 + 7896);
    *((int *)t2) = 1;
    t3 = (t0 + 6832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(364, ng0);

LAB5:    xsi_set_current_line(365, ng0);
    t4 = (t0 + 2592U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(369, ng0);

LAB10:    xsi_set_current_line(370, ng0);
    t2 = (t0 + 3712U);
    t3 = *((char **)t2);
    t2 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(371, ng0);
    t2 = (t0 + 4752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3712U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(388, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(365, ng0);

LAB9:    xsi_set_current_line(366, ng0);
    t11 = ((char*)((ng9)));
    t12 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 12, 0LL);
    xsi_set_current_line(367, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB13:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(371, ng0);

LAB18:    xsi_set_current_line(372, ng0);
    t29 = ((char*)((ng2)));
    t31 = (t0 + 4912);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t30, 0, 8);
    t34 = (t30 + 4);
    t35 = (t33 + 4);
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t30) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t40 & 3U);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 & 3U);
    xsi_vlogtype_concat(t28, 3, 3, 2U, t30, 2, t29, 1);
    t42 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t42, t28, 0, 0, 3, 0LL);
    xsi_set_current_line(374, ng0);
    t2 = (t0 + 5232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    memset(t28, 0, 8);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t22) != 0)
        goto LAB25;

LAB26:    t31 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = (!(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB27;

LAB28:    memcpy(t63, t28, 8);

LAB29:    memset(t91, 0, 8);
    t92 = (t63 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t63);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t92) != 0)
        goto LAB43;

LAB44:    t99 = (t91 + 4);
    t100 = *((unsigned int *)t91);
    t101 = *((unsigned int *)t99);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB45;

LAB46:    memcpy(t123, t91, 8);

LAB47:    t155 = (t123 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t123);
    t159 = (t158 & t157);
    t160 = (t159 != 0);
    if (t160 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(379, ng0);
    t2 = (t0 + 5232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB66;

LAB63:    if (t18 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t13) = 1;

LAB66:    memset(t28, 0, 8);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t22) != 0)
        goto LAB69;

LAB70:    t31 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = (!(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB71;

LAB72:    memcpy(t63, t28, 8);

LAB73:    memset(t91, 0, 8);
    t92 = (t63 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t63);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t92) != 0)
        goto LAB87;

LAB88:    t99 = (t91 + 4);
    t100 = *((unsigned int *)t91);
    t101 = (!(t100));
    t102 = *((unsigned int *)t99);
    t109 = (t101 || t102);
    if (t109 > 0)
        goto LAB89;

LAB90:    memcpy(t123, t91, 8);

LAB91:    memset(t161, 0, 8);
    t163 = (t123 + 4);
    t159 = *((unsigned int *)t163);
    t160 = (~(t159));
    t176 = *((unsigned int *)t123);
    t179 = (t176 & t160);
    t183 = (t179 & 1U);
    if (t183 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t163) != 0)
        goto LAB105;

LAB106:    t165 = (t161 + 4);
    t186 = *((unsigned int *)t161);
    t188 = (!(t186));
    t189 = *((unsigned int *)t165);
    t192 = (t188 || t189);
    if (t192 > 0)
        goto LAB107;

LAB108:    memcpy(t169, t161, 8);

LAB109:    memset(t235, 0, 8);
    t236 = (t169 + 4);
    t237 = *((unsigned int *)t236);
    t238 = (~(t237));
    t239 = *((unsigned int *)t169);
    t240 = (t239 & t238);
    t241 = (t240 & 1U);
    if (t241 != 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t236) != 0)
        goto LAB123;

LAB124:    t243 = (t235 + 4);
    t244 = *((unsigned int *)t235);
    t245 = *((unsigned int *)t243);
    t246 = (t244 || t245);
    if (t246 > 0)
        goto LAB125;

LAB126:    memcpy(t256, t235, 8);

LAB127:    memset(t286, 0, 8);
    t287 = (t256 + 4);
    t288 = *((unsigned int *)t287);
    t289 = (~(t288));
    t290 = *((unsigned int *)t256);
    t291 = (t290 & t289);
    t292 = (t291 & 1U);
    if (t292 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t287) != 0)
        goto LAB137;

LAB138:    t294 = (t286 + 4);
    t295 = *((unsigned int *)t286);
    t296 = *((unsigned int *)t294);
    t297 = (t295 || t296);
    if (t297 > 0)
        goto LAB139;

LAB140:    memcpy(t315, t286, 8);

LAB141:    t345 = (t315 + 4);
    t346 = *((unsigned int *)t345);
    t347 = (~(t346));
    t348 = *((unsigned int *)t315);
    t349 = (t348 & t347);
    t350 = (t349 != 0);
    if (t350 > 0)
        goto LAB153;

LAB154:    xsi_set_current_line(383, ng0);
    t2 = (t0 + 5232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB162;

LAB159:    if (t18 != 0)
        goto LAB161;

LAB160:    *((unsigned int *)t13) = 1;

LAB162:    memset(t28, 0, 8);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB163;

LAB164:    if (*((unsigned int *)t22) != 0)
        goto LAB165;

LAB166:    t31 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = *((unsigned int *)t31);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB167;

LAB168:    memcpy(t63, t28, 8);

LAB169:    t77 = (t63 + 4);
    t88 = *((unsigned int *)t77);
    t89 = (~(t88));
    t90 = *((unsigned int *)t63);
    t93 = (t90 & t89);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB177;

LAB178:
LAB179:
LAB155:
LAB57:    goto LAB17;

LAB21:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t28) = 1;
    goto LAB26;

LAB25:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB26;

LAB27:    t32 = (t0 + 5232);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng6)));
    memset(t30, 0, 8);
    t42 = (t34 + 4);
    t43 = (t35 + 4);
    t40 = *((unsigned int *)t34);
    t41 = *((unsigned int *)t35);
    t44 = (t40 ^ t41);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t42);
    t50 = *((unsigned int *)t43);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB33;

LAB30:    if (t51 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t30) = 1;

LAB33:    memset(t55, 0, 8);
    t56 = (t30 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t30);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t56) != 0)
        goto LAB36;

LAB37:    t64 = *((unsigned int *)t28);
    t65 = *((unsigned int *)t55);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t28 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB29;

LAB32:    t54 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t55) = 1;
    goto LAB37;

LAB36:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB37;

LAB38:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t28 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t28);
    t82 = (t81 & t80);
    t83 = *((unsigned int *)t78);
    t84 = (~(t83));
    t85 = *((unsigned int *)t55);
    t86 = (t85 & t84);
    t87 = (~(t82));
    t88 = (~(t86));
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    goto LAB40;

LAB41:    *((unsigned int *)t91) = 1;
    goto LAB44;

LAB43:    t98 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB44;

LAB45:    t103 = (t0 + 4912);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    memset(t106, 0, 8);
    t107 = (t106 + 4);
    t108 = (t105 + 4);
    t109 = *((unsigned int *)t105);
    t110 = (t109 >> 1);
    t111 = (t110 & 1);
    *((unsigned int *)t106) = t111;
    t112 = *((unsigned int *)t108);
    t113 = (t112 >> 1);
    t114 = (t113 & 1);
    *((unsigned int *)t107) = t114;
    memset(t115, 0, 8);
    t116 = (t106 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t106);
    t120 = (t119 & t118);
    t121 = (t120 & 1U);
    if (t121 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t116) != 0)
        goto LAB50;

LAB51:    t124 = *((unsigned int *)t91);
    t125 = *((unsigned int *)t115);
    t126 = (t124 & t125);
    *((unsigned int *)t123) = t126;
    t127 = (t91 + 4);
    t128 = (t115 + 4);
    t129 = (t123 + 4);
    t130 = *((unsigned int *)t127);
    t131 = *((unsigned int *)t128);
    t132 = (t130 | t131);
    *((unsigned int *)t129) = t132;
    t133 = *((unsigned int *)t129);
    t134 = (t133 != 0);
    if (t134 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB47;

LAB48:    *((unsigned int *)t115) = 1;
    goto LAB51;

LAB50:    t122 = (t115 + 4);
    *((unsigned int *)t115) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB51;

LAB52:    t135 = *((unsigned int *)t123);
    t136 = *((unsigned int *)t129);
    *((unsigned int *)t123) = (t135 | t136);
    t137 = (t91 + 4);
    t138 = (t115 + 4);
    t139 = *((unsigned int *)t91);
    t140 = (~(t139));
    t141 = *((unsigned int *)t137);
    t142 = (~(t141));
    t143 = *((unsigned int *)t115);
    t144 = (~(t143));
    t145 = *((unsigned int *)t138);
    t146 = (~(t145));
    t147 = (t140 & t142);
    t148 = (t144 & t146);
    t149 = (~(t147));
    t150 = (~(t148));
    t151 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t151 & t149);
    t152 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t152 & t150);
    t153 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t153 & t149);
    t154 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t154 & t150);
    goto LAB54;

LAB55:    xsi_set_current_line(374, ng0);

LAB58:    xsi_set_current_line(375, ng0);
    t162 = (t0 + 2752U);
    t163 = *((char **)t162);
    t162 = (t0 + 2912U);
    t164 = *((char **)t162);
    t162 = (t0 + 3072U);
    t165 = *((char **)t162);
    t162 = (t0 + 3232U);
    t166 = *((char **)t162);
    xsi_vlogtype_concat(t161, 4, 4, 4U, t166, 1, t165, 1, t164, 1, t163, 1);
    t162 = (t0 + 4592);
    t170 = (t0 + 4592);
    t171 = (t170 + 72U);
    t172 = *((char **)t171);
    t173 = ((char*)((ng10)));
    t174 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t167, t168, t169, ((int*)(t172)), 2, t173, 32, 1, t174, 32, 1);
    t175 = (t167 + 4);
    t176 = *((unsigned int *)t175);
    t177 = (!(t176));
    t178 = (t168 + 4);
    t179 = *((unsigned int *)t178);
    t180 = (!(t179));
    t181 = (t177 && t180);
    t182 = (t169 + 4);
    t183 = *((unsigned int *)t182);
    t184 = (!(t183));
    t185 = (t181 && t184);
    if (t185 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(376, ng0);
    t2 = (t0 + 3392U);
    t3 = *((char **)t2);
    t2 = (t0 + 3552U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t13, 2, 2, 2U, t4, 1, t3, 1);
    t2 = (t0 + 4592);
    t5 = (t0 + 4592);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t21 = ((char*)((ng12)));
    t22 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t28, t30, t55, ((int*)(t12)), 2, t21, 32, 1, t22, 32, 1);
    t29 = (t28 + 4);
    t6 = *((unsigned int *)t29);
    t82 = (!(t6));
    t31 = (t30 + 4);
    t7 = *((unsigned int *)t31);
    t86 = (!(t7));
    t147 = (t82 && t86);
    t32 = (t55 + 4);
    t8 = *((unsigned int *)t32);
    t148 = (!(t8));
    t177 = (t147 && t148);
    if (t177 == 1)
        goto LAB61;

LAB62:    goto LAB57;

LAB59:    t186 = *((unsigned int *)t169);
    t187 = (t186 + 0);
    t188 = *((unsigned int *)t167);
    t189 = *((unsigned int *)t168);
    t190 = (t188 - t189);
    t191 = (t190 + 1);
    xsi_vlogvar_wait_assign_value(t162, t161, t187, *((unsigned int *)t168), t191, 0LL);
    goto LAB60;

LAB61:    t9 = *((unsigned int *)t55);
    t180 = (t9 + 0);
    t10 = *((unsigned int *)t28);
    t14 = *((unsigned int *)t30);
    t181 = (t10 - t14);
    t184 = (t181 + 1);
    xsi_vlogvar_wait_assign_value(t2, t13, t180, *((unsigned int *)t30), t184, 0LL);
    goto LAB62;

LAB65:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB66;

LAB67:    *((unsigned int *)t28) = 1;
    goto LAB70;

LAB69:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB70;

LAB71:    t32 = (t0 + 5232);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng5)));
    memset(t30, 0, 8);
    t42 = (t34 + 4);
    t43 = (t35 + 4);
    t40 = *((unsigned int *)t34);
    t41 = *((unsigned int *)t35);
    t44 = (t40 ^ t41);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t42);
    t50 = *((unsigned int *)t43);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB77;

LAB74:    if (t51 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t30) = 1;

LAB77:    memset(t55, 0, 8);
    t56 = (t30 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t30);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t56) != 0)
        goto LAB80;

LAB81:    t64 = *((unsigned int *)t28);
    t65 = *((unsigned int *)t55);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t28 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB82;

LAB83:
LAB84:    goto LAB73;

LAB76:    t54 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB77;

LAB78:    *((unsigned int *)t55) = 1;
    goto LAB81;

LAB80:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB81;

LAB82:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t28 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t28);
    t82 = (t81 & t80);
    t83 = *((unsigned int *)t78);
    t84 = (~(t83));
    t85 = *((unsigned int *)t55);
    t86 = (t85 & t84);
    t87 = (~(t82));
    t88 = (~(t86));
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    goto LAB84;

LAB85:    *((unsigned int *)t91) = 1;
    goto LAB88;

LAB87:    t98 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB88;

LAB89:    t103 = (t0 + 5232);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    t107 = ((char*)((ng7)));
    memset(t106, 0, 8);
    t108 = (t105 + 4);
    t116 = (t107 + 4);
    t110 = *((unsigned int *)t105);
    t111 = *((unsigned int *)t107);
    t112 = (t110 ^ t111);
    t113 = *((unsigned int *)t108);
    t114 = *((unsigned int *)t116);
    t117 = (t113 ^ t114);
    t118 = (t112 | t117);
    t119 = *((unsigned int *)t108);
    t120 = *((unsigned int *)t116);
    t121 = (t119 | t120);
    t124 = (~(t121));
    t125 = (t118 & t124);
    if (t125 != 0)
        goto LAB95;

LAB92:    if (t121 != 0)
        goto LAB94;

LAB93:    *((unsigned int *)t106) = 1;

LAB95:    memset(t115, 0, 8);
    t127 = (t106 + 4);
    t126 = *((unsigned int *)t127);
    t130 = (~(t126));
    t131 = *((unsigned int *)t106);
    t132 = (t131 & t130);
    t133 = (t132 & 1U);
    if (t133 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t127) != 0)
        goto LAB98;

LAB99:    t134 = *((unsigned int *)t91);
    t135 = *((unsigned int *)t115);
    t136 = (t134 | t135);
    *((unsigned int *)t123) = t136;
    t129 = (t91 + 4);
    t137 = (t115 + 4);
    t138 = (t123 + 4);
    t139 = *((unsigned int *)t129);
    t140 = *((unsigned int *)t137);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB100;

LAB101:
LAB102:    goto LAB91;

LAB94:    t122 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB95;

LAB96:    *((unsigned int *)t115) = 1;
    goto LAB99;

LAB98:    t128 = (t115 + 4);
    *((unsigned int *)t115) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB99;

LAB100:    t144 = *((unsigned int *)t123);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t123) = (t144 | t145);
    t155 = (t91 + 4);
    t162 = (t115 + 4);
    t146 = *((unsigned int *)t155);
    t149 = (~(t146));
    t150 = *((unsigned int *)t91);
    t147 = (t150 & t149);
    t151 = *((unsigned int *)t162);
    t152 = (~(t151));
    t153 = *((unsigned int *)t115);
    t148 = (t153 & t152);
    t154 = (~(t147));
    t156 = (~(t148));
    t157 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t157 & t154);
    t158 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t158 & t156);
    goto LAB102;

LAB103:    *((unsigned int *)t161) = 1;
    goto LAB106;

LAB105:    t164 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t164) = 1;
    goto LAB106;

LAB107:    t166 = (t0 + 5232);
    t170 = (t166 + 56U);
    t171 = *((char **)t170);
    t172 = ((char*)((ng8)));
    memset(t167, 0, 8);
    t173 = (t171 + 4);
    t174 = (t172 + 4);
    t193 = *((unsigned int *)t171);
    t194 = *((unsigned int *)t172);
    t195 = (t193 ^ t194);
    t196 = *((unsigned int *)t173);
    t197 = *((unsigned int *)t174);
    t198 = (t196 ^ t197);
    t199 = (t195 | t198);
    t200 = *((unsigned int *)t173);
    t201 = *((unsigned int *)t174);
    t202 = (t200 | t201);
    t203 = (~(t202));
    t204 = (t199 & t203);
    if (t204 != 0)
        goto LAB113;

LAB110:    if (t202 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t167) = 1;

LAB113:    memset(t168, 0, 8);
    t178 = (t167 + 4);
    t205 = *((unsigned int *)t178);
    t206 = (~(t205));
    t207 = *((unsigned int *)t167);
    t208 = (t207 & t206);
    t209 = (t208 & 1U);
    if (t209 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t178) != 0)
        goto LAB116;

LAB117:    t210 = *((unsigned int *)t161);
    t211 = *((unsigned int *)t168);
    t212 = (t210 | t211);
    *((unsigned int *)t169) = t212;
    t213 = (t161 + 4);
    t214 = (t168 + 4);
    t215 = (t169 + 4);
    t216 = *((unsigned int *)t213);
    t217 = *((unsigned int *)t214);
    t218 = (t216 | t217);
    *((unsigned int *)t215) = t218;
    t219 = *((unsigned int *)t215);
    t220 = (t219 != 0);
    if (t220 == 1)
        goto LAB118;

LAB119:
LAB120:    goto LAB109;

LAB112:    t175 = (t167 + 4);
    *((unsigned int *)t167) = 1;
    *((unsigned int *)t175) = 1;
    goto LAB113;

LAB114:    *((unsigned int *)t168) = 1;
    goto LAB117;

LAB116:    t182 = (t168 + 4);
    *((unsigned int *)t168) = 1;
    *((unsigned int *)t182) = 1;
    goto LAB117;

LAB118:    t221 = *((unsigned int *)t169);
    t222 = *((unsigned int *)t215);
    *((unsigned int *)t169) = (t221 | t222);
    t223 = (t161 + 4);
    t224 = (t168 + 4);
    t225 = *((unsigned int *)t223);
    t226 = (~(t225));
    t227 = *((unsigned int *)t161);
    t177 = (t227 & t226);
    t228 = *((unsigned int *)t224);
    t229 = (~(t228));
    t230 = *((unsigned int *)t168);
    t180 = (t230 & t229);
    t231 = (~(t177));
    t232 = (~(t180));
    t233 = *((unsigned int *)t215);
    *((unsigned int *)t215) = (t233 & t231);
    t234 = *((unsigned int *)t215);
    *((unsigned int *)t215) = (t234 & t232);
    goto LAB120;

LAB121:    *((unsigned int *)t235) = 1;
    goto LAB124;

LAB123:    t242 = (t235 + 4);
    *((unsigned int *)t235) = 1;
    *((unsigned int *)t242) = 1;
    goto LAB124;

LAB125:    t247 = (t0 + 4032U);
    t248 = *((char **)t247);
    memset(t249, 0, 8);
    t247 = (t248 + 4);
    t250 = *((unsigned int *)t247);
    t251 = (~(t250));
    t252 = *((unsigned int *)t248);
    t253 = (t252 & t251);
    t254 = (t253 & 1U);
    if (t254 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t247) != 0)
        goto LAB130;

LAB131:    t257 = *((unsigned int *)t235);
    t258 = *((unsigned int *)t249);
    t259 = (t257 & t258);
    *((unsigned int *)t256) = t259;
    t260 = (t235 + 4);
    t261 = (t249 + 4);
    t262 = (t256 + 4);
    t263 = *((unsigned int *)t260);
    t264 = *((unsigned int *)t261);
    t265 = (t263 | t264);
    *((unsigned int *)t262) = t265;
    t266 = *((unsigned int *)t262);
    t267 = (t266 != 0);
    if (t267 == 1)
        goto LAB132;

LAB133:
LAB134:    goto LAB127;

LAB128:    *((unsigned int *)t249) = 1;
    goto LAB131;

LAB130:    t255 = (t249 + 4);
    *((unsigned int *)t249) = 1;
    *((unsigned int *)t255) = 1;
    goto LAB131;

LAB132:    t268 = *((unsigned int *)t256);
    t269 = *((unsigned int *)t262);
    *((unsigned int *)t256) = (t268 | t269);
    t270 = (t235 + 4);
    t271 = (t249 + 4);
    t272 = *((unsigned int *)t235);
    t273 = (~(t272));
    t274 = *((unsigned int *)t270);
    t275 = (~(t274));
    t276 = *((unsigned int *)t249);
    t277 = (~(t276));
    t278 = *((unsigned int *)t271);
    t279 = (~(t278));
    t181 = (t273 & t275);
    t184 = (t277 & t279);
    t280 = (~(t181));
    t281 = (~(t184));
    t282 = *((unsigned int *)t262);
    *((unsigned int *)t262) = (t282 & t280);
    t283 = *((unsigned int *)t262);
    *((unsigned int *)t262) = (t283 & t281);
    t284 = *((unsigned int *)t256);
    *((unsigned int *)t256) = (t284 & t280);
    t285 = *((unsigned int *)t256);
    *((unsigned int *)t256) = (t285 & t281);
    goto LAB134;

LAB135:    *((unsigned int *)t286) = 1;
    goto LAB138;

LAB137:    t293 = (t286 + 4);
    *((unsigned int *)t286) = 1;
    *((unsigned int *)t293) = 1;
    goto LAB138;

LAB139:    t299 = (t0 + 3712U);
    t300 = *((char **)t299);
    memset(t298, 0, 8);
    t299 = (t300 + 4);
    t301 = *((unsigned int *)t299);
    t302 = (~(t301));
    t303 = *((unsigned int *)t300);
    t304 = (t303 & t302);
    t305 = (t304 & 1U);
    if (t305 != 0)
        goto LAB145;

LAB143:    if (*((unsigned int *)t299) == 0)
        goto LAB142;

LAB144:    t306 = (t298 + 4);
    *((unsigned int *)t298) = 1;
    *((unsigned int *)t306) = 1;

LAB145:    memset(t307, 0, 8);
    t308 = (t298 + 4);
    t309 = *((unsigned int *)t308);
    t310 = (~(t309));
    t311 = *((unsigned int *)t298);
    t312 = (t311 & t310);
    t313 = (t312 & 1U);
    if (t313 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t308) != 0)
        goto LAB148;

LAB149:    t316 = *((unsigned int *)t286);
    t317 = *((unsigned int *)t307);
    t318 = (t316 & t317);
    *((unsigned int *)t315) = t318;
    t319 = (t286 + 4);
    t320 = (t307 + 4);
    t321 = (t315 + 4);
    t322 = *((unsigned int *)t319);
    t323 = *((unsigned int *)t320);
    t324 = (t322 | t323);
    *((unsigned int *)t321) = t324;
    t325 = *((unsigned int *)t321);
    t326 = (t325 != 0);
    if (t326 == 1)
        goto LAB150;

LAB151:
LAB152:    goto LAB141;

LAB142:    *((unsigned int *)t298) = 1;
    goto LAB145;

LAB146:    *((unsigned int *)t307) = 1;
    goto LAB149;

LAB148:    t314 = (t307 + 4);
    *((unsigned int *)t307) = 1;
    *((unsigned int *)t314) = 1;
    goto LAB149;

LAB150:    t327 = *((unsigned int *)t315);
    t328 = *((unsigned int *)t321);
    *((unsigned int *)t315) = (t327 | t328);
    t329 = (t286 + 4);
    t330 = (t307 + 4);
    t331 = *((unsigned int *)t286);
    t332 = (~(t331));
    t333 = *((unsigned int *)t329);
    t334 = (~(t333));
    t335 = *((unsigned int *)t307);
    t336 = (~(t335));
    t337 = *((unsigned int *)t330);
    t338 = (~(t337));
    t185 = (t332 & t334);
    t187 = (t336 & t338);
    t339 = (~(t185));
    t340 = (~(t187));
    t341 = *((unsigned int *)t321);
    *((unsigned int *)t321) = (t341 & t339);
    t342 = *((unsigned int *)t321);
    *((unsigned int *)t321) = (t342 & t340);
    t343 = *((unsigned int *)t315);
    *((unsigned int *)t315) = (t343 & t339);
    t344 = *((unsigned int *)t315);
    *((unsigned int *)t315) = (t344 & t340);
    goto LAB152;

LAB153:    xsi_set_current_line(380, ng0);

LAB156:    xsi_set_current_line(381, ng0);
    t352 = (t0 + 3392U);
    t353 = *((char **)t352);
    t352 = (t0 + 3552U);
    t354 = *((char **)t352);
    xsi_vlogtype_concat(t351, 2, 2, 2U, t354, 1, t353, 1);
    t352 = (t0 + 4592);
    t358 = (t0 + 4592);
    t359 = (t358 + 72U);
    t360 = *((char **)t359);
    t361 = ((char*)((ng14)));
    t362 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t355, t356, t357, ((int*)(t360)), 2, t361, 32, 1, t362, 32, 1);
    t363 = (t355 + 4);
    t364 = *((unsigned int *)t363);
    t190 = (!(t364));
    t365 = (t356 + 4);
    t366 = *((unsigned int *)t365);
    t191 = (!(t366));
    t367 = (t190 && t191);
    t368 = (t357 + 4);
    t369 = *((unsigned int *)t368);
    t370 = (!(t369));
    t371 = (t367 && t370);
    if (t371 == 1)
        goto LAB157;

LAB158:    goto LAB155;

LAB157:    t372 = *((unsigned int *)t357);
    t373 = (t372 + 0);
    t374 = *((unsigned int *)t355);
    t375 = *((unsigned int *)t356);
    t376 = (t374 - t375);
    t377 = (t376 + 1);
    xsi_vlogvar_wait_assign_value(t352, t351, t373, *((unsigned int *)t356), t377, 0LL);
    goto LAB158;

LAB161:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB162;

LAB163:    *((unsigned int *)t28) = 1;
    goto LAB166;

LAB165:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB166;

LAB167:    t32 = (t0 + 4912);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t30, 0, 8);
    t35 = (t30 + 4);
    t42 = (t34 + 4);
    t39 = *((unsigned int *)t34);
    t40 = (t39 >> 0);
    t41 = (t40 & 1);
    *((unsigned int *)t30) = t41;
    t44 = *((unsigned int *)t42);
    t45 = (t44 >> 0);
    t46 = (t45 & 1);
    *((unsigned int *)t35) = t46;
    memset(t55, 0, 8);
    t43 = (t30 + 4);
    t47 = *((unsigned int *)t43);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB170;

LAB171:    if (*((unsigned int *)t43) != 0)
        goto LAB172;

LAB173:    t52 = *((unsigned int *)t28);
    t53 = *((unsigned int *)t55);
    t57 = (t52 & t53);
    *((unsigned int *)t63) = t57;
    t56 = (t28 + 4);
    t62 = (t55 + 4);
    t67 = (t63 + 4);
    t58 = *((unsigned int *)t56);
    t59 = *((unsigned int *)t62);
    t60 = (t58 | t59);
    *((unsigned int *)t67) = t60;
    t61 = *((unsigned int *)t67);
    t64 = (t61 != 0);
    if (t64 == 1)
        goto LAB174;

LAB175:
LAB176:    goto LAB169;

LAB170:    *((unsigned int *)t55) = 1;
    goto LAB173;

LAB172:    t54 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB173;

LAB174:    t65 = *((unsigned int *)t63);
    t66 = *((unsigned int *)t67);
    *((unsigned int *)t63) = (t65 | t66);
    t68 = (t28 + 4);
    t69 = (t55 + 4);
    t70 = *((unsigned int *)t28);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (~(t72));
    t74 = *((unsigned int *)t55);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t79 = (~(t76));
    t82 = (t71 & t73);
    t86 = (t75 & t79);
    t80 = (~(t82));
    t81 = (~(t86));
    t83 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t83 & t80);
    t84 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t84 & t81);
    t85 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t85 & t80);
    t87 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t87 & t81);
    goto LAB176;

LAB177:    xsi_set_current_line(383, ng0);

LAB180:    xsi_set_current_line(384, ng0);
    t78 = (t0 + 2752U);
    t92 = *((char **)t78);
    t78 = (t0 + 2912U);
    t98 = *((char **)t78);
    t78 = (t0 + 3072U);
    t99 = *((char **)t78);
    t78 = (t0 + 3232U);
    t103 = *((char **)t78);
    xsi_vlogtype_concat(t91, 4, 4, 4U, t103, 1, t99, 1, t98, 1, t92, 1);
    t78 = (t0 + 4592);
    t104 = (t0 + 4592);
    t105 = (t104 + 72U);
    t107 = *((char **)t105);
    t108 = ((char*)((ng16)));
    t116 = ((char*)((ng17)));
    xsi_vlog_convert_partindices(t106, t115, t123, ((int*)(t107)), 2, t108, 32, 1, t116, 32, 1);
    t122 = (t106 + 4);
    t95 = *((unsigned int *)t122);
    t147 = (!(t95));
    t127 = (t115 + 4);
    t96 = *((unsigned int *)t127);
    t148 = (!(t96));
    t177 = (t147 && t148);
    t128 = (t123 + 4);
    t97 = *((unsigned int *)t128);
    t180 = (!(t97));
    t181 = (t177 && t180);
    if (t181 == 1)
        goto LAB181;

LAB182:    goto LAB179;

LAB181:    t100 = *((unsigned int *)t123);
    t184 = (t100 + 0);
    t101 = *((unsigned int *)t106);
    t102 = *((unsigned int *)t115);
    t185 = (t101 - t102);
    t187 = (t185 + 1);
    xsi_vlogvar_wait_assign_value(t78, t91, t184, *((unsigned int *)t115), t187, 0LL);
    goto LAB182;

}

static void Cont_392_3(char *t0)
{
    char t3[8];
    char t11[8];
    char t23[8];
    char t32[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;

LAB0:    t1 = (t0 + 7048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(392, ng0);
    t2 = (t0 + 3072U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    memset(t11, 0, 8);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t12) != 0)
        goto LAB10;

LAB11:    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB12;

LAB13:    memcpy(t40, t11, 8);

LAB14:    t72 = (t0 + 8024);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    memset(t76, 0, 8);
    t77 = 1U;
    t78 = t77;
    t79 = (t40 + 4);
    t80 = *((unsigned int *)t40);
    t77 = (t77 & t80);
    t81 = *((unsigned int *)t79);
    t78 = (t78 & t81);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t83 | t77);
    t84 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t84 | t78);
    xsi_driver_vfirst_trans(t72, 0, 0);
    t85 = (t0 + 7912);
    *((int *)t85) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB10:    t18 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB11;

LAB12:    t24 = (t0 + 3232U);
    t25 = *((char **)t24);
    memset(t23, 0, 8);
    t24 = (t25 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t25);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t24) == 0)
        goto LAB15;

LAB17:    t31 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t31) = 1;

LAB18:    memset(t32, 0, 8);
    t33 = (t23 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t23);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t33) != 0)
        goto LAB21;

LAB22:    t41 = *((unsigned int *)t11);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t11 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB15:    *((unsigned int *)t23) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t32) = 1;
    goto LAB22;

LAB21:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB22;

LAB23:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t11 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t11);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB25;

}

static void Cont_393_4(char *t0)
{
    char t3[8];
    char t11[8];
    char t23[8];
    char t32[8];
    char t40[8];
    char t72[8];
    char t84[8];
    char t93[8];
    char t101[8];
    char t133[8];
    char t145[8];
    char t154[8];
    char t162[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    int t125;
    int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    int t186;
    int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    char *t194;
    char *t195;
    char *t196;
    char *t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;

LAB0:    t1 = (t0 + 7296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(393, ng0);
    t2 = (t0 + 2752U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    memset(t11, 0, 8);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t3);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t12) != 0)
        goto LAB10;

LAB11:    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB12;

LAB13:    memcpy(t40, t11, 8);

LAB14:    memset(t72, 0, 8);
    t73 = (t40 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t40);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t73) != 0)
        goto LAB28;

LAB29:    t80 = (t72 + 4);
    t81 = *((unsigned int *)t72);
    t82 = *((unsigned int *)t80);
    t83 = (t81 || t82);
    if (t83 > 0)
        goto LAB30;

LAB31:    memcpy(t101, t72, 8);

LAB32:    memset(t133, 0, 8);
    t134 = (t101 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t101);
    t138 = (t137 & t136);
    t139 = (t138 & 1U);
    if (t139 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t134) != 0)
        goto LAB46;

LAB47:    t141 = (t133 + 4);
    t142 = *((unsigned int *)t133);
    t143 = *((unsigned int *)t141);
    t144 = (t142 || t143);
    if (t144 > 0)
        goto LAB48;

LAB49:    memcpy(t162, t133, 8);

LAB50:    t194 = (t0 + 8088);
    t195 = (t194 + 56U);
    t196 = *((char **)t195);
    t197 = (t196 + 56U);
    t198 = *((char **)t197);
    memset(t198, 0, 8);
    t199 = 1U;
    t200 = t199;
    t201 = (t162 + 4);
    t202 = *((unsigned int *)t162);
    t199 = (t199 & t202);
    t203 = *((unsigned int *)t201);
    t200 = (t200 & t203);
    t204 = (t198 + 4);
    t205 = *((unsigned int *)t198);
    *((unsigned int *)t198) = (t205 | t199);
    t206 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t206 | t200);
    xsi_driver_vfirst_trans(t194, 0, 0);
    t207 = (t0 + 7928);
    *((int *)t207) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB10:    t18 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB11;

LAB12:    t24 = (t0 + 2912U);
    t25 = *((char **)t24);
    memset(t23, 0, 8);
    t24 = (t25 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t25);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t24) == 0)
        goto LAB15;

LAB17:    t31 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t31) = 1;

LAB18:    memset(t32, 0, 8);
    t33 = (t23 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t23);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t33) != 0)
        goto LAB21;

LAB22:    t41 = *((unsigned int *)t11);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t11 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB15:    *((unsigned int *)t23) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t32) = 1;
    goto LAB22;

LAB21:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB22;

LAB23:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t11 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t11);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB25;

LAB26:    *((unsigned int *)t72) = 1;
    goto LAB29;

LAB28:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB29;

LAB30:    t85 = (t0 + 3072U);
    t86 = *((char **)t85);
    memset(t84, 0, 8);
    t85 = (t86 + 4);
    t87 = *((unsigned int *)t85);
    t88 = (~(t87));
    t89 = *((unsigned int *)t86);
    t90 = (t89 & t88);
    t91 = (t90 & 1U);
    if (t91 != 0)
        goto LAB36;

LAB34:    if (*((unsigned int *)t85) == 0)
        goto LAB33;

LAB35:    t92 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t92) = 1;

LAB36:    memset(t93, 0, 8);
    t94 = (t84 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t84);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t94) != 0)
        goto LAB39;

LAB40:    t102 = *((unsigned int *)t72);
    t103 = *((unsigned int *)t93);
    t104 = (t102 & t103);
    *((unsigned int *)t101) = t104;
    t105 = (t72 + 4);
    t106 = (t93 + 4);
    t107 = (t101 + 4);
    t108 = *((unsigned int *)t105);
    t109 = *((unsigned int *)t106);
    t110 = (t108 | t109);
    *((unsigned int *)t107) = t110;
    t111 = *((unsigned int *)t107);
    t112 = (t111 != 0);
    if (t112 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB32;

LAB33:    *((unsigned int *)t84) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t93) = 1;
    goto LAB40;

LAB39:    t100 = (t93 + 4);
    *((unsigned int *)t93) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB40;

LAB41:    t113 = *((unsigned int *)t101);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t101) = (t113 | t114);
    t115 = (t72 + 4);
    t116 = (t93 + 4);
    t117 = *((unsigned int *)t72);
    t118 = (~(t117));
    t119 = *((unsigned int *)t115);
    t120 = (~(t119));
    t121 = *((unsigned int *)t93);
    t122 = (~(t121));
    t123 = *((unsigned int *)t116);
    t124 = (~(t123));
    t125 = (t118 & t120);
    t126 = (t122 & t124);
    t127 = (~(t125));
    t128 = (~(t126));
    t129 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t129 & t127);
    t130 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t130 & t128);
    t131 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t131 & t127);
    t132 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t132 & t128);
    goto LAB43;

LAB44:    *((unsigned int *)t133) = 1;
    goto LAB47;

LAB46:    t140 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t140) = 1;
    goto LAB47;

LAB48:    t146 = (t0 + 3232U);
    t147 = *((char **)t146);
    memset(t145, 0, 8);
    t146 = (t147 + 4);
    t148 = *((unsigned int *)t146);
    t149 = (~(t148));
    t150 = *((unsigned int *)t147);
    t151 = (t150 & t149);
    t152 = (t151 & 1U);
    if (t152 != 0)
        goto LAB54;

LAB52:    if (*((unsigned int *)t146) == 0)
        goto LAB51;

LAB53:    t153 = (t145 + 4);
    *((unsigned int *)t145) = 1;
    *((unsigned int *)t153) = 1;

LAB54:    memset(t154, 0, 8);
    t155 = (t145 + 4);
    t156 = *((unsigned int *)t155);
    t157 = (~(t156));
    t158 = *((unsigned int *)t145);
    t159 = (t158 & t157);
    t160 = (t159 & 1U);
    if (t160 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t155) != 0)
        goto LAB57;

LAB58:    t163 = *((unsigned int *)t133);
    t164 = *((unsigned int *)t154);
    t165 = (t163 & t164);
    *((unsigned int *)t162) = t165;
    t166 = (t133 + 4);
    t167 = (t154 + 4);
    t168 = (t162 + 4);
    t169 = *((unsigned int *)t166);
    t170 = *((unsigned int *)t167);
    t171 = (t169 | t170);
    *((unsigned int *)t168) = t171;
    t172 = *((unsigned int *)t168);
    t173 = (t172 != 0);
    if (t173 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB51:    *((unsigned int *)t145) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t154) = 1;
    goto LAB58;

LAB57:    t161 = (t154 + 4);
    *((unsigned int *)t154) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB58;

LAB59:    t174 = *((unsigned int *)t162);
    t175 = *((unsigned int *)t168);
    *((unsigned int *)t162) = (t174 | t175);
    t176 = (t133 + 4);
    t177 = (t154 + 4);
    t178 = *((unsigned int *)t133);
    t179 = (~(t178));
    t180 = *((unsigned int *)t176);
    t181 = (~(t180));
    t182 = *((unsigned int *)t154);
    t183 = (~(t182));
    t184 = *((unsigned int *)t177);
    t185 = (~(t184));
    t186 = (t179 & t181);
    t187 = (t183 & t185);
    t188 = (~(t186));
    t189 = (~(t187));
    t190 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t190 & t188);
    t191 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t191 & t189);
    t192 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t192 & t188);
    t193 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t193 & t189);
    goto LAB61;

}

static void Cont_395_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(395, ng0);
    t2 = (t0 + 4592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 4095U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 11);
    t18 = (t0 + 7944);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_06823190561096978504_2122241069_init()
{
	static char *pe[] = {(void *)Always_290_0,(void *)Always_301_1,(void *)Always_363_2,(void *)Cont_392_3,(void *)Cont_393_4,(void *)Cont_395_5};
	xsi_register_didat("work_m_06823190561096978504_2122241069", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/m_06823190561096978504_2122241069.didat");
	xsi_register_executes(pe);
}
