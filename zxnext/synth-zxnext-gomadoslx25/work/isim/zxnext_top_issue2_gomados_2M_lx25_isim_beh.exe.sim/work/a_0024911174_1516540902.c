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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/audio/audio_mixer.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0024911174_1516540902_p_0(char *t0)
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

LAB0:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(13U);
    memset(t10, 0, 13U);
    t11 = t10;
    memset(t11, (unsigned char)2, 13U);
    t12 = (t0 + 8824);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 13U);
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 8584);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4688U);
    t5 = *((char **)t1);
    t1 = (t0 + 8824);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 13U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0024911174_1516540902_p_1(char *t0)
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

LAB0:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = xsi_get_transient_memory(13U);
    memset(t10, 0, 13U);
    t11 = t10;
    memset(t11, (unsigned char)2, 13U);
    t12 = (t0 + 8888);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 13U);
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 8600);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4808U);
    t5 = *((char **)t1);
    t1 = (t0 + 8888);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 13U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0024911174_1516540902_p_2(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(82, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 4000);
    t5 = (t0 + 14216U);
    t1 = xsi_base_array_concat(t1, t3, t4, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t6 = (1U + 12U);
    t7 = (13U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 8952);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 13U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 8616);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(13U, t6, 0);
    goto LAB6;

}

static void work_a_0024911174_1516540902_p_3(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(83, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 4000);
    t5 = (t0 + 14232U);
    t1 = xsi_base_array_concat(t1, t3, t4, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t6 = (1U + 12U);
    t7 = (13U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 9016);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 13U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 8632);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(13U, t6, 0);
    goto LAB6;

}

static void work_a_0024911174_1516540902_p_4(char *t0)
{
    char t5[16];
    char t7[16];
    char t15[16];
    char t17[16];
    char *t1;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t1 = (t0 + 14766);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (1 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 14248U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)97, t1, t7, (char)97, t4, t9, (char)101);
    t12 = (t0 + 14768);
    t16 = ((IEEE_P_2592010699) + 4000);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (1 - 0);
    t11 = (t20 * 1);
    t11 = (t11 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t11;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)97, t3, t5, (char)97, t12, t17, (char)101);
    t11 = (2U + 9U);
    t21 = (t11 + 2U);
    t22 = (13U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 9080);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 13U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t27 = (t0 + 8648);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(13U, t21, 0);
    goto LAB6;

}

static void work_a_0024911174_1516540902_p_5(char *t0)
{
    char t5[16];
    char t7[16];
    char t15[16];
    char t17[16];
    char *t1;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(86, ng0);

LAB3:    t1 = (t0 + 14770);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (1 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 14264U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)97, t1, t7, (char)97, t4, t9, (char)101);
    t12 = (t0 + 14772);
    t16 = ((IEEE_P_2592010699) + 4000);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 1;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (1 - 0);
    t11 = (t20 * 1);
    t11 = (t11 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t11;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)97, t3, t5, (char)97, t12, t17, (char)101);
    t11 = (2U + 9U);
    t21 = (t11 + 2U);
    t22 = (13U != t21);
    if (t22 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 9144);
    t23 = (t19 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 13U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t27 = (t0 + 8664);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(13U, t21, 0);
    goto LAB6;

}

static void work_a_0024911174_1516540902_p_6(char *t0)
{
    char t5[16];
    char t7[16];
    char *t1;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(88, ng0);

LAB3:    t1 = (t0 + 14774);
    t3 = (t0 + 2312U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 14280U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)97, t1, t7, (char)97, t4, t9, (char)101);
    t11 = (3U + 10U);
    t12 = (13U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 9208);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 13U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 8680);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(13U, t11, 0);
    goto LAB6;

}

static void work_a_0024911174_1516540902_p_7(char *t0)
{
    char t5[16];
    char t7[16];
    char *t1;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(89, ng0);

LAB3:    t1 = (t0 + 14777);
    t3 = (t0 + 2472U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (2 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 14296U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)97, t1, t7, (char)97, t4, t9, (char)101);
    t11 = (3U + 10U);
    t12 = (13U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 9272);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 13U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 8696);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(13U, t11, 0);
    goto LAB6;

}

static void work_a_0024911174_1516540902_p_8(char *t0)
{
    char t13[16];
    char t14[16];
    char t15[16];
    char t16[16];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 8712);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t1 = (t0 + 14376U);
    t4 = (t0 + 3112U);
    t7 = *((char **)t4);
    t4 = (t0 + 14392U);
    t8 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t16, t3, t1, t7, t4);
    t9 = (t0 + 3272U);
    t10 = *((char **)t9);
    t9 = (t0 + 14408U);
    t11 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t15, t8, t16, t10, t9);
    t12 = (t0 + 3592U);
    t17 = *((char **)t12);
    t12 = (t0 + 14440U);
    t18 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t14, t11, t15, t17, t12);
    t19 = (t0 + 3912U);
    t20 = *((char **)t19);
    t19 = (t0 + 14472U);
    t21 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t13, t18, t14, t20, t19);
    t22 = (t13 + 12U);
    t23 = *((unsigned int *)t22);
    t24 = (1U * t23);
    t2 = (13U != t24);
    if (t2 == 1)
        goto LAB8;

LAB9:    t25 = (t0 + 9336);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t21, 13U);
    xsi_driver_first_trans_fast(t25);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t1 = (t0 + 14376U);
    t4 = (t0 + 3112U);
    t7 = *((char **)t4);
    t4 = (t0 + 14392U);
    t8 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t16, t3, t1, t7, t4);
    t9 = (t0 + 3432U);
    t10 = *((char **)t9);
    t9 = (t0 + 14424U);
    t11 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t15, t8, t16, t10, t9);
    t12 = (t0 + 3752U);
    t17 = *((char **)t12);
    t12 = (t0 + 14456U);
    t18 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t14, t11, t15, t17, t12);
    t19 = (t0 + 4072U);
    t20 = *((char **)t19);
    t19 = (t0 + 14488U);
    t21 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t13, t18, t14, t20, t19);
    t22 = (t13 + 12U);
    t23 = *((unsigned int *)t22);
    t24 = (1U * t23);
    t2 = (13U != t24);
    if (t2 == 1)
        goto LAB10;

LAB11:    t25 = (t0 + 9400);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t21, 13U);
    xsi_driver_first_trans_fast(t25);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(95, ng0);
    t3 = xsi_get_transient_memory(13U);
    memset(t3, 0, 13U);
    t7 = t3;
    memset(t7, (unsigned char)2, 13U);
    t8 = (t0 + 9336);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 13U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(96, ng0);
    t1 = xsi_get_transient_memory(13U);
    memset(t1, 0, 13U);
    t3 = t1;
    memset(t3, (unsigned char)2, 13U);
    t4 = (t0 + 9400);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 13U);
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

LAB8:    xsi_size_not_matching(13U, t24, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(13U, t24, 0);
    goto LAB11;

}

static void work_a_0024911174_1516540902_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(104, ng0);

LAB3:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t1 = (t0 + 9464);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 13U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8728);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0024911174_1516540902_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(105, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t1 = (t0 + 9528);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 13U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 8744);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0024911174_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0024911174_1516540902_p_0,(void *)work_a_0024911174_1516540902_p_1,(void *)work_a_0024911174_1516540902_p_2,(void *)work_a_0024911174_1516540902_p_3,(void *)work_a_0024911174_1516540902_p_4,(void *)work_a_0024911174_1516540902_p_5,(void *)work_a_0024911174_1516540902_p_6,(void *)work_a_0024911174_1516540902_p_7,(void *)work_a_0024911174_1516540902_p_8,(void *)work_a_0024911174_1516540902_p_9,(void *)work_a_0024911174_1516540902_p_10};
	xsi_register_didat("work_a_0024911174_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_0024911174_1516540902.didat");
	xsi_register_executes(pe);
}
