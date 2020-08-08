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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/device/copper.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1434220770698190313_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3307759752501503797_1035706684(char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_1306455576380142462_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_3546495410_1516540902_p_0(char *t0)
{
    char t14[16];
    char t17[16];
    char t36[16];
    char t37[16];
    char t40[16];
    char t43[16];
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
    char *t13;
    int t15;
    unsigned int t16;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    int t38;
    unsigned int t39;
    char *t41;
    int t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned char t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4880);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2792U);
    t3 = *((char **)t1);
    t1 = (t0 + 8416U);
    t4 = (t0 + 1352U);
    t7 = *((char **)t4);
    t4 = (t0 + 8304U);
    t2 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t3, t1, t7, t4);
    if (t2 != 0)
        goto LAB8;

LAB10:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 8304U);
    t4 = (t0 + 8520);
    t8 = (t14 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (1 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t6 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t14);
    if (t6 == 1)
        goto LAB22;

LAB23:    t5 = (unsigned char)0;

LAB24:    if (t5 == 1)
        goto LAB19;

LAB20:    t2 = (unsigned char)0;

LAB21:    if (t2 != 0)
        goto LAB17;

LAB18:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 8304U);
    t4 = (t0 + 8522);
    t8 = (t14 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (1 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t2 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t3, t1, t4, t14);
    if (t2 != 0)
        goto LAB25;

LAB26:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 5056);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(62, ng0);
    t3 = xsi_get_transient_memory(10U);
    memset(t3, 0, 10U);
    t7 = t3;
    memset(t7, (unsigned char)2, 10U);
    t8 = (t0 + 4992);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 10U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 5056);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(65, ng0);
    t1 = xsi_get_transient_memory(15U);
    memset(t1, 0, 15U);
    t3 = t1;
    memset(t3, (unsigned char)2, 15U);
    t4 = (t0 + 5120);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 15U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB6;

LAB8:    xsi_set_current_line(72, ng0);
    t8 = (t0 + 1352U);
    t9 = *((char **)t8);
    t8 = (t0 + 5184);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 2U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 8304U);
    t4 = (t0 + 8516);
    t8 = (t14 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (1 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t5 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t1, t4, t14);
    if (t5 == 1)
        goto LAB14;

LAB15:    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t9 = (t0 + 8304U);
    t11 = (t0 + 8518);
    t13 = (t17 + 0U);
    t18 = (t13 + 0U);
    *((int *)t18) = 0;
    t18 = (t13 + 4U);
    *((int *)t18) = 1;
    t18 = (t13 + 8U);
    *((int *)t18) = 1;
    t19 = (1 - 0);
    t16 = (t19 * 1);
    t16 = (t16 + 1);
    t18 = (t13 + 12U);
    *((unsigned int *)t18) = t16;
    t6 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t10, t9, t11, t17);
    t2 = t6;

LAB16:    if (t2 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 5056);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB11:    xsi_set_current_line(75, ng0);
    t18 = xsi_get_transient_memory(10U);
    memset(t18, 0, 10U);
    t20 = t18;
    memset(t20, (unsigned char)2, 10U);
    t21 = (t0 + 4992);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t18, 10U);
    xsi_driver_first_trans_fast(t21);
    goto LAB12;

LAB14:    t2 = (unsigned char)1;
    goto LAB16;

LAB17:    xsi_set_current_line(82, ng0);
    t13 = xsi_get_transient_memory(10U);
    memset(t13, 0, 10U);
    t18 = t13;
    memset(t18, (unsigned char)2, 10U);
    t20 = (t0 + 4992);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t13, 10U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 5056);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB9;

LAB19:    t11 = (t0 + 1512U);
    t12 = *((char **)t11);
    t11 = (t0 + 8320U);
    t27 = ieee_p_1242562249_sub_3307759752501503797_1035706684(IEEE_P_1242562249, t12, t11, 0);
    t2 = t27;
    goto LAB21;

LAB22:    t9 = (t0 + 1672U);
    t10 = *((char **)t9);
    t9 = (t0 + 8336U);
    t26 = ieee_p_1242562249_sub_3307759752501503797_1035706684(IEEE_P_1242562249, t10, t9, 0);
    t5 = t26;
    goto LAB24;

LAB25:    xsi_set_current_line(87, ng0);
    t9 = (t0 + 2632U);
    t10 = *((char **)t9);
    t5 = *((unsigned char *)t10);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB27;

LAB29:    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t15 = (15 - 15);
    t16 = (t15 * -1);
    t28 = (1U * t16);
    t29 = (0 + t28);
    t1 = (t3 + t29);
    t2 = *((unsigned char *)t1);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB30;

LAB31:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t16 = (15 - 14);
    t28 = (t16 * 1U);
    t29 = (0 + t28);
    t1 = (t3 + t29);
    t4 = (t0 + 5120);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 15U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t16 = (15 - 14);
    t28 = (t16 * 1U);
    t29 = (0 + t28);
    t1 = (t3 + t29);
    t4 = (t14 + 0U);
    t7 = (t4 + 0U);
    *((int *)t7) = 14;
    t7 = (t4 + 4U);
    *((int *)t7) = 8;
    t7 = (t4 + 8U);
    *((int *)t7) = -1;
    t15 = (8 - 14);
    t30 = (t15 * -1);
    t30 = (t30 + 1);
    t7 = (t4 + 12U);
    *((unsigned int *)t7) = t30;
    t7 = (t0 + 8527);
    t9 = (t17 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 6;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t19 = (6 - 0);
    t30 = (t19 * 1);
    t30 = (t30 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t30;
    t2 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t1, t14, t7, t17);
    if (t2 != 0)
        goto LAB40;

LAB42:
LAB41:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 8400U);
    t4 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t14, t3, t1, 1);
    t7 = (t14 + 12U);
    t16 = *((unsigned int *)t7);
    t28 = (1U * t16);
    t2 = (10U != t28);
    if (t2 == 1)
        goto LAB43;

LAB44:    t8 = (t0 + 4992);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 10U);
    xsi_driver_first_trans_fast(t8);

LAB28:    goto LAB9;

LAB27:    xsi_set_current_line(89, ng0);
    t9 = (t0 + 5056);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t18 = *((char **)t13);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);
    goto LAB28;

LAB30:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 1672U);
    t7 = *((char **)t4);
    t4 = (t0 + 8336U);
    t8 = (t0 + 1992U);
    t9 = *((char **)t8);
    t30 = (15 - 8);
    t31 = (t30 * 1U);
    t32 = (0 + t31);
    t8 = (t9 + t32);
    t10 = (t14 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 8;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t19 = (0 - 8);
    t33 = (t19 * -1);
    t33 = (t33 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t33;
    t26 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t7, t4, t8, t14);
    if (t26 == 1)
        goto LAB35;

LAB36:    t6 = (unsigned char)0;

LAB37:    if (t6 != 0)
        goto LAB32;

LAB34:
LAB33:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 5056);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB28;

LAB32:    xsi_set_current_line(95, ng0);
    t44 = (t0 + 2472U);
    t45 = *((char **)t44);
    t44 = (t0 + 8400U);
    t46 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t43, t45, t44, 1);
    t47 = (t43 + 12U);
    t39 = *((unsigned int *)t47);
    t48 = (1U * t39);
    t49 = (10U != t48);
    if (t49 == 1)
        goto LAB38;

LAB39:    t50 = (t0 + 4992);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    memcpy(t54, t46, 10U);
    xsi_driver_first_trans_fast(t50);
    goto LAB33;

LAB35:    t11 = (t0 + 1512U);
    t12 = *((char **)t11);
    t11 = (t0 + 8320U);
    t13 = (t0 + 1992U);
    t18 = *((char **)t13);
    t33 = (15 - 14);
    t34 = (t33 * 1U);
    t35 = (0 + t34);
    t13 = (t18 + t35);
    t20 = (t0 + 8524);
    t23 = ((IEEE_P_2592010699) + 4000);
    t24 = (t37 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 14;
    t25 = (t24 + 4U);
    *((int *)t25) = 9;
    t25 = (t24 + 8U);
    *((int *)t25) = -1;
    t38 = (9 - 14);
    t39 = (t38 * -1);
    t39 = (t39 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t39;
    t25 = (t40 + 0U);
    t41 = (t25 + 0U);
    *((int *)t41) = 0;
    t41 = (t25 + 4U);
    *((int *)t41) = 2;
    t41 = (t25 + 8U);
    *((int *)t41) = 1;
    t42 = (2 - 0);
    t39 = (t42 * 1);
    t39 = (t39 + 1);
    t41 = (t25 + 12U);
    *((unsigned int *)t41) = t39;
    t22 = xsi_base_array_concat(t22, t36, t23, (char)97, t13, t37, (char)97, t20, t40, (char)101);
    t41 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t17, t22, t36, 12);
    t27 = ieee_p_1242562249_sub_1434220770698190313_1035706684(IEEE_P_1242562249, t12, t11, t41, t17);
    t6 = t27;
    goto LAB37;

LAB38:    xsi_size_not_matching(10U, t48, 0);
    goto LAB39;

LAB40:    xsi_set_current_line(105, ng0);
    t10 = (t0 + 5056);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t18 = *((char **)t13);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t10);
    goto LAB41;

LAB43:    xsi_size_not_matching(10U, t28, 0);
    goto LAB44;

}

static void work_a_3546495410_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(122, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5248);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 10U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4896);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3546495410_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(123, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5312);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4912);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3546495410_1516540902_init()
{
	static char *pe[] = {(void *)work_a_3546495410_1516540902_p_0,(void *)work_a_3546495410_1516540902_p_1,(void *)work_a_3546495410_1516540902_p_2};
	xsi_register_didat("work_a_3546495410_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_3546495410_1516540902.didat");
	xsi_register_executes(pe);
}
