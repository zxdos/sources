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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/audio/dac.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);


static void work_a_1889431754_1516540902_p_0(char *t0)
{
    char t18[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(47, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = (16 + 2);
    t4 = (t3 - 18);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 2152U);
    t10 = *((char **)t9);
    t11 = (16 + 2);
    t12 = (t11 - 18);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t9 = (t10 + t15);
    t16 = *((unsigned char *)t9);
    t19 = ((IEEE_P_1242562249) + 2976);
    t17 = xsi_base_array_concat(t17, t18, t19, (char)99, t8, (char)99, t16, (char)101);
    t20 = (1U + 1U);
    t21 = (2U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t22 = (t0 + 5288);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t17, 2U);
    xsi_driver_first_trans_delta(t22, 0U, 2U, 0LL);

LAB2:    t27 = (t0 + 5144);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(2U, t20, 0);
    goto LAB6;

}

static void work_a_1889431754_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = xsi_get_transient_memory(17U);
    memset(t1, 0, 17U);
    t2 = t1;
    memset(t2, (unsigned char)2, 17U);
    t3 = (t0 + 5352);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 17U);
    xsi_driver_first_trans_delta(t3, 2U, 17U, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1889431754_1516540902_p_2(char *t0)
{
    char t1[16];
    char t3[16];
    char t7[16];
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t4 = ((IEEE_P_2592010699) + 4000);
    t2 = xsi_base_array_concat(t2, t3, t4, (char)99, (unsigned char)2, (char)99, (unsigned char)2, (char)101);
    t5 = (t0 + 1352U);
    t6 = *((char **)t5);
    t8 = ((IEEE_P_2592010699) + 4000);
    t9 = (t0 + 8432U);
    t5 = xsi_base_array_concat(t5, t7, t8, (char)97, t2, t3, (char)97, t6, t9, (char)101);
    t10 = (t0 + 2312U);
    t11 = *((char **)t10);
    t10 = (t0 + 8448U);
    t12 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t1, t5, t7, t11, t10);
    t13 = (t1 + 12U);
    t14 = *((unsigned int *)t13);
    t15 = (1U * t14);
    t16 = (19U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 5416);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 19U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 5160);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(19U, t15, 0);
    goto LAB6;

}

static void work_a_1889431754_1516540902_p_3(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(53, ng0);

LAB3:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 8448U);
    t4 = (t0 + 2152U);
    t5 = *((char **)t4);
    t4 = (t0 + 8448U);
    t6 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (19U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 5480);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 19U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 5176);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(19U, t9, 0);
    goto LAB6;

}

static void work_a_1889431754_1516540902_p_4(char *t0)
{
    char t11[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    int t12;
    int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;

LAB0:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5192);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 5544);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t4, 19U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t12 = (16 + 2);
    t13 = (t12 - 18);
    t20 = (t13 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t2 = (t4 + t22);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 5608);
    t8 = (t5 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t1;
    xsi_driver_first_trans_fast(t5);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(59, ng0);
    t12 = (16 + 1);
    t13 = xsi_vhdl_pow(2, t12);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t11, t13, 19);
    t14 = (19U != 19U);
    if (t14 == 1)
        goto LAB11;

LAB12:    t15 = (t0 + 5544);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t4, 19U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t15 = *((char **)t8);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_size_not_matching(19U, 19U, 0);
    goto LAB12;

}

static void work_a_1889431754_1516540902_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(68, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5672);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5208);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1889431754_1516540902_init()
{
	static char *pe[] = {(void *)work_a_1889431754_1516540902_p_0,(void *)work_a_1889431754_1516540902_p_1,(void *)work_a_1889431754_1516540902_p_2,(void *)work_a_1889431754_1516540902_p_3,(void *)work_a_1889431754_1516540902_p_4,(void *)work_a_1889431754_1516540902_p_5};
	xsi_register_didat("work_a_1889431754_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_1889431754_1516540902.didat");
	xsi_register_executes(pe);
}
