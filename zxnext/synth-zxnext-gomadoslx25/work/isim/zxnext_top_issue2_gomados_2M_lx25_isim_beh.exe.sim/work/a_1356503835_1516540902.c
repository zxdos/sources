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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/audio/soundrive.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1356503835_1516540902_p_0(char *t0)
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
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5312);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB11;

LAB12:
LAB9:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB13;

LAB15:    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB16;

LAB17:
LAB14:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB18;

LAB20:    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB21;

LAB22:
LAB19:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB23;

LAB25:    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB26;

LAB27:
LAB24:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 9161);
    t8 = (t0 + 5408);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 9169);
    t4 = (t0 + 5472);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 9177);
    t4 = (t0 + 5536);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 9185);
    t4 = (t0 + 5600);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

LAB8:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t1 = (t0 + 5408);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB11:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t1 = (t0 + 5408);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB13:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t1 = (t0 + 5472);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t1 = (t0 + 5472);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB18:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t1 = (t0 + 5536);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB21:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t1 = (t0 + 5536);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB23:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t1 = (t0 + 5600);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB26:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t1 = (t0 + 5600);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

}

static void work_a_1356503835_1516540902_p_1(char *t0)
{
    char t3[16];
    char t6[16];
    char t11[16];
    char *t1;
    unsigned char t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5328);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(112, ng0);
    t4 = (t0 + 3112U);
    t5 = *((char **)t4);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t0 + 9032U);
    t4 = xsi_base_array_concat(t4, t6, t7, (char)99, (unsigned char)2, (char)97, t5, t8, (char)101);
    t9 = (t0 + 3272U);
    t10 = *((char **)t9);
    t12 = ((IEEE_P_2592010699) + 4000);
    t13 = (t0 + 9048U);
    t9 = xsi_base_array_concat(t9, t11, t12, (char)99, (unsigned char)2, (char)97, t10, t13, (char)101);
    t14 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t3, t4, t6, t9, t11);
    t15 = (t3 + 12U);
    t16 = *((unsigned int *)t15);
    t17 = (1U * t16);
    t18 = (9U != t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    t19 = (t0 + 5664);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t14, 9U);
    xsi_driver_first_trans_fast_port(t19);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4000);
    t7 = (t0 + 9064U);
    t1 = xsi_base_array_concat(t1, t6, t5, (char)99, (unsigned char)2, (char)97, t4, t7, (char)101);
    t8 = (t0 + 3592U);
    t9 = *((char **)t8);
    t10 = ((IEEE_P_2592010699) + 4000);
    t12 = (t0 + 9080U);
    t8 = xsi_base_array_concat(t8, t11, t10, (char)99, (unsigned char)2, (char)97, t9, t12, (char)101);
    t13 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t3, t1, t6, t8, t11);
    t14 = (t3 + 12U);
    t16 = *((unsigned int *)t14);
    t17 = (1U * t16);
    t2 = (9U != t17);
    if (t2 == 1)
        goto LAB7;

LAB8:    t15 = (t0 + 5728);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 9U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB3;

LAB5:    xsi_size_not_matching(9U, t17, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(9U, t17, 0);
    goto LAB8;

}


extern void work_a_1356503835_1516540902_init()
{
	static char *pe[] = {(void *)work_a_1356503835_1516540902_p_0,(void *)work_a_1356503835_1516540902_p_1};
	xsi_register_didat("work_a_1356503835_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_1356503835_1516540902.didat");
	xsi_register_executes(pe);
}
