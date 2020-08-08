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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/ram/dpram2.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3979923388_1516540902_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4832);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t3 = (t0 + 3168U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t4, 13U);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t6 = (t2 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 3168U);
    t4 = *((char **)t1);
    t1 = (t0 + 8424U);
    t7 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t4, t1);
    t8 = (t7 - 8191);
    t9 = (t8 * -1);
    xsi_vhdl_check_range_of_index(8191, 0, -1, t7);
    t10 = (8U * t9);
    t11 = (0 + t10);
    t5 = (t3 + t11);
    t12 = (t0 + 4992);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB3;

LAB5:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t1 = (t0 + 3168U);
    t5 = *((char **)t1);
    t1 = (t0 + 8424U);
    t7 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t5, t1);
    t8 = (t7 - 8191);
    t9 = (t8 * -1);
    t10 = (8U * t9);
    t11 = (0U + t10);
    t12 = (t0 + 4928);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 8U);
    xsi_driver_first_trans_delta(t12, t11, 8U, 0LL);
    goto LAB6;

}

static void work_a_3979923388_1516540902_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1792U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4848);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t3 = (t0 + 3288U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    memcpy(t3, t4, 13U);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 3288U);
    t4 = *((char **)t1);
    t1 = (t0 + 8440U);
    t6 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t4, t1);
    t7 = (t6 - 8191);
    t8 = (t7 * -1);
    xsi_vhdl_check_range_of_index(8191, 0, -1, t6);
    t9 = (8U * t8);
    t10 = (0 + t9);
    t5 = (t3 + t10);
    t11 = (t0 + 5056);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB3;

}


extern void work_a_3979923388_1516540902_init()
{
	static char *pe[] = {(void *)work_a_3979923388_1516540902_p_0,(void *)work_a_3979923388_1516540902_p_1};
	xsi_register_didat("work_a_3979923388_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_3979923388_1516540902.didat");
	xsi_register_executes(pe);
}
