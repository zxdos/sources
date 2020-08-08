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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/ram/tdpram.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_5109402382352621412_3965413181(char *, char *, char *);


static void work_a_4014363745_1516540902_p_0(char *t0)
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
    char *t16;
    unsigned char t17;

LAB0:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4552);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 3008U);
    t4 = *((char **)t3);
    t3 = (t0 + 1352U);
    t5 = *((char **)t3);
    t3 = (t0 + 7768U);
    t6 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t5, t3);
    t7 = (t6 - 1023);
    t8 = (t7 * -1);
    xsi_vhdl_check_range_of_index(1023, 0, -1, t6);
    t9 = (8U * t8);
    t10 = (0 + t9);
    t11 = (t4 + t10);
    t12 = (t0 + 4648);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t11, 8U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t17 = (t2 == (unsigned char)3);
    if (t17 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t1 = (t0 + 3008U);
    t5 = *((char **)t1);
    t1 = (t0 + 1352U);
    t11 = *((char **)t1);
    t1 = (t0 + 7768U);
    t6 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t11, t1);
    t7 = (t6 - 1023);
    t8 = (t7 * -1);
    xsi_vhdl_check_range_of_index(1023, 0, -1, t6);
    t9 = (8U * t8);
    t10 = (0 + t9);
    t12 = (t5 + t10);
    memcpy(t12, t4, 8U);
    t13 = (t0 + 2952U);
    xsi_variable_act(t13);
    goto LAB6;

}

static void work_a_4014363745_1516540902_p_1(char *t0)
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
    char *t16;
    unsigned char t17;

LAB0:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1792U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4568);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 3008U);
    t4 = *((char **)t3);
    t3 = (t0 + 2152U);
    t5 = *((char **)t3);
    t3 = (t0 + 7816U);
    t6 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t5, t3);
    t7 = (t6 - 1023);
    t8 = (t7 * -1);
    xsi_vhdl_check_range_of_index(1023, 0, -1, t6);
    t9 = (8U * t8);
    t10 = (0 + t9);
    t11 = (t4 + t10);
    t12 = (t0 + 4712);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t11, 8U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t17 = (t2 == (unsigned char)3);
    if (t17 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 3008U);
    t5 = *((char **)t1);
    t1 = (t0 + 2152U);
    t11 = *((char **)t1);
    t1 = (t0 + 7816U);
    t6 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t11, t1);
    t7 = (t6 - 1023);
    t8 = (t7 * -1);
    xsi_vhdl_check_range_of_index(1023, 0, -1, t6);
    t9 = (8U * t8);
    t10 = (0 + t9);
    t12 = (t5 + t10);
    memcpy(t12, t4, 8U);
    t13 = (t0 + 2952U);
    xsi_variable_act(t13);
    goto LAB6;

}


extern void work_a_4014363745_1516540902_init()
{
	static char *pe[] = {(void *)work_a_4014363745_1516540902_p_0,(void *)work_a_4014363745_1516540902_p_1};
	xsi_register_didat("work_a_4014363745_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_4014363745_1516540902.didat");
	xsi_register_executes(pe);
}
