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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/audio/i2s/i2s_transmit.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_4168107041_1516540902_p_0(char *t0)
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

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4968);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 5096);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 5096);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void work_a_4168107041_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(75, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 5160);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 4984);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4168107041_1516540902_p_2(char *t0)
{
    char t20[16];
    char t21[16];
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
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t22;
    unsigned int t23;
    char *t24;

LAB0:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 5224);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_delta(t3, 0U, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t1 = xsi_get_transient_memory(12U);
    memset(t1, 0, 12U);
    t3 = t1;
    memset(t3, (unsigned char)2, 12U);
    t4 = (t0 + 5224);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 12U);
    xsi_driver_first_trans_delta(t4, 1U, 12U, 0LL);
    goto LAB6;

LAB8:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t11 = (t6 == (unsigned char)3);
    if (t11 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t16 = (13 - 2);
    t17 = (12 - t16);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t21 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 11;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t22 = (0 - 11);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t23;
    t4 = xsi_base_array_concat(t4, t20, t7, (char)97, t1, t21, (char)99, (unsigned char)2, (char)101);
    t23 = (12U + 1U);
    t2 = (13U != t23);
    if (t2 == 1)
        goto LAB16;

LAB17:    t9 = (t0 + 5224);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    t15 = (t14 + 56U);
    t24 = *((char **)t15);
    memcpy(t24, t4, 13U);
    xsi_driver_first_trans_fast(t9);

LAB11:    goto LAB6;

LAB10:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t12 = *((unsigned char *)t7);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 5224);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 13U);
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1992U);
    t8 = *((char **)t1);
    t1 = (t0 + 5224);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 13U);
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_size_not_matching(13U, t23, 0);
    goto LAB17;

}

static void work_a_4168107041_1516540902_p_3(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(101, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = (13 - 1);
    t4 = (t3 - 12);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 5288);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t8;
    xsi_driver_first_trans_fast_port(t9);

LAB2:    t14 = (t0 + 5016);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_4168107041_1516540902_init()
{
	static char *pe[] = {(void *)work_a_4168107041_1516540902_p_0,(void *)work_a_4168107041_1516540902_p_1,(void *)work_a_4168107041_1516540902_p_2,(void *)work_a_4168107041_1516540902_p_3};
	xsi_register_didat("work_a_4168107041_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_4168107041_1516540902.didat");
	xsi_register_executes(pe);
}
