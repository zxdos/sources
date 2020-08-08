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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/misc/debounce.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_1983712816_1516540902_p_0(char *t0)
{
    char t13[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4856);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t5 = (0 - 1);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t3 = (t4 + t8);
    t9 = *((unsigned char *)t3);
    t10 = (t0 + 1352U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t14 = ((IEEE_P_2592010699) + 4000);
    t10 = xsi_base_array_concat(t10, t13, t14, (char)99, t9, (char)99, t12, (char)101);
    t15 = (1U + 1U);
    t16 = (2U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 5000);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t10, 2U);
    xsi_driver_first_trans_fast(t17);
    goto LAB3;

LAB5:    xsi_size_not_matching(2U, t15, 0);
    goto LAB6;

}

static void work_a_1983712816_1516540902_p_1(char *t0)
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
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(59, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = (0 - 1);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t10 = (1 - 1);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t7, t14);
    t16 = (t0 + 5064);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t15;
    xsi_driver_first_trans_fast(t16);

LAB2:    t21 = (t0 + 4872);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1983712816_1516540902_p_2(char *t0)
{
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
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4888);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = (unsigned char)0;

LAB12:    if (t2 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(67, ng0);
    t3 = xsi_get_transient_memory(5U);
    memset(t3, 0, 5U);
    t7 = t3;
    memset(t7, (unsigned char)2, 5U);
    t8 = (t0 + 5128);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 5U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(69, ng0);
    t7 = (t0 + 1992U);
    t8 = *((char **)t7);
    t7 = (t0 + 8048U);
    t9 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t19, t8, t7, 1);
    t10 = (t19 + 12U);
    t20 = *((unsigned int *)t10);
    t21 = (1U * t20);
    t22 = (5U != t21);
    if (t22 == 1)
        goto LAB13;

LAB14:    t11 = (t0 + 5128);
    t12 = (t11 + 56U);
    t23 = *((char **)t12);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t9, 5U);
    xsi_driver_first_trans_fast(t11);
    goto LAB6;

LAB10:    t1 = (t0 + 1992U);
    t4 = *((char **)t1);
    t13 = (4 - 4);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t1 = (t4 + t16);
    t17 = *((unsigned char *)t1);
    t18 = (t17 == (unsigned char)2);
    t2 = t18;
    goto LAB12;

LAB13:    xsi_size_not_matching(5U, t21, 0);
    goto LAB14;

}

static void work_a_1983712816_1516540902_p_3(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4904);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = (4 - 4);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t3 = (t4 + t8);
    t9 = *((unsigned char *)t3);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(80, ng0);
    t11 = (t0 + 1672U);
    t12 = *((char **)t11);
    t13 = (1 - 1);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t11 = (t12 + t16);
    t17 = *((unsigned char *)t11);
    t18 = (t0 + 5192);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t17;
    xsi_driver_first_trans_fast(t18);
    goto LAB6;

}

static void work_a_1983712816_1516540902_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5256);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4920);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1983712816_1516540902_init()
{
	static char *pe[] = {(void *)work_a_1983712816_1516540902_p_0,(void *)work_a_1983712816_1516540902_p_1,(void *)work_a_1983712816_1516540902_p_2,(void *)work_a_1983712816_1516540902_p_3,(void *)work_a_1983712816_1516540902_p_4};
	xsi_register_didat("work_a_1983712816_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_1983712816_1516540902.didat");
	xsi_register_executes(pe);
}
