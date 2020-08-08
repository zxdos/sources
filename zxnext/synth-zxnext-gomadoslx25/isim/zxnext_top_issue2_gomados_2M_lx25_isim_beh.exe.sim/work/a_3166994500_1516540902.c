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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/serial/spi_master.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_3166994500_1516540902_p_0(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
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

LAB0:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 1832U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t17 = (t0 + 7360);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 7136);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 7360);
    t13 = (t3 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB5:    t3 = (t0 + 2792U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}

static void work_a_3166994500_1516540902_p_1(char *t0)
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

LAB0:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 11936U);
    t3 = (t0 + 12029);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 7424);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);

LAB2:    t20 = (t0 + 7152);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 7424);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3166994500_1516540902_p_2(char *t0)
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
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7168);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB10;

LAB11:    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t2 = t14;

LAB12:    if (t2 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(86, ng0);
    t3 = xsi_get_transient_memory(4U);
    memset(t3, 0, 4U);
    t7 = t3;
    memset(t7, (unsigned char)2, 4U);
    t8 = (t0 + 7488);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2952U);
    t7 = *((char **)t1);
    t1 = (t0 + 11936U);
    t8 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t15, t7, t1, 1);
    t9 = (t15 + 12U);
    t16 = *((unsigned int *)t9);
    t17 = (1U * t16);
    t18 = (4U != t17);
    if (t18 == 1)
        goto LAB13;

LAB14:    t10 = (t0 + 7488);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB6;

LAB10:    t2 = (unsigned char)1;
    goto LAB12;

LAB13:    xsi_size_not_matching(4U, t17, 0);
    goto LAB14;

}

static void work_a_3166994500_1516540902_p_3(char *t0)
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

LAB0:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7184);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t11 = (0 - 3);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t3 + t14);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 7552);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast(t4);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 7552);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void work_a_3166994500_1516540902_p_4(char *t0)
{
    char t14[16];
    char t19[16];
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
    unsigned int t15;
    unsigned char t16;
    unsigned int t17;
    unsigned int t18;
    int t20;
    unsigned int t21;
    char *t22;

LAB0:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7200);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(109, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB15;

LAB16:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(110, ng0);
    t3 = xsi_get_transient_memory(9U);
    memset(t3, 0, 9U);
    t7 = t3;
    memset(t7, (unsigned char)3, 9U);
    t8 = (t0 + 7616);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 9U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t13 = (t6 == (unsigned char)3);
    if (t13 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t4 = ((IEEE_P_2592010699) + 4000);
    t7 = (t0 + 11904U);
    t1 = xsi_base_array_concat(t1, t14, t4, (char)97, t3, t7, (char)99, (unsigned char)3, (char)101);
    t15 = (8U + 1U);
    t2 = (9U != t15);
    if (t2 == 1)
        goto LAB13;

LAB14:    t8 = (t0 + 7616);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 9U);
    xsi_driver_first_trans_fast(t8);

LAB11:    goto LAB6;

LAB10:    xsi_set_current_line(113, ng0);
    t1 = xsi_get_transient_memory(9U);
    memset(t1, 0, 9U);
    t7 = t1;
    memset(t7, (unsigned char)3, 9U);
    t8 = (t0 + 7616);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 9U);
    xsi_driver_first_trans_fast(t8);
    goto LAB11;

LAB13:    xsi_size_not_matching(9U, t15, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 3112U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t13 = (t6 == (unsigned char)2);
    if (t13 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t15 = (8 - 7);
    t17 = (t15 * 1U);
    t18 = (0 + t17);
    t1 = (t3 + t18);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t19 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t20 = (0 - 7);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t21;
    t4 = xsi_base_array_concat(t4, t14, t7, (char)97, t1, t19, (char)99, (unsigned char)3, (char)101);
    t21 = (8U + 1U);
    t2 = (9U != t21);
    if (t2 == 1)
        goto LAB20;

LAB21:    t9 = (t0 + 7616);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t22 = *((char **)t12);
    memcpy(t22, t4, 9U);
    xsi_driver_first_trans_fast(t9);

LAB18:    goto LAB6;

LAB17:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1672U);
    t7 = *((char **)t1);
    t16 = *((unsigned char *)t7);
    t1 = (t0 + 7616);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t16;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);
    goto LAB18;

LAB20:    xsi_size_not_matching(9U, t21, 0);
    goto LAB21;

}

static void work_a_3166994500_1516540902_p_5(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7216);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(132, ng0);
    t3 = (t0 + 2792U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(133, ng0);
    t3 = (t0 + 3272U);
    t7 = *((char **)t3);
    t8 = (8 - 7);
    t9 = (t8 * 1U);
    t10 = (0 + t9);
    t3 = (t7 + t10);
    t11 = (t0 + 7680);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t3, 8U);
    xsi_driver_first_trans_fast(t11);
    goto LAB6;

}

static void work_a_3166994500_1516540902_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(140, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7744);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7232);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3166994500_1516540902_p_7(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(141, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 7808);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 7248);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3166994500_1516540902_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(142, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 7872);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7264);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3166994500_1516540902_p_9(char *t0)
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

LAB0:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 7936);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 7280);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 7936);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_3166994500_1516540902_init()
{
	static char *pe[] = {(void *)work_a_3166994500_1516540902_p_0,(void *)work_a_3166994500_1516540902_p_1,(void *)work_a_3166994500_1516540902_p_2,(void *)work_a_3166994500_1516540902_p_3,(void *)work_a_3166994500_1516540902_p_4,(void *)work_a_3166994500_1516540902_p_5,(void *)work_a_3166994500_1516540902_p_6,(void *)work_a_3166994500_1516540902_p_7,(void *)work_a_3166994500_1516540902_p_8,(void *)work_a_3166994500_1516540902_p_9};
	xsi_register_didat("work_a_3166994500_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_3166994500_1516540902.didat");
	xsi_register_executes(pe);
}
