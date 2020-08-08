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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/input/keyboard/ps2_keyb.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_2236515651_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(98, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13688);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 13432);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2236515651_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(137, ng0);

LAB3:    t1 = (t0 + 7112U);
    t2 = *((char **)t1);
    t1 = (t0 + 13752);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 12U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 13448);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2236515651_1516540902_p_2(char *t0)
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
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (0 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t20 = xsi_get_transient_memory(5U);
    memset(t20, 0, 5U);
    t21 = t20;
    memset(t21, (unsigned char)3, 5U);
    t22 = (t0 + 13816);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 5U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 13464);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 3912U);
    t10 = *((char **)t9);
    t11 = (0 - 7);
    t12 = (t11 * -1);
    t13 = (5U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t15 = (t0 + 13816);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 5U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2236515651_1516540902_p_3(char *t0)
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
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (1 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t20 = xsi_get_transient_memory(5U);
    memset(t20, 0, 5U);
    t21 = t20;
    memset(t21, (unsigned char)3, 5U);
    t22 = (t0 + 13880);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 5U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 13480);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 3912U);
    t10 = *((char **)t9);
    t11 = (1 - 7);
    t12 = (t11 * -1);
    t13 = (5U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t15 = (t0 + 13880);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 5U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2236515651_1516540902_p_4(char *t0)
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
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (2 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t20 = xsi_get_transient_memory(5U);
    memset(t20, 0, 5U);
    t21 = t20;
    memset(t21, (unsigned char)3, 5U);
    t22 = (t0 + 13944);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 5U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 13496);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 3912U);
    t10 = *((char **)t9);
    t11 = (2 - 7);
    t12 = (t11 * -1);
    t13 = (5U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t15 = (t0 + 13944);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 5U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2236515651_1516540902_p_5(char *t0)
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
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (3 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t20 = xsi_get_transient_memory(5U);
    memset(t20, 0, 5U);
    t21 = t20;
    memset(t21, (unsigned char)3, 5U);
    t22 = (t0 + 14008);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 5U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 13512);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 3912U);
    t10 = *((char **)t9);
    t11 = (3 - 7);
    t12 = (t11 * -1);
    t13 = (5U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t15 = (t0 + 14008);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 5U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2236515651_1516540902_p_6(char *t0)
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
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (4 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t20 = xsi_get_transient_memory(5U);
    memset(t20, 0, 5U);
    t21 = t20;
    memset(t21, (unsigned char)3, 5U);
    t22 = (t0 + 14072);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 5U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 13528);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 3912U);
    t10 = *((char **)t9);
    t11 = (4 - 7);
    t12 = (t11 * -1);
    t13 = (5U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t15 = (t0 + 14072);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 5U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2236515651_1516540902_p_7(char *t0)
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
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (5 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t20 = xsi_get_transient_memory(5U);
    memset(t20, 0, 5U);
    t21 = t20;
    memset(t21, (unsigned char)3, 5U);
    t22 = (t0 + 14136);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 5U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 13544);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 3912U);
    t10 = *((char **)t9);
    t11 = (5 - 7);
    t12 = (t11 * -1);
    t13 = (5U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t15 = (t0 + 14136);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 5U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2236515651_1516540902_p_8(char *t0)
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
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (6 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t20 = xsi_get_transient_memory(5U);
    memset(t20, 0, 5U);
    t21 = t20;
    memset(t21, (unsigned char)3, 5U);
    t22 = (t0 + 14200);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 5U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 13560);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 3912U);
    t10 = *((char **)t9);
    t11 = (6 - 7);
    t12 = (t11 * -1);
    t13 = (5U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t15 = (t0 + 14200);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 5U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2236515651_1516540902_p_9(char *t0)
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
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
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
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB3;

LAB4:
LAB5:    t20 = xsi_get_transient_memory(5U);
    memset(t20, 0, 5U);
    t21 = t20;
    memset(t21, (unsigned char)3, 5U);
    t22 = (t0 + 14264);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t20, 5U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 13576);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 3912U);
    t10 = *((char **)t9);
    t11 = (7 - 7);
    t12 = (t11 * -1);
    t13 = (5U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t15 = (t0 + 14264);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 5U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2236515651_1516540902_p_10(char *t0)
{
    char t1[16];
    char t2[16];
    char t3[16];
    char t4[16];
    char t5[16];
    char t6[16];
    char t7[16];
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
    char *t18;
    char *t19;
    char *t20;
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
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(148, ng0);

LAB3:    t8 = (t0 + 5192U);
    t9 = *((char **)t8);
    t8 = (t0 + 24608U);
    t10 = (t0 + 5352U);
    t11 = *((char **)t10);
    t10 = (t0 + 24608U);
    t12 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t7, t9, t8, t11, t10);
    t13 = (t0 + 5512U);
    t14 = *((char **)t13);
    t13 = (t0 + 24608U);
    t15 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t6, t12, t7, t14, t13);
    t16 = (t0 + 5672U);
    t17 = *((char **)t16);
    t16 = (t0 + 24608U);
    t18 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t5, t15, t6, t17, t16);
    t19 = (t0 + 5832U);
    t20 = *((char **)t19);
    t19 = (t0 + 24608U);
    t21 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t4, t18, t5, t20, t19);
    t22 = (t0 + 5992U);
    t23 = *((char **)t22);
    t22 = (t0 + 24608U);
    t24 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t3, t21, t4, t23, t22);
    t25 = (t0 + 6152U);
    t26 = *((char **)t25);
    t25 = (t0 + 24608U);
    t27 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t2, t24, t3, t26, t25);
    t28 = (t0 + 6312U);
    t29 = *((char **)t28);
    t28 = (t0 + 24608U);
    t30 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t1, t27, t2, t29, t28);
    t31 = (t1 + 12U);
    t32 = *((unsigned int *)t31);
    t33 = (1U * t32);
    t34 = (5U != t33);
    if (t34 == 1)
        goto LAB5;

LAB6:    t35 = (t0 + 14328);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t30, 5U);
    xsi_driver_first_trans_fast_port(t35);

LAB2:    t40 = (t0 + 13592);
    *((int *)t40) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(5U, t33, 0);
    goto LAB6;

}

static void work_a_2236515651_1516540902_p_11(char *t0)
{
    char t15[16];
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
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    int t27;
    int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12};

LAB0:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 13608);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(161, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(182, ng0);
    t1 = (t0 + 14776);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(183, ng0);
    t1 = (t0 + 14840);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(185, ng0);
    t1 = (t0 + 8928U);
    t3 = *((char **)t1);
    t11 = (0 - 1);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t3 + t14);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4232U);
    t7 = *((char **)t4);
    t5 = *((unsigned char *)t7);
    t8 = ((IEEE_P_2592010699) + 4000);
    t4 = xsi_base_array_concat(t4, t15, t8, (char)99, t2, (char)99, t5, (char)101);
    t9 = (t0 + 8928U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    t16 = (1U + 1U);
    memcpy(t9, t4, t16);
    xsi_set_current_line(187, ng0);
    t1 = (t0 + 8808U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(162, ng0);
    t3 = (t0 + 8808U);
    t7 = *((char **)t3);
    t3 = (t7 + 0);
    *((unsigned char *)t3) = (unsigned char)0;
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 24950);
    t4 = (t0 + 8928U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 2U);
    xsi_set_current_line(164, ng0);
    t1 = (t0 + 14392);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(165, ng0);
    t1 = (t0 + 14456);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(167, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t3 = t1;
    memset(t3, (unsigned char)3, 5U);
    t4 = (t0 + 14520);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_delta(t4, 35U, 5U, 0LL);
    xsi_set_current_line(168, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t3 = t1;
    memset(t3, (unsigned char)3, 5U);
    t4 = (t0 + 14520);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_delta(t4, 30U, 5U, 0LL);
    xsi_set_current_line(169, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t3 = t1;
    memset(t3, (unsigned char)3, 5U);
    t4 = (t0 + 14520);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_delta(t4, 25U, 5U, 0LL);
    xsi_set_current_line(170, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t3 = t1;
    memset(t3, (unsigned char)3, 5U);
    t4 = (t0 + 14520);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_delta(t4, 20U, 5U, 0LL);
    xsi_set_current_line(171, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t3 = t1;
    memset(t3, (unsigned char)3, 5U);
    t4 = (t0 + 14520);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_delta(t4, 15U, 5U, 0LL);
    xsi_set_current_line(172, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t3 = t1;
    memset(t3, (unsigned char)3, 5U);
    t4 = (t0 + 14520);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_delta(t4, 10U, 5U, 0LL);
    xsi_set_current_line(173, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t3 = t1;
    memset(t3, (unsigned char)3, 5U);
    t4 = (t0 + 14520);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_delta(t4, 5U, 5U, 0LL);
    xsi_set_current_line(174, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t3 = t1;
    memset(t3, (unsigned char)3, 5U);
    t4 = (t0 + 14520);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_delta(t4, 0U, 5U, 0LL);
    xsi_set_current_line(176, ng0);
    t1 = xsi_get_transient_memory(12U);
    memset(t1, 0, 12U);
    t3 = t1;
    memset(t3, (unsigned char)2, 12U);
    t4 = (t0 + 14584);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 12U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(177, ng0);
    t1 = (t0 + 14648);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(178, ng0);
    t1 = (t0 + 14712);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB8:    goto LAB6;

LAB9:    xsi_set_current_line(190, ng0);
    t4 = (t0 + 8928U);
    t7 = *((char **)t4);
    t4 = (t0 + 24952);
    t5 = 1;
    if (2U == 2U)
        goto LAB16;

LAB17:    t5 = 0;

LAB18:    if (t5 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB8;

LAB10:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 5032U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 4072U);
    t4 = *((char **)t1);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t0 + 24560U);
    t1 = xsi_base_array_concat(t1, t15, t7, (char)99, t2, (char)97, t4, t8, (char)101);
    t12 = (1U + 8U);
    t5 = (9U != t12);
    if (t5 == 1)
        goto LAB47;

LAB48:    t9 = (t0 + 14904);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t1, 9U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(204, ng0);
    t1 = (t0 + 5032U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB49;

LAB51:    xsi_set_current_line(240, ng0);
    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25098);
    t2 = 1;
    if (8U == 8U)
        goto LAB182;

LAB183:    t2 = 0;

LAB184:    if (t2 != 0)
        goto LAB179;

LAB181:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25106);
    t2 = 1;
    if (8U == 8U)
        goto LAB190;

LAB191:    t2 = 0;

LAB192:    if (t2 != 0)
        goto LAB188;

LAB189:
LAB180:
LAB50:    xsi_set_current_line(246, ng0);
    t1 = (t0 + 8808U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB8;

LAB11:    xsi_set_current_line(249, ng0);
    t1 = (t0 + 25114);
    t4 = (t0 + 14968);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(250, ng0);
    t1 = (t0 + 14840);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(251, ng0);
    t1 = (t0 + 8808U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB8;

LAB12:    xsi_set_current_line(255, ng0);
    t1 = (t0 + 14392);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(256, ng0);
    t1 = (t0 + 14456);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(257, ng0);
    t1 = (t0 + 4712U);
    t3 = *((char **)t1);
    t12 = (8 - 2);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t3 + t14);
    t4 = (t15 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 2;
    t7 = (t4 + 4U);
    *((int *)t7) = 0;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t11 = (0 - 2);
    t16 = (t11 * -1);
    t16 = (t16 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t16;
    t27 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t1, t15);
    t7 = (t0 + 9168U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t27;
    xsi_set_current_line(258, ng0);
    t1 = (t0 + 4712U);
    t3 = *((char **)t1);
    t12 = (8 - 5);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t3 + t14);
    t4 = (t15 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 5;
    t7 = (t4 + 4U);
    *((int *)t7) = 3;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t11 = (3 - 5);
    t16 = (t11 * -1);
    t16 = (t16 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t16;
    t27 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t1, t15);
    t7 = (t0 + 9048U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((int *)t7) = t27;
    xsi_set_current_line(259, ng0);
    t1 = (t0 + 4712U);
    t3 = *((char **)t1);
    t11 = (6 - 8);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t3 + t14);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 9288U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    *((unsigned char *)t4) = t2;
    xsi_set_current_line(260, ng0);
    t1 = (t0 + 4712U);
    t3 = *((char **)t1);
    t11 = (7 - 8);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t3 + t14);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 9408U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    *((unsigned char *)t4) = t2;
    xsi_set_current_line(261, ng0);
    t1 = (t0 + 9168U);
    t3 = *((char **)t1);
    t11 = *((int *)t3);
    t2 = (t11 < 5);
    if (t2 != 0)
        goto LAB196;

LAB198:
LAB197:    xsi_set_current_line(264, ng0);
    t1 = (t0 + 9288U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB199;

LAB201:
LAB200:    xsi_set_current_line(267, ng0);
    t1 = (t0 + 9408U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB202;

LAB204:
LAB203:    xsi_set_current_line(271, ng0);
    t1 = (t0 + 8808U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB8;

LAB13:    xsi_set_current_line(191, ng0);
    t17 = (t0 + 4072U);
    t18 = *((char **)t17);
    t17 = (t0 + 24954);
    t6 = 1;
    if (8U == 8U)
        goto LAB25;

LAB26:    t6 = 0;

LAB27:    if (t6 != 0)
        goto LAB22;

LAB24:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 24962);
    t2 = 1;
    if (8U == 8U)
        goto LAB33;

LAB34:    t2 = 0;

LAB35:    if (t2 != 0)
        goto LAB31;

LAB32:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 24970);
    t2 = 1;
    if (8U == 8U)
        goto LAB41;

LAB42:    t2 = 0;

LAB43:    if (t2 != 0)
        goto LAB39;

LAB40:    xsi_set_current_line(198, ng0);
    t1 = (t0 + 8808U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)1;

LAB23:    goto LAB14;

LAB16:    t12 = 0;

LAB19:    if (t12 < 2U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t9 = (t7 + t12);
    t10 = (t4 + t12);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB17;

LAB21:    t12 = (t12 + 1);
    goto LAB19;

LAB22:    xsi_set_current_line(192, ng0);
    t22 = (t0 + 8808U);
    t23 = *((char **)t22);
    t22 = (t23 + 0);
    *((unsigned char *)t22) = (unsigned char)2;
    goto LAB23;

LAB25:    t13 = 0;

LAB28:    if (t13 < 8U)
        goto LAB29;
    else
        goto LAB27;

LAB29:    t20 = (t18 + t13);
    t21 = (t17 + t13);
    if (*((unsigned char *)t20) != *((unsigned char *)t21))
        goto LAB26;

LAB30:    t13 = (t13 + 1);
    goto LAB28;

LAB31:    xsi_set_current_line(194, ng0);
    t9 = (t0 + 14456);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);
    goto LAB23;

LAB33:    t12 = 0;

LAB36:    if (t12 < 8U)
        goto LAB37;
    else
        goto LAB35;

LAB37:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB34;

LAB38:    t12 = (t12 + 1);
    goto LAB36;

LAB39:    xsi_set_current_line(196, ng0);
    t9 = (t0 + 14392);
    t10 = (t9 + 56U);
    t17 = *((char **)t10);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);
    goto LAB23;

LAB41:    t12 = 0;

LAB44:    if (t12 < 8U)
        goto LAB45;
    else
        goto LAB43;

LAB45:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB42;

LAB46:    t12 = (t12 + 1);
    goto LAB44;

LAB47:    xsi_size_not_matching(9U, t12, 0);
    goto LAB48;

LAB49:    xsi_set_current_line(205, ng0);
    t1 = (t0 + 4072U);
    t4 = *((char **)t1);
    t1 = (t0 + 24978);
    t6 = 1;
    if (8U == 8U)
        goto LAB55;

LAB56:    t6 = 0;

LAB57:    if (t6 != 0)
        goto LAB52;

LAB54:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 24986);
    t2 = 1;
    if (8U == 8U)
        goto LAB63;

LAB64:    t2 = 0;

LAB65:    if (t2 != 0)
        goto LAB61;

LAB62:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 24994);
    t2 = 1;
    if (8U == 8U)
        goto LAB71;

LAB72:    t2 = 0;

LAB73:    if (t2 != 0)
        goto LAB69;

LAB70:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25002);
    t2 = 1;
    if (8U == 8U)
        goto LAB85;

LAB86:    t2 = 0;

LAB87:    if (t2 != 0)
        goto LAB83;

LAB84:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25010);
    t2 = 1;
    if (8U == 8U)
        goto LAB93;

LAB94:    t2 = 0;

LAB95:    if (t2 != 0)
        goto LAB91;

LAB92:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25018);
    t2 = 1;
    if (8U == 8U)
        goto LAB101;

LAB102:    t2 = 0;

LAB103:    if (t2 != 0)
        goto LAB99;

LAB100:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25026);
    t2 = 1;
    if (8U == 8U)
        goto LAB109;

LAB110:    t2 = 0;

LAB111:    if (t2 != 0)
        goto LAB107;

LAB108:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25034);
    t2 = 1;
    if (8U == 8U)
        goto LAB117;

LAB118:    t2 = 0;

LAB119:    if (t2 != 0)
        goto LAB115;

LAB116:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25042);
    t2 = 1;
    if (8U == 8U)
        goto LAB125;

LAB126:    t2 = 0;

LAB127:    if (t2 != 0)
        goto LAB123;

LAB124:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25050);
    t2 = 1;
    if (8U == 8U)
        goto LAB133;

LAB134:    t2 = 0;

LAB135:    if (t2 != 0)
        goto LAB131;

LAB132:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25058);
    t2 = 1;
    if (8U == 8U)
        goto LAB141;

LAB142:    t2 = 0;

LAB143:    if (t2 != 0)
        goto LAB139;

LAB140:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25066);
    t2 = 1;
    if (8U == 8U)
        goto LAB149;

LAB150:    t2 = 0;

LAB151:    if (t2 != 0)
        goto LAB147;

LAB148:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25074);
    t2 = 1;
    if (8U == 8U)
        goto LAB157;

LAB158:    t2 = 0;

LAB159:    if (t2 != 0)
        goto LAB155;

LAB156:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25082);
    t2 = 1;
    if (8U == 8U)
        goto LAB165;

LAB166:    t2 = 0;

LAB167:    if (t2 != 0)
        goto LAB163;

LAB164:    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 25090);
    t2 = 1;
    if (8U == 8U)
        goto LAB173;

LAB174:    t2 = 0;

LAB175:    if (t2 != 0)
        goto LAB171;

LAB172:
LAB53:    goto LAB50;

LAB52:    xsi_set_current_line(206, ng0);
    t10 = (t0 + 4872U);
    t17 = *((char **)t10);
    t24 = *((unsigned char *)t17);
    t10 = (t0 + 14648);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t24;
    xsi_driver_first_trans_fast(t10);
    goto LAB53;

LAB55:    t12 = 0;

LAB58:    if (t12 < 8U)
        goto LAB59;
    else
        goto LAB57;

LAB59:    t8 = (t4 + t12);
    t9 = (t1 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB56;

LAB60:    t12 = (t12 + 1);
    goto LAB58;

LAB61:    xsi_set_current_line(208, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t9 = (t0 + 14712);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t5;
    xsi_driver_first_trans_fast(t9);
    goto LAB53;

LAB63:    t12 = 0;

LAB66:    if (t12 < 8U)
        goto LAB67;
    else
        goto LAB65;

LAB67:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB64;

LAB68:    t12 = (t12 + 1);
    goto LAB66;

LAB69:    xsi_set_current_line(210, ng0);
    t9 = (t0 + 6952U);
    t10 = *((char **)t9);
    t6 = *((unsigned char *)t10);
    t24 = (t6 == (unsigned char)2);
    if (t24 == 1)
        goto LAB80;

LAB81:    t5 = (unsigned char)0;

LAB82:    if (t5 != 0)
        goto LAB77;

LAB79:
LAB78:    goto LAB53;

LAB71:    t12 = 0;

LAB74:    if (t12 < 8U)
        goto LAB75;
    else
        goto LAB73;

LAB75:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB72;

LAB76:    t12 = (t12 + 1);
    goto LAB74;

LAB77:    xsi_set_current_line(211, ng0);
    t9 = (t0 + 14776);
    t18 = (t9 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB78;

LAB80:    t9 = (t0 + 6792U);
    t17 = *((char **)t9);
    t25 = *((unsigned char *)t17);
    t26 = (t25 == (unsigned char)2);
    t5 = t26;
    goto LAB82;

LAB83:    xsi_set_current_line(214, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t9 = (t0 + 14584);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t9, 11U, 1, 0LL);
    goto LAB53;

LAB85:    t12 = 0;

LAB88:    if (t12 < 8U)
        goto LAB89;
    else
        goto LAB87;

LAB89:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB86;

LAB90:    t12 = (t12 + 1);
    goto LAB88;

LAB91:    xsi_set_current_line(216, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t9 = (t0 + 14584);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t9, 10U, 1, 0LL);
    goto LAB53;

LAB93:    t12 = 0;

LAB96:    if (t12 < 8U)
        goto LAB97;
    else
        goto LAB95;

LAB97:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB94;

LAB98:    t12 = (t12 + 1);
    goto LAB96;

LAB99:    xsi_set_current_line(218, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t9 = (t0 + 14584);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t9, 9U, 1, 0LL);
    goto LAB53;

LAB101:    t12 = 0;

LAB104:    if (t12 < 8U)
        goto LAB105;
    else
        goto LAB103;

LAB105:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB102;

LAB106:    t12 = (t12 + 1);
    goto LAB104;

LAB107:    xsi_set_current_line(220, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t9 = (t0 + 14584);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t9, 8U, 1, 0LL);
    goto LAB53;

LAB109:    t12 = 0;

LAB112:    if (t12 < 8U)
        goto LAB113;
    else
        goto LAB111;

LAB113:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB110;

LAB114:    t12 = (t12 + 1);
    goto LAB112;

LAB115:    xsi_set_current_line(222, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t9 = (t0 + 14584);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t9, 7U, 1, 0LL);
    goto LAB53;

LAB117:    t12 = 0;

LAB120:    if (t12 < 8U)
        goto LAB121;
    else
        goto LAB119;

LAB121:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB118;

LAB122:    t12 = (t12 + 1);
    goto LAB120;

LAB123:    xsi_set_current_line(224, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t9 = (t0 + 14584);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t9, 6U, 1, 0LL);
    goto LAB53;

LAB125:    t12 = 0;

LAB128:    if (t12 < 8U)
        goto LAB129;
    else
        goto LAB127;

LAB129:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB126;

LAB130:    t12 = (t12 + 1);
    goto LAB128;

LAB131:    xsi_set_current_line(226, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t9 = (t0 + 14584);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t9, 5U, 1, 0LL);
    goto LAB53;

LAB133:    t12 = 0;

LAB136:    if (t12 < 8U)
        goto LAB137;
    else
        goto LAB135;

LAB137:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB134;

LAB138:    t12 = (t12 + 1);
    goto LAB136;

LAB139:    xsi_set_current_line(228, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t9 = (t0 + 14584);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t9, 4U, 1, 0LL);
    goto LAB53;

LAB141:    t12 = 0;

LAB144:    if (t12 < 8U)
        goto LAB145;
    else
        goto LAB143;

LAB145:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB142;

LAB146:    t12 = (t12 + 1);
    goto LAB144;

LAB147:    xsi_set_current_line(230, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t9 = (t0 + 14584);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t9, 3U, 1, 0LL);
    goto LAB53;

LAB149:    t12 = 0;

LAB152:    if (t12 < 8U)
        goto LAB153;
    else
        goto LAB151;

LAB153:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB150;

LAB154:    t12 = (t12 + 1);
    goto LAB152;

LAB155:    xsi_set_current_line(232, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t9 = (t0 + 14584);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t9, 2U, 1, 0LL);
    goto LAB53;

LAB157:    t12 = 0;

LAB160:    if (t12 < 8U)
        goto LAB161;
    else
        goto LAB159;

LAB161:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB158;

LAB162:    t12 = (t12 + 1);
    goto LAB160;

LAB163:    xsi_set_current_line(234, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t9 = (t0 + 14584);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t9, 1U, 1, 0LL);
    goto LAB53;

LAB165:    t12 = 0;

LAB168:    if (t12 < 8U)
        goto LAB169;
    else
        goto LAB167;

LAB169:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB166;

LAB170:    t12 = (t12 + 1);
    goto LAB168;

LAB171:    xsi_set_current_line(236, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t9 = (t0 + 14584);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t6;
    xsi_driver_first_trans_delta(t9, 0U, 1, 0LL);
    goto LAB53;

LAB173:    t12 = 0;

LAB176:    if (t12 < 8U)
        goto LAB177;
    else
        goto LAB175;

LAB177:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB174;

LAB178:    t12 = (t12 + 1);
    goto LAB176;

LAB179:    xsi_set_current_line(241, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t9 = (t0 + 14648);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t5;
    xsi_driver_first_trans_fast(t9);
    goto LAB180;

LAB182:    t12 = 0;

LAB185:    if (t12 < 8U)
        goto LAB186;
    else
        goto LAB184;

LAB186:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB183;

LAB187:    t12 = (t12 + 1);
    goto LAB185;

LAB188:    xsi_set_current_line(243, ng0);
    t9 = (t0 + 4872U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t9 = (t0 + 14712);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t5;
    xsi_driver_first_trans_fast(t9);
    goto LAB180;

LAB190:    t12 = 0;

LAB193:    if (t12 < 8U)
        goto LAB194;
    else
        goto LAB192;

LAB194:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB191;

LAB195:    t12 = (t12 + 1);
    goto LAB193;

LAB196:    xsi_set_current_line(262, ng0);
    t1 = (t0 + 4872U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t1 = (t0 + 9048U);
    t7 = *((char **)t1);
    t27 = *((int *)t7);
    t28 = (t27 - 7);
    t12 = (t28 * -1);
    t13 = (5U * t12);
    t14 = (0U + t13);
    t1 = (t0 + 9168U);
    t8 = *((char **)t1);
    t29 = *((int *)t8);
    t30 = (t29 - 4);
    t16 = (t30 * -1);
    t31 = (1 * t16);
    t32 = (t14 + t31);
    t1 = (t0 + 14520);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t5;
    xsi_driver_first_trans_delta(t1, t32, 1, 0LL);
    goto LAB197;

LAB199:    xsi_set_current_line(265, ng0);
    t1 = (t0 + 4872U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 14520);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_delta(t1, 39U, 1, 0LL);
    goto LAB200;

LAB202:    xsi_set_current_line(268, ng0);
    t1 = (t0 + 4872U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 14520);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    goto LAB203;

}


extern void work_a_2236515651_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2236515651_1516540902_p_0,(void *)work_a_2236515651_1516540902_p_1,(void *)work_a_2236515651_1516540902_p_2,(void *)work_a_2236515651_1516540902_p_3,(void *)work_a_2236515651_1516540902_p_4,(void *)work_a_2236515651_1516540902_p_5,(void *)work_a_2236515651_1516540902_p_6,(void *)work_a_2236515651_1516540902_p_7,(void *)work_a_2236515651_1516540902_p_8,(void *)work_a_2236515651_1516540902_p_9,(void *)work_a_2236515651_1516540902_p_10,(void *)work_a_2236515651_1516540902_p_11};
	xsi_register_didat("work_a_2236515651_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_2236515651_1516540902.didat");
	xsi_register_executes(pe);
}
