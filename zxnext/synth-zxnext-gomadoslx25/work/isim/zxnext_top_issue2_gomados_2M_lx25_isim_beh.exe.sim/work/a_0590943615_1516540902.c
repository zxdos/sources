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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/video/lores.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_3620187407_sub_1306455576395559435_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_1306455576397931277_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_970026082007865855_3965413181(char *, char *, char *, int );


static void work_a_0590943615_1516540902_p_0(char *t0)
{
    char t1[16];
    char t7[16];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(82, ng0);

LAB3:    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t4 = (8 - 7);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 7);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 2632U);
    t12 = *((char **)t9);
    t9 = (t0 + 15696U);
    t13 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t1, t2, t7, t12, t9);
    t14 = (t1 + 12U);
    t11 = *((unsigned int *)t14);
    t15 = (1U * t11);
    t16 = (8U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 9856);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t13, 8U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 9568);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t15, 0);
    goto LAB6;

}

static void work_a_0590943615_1516540902_p_1(char *t0)
{
    char t1[16];
    char t6[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(84, ng0);

LAB3:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 15616U);
    t4 = (t0 + 2792U);
    t5 = *((char **)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t0 + 15712U);
    t4 = xsi_base_array_concat(t4, t6, t7, (char)99, (unsigned char)2, (char)97, t5, t8, (char)101);
    t9 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t1, t3, t2, t4, t6);
    t10 = (t1 + 12U);
    t11 = *((unsigned int *)t10);
    t12 = (1U * t11);
    t13 = (9U != t12);
    if (t13 == 1)
        goto LAB5;

LAB6:    t14 = (t0 + 9920);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 9U);
    xsi_driver_first_trans_fast(t14);

LAB2:    t19 = (t0 + 9584);
    *((int *)t19) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t12, 0);
    goto LAB6;

}

static void work_a_0590943615_1516540902_p_2(char *t0)
{
    char t4[16];
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 15808U);
    t3 = ieee_p_3620187407_sub_970026082007865855_3965413181(IEEE_P_3620187407, t2, t1, 192);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB7:    t23 = (t0 + 3912U);
    t24 = *((char **)t23);
    t25 = (8 - 7);
    t26 = (t25 * 1U);
    t27 = (0 + t26);
    t23 = (t24 + t27);
    t28 = (t0 + 9984);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t23, 2U);
    xsi_driver_first_trans_delta(t28, 0U, 2U, 0LL);

LAB2:    t33 = (t0 + 9600);
    *((int *)t33) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 3912U);
    t6 = *((char **)t5);
    t7 = (8 - 7);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t5 = (t6 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 7;
    t12 = (t11 + 4U);
    *((int *)t12) = 6;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (6 - 7);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t4, t5, t10, 1);
    t15 = (t4 + 12U);
    t14 = *((unsigned int *)t15);
    t16 = (1U * t14);
    t17 = (2U != t16);
    if (t17 == 1)
        goto LAB5;

LAB6:    t18 = (t0 + 9984);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t12, 2U);
    xsi_driver_first_trans_delta(t18, 0U, 2U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(2U, t16, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_0590943615_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(87, ng0);

LAB3:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = (8 - 5);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 10048);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 6U);
    xsi_driver_first_trans_delta(t6, 2U, 6U, 0LL);

LAB2:    t11 = (t0 + 9616);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0590943615_1516540902_p_4(char *t0)
{
    char t12[16];
    char t14[16];
    char t19[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t13;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    char *t20;
    int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(91, ng0);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3592U);
    t7 = *((char **)t6);
    t8 = (7 - 7);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t6 = (t7 + t10);
    t13 = ((IEEE_P_2592010699) + 4000);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 7;
    t16 = (t15 + 4U);
    *((int *)t16) = 1;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t17 = (1 - 7);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t16 = (t19 + 0U);
    t20 = (t16 + 0U);
    *((int *)t20) = 7;
    t20 = (t16 + 4U);
    *((int *)t20) = 1;
    t20 = (t16 + 8U);
    *((int *)t20) = -1;
    t21 = (1 - 7);
    t18 = (t21 * -1);
    t18 = (t18 + 1);
    t20 = (t16 + 12U);
    *((unsigned int *)t20) = t18;
    t11 = xsi_base_array_concat(t11, t12, t13, (char)97, t1, t14, (char)97, t6, t19, (char)101);
    t18 = (7U + 7U);
    t22 = (14U != t18);
    if (t22 == 1)
        goto LAB5;

LAB6:    t20 = (t0 + 10112);
    t23 = (t20 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t11, 14U);
    xsi_driver_first_trans_fast(t20);

LAB2:    t27 = (t0 + 9632);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(14U, t18, 0);
    goto LAB6;

}

static void work_a_0590943615_1516540902_p_5(char *t0)
{
    char t4[16];
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 15792U);
    t3 = ieee_p_3620187407_sub_970026082007865855_3965413181(IEEE_P_3620187407, t2, t1, 96);
    if (t3 != 0)
        goto LAB3;

LAB4:
LAB7:    t23 = (t0 + 4232U);
    t24 = *((char **)t23);
    t25 = (13 - 13);
    t26 = (t25 * 1U);
    t27 = (0 + t26);
    t23 = (t24 + t27);
    t28 = (t0 + 10176);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t23, 3U);
    xsi_driver_first_trans_delta(t28, 0U, 3U, 0LL);

LAB2:    t33 = (t0 + 9648);
    *((int *)t33) = 1;

LAB1:    return;
LAB3:    t5 = (t0 + 4232U);
    t6 = *((char **)t5);
    t7 = (13 - 13);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t5 = (t6 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 13;
    t12 = (t11 + 4U);
    *((int *)t12) = 11;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (11 - 13);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t4, t5, t10, 1);
    t15 = (t4 + 12U);
    t14 = *((unsigned int *)t15);
    t16 = (1U * t14);
    t17 = (3U != t16);
    if (t17 == 1)
        goto LAB5;

LAB6:    t18 = (t0 + 10176);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t12, 3U);
    xsi_driver_first_trans_delta(t18, 0U, 3U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(3U, t16, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_0590943615_1516540902_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(94, ng0);

LAB3:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = (13 - 10);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 10240);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 11U);
    xsi_driver_first_trans_delta(t6, 3U, 11U, 0LL);

LAB2:    t11 = (t0 + 9664);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0590943615_1516540902_p_7(char *t0)
{
    char t9[16];
    char t11[16];
    char t20[16];
    char t22[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    char *t23;
    char *t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(96, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3752U);
    t4 = *((char **)t1);
    t5 = (7 - 7);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t10 = ((IEEE_P_2592010699) + 4000);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 7;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (1 - 7);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)99, t3, (char)97, t1, t11, (char)101);
    t13 = (t0 + 3592U);
    t16 = *((char **)t13);
    t15 = (7 - 7);
    t17 = (t15 * 1U);
    t18 = (0 + t17);
    t13 = (t16 + t18);
    t21 = ((IEEE_P_2592010699) + 4000);
    t23 = (t22 + 0U);
    t24 = (t23 + 0U);
    *((int *)t24) = 7;
    t24 = (t23 + 4U);
    *((int *)t24) = 2;
    t24 = (t23 + 8U);
    *((int *)t24) = -1;
    t25 = (2 - 7);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t24 = (t23 + 12U);
    *((unsigned int *)t24) = t26;
    t19 = xsi_base_array_concat(t19, t20, t21, (char)97, t8, t9, (char)97, t13, t22, (char)101);
    t26 = (1U + 7U);
    t27 = (t26 + 6U);
    t28 = (14U != t27);
    if (t28 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 10304);
    t29 = (t24 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t19, 14U);
    xsi_driver_first_trans_fast(t24);

LAB2:    t33 = (t0 + 9680);
    *((int *)t33) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(14U, t27, 0);
    goto LAB6;

}

static void work_a_0590943615_1516540902_p_8(char *t0)
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

LAB0:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 4392U);
    t11 = *((char **)t10);
    t10 = (t0 + 10368);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 14U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t16 = (t0 + 9696);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4072U);
    t5 = *((char **)t1);
    t1 = (t0 + 10368);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 14U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0590943615_1516540902_p_9(char *t0)
{
    char t1[16];
    char t7[16];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(102, ng0);

LAB3:    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t4 = (7 - 7);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (4 - 7);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 1512U);
    t12 = *((char **)t9);
    t9 = (t0 + 15584U);
    t13 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t1, t2, t7, t12, t9);
    t14 = (t1 + 12U);
    t11 = *((unsigned int *)t14);
    t15 = (1U * t11);
    t16 = (4U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 10432);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t13, 4U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 9712);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t15, 0);
    goto LAB6;

}

static void work_a_0590943615_1516540902_p_10(char *t0)
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
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 3592U);
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
LAB5:    t19 = (t0 + 3112U);
    t20 = *((char **)t19);
    t21 = (7 - 3);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t19 = (t20 + t23);
    t24 = (t0 + 10496);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t19, 4U);
    xsi_driver_first_trans_fast(t24);

LAB2:    t29 = (t0 + 9728);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 3112U);
    t10 = *((char **)t9);
    t11 = (7 - 7);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t10 + t13);
    t14 = (t0 + 10496);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 4U);
    xsi_driver_first_trans_fast(t14);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0590943615_1516540902_p_11(char *t0)
{
    char t18[16];
    char t20[16];
    char t25[16];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t19;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    char *t26;
    int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 16088);
    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t14 = (3 - 1);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t12 = (t13 + t16);
    t19 = ((IEEE_P_2592010699) + 4000);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 1;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t23 = (1 - 0);
    t24 = (t23 * 1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t22 = (t25 + 0U);
    t26 = (t22 + 0U);
    *((int *)t26) = 1;
    t26 = (t22 + 4U);
    *((int *)t26) = 0;
    t26 = (t22 + 8U);
    *((int *)t26) = -1;
    t27 = (0 - 1);
    t24 = (t27 * -1);
    t24 = (t24 + 1);
    t26 = (t22 + 12U);
    *((unsigned int *)t26) = t24;
    t17 = xsi_base_array_concat(t17, t18, t19, (char)97, t10, t20, (char)97, t12, t25, (char)101);
    t24 = (2U + 2U);
    t28 = (4U != t24);
    if (t28 == 1)
        goto LAB7;

LAB8:    t26 = (t0 + 10560);
    t29 = (t26 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t17, 4U);
    xsi_driver_first_trans_fast(t26);

LAB2:    t33 = (t0 + 9744);
    *((int *)t33) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t1 = (t0 + 10560);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(4U, t24, 0);
    goto LAB8;

}

static void work_a_0590943615_1516540902_p_12(char *t0)
{
    char t7[16];
    char t25[16];
    char t28[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned char t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB7:    t18 = (t0 + 4552U);
    t19 = *((char **)t18);
    t18 = (t0 + 3112U);
    t20 = *((char **)t18);
    t21 = (7 - 3);
    t22 = (t21 * 1U);
    t23 = (0 + t22);
    t18 = (t20 + t23);
    t26 = ((IEEE_P_2592010699) + 4000);
    t27 = (t0 + 15872U);
    t29 = (t28 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 3;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 3);
    t32 = (t31 * -1);
    t32 = (t32 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t32;
    t24 = xsi_base_array_concat(t24, t25, t26, (char)97, t19, t27, (char)97, t18, t28, (char)101);
    t32 = (4U + 4U);
    t33 = (8U != t32);
    if (t33 == 1)
        goto LAB9;

LAB10:    t30 = (t0 + 10624);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t24, 8U);
    xsi_driver_first_trans_fast_port(t30);

LAB2:    t38 = (t0 + 9760);
    *((int *)t38) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4872U);
    t5 = *((char **)t1);
    t1 = (t0 + 4712U);
    t6 = *((char **)t1);
    t8 = ((IEEE_P_2592010699) + 4000);
    t9 = (t0 + 15904U);
    t10 = (t0 + 15888U);
    t1 = xsi_base_array_concat(t1, t7, t8, (char)97, t5, t9, (char)97, t6, t10, (char)101);
    t11 = (4U + 4U);
    t12 = (8U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 10624);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 8U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t11, 0);
    goto LAB6;

LAB8:    goto LAB2;

LAB9:    xsi_size_not_matching(8U, t32, 0);
    goto LAB10;

}

static void work_a_0590943615_1516540902_p_13(char *t0)
{
    char t8[16];
    char t16[16];
    char t24[16];
    char t32[16];
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(115, ng0);
    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t4 = (t0 + 15600U);
    t6 = (t0 + 1992U);
    t7 = *((char **)t6);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t0 + 15632U);
    t6 = xsi_base_array_concat(t6, t8, t9, (char)99, (unsigned char)2, (char)97, t7, t10, (char)101);
    t11 = ieee_p_3620187407_sub_1306455576397931277_3965413181(IEEE_P_3620187407, t5, t4, t6, t8);
    if (t11 == 1)
        goto LAB11;

LAB12:    t3 = (unsigned char)0;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t41 = (t0 + 10688);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    *((unsigned char *)t45) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t41);

LAB2:    t46 = (t0 + 9776);
    *((int *)t46) = 1;

LAB1:    return;
LAB3:    t36 = (t0 + 10688);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t36);
    goto LAB2;

LAB5:    t28 = (t0 + 1832U);
    t29 = *((char **)t28);
    t28 = (t0 + 15616U);
    t30 = (t0 + 2472U);
    t31 = *((char **)t30);
    t33 = ((IEEE_P_2592010699) + 4000);
    t34 = (t0 + 15680U);
    t30 = xsi_base_array_concat(t30, t32, t33, (char)99, (unsigned char)2, (char)97, t31, t34, (char)101);
    t35 = ieee_p_3620187407_sub_1306455576395559435_3965413181(IEEE_P_3620187407, t29, t28, t30, t32);
    t1 = t35;
    goto LAB7;

LAB8:    t20 = (t0 + 1832U);
    t21 = *((char **)t20);
    t20 = (t0 + 15616U);
    t22 = (t0 + 2312U);
    t23 = *((char **)t22);
    t25 = ((IEEE_P_2592010699) + 4000);
    t26 = (t0 + 15664U);
    t22 = xsi_base_array_concat(t22, t24, t25, (char)99, (unsigned char)2, (char)97, t23, t26, (char)101);
    t27 = ieee_p_3620187407_sub_1306455576397931277_3965413181(IEEE_P_3620187407, t21, t20, t22, t24);
    t2 = t27;
    goto LAB10;

LAB11:    t12 = (t0 + 1672U);
    t13 = *((char **)t12);
    t12 = (t0 + 15600U);
    t14 = (t0 + 2152U);
    t15 = *((char **)t14);
    t17 = ((IEEE_P_2592010699) + 4000);
    t18 = (t0 + 15648U);
    t14 = xsi_base_array_concat(t14, t16, t17, (char)99, (unsigned char)2, (char)97, t15, t18, (char)101);
    t19 = ieee_p_3620187407_sub_1306455576395559435_3965413181(IEEE_P_3620187407, t13, t12, t14, t16);
    t3 = t19;
    goto LAB13;

LAB15:    goto LAB2;

}


extern void work_a_0590943615_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0590943615_1516540902_p_0,(void *)work_a_0590943615_1516540902_p_1,(void *)work_a_0590943615_1516540902_p_2,(void *)work_a_0590943615_1516540902_p_3,(void *)work_a_0590943615_1516540902_p_4,(void *)work_a_0590943615_1516540902_p_5,(void *)work_a_0590943615_1516540902_p_6,(void *)work_a_0590943615_1516540902_p_7,(void *)work_a_0590943615_1516540902_p_8,(void *)work_a_0590943615_1516540902_p_9,(void *)work_a_0590943615_1516540902_p_10,(void *)work_a_0590943615_1516540902_p_11,(void *)work_a_0590943615_1516540902_p_12,(void *)work_a_0590943615_1516540902_p_13};
	xsi_register_didat("work_a_0590943615_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_0590943615_1516540902.didat");
	xsi_register_executes(pe);
}
