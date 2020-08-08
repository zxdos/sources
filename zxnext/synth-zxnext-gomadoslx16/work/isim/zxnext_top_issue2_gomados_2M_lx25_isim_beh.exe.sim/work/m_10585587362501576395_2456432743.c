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
static unsigned int ng3[] = {17U, 0U};
static unsigned int ng4[] = {4U, 0U};
static int ng5[] = {5, 0};
static unsigned int ng6[] = {5U, 0U};
static int ng7[] = {4, 0};
static unsigned int ng8[] = {6U, 0U};
static int ng9[] = {3, 0};
static unsigned int ng10[] = {7U, 0U};
static int ng11[] = {2, 0};
static unsigned int ng12[] = {8U, 0U};
static int ng13[] = {1, 0};
static unsigned int ng14[] = {9U, 0U};
static int ng15[] = {0, 0};
static unsigned int ng16[] = {12U, 0U};
static unsigned int ng17[] = {13U, 0U};
static unsigned int ng18[] = {14U, 0U};
static unsigned int ng19[] = {15U, 0U};
static unsigned int ng20[] = {16U, 0U};



static void Always_47_0(char *t0)
{
    char t13[8];
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

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 8040);
    *((int *)t2) = 1;
    t3 = (t0 + 5272);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(50, ng0);

LAB10:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 8, t4, 8, t5, 8);
    t11 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 8, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(48, ng0);

LAB9:    xsi_set_current_line(49, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB8;

}

static void Cont_89_1(char *t0)
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

LAB0:    t1 = (t0 + 5488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8056);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_104_2(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 5736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 8072);
    *((int *)t2) = 1;
    t3 = (t0 + 5768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);

LAB5:    xsi_set_current_line(106, ng0);
    t4 = (t0 + 4328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(111, ng0);

LAB14:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB12:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB18;

LAB15:    if (t20 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t8) = 1;

LAB18:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(119, ng0);

LAB23:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 5, t4, 5, t5, 5);
    t6 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 5, 0LL);

LAB21:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(107, ng0);

LAB13:    xsi_set_current_line(108, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 0LL);
    goto LAB12;

LAB17:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(115, ng0);

LAB22:    xsi_set_current_line(116, ng0);
    t23 = ((char*)((ng1)));
    t24 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t24, t23, 0, 0, 5, 0LL);
    goto LAB21;

}

static void Always_124_3(char *t0)
{
    char t11[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    int t18;

LAB0:    t1 = (t0 + 5984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 8088);
    *((int *)t2) = 1;
    t3 = (t0 + 6016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(124, ng0);

LAB5:    xsi_set_current_line(125, ng0);
    t4 = (t0 + 4328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(126, ng0);
    t9 = (t0 + 1208U);
    t10 = *((char **)t9);
    t9 = (t0 + 3848);
    t12 = (t0 + 3848);
    t13 = (t12 + 72U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t11, t14, 2, t15, 32, 1);
    t16 = (t11 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB32;

LAB33:    goto LAB31;

LAB9:    xsi_set_current_line(127, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 3848);
    t5 = (t0 + 3848);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB34;

LAB35:    goto LAB31;

LAB11:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 3848);
    t5 = (t0 + 3848);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB36;

LAB37:    goto LAB31;

LAB13:    xsi_set_current_line(129, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 3848);
    t5 = (t0 + 3848);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB38;

LAB39:    goto LAB31;

LAB15:    xsi_set_current_line(130, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 3848);
    t5 = (t0 + 3848);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB40;

LAB41:    goto LAB31;

LAB17:    xsi_set_current_line(131, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 3848);
    t5 = (t0 + 3848);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB42;

LAB43:    goto LAB31;

LAB19:    xsi_set_current_line(132, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 4008);
    t5 = (t0 + 4008);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB44;

LAB45:    goto LAB31;

LAB21:    xsi_set_current_line(133, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 4008);
    t5 = (t0 + 4008);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB46;

LAB47:    goto LAB31;

LAB23:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 4008);
    t5 = (t0 + 4008);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng9)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB48;

LAB49:    goto LAB31;

LAB25:    xsi_set_current_line(135, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 4008);
    t5 = (t0 + 4008);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB50;

LAB51:    goto LAB31;

LAB27:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 4008);
    t5 = (t0 + 4008);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng13)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB52;

LAB53:    goto LAB31;

LAB29:    xsi_set_current_line(137, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 4008);
    t5 = (t0 + 4008);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng15)));
    xsi_vlog_generic_convert_bit_index(t11, t9, 2, t10, 32, 1);
    t12 = (t11 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (!(t17));
    if (t18 == 1)
        goto LAB54;

LAB55:    goto LAB31;

LAB32:    xsi_vlogvar_wait_assign_value(t9, t10, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB33;

LAB34:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB35;

LAB36:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB37;

LAB38:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB39;

LAB40:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB41;

LAB42:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB43;

LAB44:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB45;

LAB46:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB47;

LAB48:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB49;

LAB50:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB51;

LAB52:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB53;

LAB54:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB55;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 6232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
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

LAB7:    t11 = (t0 + 8280);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 1U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 0);
    t24 = (t0 + 8104);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void implSig2_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 6480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1688U);
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

LAB7:    t11 = (t0 + 8344);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 1U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 0);
    t24 = (t0 + 8120);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void implSig3_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng2)));
    t3 = (t0 + 8408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig4_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 8472);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig5_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 8536);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig6_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 8600);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig7_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 7720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t3 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t3) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 8664);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 1U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t36 = (t0 + 8136);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t3) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

}


extern void work_m_10585587362501576395_2456432743_init()
{
	static char *pe[] = {(void *)Always_47_0,(void *)Cont_89_1,(void *)Always_104_2,(void *)Always_124_3,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute,(void *)implSig5_execute,(void *)implSig6_execute,(void *)implSig7_execute};
	xsi_register_didat("work_m_10585587362501576395_2456432743", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/m_10585587362501576395_2456432743.didat");
	xsi_register_executes(pe);
}
