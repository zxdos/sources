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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/audio/i2s/i2s_receive.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *IEEE_P_3620187407;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
unsigned char ieee_p_3620187407_sub_1306455576380142462_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096238868_3965413181(char *, char *, char *, char *, int );


static void work_a_3210459292_1516540902_p_0(char *t0)
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

LAB0:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6880);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7072);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 7072);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

}

static void work_a_3210459292_1516540902_p_1(char *t0)
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

LAB0:    xsi_set_current_line(84, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 7136);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 6896);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3210459292_1516540902_p_2(char *t0)
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

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t7 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t6);
    t1 = (t0 + 7200);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 6912);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3210459292_1516540902_p_3(char *t0)
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

LAB0:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6928);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(92, ng0);
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

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 7264);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

LAB8:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 7264);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_3210459292_1516540902_p_4(char *t0)
{
    char t13[16];
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
    char *t11;
    char *t12;
    int t14;
    unsigned char t15;
    unsigned char t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6944);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(105, ng0);
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

LAB5:    xsi_set_current_line(106, ng0);
    t3 = xsi_get_transient_memory(14U);
    memset(t3, 0, 14U);
    t7 = t3;
    memset(t7, (unsigned char)2, 14U);
    t8 = (t0 + 7328);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 14U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(107, ng0);
    t14 = (13 - 1);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, t14, 4);
    t3 = (t0 + 7392);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    goto LAB6;

LAB8:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 2792U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t15 = (t6 == (unsigned char)3);
    if (t15 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 3112U);
    t4 = *((char **)t1);
    t1 = (t0 + 11760U);
    t14 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t4, t1);
    t17 = (t14 - 13);
    t18 = (t17 * -1);
    t19 = (1 * t18);
    t20 = (0U + t19);
    t7 = (t0 + 7328);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_delta(t7, t20, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 3112U);
    t3 = *((char **)t1);
    t1 = (t0 + 11760U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 0, 4);
    t2 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB13;

LAB15:
LAB14:
LAB11:    goto LAB6;

LAB10:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t16 = *((unsigned char *)t7);
    t1 = (t0 + 7328);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t16;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(111, ng0);
    t1 = xsi_get_transient_memory(13U);
    memset(t1, 0, 13U);
    t3 = t1;
    memset(t3, (unsigned char)2, 13U);
    t4 = (t0 + 7328);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 13U);
    xsi_driver_first_trans_delta(t4, 1U, 13U, 0LL);
    xsi_set_current_line(112, ng0);
    t14 = (13 - 1);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, t14, 4);
    t3 = (t0 + 7392);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    goto LAB11;

LAB13:    xsi_set_current_line(116, ng0);
    t7 = (t0 + 3112U);
    t8 = *((char **)t7);
    t7 = (t0 + 11760U);
    t9 = ieee_p_3620187407_sub_2255506239096238868_3965413181(IEEE_P_3620187407, t21, t8, t7, 1);
    t10 = (t21 + 12U);
    t18 = *((unsigned int *)t10);
    t19 = (1U * t18);
    t5 = (4U != t19);
    if (t5 == 1)
        goto LAB16;

LAB17:    t11 = (t0 + 7392);
    t12 = (t11 + 56U);
    t22 = *((char **)t12);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t9, 4U);
    xsi_driver_first_trans_fast(t11);
    goto LAB14;

LAB16:    xsi_size_not_matching(4U, t19, 0);
    goto LAB17;

}

static void work_a_3210459292_1516540902_p_5(char *t0)
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
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6960);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2632U);
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

LAB5:    xsi_set_current_line(129, ng0);
    t3 = xsi_get_transient_memory(13U);
    memset(t3, 0, 13U);
    t7 = t3;
    memset(t7, (unsigned char)2, 13U);
    t8 = (t0 + 7456);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 13U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(130, ng0);
    t1 = xsi_get_transient_memory(13U);
    memset(t1, 0, 13U);
    t3 = t1;
    memset(t3, (unsigned char)2, 13U);
    t4 = (t0 + 7520);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 13U);
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

LAB8:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t15 = *((unsigned char *)t7);
    t16 = (t15 == (unsigned char)2);
    if (t16 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 2952U);
    t3 = *((char **)t1);
    t17 = (13 - 13);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t4 = (t0 + 7456);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 13U);
    xsi_driver_first_trans_fast(t4);

LAB14:    goto LAB6;

LAB10:    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t2 = t14;
    goto LAB12;

LAB13:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 2952U);
    t8 = *((char **)t1);
    t17 = (13 - 13);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t8 + t19);
    t9 = (t0 + 7520);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t20 = *((char **)t12);
    memcpy(t20, t1, 13U);
    xsi_driver_first_trans_fast(t9);
    goto LAB14;

}

static void work_a_3210459292_1516540902_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(143, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 7584);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 13U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6976);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3210459292_1516540902_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(144, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 7648);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 13U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6992);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3210459292_1516540902_init()
{
	static char *pe[] = {(void *)work_a_3210459292_1516540902_p_0,(void *)work_a_3210459292_1516540902_p_1,(void *)work_a_3210459292_1516540902_p_2,(void *)work_a_3210459292_1516540902_p_3,(void *)work_a_3210459292_1516540902_p_4,(void *)work_a_3210459292_1516540902_p_5,(void *)work_a_3210459292_1516540902_p_6,(void *)work_a_3210459292_1516540902_p_7};
	xsi_register_didat("work_a_3210459292_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_3210459292_1516540902.didat");
	xsi_register_executes(pe);
}
