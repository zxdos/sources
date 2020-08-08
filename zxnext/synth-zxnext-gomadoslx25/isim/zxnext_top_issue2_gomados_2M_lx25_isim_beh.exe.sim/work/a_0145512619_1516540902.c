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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/input/membrane/emu_fnkeys.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_0145512619_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(80, ng0);

LAB3:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 10424);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10104);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0145512619_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(81, ng0);

LAB3:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t1 = (t0 + 10488);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10120);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0145512619_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(83, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t1 = (t0 + 10552);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 10U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 10136);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0145512619_1516540902_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
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

LAB0:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3752U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)0);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 10616);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 10152);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 10616);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 3592U);
    t7 = *((char **)t2);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB8;

LAB9:    t2 = (t0 + 3272U);
    t10 = *((char **)t2);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t6 = t12;

LAB10:    t1 = t6;
    goto LAB7;

LAB8:    t6 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}

static void work_a_0145512619_1516540902_p_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 == 0);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 10680);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 10168);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 10680);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0145512619_1516540902_p_5(char *t0)
{
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
    int t11;
    unsigned char t12;
    unsigned char t13;
    int t14;
    char *t15;

LAB0:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10184);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = (unsigned char)0;

LAB14:    if (t2 != 0)
        goto LAB10;

LAB11:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 10744);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

LAB8:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 5088U);
    t4 = *((char **)t1);
    t11 = *((int *)t4);
    t1 = (t0 + 10744);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t11;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB10:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2632U);
    t7 = *((char **)t1);
    t11 = *((int *)t7);
    t14 = (t11 - 1);
    t1 = (t0 + 10744);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t15 = *((char **)t10);
    *((int *)t15) = t14;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB12:    t1 = (t0 + 2952U);
    t4 = *((char **)t1);
    t12 = *((unsigned char *)t4);
    t13 = (t12 == (unsigned char)2);
    t2 = t13;
    goto LAB14;

}

static void work_a_0145512619_1516540902_p_6(char *t0)
{
    char t17[16];
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
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t18;
    char *t19;

LAB0:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10200);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(112, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 3112U);
    t3 = *((char **)t1);
    t13 = (0 - 1);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2152U);
    t7 = *((char **)t4);
    t5 = *((unsigned char *)t7);
    t8 = ((IEEE_P_2592010699) + 4000);
    t4 = xsi_base_array_concat(t4, t17, t8, (char)99, t2, (char)99, t5, (char)101);
    t18 = (1U + 1U);
    t6 = (2U != t18);
    if (t6 == 1)
        goto LAB8;

LAB9:    t9 = (t0 + 10808);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    memcpy(t19, t4, 2U);
    xsi_driver_first_trans_fast(t9);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(113, ng0);
    t3 = xsi_get_transient_memory(2U);
    memset(t3, 0, 2U);
    t7 = t3;
    memset(t7, (unsigned char)2, 2U);
    t8 = (t0 + 10808);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 2U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_size_not_matching(2U, t18, 0);
    goto LAB9;

}

static void work_a_0145512619_1516540902_p_7(char *t0)
{
    char t5[16];
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
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 17728U);
    t3 = (t0 + 17886);
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

LAB4:
LAB5:    t15 = (t0 + 10872);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);

LAB2:    t20 = (t0 + 10216);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 10872);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0145512619_1516540902_p_8(char *t0)
{
    char t17[16];
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
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t18;
    char *t19;

LAB0:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10232);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(125, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t13 = (0 - 1);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2312U);
    t7 = *((char **)t4);
    t5 = *((unsigned char *)t7);
    t8 = ((IEEE_P_2592010699) + 4000);
    t4 = xsi_base_array_concat(t4, t17, t8, (char)99, t2, (char)99, t5, (char)101);
    t18 = (1U + 1U);
    t6 = (2U != t18);
    if (t6 == 1)
        goto LAB8;

LAB9:    t9 = (t0 + 10936);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    memcpy(t19, t4, 2U);
    xsi_driver_first_trans_fast(t9);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(126, ng0);
    t3 = xsi_get_transient_memory(2U);
    memset(t3, 0, 2U);
    t7 = t3;
    memset(t7, (unsigned char)2, 2U);
    t8 = (t0 + 10936);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 2U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_size_not_matching(2U, t18, 0);
    goto LAB9;

}

static void work_a_0145512619_1516540902_p_9(char *t0)
{
    char t5[16];
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
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 17744U);
    t3 = (t0 + 17888);
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

LAB4:
LAB5:    t15 = (t0 + 11000);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);

LAB2:    t20 = (t0 + 10248);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 11000);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0145512619_1516540902_p_10(char *t0)
{
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

LAB0:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10264);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 11064);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 11064);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void work_a_0145512619_1516540902_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9};

LAB0:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 10280);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(155, ng0);
    t4 = (t0 + 3592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB11;

LAB13:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB14;

LAB15:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 11128);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB2;

LAB4:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 11128);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 11128);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t12 = (0 - 1);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = *((unsigned char *)t1);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 11128);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(177, ng0);
    t1 = (t0 + 11128);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t12 = (0 - 1);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = *((unsigned char *)t1);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 11128);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB20:    goto LAB2;

LAB9:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 11128);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(190, ng0);
    t1 = (t0 + 11128);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 11128);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)5;
    xsi_driver_first_trans_fast(t4);
    goto LAB12;

LAB14:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 11128);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB16:    xsi_set_current_line(171, ng0);
    t4 = (t0 + 11128);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)4;
    xsi_driver_first_trans_fast(t4);
    goto LAB17;

LAB19:    xsi_set_current_line(181, ng0);
    t4 = (t0 + 11128);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)6;
    xsi_driver_first_trans_fast(t4);
    goto LAB20;

}

static void work_a_0145512619_1516540902_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(195, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB3;

LAB4:    t10 = (t0 + 3752U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)1);
    if (t13 != 0)
        goto LAB5;

LAB6:
LAB7:    t20 = (t0 + 17898);
    t22 = (t0 + 11192);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 8U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 10296);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t1 = (t0 + 11192);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    t10 = (t0 + 17890);
    t15 = (t0 + 11192);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t10, 8U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB8:    goto LAB2;

}

static void work_a_0145512619_1516540902_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)0);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(5U);
    memset(t10, 0, 5U);
    t11 = t10;
    memset(t11, (unsigned char)3, 5U);
    t12 = (t0 + 11256);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 5U);
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 10312);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t1 = (t0 + 11256);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 5U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0145512619_1516540902_p_14(char *t0)
{
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
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    char *t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned char t40;
    unsigned char t41;
    unsigned char t42;
    unsigned char t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    xsi_set_current_line(204, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10328);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(205, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)0);
    if (t5 != 0)
        goto LAB8;

LAB9:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t11 = (4 - 4);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t4 + t14);
    t5 = *((unsigned char *)t1);
    t7 = (t0 + 1832U);
    t8 = *((char **)t7);
    t15 = (3 - 4);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t7 = (t8 + t18);
    t6 = *((unsigned char *)t7);
    t19 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t5, t6);
    t9 = (t0 + 1832U);
    t10 = *((char **)t9);
    t20 = (2 - 4);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t9 = (t10 + t23);
    t24 = *((unsigned char *)t9);
    t25 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t19, t24);
    t26 = (t0 + 1832U);
    t27 = *((char **)t26);
    t28 = (1 - 4);
    t29 = (t28 * -1);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t26 = (t27 + t31);
    t32 = *((unsigned char *)t26);
    t33 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t25, t32);
    t34 = (t0 + 1832U);
    t35 = *((char **)t34);
    t36 = (0 - 4);
    t37 = (t36 * -1);
    t38 = (1U * t37);
    t39 = (0 + t38);
    t34 = (t35 + t39);
    t40 = *((unsigned char *)t34);
    t41 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t33, t40);
    t42 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t41);
    t43 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t2, t42);
    t44 = (t0 + 11320);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    *((unsigned char *)t48) = t43;
    xsi_driver_first_trans_fast(t44);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(206, ng0);
    t3 = (t0 + 11320);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

LAB8:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 11320);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_0145512619_1516540902_p_15(char *t0)
{
    char t13[16];
    char t17[16];
    char t31[16];
    char t40[16];
    char t50[16];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    unsigned char t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned char t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned char t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned char t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;

LAB0:    xsi_set_current_line(217, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10344);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(218, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)1);
    if (t5 != 0)
        goto LAB8;

LAB9:    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB12;

LAB13:    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)4);
    if (t5 != 0)
        goto LAB16;

LAB17:    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)6);
    if (t5 != 0)
        goto LAB20;

LAB21:    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)0);
    if (t5 != 0)
        goto LAB25;

LAB26:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(219, ng0);
    t3 = xsi_get_transient_memory(10U);
    memset(t3, 0, 10U);
    t7 = t3;
    memset(t7, (unsigned char)2, 10U);
    t8 = (t0 + 11384);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 10U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(221, ng0);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t14 = (4 - 4);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t4 + t16);
    t7 = (t17 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 4;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t18 = (0 - 4);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t19;
    t8 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t13, t1, t17);
    t9 = (t13 + 12U);
    t19 = *((unsigned int *)t9);
    t20 = (1U * t19);
    t6 = (5U != t20);
    if (t6 == 1)
        goto LAB10;

LAB11:    t10 = (t0 + 11384);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t8, 5U);
    xsi_driver_first_trans_delta(t10, 5U, 5U, 0LL);
    goto LAB6;

LAB10:    xsi_size_not_matching(5U, t20, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(223, ng0);
    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t18 = (0 - 4);
    t14 = (t18 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t4 + t16);
    t6 = *((unsigned char *)t1);
    t7 = (t0 + 1832U);
    t8 = *((char **)t7);
    t23 = (1 - 4);
    t19 = (t23 * -1);
    t20 = (1U * t19);
    t24 = (0 + t20);
    t7 = (t8 + t24);
    t25 = *((unsigned char *)t7);
    t10 = ((IEEE_P_2592010699) + 4000);
    t9 = xsi_base_array_concat(t9, t17, t10, (char)99, t6, (char)99, t25, (char)101);
    t11 = (t0 + 1832U);
    t12 = *((char **)t11);
    t26 = (2 - 4);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t11 = (t12 + t29);
    t30 = *((unsigned char *)t11);
    t22 = ((IEEE_P_2592010699) + 4000);
    t21 = xsi_base_array_concat(t21, t31, t22, (char)97, t9, t17, (char)99, t30, (char)101);
    t32 = (t0 + 1832U);
    t33 = *((char **)t32);
    t34 = (3 - 4);
    t35 = (t34 * -1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t32 = (t33 + t37);
    t38 = *((unsigned char *)t32);
    t41 = ((IEEE_P_2592010699) + 4000);
    t39 = xsi_base_array_concat(t39, t40, t41, (char)97, t21, t31, (char)99, t38, (char)101);
    t42 = (t0 + 1832U);
    t43 = *((char **)t42);
    t44 = (4 - 4);
    t45 = (t44 * -1);
    t46 = (1U * t45);
    t47 = (0 + t46);
    t42 = (t43 + t47);
    t48 = *((unsigned char *)t42);
    t51 = ((IEEE_P_2592010699) + 4000);
    t49 = xsi_base_array_concat(t49, t50, t51, (char)97, t39, t40, (char)99, t48, (char)101);
    t52 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t13, t49, t50);
    t53 = (t13 + 12U);
    t54 = *((unsigned int *)t53);
    t55 = (1U * t54);
    t56 = (5U != t55);
    if (t56 == 1)
        goto LAB14;

LAB15:    t57 = (t0 + 11384);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memcpy(t61, t52, 5U);
    xsi_driver_first_trans_delta(t57, 0U, 5U, 0LL);
    goto LAB6;

LAB14:    xsi_size_not_matching(5U, t55, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(225, ng0);
    t1 = (t0 + 2952U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t25 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t6);
    t1 = (t0 + 4392U);
    t7 = *((char **)t1);
    t30 = *((unsigned char *)t7);
    t38 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t30);
    t48 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t25, t38);
    t8 = ((IEEE_P_2592010699) + 4000);
    t1 = xsi_base_array_concat(t1, t13, t8, (char)99, (unsigned char)2, (char)99, t48, (char)101);
    t9 = (t0 + 17906);
    t12 = ((IEEE_P_2592010699) + 4000);
    t21 = (t31 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 7;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t18 = (7 - 0);
    t14 = (t18 * 1);
    t14 = (t14 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t14;
    t11 = xsi_base_array_concat(t11, t17, t12, (char)97, t1, t13, (char)97, t9, t31, (char)101);
    t14 = (1U + 1U);
    t15 = (t14 + 8U);
    t56 = (10U != t15);
    if (t56 == 1)
        goto LAB18;

LAB19:    t22 = (t0 + 11384);
    t32 = (t22 + 56U);
    t33 = *((char **)t32);
    t39 = (t33 + 56U);
    t41 = *((char **)t39);
    memcpy(t41, t11, 10U);
    xsi_driver_first_trans_fast(t22);
    goto LAB6;

LAB18:    xsi_size_not_matching(10U, t15, 0);
    goto LAB19;

LAB20:    xsi_set_current_line(227, ng0);
    t1 = (t0 + 2952U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t25 = (t6 == (unsigned char)3);
    if (t25 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(230, ng0);
    t1 = (t0 + 17924);
    t4 = (t0 + 11384);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t4);

LAB23:    goto LAB6;

LAB22:    xsi_set_current_line(228, ng0);
    t1 = (t0 + 17914);
    t8 = (t0 + 11384);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 10U);
    xsi_driver_first_trans_fast(t8);
    goto LAB23;

LAB25:    xsi_set_current_line(233, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t4 = t1;
    memset(t4, (unsigned char)2, 10U);
    t7 = (t0 + 11384);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 10U);
    xsi_driver_first_trans_fast(t7);
    goto LAB6;

}


extern void work_a_0145512619_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0145512619_1516540902_p_0,(void *)work_a_0145512619_1516540902_p_1,(void *)work_a_0145512619_1516540902_p_2,(void *)work_a_0145512619_1516540902_p_3,(void *)work_a_0145512619_1516540902_p_4,(void *)work_a_0145512619_1516540902_p_5,(void *)work_a_0145512619_1516540902_p_6,(void *)work_a_0145512619_1516540902_p_7,(void *)work_a_0145512619_1516540902_p_8,(void *)work_a_0145512619_1516540902_p_9,(void *)work_a_0145512619_1516540902_p_10,(void *)work_a_0145512619_1516540902_p_11,(void *)work_a_0145512619_1516540902_p_12,(void *)work_a_0145512619_1516540902_p_13,(void *)work_a_0145512619_1516540902_p_14,(void *)work_a_0145512619_1516540902_p_15};
	xsi_register_didat("work_a_0145512619_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_0145512619_1516540902.didat");
	xsi_register_executes(pe);
}
