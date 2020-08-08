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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/audio/turbosound.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_4286761183_1516540902_p_0(char *t0)
{
    char t26[16];
    char t29[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    unsigned char t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    int t32;
    unsigned char t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    int t39;
    char *t40;
    int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 22048);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(120, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t13 = *((unsigned char *)t3);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB16;

LAB17:    t6 = (unsigned char)0;

LAB18:    if (t6 == 1)
        goto LAB13;

LAB14:    t5 = (unsigned char)0;

LAB15:    if (t5 == 1)
        goto LAB10;

LAB11:    t2 = (unsigned char)0;

LAB12:    if (t2 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(122, ng0);
    t3 = (t0 + 39055);
    t8 = (t0 + 22656);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 2U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 39057);
    t4 = (t0 + 22720);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 39059);
    t4 = (t0 + 22784);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 39061);
    t4 = (t0 + 22848);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

LAB8:    xsi_set_current_line(130, ng0);
    t31 = (t0 + 2152U);
    t34 = *((char **)t31);
    t28 = (7 - 1);
    t35 = (t28 * 1U);
    t36 = (0 + t35);
    t31 = (t34 + t36);
    t37 = (t0 + 39066);
    t39 = xsi_mem_cmp(t37, t31, 2U);
    if (t39 == 1)
        goto LAB20;

LAB23:    t40 = (t0 + 39068);
    t42 = xsi_mem_cmp(t40, t31, 2U);
    if (t42 == 1)
        goto LAB21;

LAB24:
LAB22:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t18 = (7 - 6);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t1 = (t3 + t20);
    t4 = (t0 + 22720);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 39074);
    t4 = (t0 + 22656);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t4);

LAB19:    goto LAB6;

LAB10:    t8 = (t0 + 2152U);
    t9 = *((char **)t8);
    t23 = (7 - 4);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t8 = (t9 + t25);
    t10 = (t26 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 4;
    t11 = (t10 + 4U);
    *((int *)t11) = 2;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t27 = (2 - 4);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t28;
    t11 = (t0 + 39063);
    t30 = (t29 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = 0;
    t31 = (t30 + 4U);
    *((int *)t31) = 2;
    t31 = (t30 + 8U);
    *((int *)t31) = 1;
    t32 = (2 - 0);
    t28 = (t32 * 1);
    t28 = (t28 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t28;
    t33 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t26, t11, t29);
    t2 = t33;
    goto LAB12;

LAB13:    t1 = (t0 + 2152U);
    t7 = *((char **)t1);
    t17 = (7 - 7);
    t18 = (t17 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t1 = (t7 + t20);
    t21 = *((unsigned char *)t1);
    t22 = (t21 == (unsigned char)3);
    t5 = t22;
    goto LAB15;

LAB16:    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    t6 = t16;
    goto LAB18;

LAB20:    xsi_set_current_line(131, ng0);
    t43 = (t0 + 2152U);
    t44 = *((char **)t43);
    t45 = (7 - 6);
    t46 = (t45 * 1U);
    t47 = (0 + t46);
    t43 = (t44 + t47);
    t48 = (t0 + 22784);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memcpy(t52, t43, 2U);
    xsi_driver_first_trans_fast(t48);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 39070);
    t4 = (t0 + 22656);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB19;

LAB21:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t18 = (7 - 6);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t1 = (t3 + t20);
    t4 = (t0 + 22848);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 39072);
    t4 = (t0 + 22656);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB19;

LAB25:;
}

static void work_a_4286761183_1516540902_p_1(char *t0)
{
    char t10[16];
    char t16[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t17;
    char *t18;
    int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t25 = (t0 + 22912);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)2;
    xsi_driver_first_trans_fast(t25);

LAB2:    t30 = (t0 + 22064);
    *((int *)t30) = 1;

LAB1:    return;
LAB3:    t18 = (t0 + 22912);
    t21 = (t18 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

LAB5:    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t7 = (7 - 7);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t2 = (t6 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 7;
    t12 = (t11 + 4U);
    *((int *)t12) = 5;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (5 - 7);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t0 + 39076);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 2;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (2 - 0);
    t14 = (t19 * 1);
    t14 = (t14 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t14;
    t20 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t10, t12, t16);
    t1 = t20;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_2(char *t0)
{
    char t6[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 37824U);
    t4 = (t0 + 39079);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t19 = (t0 + 22976);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 22080);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 22976);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t8 = (t0 + 3752U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_3(char *t0)
{
    char t6[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 37824U);
    t4 = (t0 + 39081);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t19 = (t0 + 23040);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 22096);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 23040);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t8 = (t0 + 1992U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_4(char *t0)
{
    char t6[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 37824U);
    t4 = (t0 + 39083);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t19 = (t0 + 23104);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 22112);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 23104);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t8 = (t0 + 3752U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_5(char *t0)
{
    char t6[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 37824U);
    t4 = (t0 + 39085);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t19 = (t0 + 23168);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 22128);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 23168);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t8 = (t0 + 1992U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_6(char *t0)
{
    char t6[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 37824U);
    t4 = (t0 + 39087);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t19 = (t0 + 23232);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 22144);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 23232);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t8 = (t0 + 3752U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_7(char *t0)
{
    char t6[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 37824U);
    t4 = (t0 + 39089);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t9 = (1 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t4, t6);
    if (t11 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t19 = (t0 + 23296);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 22160);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 23296);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t8 = (t0 + 1992U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_8(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t7 = (0 - 2);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t2 = (t6 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t19 = (t0 + 5192U);
    t20 = *((char **)t19);
    t19 = (t0 + 23360);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t20, 8U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t25 = (t0 + 22176);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 5352U);
    t14 = *((char **)t13);
    t13 = (t0 + 23360);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 8U);
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_9(char *t0)
{
    char t1[16];
    char t4[16];
    char t9[16];
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(182, ng0);

LAB3:    t2 = (t0 + 5512U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4000);
    t6 = (t0 + 37952U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)2, (char)97, t3, t6, (char)101);
    t7 = (t0 + 5032U);
    t8 = *((char **)t7);
    t10 = ((IEEE_P_2592010699) + 4000);
    t11 = (t0 + 37904U);
    t7 = xsi_base_array_concat(t7, t9, t10, (char)99, (unsigned char)2, (char)97, t8, t11, (char)101);
    t12 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t1, t2, t4, t7, t9);
    t13 = (t1 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    t16 = (9U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 23424);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 9U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 22192);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t15, 0);
    goto LAB6;

}

static void work_a_4286761183_1516540902_p_10(char *t0)
{
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(184, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (0 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 5352U);
    t16 = *((char **)t15);
    t18 = ((IEEE_P_2592010699) + 4000);
    t19 = (t0 + 37936U);
    t15 = xsi_base_array_concat(t15, t17, t18, (char)99, (unsigned char)2, (char)97, t16, t19, (char)101);
    t20 = (1U + 8U);
    t21 = (9U != t20);
    if (t21 == 1)
        goto LAB7;

LAB8:    t22 = (t0 + 23488);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t15, 9U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 22208);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 5672U);
    t10 = *((char **)t9);
    t9 = (t0 + 23488);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 9U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(9U, t20, 0);
    goto LAB8;

}

static void work_a_4286761183_1516540902_p_11(char *t0)
{
    char t1[16];
    char t4[16];
    char t11[16];
    char t13[16];
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(185, ng0);

LAB3:    t2 = (t0 + 5832U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4000);
    t6 = (t0 + 37984U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)2, (char)97, t3, t6, (char)101);
    t7 = (t0 + 39091);
    t9 = (t0 + 5192U);
    t10 = *((char **)t9);
    t12 = ((IEEE_P_2592010699) + 4000);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 1;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (1 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t0 + 37920U);
    t9 = xsi_base_array_concat(t9, t11, t12, (char)97, t7, t13, (char)97, t10, t15, (char)101);
    t18 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t1, t2, t4, t9, t11);
    t19 = (t1 + 12U);
    t17 = *((unsigned int *)t19);
    t20 = (1U * t17);
    t21 = (10U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t22 = (t0 + 23552);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t18, 10U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 22224);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(10U, t20, 0);
    goto LAB6;

}

static void work_a_4286761183_1516540902_p_12(char *t0)
{
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (0 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 5672U);
    t16 = *((char **)t15);
    t18 = ((IEEE_P_2592010699) + 4000);
    t19 = (t0 + 37968U);
    t15 = xsi_base_array_concat(t15, t17, t18, (char)99, (unsigned char)2, (char)97, t16, t19, (char)101);
    t20 = (1U + 9U);
    t21 = (10U != t20);
    if (t21 == 1)
        goto LAB7;

LAB8:    t22 = (t0 + 23616);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t15, 10U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 22240);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 5992U);
    t10 = *((char **)t9);
    t9 = (t0 + 23616);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 10U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(10U, t20, 0);
    goto LAB8;

}

static void work_a_4286761183_1516540902_p_13(char *t0)
{
    char t8[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(191, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 22256);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(192, ng0);
    t4 = (t0 + 3112U);
    t5 = *((char **)t4);
    t4 = (t0 + 37824U);
    t6 = (t0 + 39093);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (1 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t4, t6, t8);
    if (t13 == 1)
        goto LAB8;

LAB9:    t10 = (t0 + 1672U);
    t14 = *((char **)t10);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)3);
    t3 = t16;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(196, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t4 = t1;
    memset(t4, (unsigned char)2, 10U);
    t5 = (t0 + 23680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(197, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t4 = t1;
    memset(t4, (unsigned char)2, 10U);
    t5 = (t0 + 23744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t5);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(193, ng0);
    t10 = (t0 + 6152U);
    t17 = *((char **)t10);
    t10 = (t0 + 23680);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t17, 10U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(194, ng0);
    t1 = (t0 + 5992U);
    t4 = *((char **)t1);
    t1 = (t0 + 23744);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t4, 10U);
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

}

static void work_a_4286761183_1516540902_p_14(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t7 = (1 - 2);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t2 = (t6 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t19 = (t0 + 6952U);
    t20 = *((char **)t19);
    t19 = (t0 + 23808);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t20, 8U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t25 = (t0 + 22272);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 7112U);
    t14 = *((char **)t13);
    t13 = (t0 + 23808);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 8U);
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_15(char *t0)
{
    char t1[16];
    char t4[16];
    char t9[16];
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(233, ng0);

LAB3:    t2 = (t0 + 7272U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4000);
    t6 = (t0 + 38128U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)2, (char)97, t3, t6, (char)101);
    t7 = (t0 + 6792U);
    t8 = *((char **)t7);
    t10 = ((IEEE_P_2592010699) + 4000);
    t11 = (t0 + 38080U);
    t7 = xsi_base_array_concat(t7, t9, t10, (char)99, (unsigned char)2, (char)97, t8, t11, (char)101);
    t12 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t1, t2, t4, t7, t9);
    t13 = (t1 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    t16 = (9U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 23872);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 9U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 22288);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t15, 0);
    goto LAB6;

}

static void work_a_4286761183_1516540902_p_16(char *t0)
{
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(235, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (1 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 7112U);
    t16 = *((char **)t15);
    t18 = ((IEEE_P_2592010699) + 4000);
    t19 = (t0 + 38112U);
    t15 = xsi_base_array_concat(t15, t17, t18, (char)99, (unsigned char)2, (char)97, t16, t19, (char)101);
    t20 = (1U + 8U);
    t21 = (9U != t20);
    if (t21 == 1)
        goto LAB7;

LAB8:    t22 = (t0 + 23936);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t15, 9U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 22304);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 7432U);
    t10 = *((char **)t9);
    t9 = (t0 + 23936);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 9U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(9U, t20, 0);
    goto LAB8;

}

static void work_a_4286761183_1516540902_p_17(char *t0)
{
    char t1[16];
    char t4[16];
    char t11[16];
    char t13[16];
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(236, ng0);

LAB3:    t2 = (t0 + 7592U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4000);
    t6 = (t0 + 38160U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)2, (char)97, t3, t6, (char)101);
    t7 = (t0 + 39095);
    t9 = (t0 + 6952U);
    t10 = *((char **)t9);
    t12 = ((IEEE_P_2592010699) + 4000);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 1;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (1 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t0 + 38096U);
    t9 = xsi_base_array_concat(t9, t11, t12, (char)97, t7, t13, (char)97, t10, t15, (char)101);
    t18 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t1, t2, t4, t9, t11);
    t19 = (t1 + 12U);
    t17 = *((unsigned int *)t19);
    t20 = (1U * t17);
    t21 = (10U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t22 = (t0 + 24000);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t18, 10U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 22320);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(10U, t20, 0);
    goto LAB6;

}

static void work_a_4286761183_1516540902_p_18(char *t0)
{
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(238, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (1 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 7432U);
    t16 = *((char **)t15);
    t18 = ((IEEE_P_2592010699) + 4000);
    t19 = (t0 + 38144U);
    t15 = xsi_base_array_concat(t15, t17, t18, (char)99, (unsigned char)2, (char)97, t16, t19, (char)101);
    t20 = (1U + 9U);
    t21 = (10U != t20);
    if (t21 == 1)
        goto LAB7;

LAB8:    t22 = (t0 + 24064);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t15, 10U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 22336);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 7752U);
    t10 = *((char **)t9);
    t9 = (t0 + 24064);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 10U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(10U, t20, 0);
    goto LAB8;

}

static void work_a_4286761183_1516540902_p_19(char *t0)
{
    char t8[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(242, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 22352);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(243, ng0);
    t4 = (t0 + 3112U);
    t5 = *((char **)t4);
    t4 = (t0 + 37824U);
    t6 = (t0 + 39097);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (1 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t4, t6, t8);
    if (t13 == 1)
        goto LAB8;

LAB9:    t10 = (t0 + 1672U);
    t14 = *((char **)t10);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)3);
    t3 = t16;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(247, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t4 = t1;
    memset(t4, (unsigned char)2, 10U);
    t5 = (t0 + 24128);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(248, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t4 = t1;
    memset(t4, (unsigned char)2, 10U);
    t5 = (t0 + 24192);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t5);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(244, ng0);
    t10 = (t0 + 7912U);
    t17 = *((char **)t10);
    t10 = (t0 + 24128);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t17, 10U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(245, ng0);
    t1 = (t0 + 7752U);
    t4 = *((char **)t1);
    t1 = (t0 + 24192);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t4, 10U);
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

}

static void work_a_4286761183_1516540902_p_20(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(283, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 2472U);
    t6 = *((char **)t2);
    t7 = (2 - 2);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t2 = (t6 + t10);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t19 = (t0 + 8712U);
    t20 = *((char **)t19);
    t19 = (t0 + 24256);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t20, 8U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t25 = (t0 + 22368);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 8872U);
    t14 = *((char **)t13);
    t13 = (t0 + 24256);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 8U);
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_21(char *t0)
{
    char t1[16];
    char t4[16];
    char t9[16];
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(284, ng0);

LAB3:    t2 = (t0 + 9032U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4000);
    t6 = (t0 + 38304U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)2, (char)97, t3, t6, (char)101);
    t7 = (t0 + 8552U);
    t8 = *((char **)t7);
    t10 = ((IEEE_P_2592010699) + 4000);
    t11 = (t0 + 38256U);
    t7 = xsi_base_array_concat(t7, t9, t10, (char)99, (unsigned char)2, (char)97, t8, t11, (char)101);
    t12 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t1, t2, t4, t7, t9);
    t13 = (t1 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    t16 = (9U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 24320);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 9U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 22384);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t15, 0);
    goto LAB6;

}

static void work_a_4286761183_1516540902_p_22(char *t0)
{
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(286, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (2 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 8872U);
    t16 = *((char **)t15);
    t18 = ((IEEE_P_2592010699) + 4000);
    t19 = (t0 + 38288U);
    t15 = xsi_base_array_concat(t15, t17, t18, (char)99, (unsigned char)2, (char)97, t16, t19, (char)101);
    t20 = (1U + 8U);
    t21 = (9U != t20);
    if (t21 == 1)
        goto LAB7;

LAB8:    t22 = (t0 + 24384);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t15, 9U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 22400);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 9192U);
    t10 = *((char **)t9);
    t9 = (t0 + 24384);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 9U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(9U, t20, 0);
    goto LAB8;

}

static void work_a_4286761183_1516540902_p_23(char *t0)
{
    char t1[16];
    char t4[16];
    char t11[16];
    char t13[16];
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t12;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(287, ng0);

LAB3:    t2 = (t0 + 9352U);
    t3 = *((char **)t2);
    t5 = ((IEEE_P_2592010699) + 4000);
    t6 = (t0 + 38336U);
    t2 = xsi_base_array_concat(t2, t4, t5, (char)99, (unsigned char)2, (char)97, t3, t6, (char)101);
    t7 = (t0 + 39099);
    t9 = (t0 + 8712U);
    t10 = *((char **)t9);
    t12 = ((IEEE_P_2592010699) + 4000);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 1;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (1 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t0 + 38272U);
    t9 = xsi_base_array_concat(t9, t11, t12, (char)97, t7, t13, (char)97, t10, t15, (char)101);
    t18 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t1, t2, t4, t9, t11);
    t19 = (t1 + 12U);
    t17 = *((unsigned int *)t19);
    t20 = (1U * t17);
    t21 = (10U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t22 = (t0 + 24448);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t18, 10U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 22416);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(10U, t20, 0);
    goto LAB6;

}

static void work_a_4286761183_1516540902_p_24(char *t0)
{
    char t17[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(289, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (2 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 9192U);
    t16 = *((char **)t15);
    t18 = ((IEEE_P_2592010699) + 4000);
    t19 = (t0 + 38320U);
    t15 = xsi_base_array_concat(t15, t17, t18, (char)99, (unsigned char)2, (char)97, t16, t19, (char)101);
    t20 = (1U + 9U);
    t21 = (10U != t20);
    if (t21 == 1)
        goto LAB7;

LAB8:    t22 = (t0 + 24512);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t15, 10U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 22432);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 9512U);
    t10 = *((char **)t9);
    t9 = (t0 + 24512);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 10U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(10U, t20, 0);
    goto LAB8;

}

static void work_a_4286761183_1516540902_p_25(char *t0)
{
    char t8[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(293, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 22448);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(294, ng0);
    t4 = (t0 + 3112U);
    t5 = *((char **)t4);
    t4 = (t0 + 37824U);
    t6 = (t0 + 39101);
    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t11 = (1 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t13 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t4, t6, t8);
    if (t13 == 1)
        goto LAB8;

LAB9:    t10 = (t0 + 1672U);
    t14 = *((char **)t10);
    t15 = *((unsigned char *)t14);
    t16 = (t15 == (unsigned char)3);
    t3 = t16;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(298, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t4 = t1;
    memset(t4, (unsigned char)2, 10U);
    t5 = (t0 + 24576);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(299, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t4 = t1;
    memset(t4, (unsigned char)2, 10U);
    t5 = (t0 + 24640);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t5);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(295, ng0);
    t10 = (t0 + 9672U);
    t17 = *((char **)t10);
    t10 = (t0 + 24576);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t17, 10U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(296, ng0);
    t1 = (t0 + 9512U);
    t4 = *((char **)t1);
    t1 = (t0 + 24640);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t4, 10U);
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

}

static void work_a_4286761183_1516540902_p_26(char *t0)
{
    char t5[16];
    char t20[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t21;
    char *t22;
    int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(308, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 37824U);
    t3 = (t0 + 39103);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 1;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (1 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:    t16 = (t0 + 3112U);
    t17 = *((char **)t16);
    t16 = (t0 + 37824U);
    t18 = (t0 + 39105);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 1;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t23 = (1 - 0);
    t9 = (t23 * 1);
    t9 = (t9 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t9;
    t24 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t17, t16, t18, t20);
    if (t24 != 0)
        goto LAB5;

LAB6:
LAB7:    t30 = (t0 + 4872U);
    t31 = *((char **)t30);
    t30 = (t0 + 24704);
    t32 = (t30 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t31, 8U);
    xsi_driver_first_trans_fast_port(t30);

LAB2:    t36 = (t0 + 22464);
    *((int *)t36) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 6632U);
    t11 = *((char **)t7);
    t7 = (t0 + 24704);
    t12 = (t7 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB5:    t22 = (t0 + 8392U);
    t25 = *((char **)t22);
    t22 = (t0 + 24704);
    t26 = (t22 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t25, 8U);
    xsi_driver_first_trans_fast_port(t22);
    goto LAB2;

LAB8:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_27(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(310, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = (1 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = xsi_get_transient_memory(10U);
    memset(t15, 0, 10U);
    t16 = t15;
    memset(t16, (unsigned char)2, 10U);
    t17 = (t0 + 24768);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t15, 10U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 22480);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 6312U);
    t10 = *((char **)t9);
    t9 = (t0 + 24768);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 10U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_28(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(311, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = (1 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = xsi_get_transient_memory(10U);
    memset(t15, 0, 10U);
    t16 = t15;
    memset(t16, (unsigned char)2, 10U);
    t17 = (t0 + 24832);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t15, 10U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 22496);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 8072U);
    t10 = *((char **)t9);
    t9 = (t0 + 24832);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 10U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_29(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(312, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = (1 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = xsi_get_transient_memory(10U);
    memset(t15, 0, 10U);
    t16 = t15;
    memset(t16, (unsigned char)2, 10U);
    t17 = (t0 + 24896);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t15, 10U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 22512);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 9832U);
    t10 = *((char **)t9);
    t9 = (t0 + 24896);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 10U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_30(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(314, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = (0 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = xsi_get_transient_memory(10U);
    memset(t15, 0, 10U);
    t16 = t15;
    memset(t16, (unsigned char)2, 10U);
    t17 = (t0 + 24960);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t15, 10U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 22528);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 6472U);
    t10 = *((char **)t9);
    t9 = (t0 + 24960);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 10U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_31(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(315, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = (0 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = xsi_get_transient_memory(10U);
    memset(t15, 0, 10U);
    t16 = t15;
    memset(t16, (unsigned char)2, 10U);
    t17 = (t0 + 25024);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t15, 10U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 22544);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 8232U);
    t10 = *((char **)t9);
    t9 = (t0 + 25024);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 10U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_32(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(316, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = (0 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = xsi_get_transient_memory(10U);
    memset(t15, 0, 10U);
    t16 = t15;
    memset(t16, (unsigned char)2, 10U);
    t17 = (t0 + 25088);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t15, 10U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 22560);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 9992U);
    t10 = *((char **)t9);
    t9 = (t0 + 25088);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 10U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_4286761183_1516540902_p_33(char *t0)
{
    char t3[16];
    char t4[16];
    char t9[16];
    char t11[16];
    char t20[16];
    char t22[16];
    char t31[16];
    char t33[16];
    char *t1;
    unsigned char t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t34;
    char *t35;
    int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned char t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(320, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 22576);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(321, ng0);
    t5 = (t0 + 39107);
    t7 = (t0 + 10152U);
    t8 = *((char **)t7);
    t10 = ((IEEE_P_2592010699) + 4000);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t0 + 38416U);
    t7 = xsi_base_array_concat(t7, t9, t10, (char)97, t5, t11, (char)97, t8, t13, (char)101);
    t16 = (t0 + 39109);
    t18 = (t0 + 10312U);
    t19 = *((char **)t18);
    t21 = ((IEEE_P_2592010699) + 4000);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 0;
    t24 = (t23 + 4U);
    *((int *)t24) = 1;
    t24 = (t23 + 8U);
    *((int *)t24) = 1;
    t25 = (1 - 0);
    t15 = (t25 * 1);
    t15 = (t15 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t15;
    t24 = (t0 + 38432U);
    t18 = xsi_base_array_concat(t18, t20, t21, (char)97, t16, t22, (char)97, t19, t24, (char)101);
    t26 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t4, t7, t9, t18, t20);
    t27 = (t0 + 39111);
    t29 = (t0 + 10472U);
    t30 = *((char **)t29);
    t32 = ((IEEE_P_2592010699) + 4000);
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 0;
    t35 = (t34 + 4U);
    *((int *)t35) = 1;
    t35 = (t34 + 8U);
    *((int *)t35) = 1;
    t36 = (1 - 0);
    t15 = (t36 * 1);
    t15 = (t15 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t15;
    t35 = (t0 + 38448U);
    t29 = xsi_base_array_concat(t29, t31, t32, (char)97, t27, t33, (char)97, t30, t35, (char)101);
    t37 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t3, t26, t4, t29, t31);
    t38 = (t3 + 12U);
    t15 = *((unsigned int *)t38);
    t39 = (1U * t15);
    t40 = (12U != t39);
    if (t40 == 1)
        goto LAB5;

LAB6:    t41 = (t0 + 25152);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t37, 12U);
    xsi_driver_first_trans_fast_port(t41);
    xsi_set_current_line(322, ng0);
    t1 = (t0 + 39113);
    t6 = (t0 + 10632U);
    t7 = *((char **)t6);
    t8 = ((IEEE_P_2592010699) + 4000);
    t10 = (t11 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 0;
    t12 = (t10 + 4U);
    *((int *)t12) = 1;
    t12 = (t10 + 8U);
    *((int *)t12) = 1;
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t15;
    t12 = (t0 + 38464U);
    t6 = xsi_base_array_concat(t6, t9, t8, (char)97, t1, t11, (char)97, t7, t12, (char)101);
    t13 = (t0 + 39115);
    t17 = (t0 + 10792U);
    t18 = *((char **)t17);
    t19 = ((IEEE_P_2592010699) + 4000);
    t21 = (t22 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = 0;
    t23 = (t21 + 4U);
    *((int *)t23) = 1;
    t23 = (t21 + 8U);
    *((int *)t23) = 1;
    t25 = (1 - 0);
    t15 = (t25 * 1);
    t15 = (t15 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t15;
    t23 = (t0 + 38480U);
    t17 = xsi_base_array_concat(t17, t20, t19, (char)97, t13, t22, (char)97, t18, t23, (char)101);
    t24 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t4, t6, t9, t17, t20);
    t26 = (t0 + 39117);
    t28 = (t0 + 10952U);
    t29 = *((char **)t28);
    t30 = ((IEEE_P_2592010699) + 4000);
    t32 = (t33 + 0U);
    t34 = (t32 + 0U);
    *((int *)t34) = 0;
    t34 = (t32 + 4U);
    *((int *)t34) = 1;
    t34 = (t32 + 8U);
    *((int *)t34) = 1;
    t36 = (1 - 0);
    t15 = (t36 * 1);
    t15 = (t15 + 1);
    t34 = (t32 + 12U);
    *((unsigned int *)t34) = t15;
    t34 = (t0 + 38496U);
    t28 = xsi_base_array_concat(t28, t31, t30, (char)97, t26, t33, (char)97, t29, t34, (char)101);
    t35 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t3, t24, t4, t28, t31);
    t37 = (t3 + 12U);
    t15 = *((unsigned int *)t37);
    t39 = (1U * t15);
    t2 = (12U != t39);
    if (t2 == 1)
        goto LAB7;

LAB8:    t38 = (t0 + 25216);
    t41 = (t38 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t44, t35, 12U);
    xsi_driver_first_trans_fast_port(t38);
    goto LAB3;

LAB5:    xsi_size_not_matching(12U, t39, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(12U, t39, 0);
    goto LAB8;

}


extern void work_a_4286761183_1516540902_init()
{
	static char *pe[] = {(void *)work_a_4286761183_1516540902_p_0,(void *)work_a_4286761183_1516540902_p_1,(void *)work_a_4286761183_1516540902_p_2,(void *)work_a_4286761183_1516540902_p_3,(void *)work_a_4286761183_1516540902_p_4,(void *)work_a_4286761183_1516540902_p_5,(void *)work_a_4286761183_1516540902_p_6,(void *)work_a_4286761183_1516540902_p_7,(void *)work_a_4286761183_1516540902_p_8,(void *)work_a_4286761183_1516540902_p_9,(void *)work_a_4286761183_1516540902_p_10,(void *)work_a_4286761183_1516540902_p_11,(void *)work_a_4286761183_1516540902_p_12,(void *)work_a_4286761183_1516540902_p_13,(void *)work_a_4286761183_1516540902_p_14,(void *)work_a_4286761183_1516540902_p_15,(void *)work_a_4286761183_1516540902_p_16,(void *)work_a_4286761183_1516540902_p_17,(void *)work_a_4286761183_1516540902_p_18,(void *)work_a_4286761183_1516540902_p_19,(void *)work_a_4286761183_1516540902_p_20,(void *)work_a_4286761183_1516540902_p_21,(void *)work_a_4286761183_1516540902_p_22,(void *)work_a_4286761183_1516540902_p_23,(void *)work_a_4286761183_1516540902_p_24,(void *)work_a_4286761183_1516540902_p_25,(void *)work_a_4286761183_1516540902_p_26,(void *)work_a_4286761183_1516540902_p_27,(void *)work_a_4286761183_1516540902_p_28,(void *)work_a_4286761183_1516540902_p_29,(void *)work_a_4286761183_1516540902_p_30,(void *)work_a_4286761183_1516540902_p_31,(void *)work_a_4286761183_1516540902_p_32,(void *)work_a_4286761183_1516540902_p_33};
	xsi_register_didat("work_a_4286761183_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_4286761183_1516540902.didat");
	xsi_register_executes(pe);
}
