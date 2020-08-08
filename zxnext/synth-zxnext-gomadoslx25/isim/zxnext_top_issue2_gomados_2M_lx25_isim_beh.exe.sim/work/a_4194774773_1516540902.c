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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/misc/asymmetrical_debounce.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_4194774773_1516540902_p_0(char *t0)
{
    char t25[16];
    char *t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
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
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4200);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t5 = (t0 + 1352U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t5 = (t0 + 1512U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 != (unsigned char)3);
    t4 = t11;

LAB13:    if (t4 == 1)
        goto LAB8;

LAB9:    t5 = (t0 + 1992U);
    t12 = *((char **)t5);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t3 = *((unsigned char *)t5);
    t4 = (t3 == (unsigned char)3);
    if (t4 == 1)
        goto LAB16;

LAB17:    t2 = (unsigned char)0;

LAB18:    if (t2 != 0)
        goto LAB14;

LAB15:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(58, ng0);
    t5 = xsi_get_transient_memory(4U);
    memset(t5, 0, 4U);
    t15 = t5;
    memset(t15, (unsigned char)2, 4U);
    t16 = (t0 + 4312);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t5, 4U);
    xsi_driver_first_trans_fast(t16);
    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

LAB11:    t4 = (unsigned char)1;
    goto LAB13;

LAB14:    xsi_set_current_line(60, ng0);
    t9 = (t0 + 1832U);
    t12 = *((char **)t9);
    t9 = (t0 + 7152U);
    t15 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t25, t12, t9, 1);
    t16 = (t25 + 12U);
    t26 = *((unsigned int *)t16);
    t27 = (1U * t26);
    t10 = (4U != t27);
    if (t10 == 1)
        goto LAB19;

LAB20:    t17 = (t0 + 4312);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t28 = *((char **)t20);
    memcpy(t28, t15, 4U);
    xsi_driver_first_trans_fast(t17);
    goto LAB6;

LAB16:    t1 = (t0 + 1832U);
    t6 = *((char **)t1);
    t21 = (3 - 3);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t1 = (t6 + t24);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    t2 = t8;
    goto LAB18;

LAB19:    xsi_size_not_matching(4U, t27, 0);
    goto LAB20;

}

static void work_a_4194774773_1516540902_p_1(char *t0)
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

LAB0:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4216);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t11 = (3 - 3);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t3 + t14);
    t2 = *((unsigned char *)t1);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB11;

LAB12:
LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 4376);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

LAB8:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 4376);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB11:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 4376);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

}

static void work_a_4194774773_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(82, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4440);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4232);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_4194774773_1516540902_init()
{
	static char *pe[] = {(void *)work_a_4194774773_1516540902_p_0,(void *)work_a_4194774773_1516540902_p_1,(void *)work_a_4194774773_1516540902_p_2};
	xsi_register_didat("work_a_4194774773_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_4194774773_1516540902.didat");
	xsi_register_executes(pe);
}
