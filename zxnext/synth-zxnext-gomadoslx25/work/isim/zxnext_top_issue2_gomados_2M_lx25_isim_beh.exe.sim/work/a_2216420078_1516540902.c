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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/input/keyboard/ps2_iobase.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_2216420078_1516540902_p_0(char *t0)
{
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
    char *t11;
    int t12;
    int t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 9336);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB16;

LAB17:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 5088U);
    t11 = *((char **)t4);
    t4 = (t11 + 0);
    *((int *)t4) = 0;
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5208U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 9560);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5208U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5088U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t2 = (t0 + 4968U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t1 = (t12 >= t13);
    if (t1 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 5088U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t13 = (t12 + 1);
    t2 = (t0 + 5088U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t13;

LAB14:    goto LAB9;

LAB13:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 9560);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB14;

LAB16:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5088U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 5208U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t2 = (t0 + 4968U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t1 = (t12 >= t13);
    if (t1 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5208U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t13 = (t12 + 1);
    t2 = (t0 + 5208U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t13;

LAB19:    goto LAB9;

LAB18:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 9560);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB19;

}

static void work_a_2216420078_1516540902_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned char t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned char t41;
    unsigned char t42;
    char *t43;
    char *t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned char t49;
    unsigned char t50;
    char *t51;
    char *t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned char t57;
    unsigned char t58;
    char *t59;
    char *t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned char t65;
    unsigned char t66;
    unsigned char t67;
    char *t68;
    char *t69;
    unsigned char t70;
    unsigned char t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;

LAB0:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 4072U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 3712U);
    t1 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t1 != 0)
        goto LAB8;

LAB9:
LAB3:    t2 = (t0 + 9352);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(121, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t9 = t2;
    memset(t9, (unsigned char)2, 8U);
    t10 = (t0 + 9624);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 9688);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 5328U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;
    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    xsi_set_current_line(125, ng0);
    t3 = (t0 + 5328U);
    t6 = *((char **)t3);
    t15 = *((int *)t6);
    t4 = (t15 == 0);
    if (t4 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 5328U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t1 = (t15 < 9);
    if (t1 != 0)
        goto LAB16;

LAB18:
LAB17:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 5328U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t1 = (t15 == 9);
    if (t1 != 0)
        goto LAB19;

LAB21:
LAB20:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 5328U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t16 = (t15 + 1);
    t2 = (t0 + 5328U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t16;
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5328U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t1 = (t15 == 11);
    if (t1 != 0)
        goto LAB25;

LAB27:
LAB26:
LAB11:    goto LAB3;

LAB10:    xsi_set_current_line(128, ng0);
    t3 = (t0 + 1512U);
    t9 = *((char **)t3);
    t5 = *((unsigned char *)t9);
    t7 = (t5 == (unsigned char)2);
    if (t7 != 0)
        goto LAB13;

LAB15:
LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(130, ng0);
    t3 = (t0 + 5328U);
    t10 = *((char **)t3);
    t16 = *((int *)t10);
    t17 = (t16 + 1);
    t3 = (t0 + 5328U);
    t11 = *((char **)t3);
    t3 = (t11 + 0);
    *((int *)t3) = t17;
    goto LAB14;

LAB16:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t4 = *((unsigned char *)t6);
    t2 = (t0 + 5328U);
    t9 = *((char **)t2);
    t16 = *((int *)t9);
    t17 = (t16 - 1);
    t18 = (t17 - 7);
    t19 = (t18 * -1);
    t20 = (1 * t19);
    t21 = (0U + t20);
    t2 = (t0 + 9624);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t4;
    xsi_driver_first_trans_delta(t2, t21, 1, 0LL);
    goto LAB17;

LAB19:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3432U);
    t6 = *((char **)t2);
    t16 = (0 - 7);
    t19 = (t16 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t2 = (t6 + t21);
    t4 = *((unsigned char *)t2);
    t9 = (t0 + 3432U);
    t10 = *((char **)t9);
    t17 = (1 - 7);
    t22 = (t17 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t9 = (t10 + t24);
    t5 = *((unsigned char *)t9);
    t7 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t4, t5);
    t11 = (t0 + 3432U);
    t12 = *((char **)t11);
    t18 = (2 - 7);
    t25 = (t18 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t11 = (t12 + t27);
    t8 = *((unsigned char *)t11);
    t28 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t7, t8);
    t13 = (t0 + 3432U);
    t14 = *((char **)t13);
    t29 = (3 - 7);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t13 = (t14 + t32);
    t33 = *((unsigned char *)t13);
    t34 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t28, t33);
    t35 = (t0 + 3432U);
    t36 = *((char **)t35);
    t37 = (4 - 7);
    t38 = (t37 * -1);
    t39 = (1U * t38);
    t40 = (0 + t39);
    t35 = (t36 + t40);
    t41 = *((unsigned char *)t35);
    t42 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t34, t41);
    t43 = (t0 + 3432U);
    t44 = *((char **)t43);
    t45 = (5 - 7);
    t46 = (t45 * -1);
    t47 = (1U * t46);
    t48 = (0 + t47);
    t43 = (t44 + t48);
    t49 = *((unsigned char *)t43);
    t50 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t42, t49);
    t51 = (t0 + 3432U);
    t52 = *((char **)t51);
    t53 = (6 - 7);
    t54 = (t53 * -1);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t51 = (t52 + t56);
    t57 = *((unsigned char *)t51);
    t58 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t50, t57);
    t59 = (t0 + 3432U);
    t60 = *((char **)t59);
    t61 = (7 - 7);
    t62 = (t61 * -1);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t59 = (t60 + t64);
    t65 = *((unsigned char *)t59);
    t66 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t58, t65);
    t67 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t66);
    t68 = (t0 + 1512U);
    t69 = *((char **)t68);
    t70 = *((unsigned char *)t69);
    t71 = (t67 == t70);
    if (t71 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 9688);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB23:    goto LAB20;

LAB22:    xsi_set_current_line(141, ng0);
    t68 = (t0 + 9688);
    t72 = (t68 + 56U);
    t73 = *((char **)t72);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    *((unsigned char *)t75) = (unsigned char)3;
    xsi_driver_first_trans_fast(t68);
    goto LAB23;

LAB25:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5328U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 9688);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB26;

}

static void work_a_2216420078_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(155, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3912U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 9752);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t11 = (t0 + 9368);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2216420078_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(156, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 9816);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 9384);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2216420078_1516540902_p_4(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;

LAB0:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 2432U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB8;

LAB9:    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    t2 = t11;

LAB10:    if (t2 != 0)
        goto LAB5;

LAB7:
LAB6:    t1 = (t0 + 9400);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(162, ng0);
    t3 = (t0 + 9880);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

LAB5:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 9880);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

}

static void work_a_2216420078_1516540902_p_5(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 4072U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB16:
LAB15:    t2 = (t0 + 9416);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(175, ng0);
    t4 = (t0 + 5448U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (11 * 218);
    t11 = (t9 == t10);
    if (t11 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(178, ng0);
    t2 = (t0 + 5448U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 5448U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((int *)t2) = t10;

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 4072U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(176, ng0);
    t4 = (t0 + 9944);
    t12 = (t4 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 9944);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 5448U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    goto LAB12;

LAB14:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 9944);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 5448U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    goto LAB15;

}

static void work_a_2216420078_1516540902_p_6(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(194, ng0);
    t1 = (t0 + 2432U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t9 = *((unsigned char *)t3);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB8;

LAB9:    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    t2 = t12;

LAB10:    if (t2 != 0)
        goto LAB5;

LAB7:
LAB6:    t1 = (t0 + 9432);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(195, ng0);
    t3 = (t0 + 2632U);
    t4 = *((char **)t3);
    t3 = (t0 + 10008);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 8U);
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

LAB5:    xsi_set_current_line(198, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 10008);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB6;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

}

static void work_a_2216420078_1516540902_p_7(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    int t12;
    unsigned char t13;
    char *t14;
    int t15;
    int t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;

LAB0:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)2);
    if (t7 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t13 = *((unsigned char *)t5);
    t18 = (t13 == (unsigned char)3);
    t3 = t18;

LAB21:    if (t3 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 4232U);
    t8 = *((char **)t2);
    t19 = *((unsigned char *)t8);
    t20 = (t19 == (unsigned char)3);
    t1 = t20;

LAB18:    if (t1 != 0)
        goto LAB13;

LAB15:
LAB14:    t2 = (t0 + 9448);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(208, ng0);
    t4 = (t0 + 5688U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t4 = (t0 + 5568U);
    t10 = *((char **)t4);
    t11 = *((int *)t10);
    t12 = (t11 + 50);
    t13 = (t9 < t12);
    if (t13 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 5688U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t2 = (t0 + 5568U);
    t5 = *((char **)t2);
    t11 = *((int *)t5);
    t12 = (t11 + 100);
    t1 = (t9 < t12);
    if (t1 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(221, ng0);
    t2 = (t0 + 10072);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 10136);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 10200);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 10264);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 4072U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(209, ng0);
    t4 = (t0 + 5688U);
    t14 = *((char **)t4);
    t15 = *((int *)t14);
    t16 = (t15 + 1);
    t4 = (t0 + 5688U);
    t17 = *((char **)t4);
    t4 = (t17 + 0);
    *((int *)t4) = t16;
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 10072);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 10136);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 10200);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 10264);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 5688U);
    t8 = *((char **)t2);
    t15 = *((int *)t8);
    t16 = (t15 + 1);
    t2 = (t0 + 5688U);
    t10 = *((char **)t2);
    t2 = (t10 + 0);
    *((int *)t2) = t16;
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 10072);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 10136);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(218, ng0);
    t2 = (t0 + 10200);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 10264);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(228, ng0);
    t2 = (t0 + 10072);
    t10 = (t2 + 56U);
    t14 = *((char **)t10);
    t17 = (t14 + 56U);
    t21 = *((char **)t17);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 10136);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 10200);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 10264);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 5688U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    goto LAB14;

LAB16:    t1 = (unsigned char)1;
    goto LAB18;

LAB19:    t3 = (unsigned char)1;
    goto LAB21;

}

static void work_a_2216420078_1516540902_p_8(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    int t14;
    unsigned char t15;
    char *t16;
    int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned char t50;
    char *t51;
    char *t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned char t57;
    unsigned char t58;
    char *t59;
    char *t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned char t65;
    unsigned char t66;
    unsigned char t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;

LAB0:    xsi_set_current_line(241, ng0);
    t3 = (t0 + 3712U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(266, ng0);
    t3 = (t0 + 4552U);
    t5 = *((char **)t3);
    t1 = *((unsigned char *)t5);
    t2 = (t1 == (unsigned char)3);
    if (t2 != 0)
        goto LAB26;

LAB28:
LAB27:    xsi_set_current_line(272, ng0);
    t3 = (t0 + 1352U);
    t5 = *((char **)t3);
    t4 = *((unsigned char *)t5);
    t7 = (t4 == (unsigned char)2);
    if (t7 == 1)
        goto LAB35;

LAB36:    t3 = (t0 + 1192U);
    t6 = *((char **)t3);
    t8 = *((unsigned char *)t6);
    t10 = (t8 == (unsigned char)3);
    t2 = t10;

LAB37:    if (t2 == 1)
        goto LAB32;

LAB33:    t3 = (t0 + 4072U);
    t9 = *((char **)t3);
    t11 = *((unsigned char *)t9);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;

LAB34:    if (t1 != 0)
        goto LAB29;

LAB31:
LAB30:    t3 = (t0 + 9464);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(242, ng0);
    t5 = (t0 + 5808U);
    t13 = *((char **)t5);
    t14 = *((int *)t13);
    t15 = (t14 >= 0);
    if (t15 == 1)
        goto LAB14;

LAB15:    t12 = (unsigned char)0;

LAB16:    if (t12 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(247, ng0);
    t3 = (t0 + 5808U);
    t5 = *((char **)t3);
    t14 = *((int *)t5);
    t1 = (t14 == 8);
    if (t1 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(253, ng0);
    t3 = (t0 + 5808U);
    t5 = *((char **)t3);
    t14 = *((int *)t5);
    t1 = (t14 == 9);
    if (t1 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(258, ng0);
    t3 = (t0 + 5808U);
    t5 = *((char **)t3);
    t14 = *((int *)t5);
    t1 = (t14 == 10);
    if (t1 != 0)
        goto LAB23;

LAB25:
LAB24:    xsi_set_current_line(264, ng0);
    t3 = (t0 + 5808U);
    t5 = *((char **)t3);
    t14 = *((int *)t5);
    t17 = (t14 + 1);
    t3 = (t0 + 5808U);
    t6 = *((char **)t3);
    t3 = (t6 + 0);
    *((int *)t3) = t17;
    goto LAB3;

LAB5:    t5 = (t0 + 4072U);
    t9 = *((char **)t5);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    t1 = t11;
    goto LAB7;

LAB8:    t5 = (t0 + 4392U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t2 = t8;
    goto LAB10;

LAB11:    xsi_set_current_line(243, ng0);
    t5 = (t0 + 3592U);
    t19 = *((char **)t5);
    t5 = (t0 + 5808U);
    t20 = *((char **)t5);
    t21 = *((int *)t20);
    t22 = (t21 - 7);
    t23 = (t22 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t21);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t5 = (t19 + t25);
    t26 = *((unsigned char *)t5);
    t27 = (t0 + 10328);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = t26;
    xsi_driver_first_trans_fast_port(t27);
    xsi_set_current_line(244, ng0);
    t3 = (t0 + 10392);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(245, ng0);
    t3 = (t0 + 10456);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB12;

LAB14:    t5 = (t0 + 5808U);
    t16 = *((char **)t5);
    t17 = *((int *)t16);
    t18 = (t17 < 8);
    t12 = t18;
    goto LAB16;

LAB17:    xsi_set_current_line(248, ng0);
    t3 = (t0 + 3592U);
    t6 = *((char **)t3);
    t17 = (0 - 7);
    t23 = (t17 * -1);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t3 = (t6 + t25);
    t2 = *((unsigned char *)t3);
    t9 = (t0 + 3592U);
    t13 = *((char **)t9);
    t21 = (1 - 7);
    t32 = (t21 * -1);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t9 = (t13 + t34);
    t4 = *((unsigned char *)t9);
    t7 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t2, t4);
    t16 = (t0 + 3592U);
    t19 = *((char **)t16);
    t22 = (2 - 7);
    t35 = (t22 * -1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t16 = (t19 + t37);
    t8 = *((unsigned char *)t16);
    t10 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t7, t8);
    t20 = (t0 + 3592U);
    t27 = *((char **)t20);
    t38 = (3 - 7);
    t39 = (t38 * -1);
    t40 = (1U * t39);
    t41 = (0 + t40);
    t20 = (t27 + t41);
    t11 = *((unsigned char *)t20);
    t12 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t10, t11);
    t28 = (t0 + 3592U);
    t29 = *((char **)t28);
    t42 = (4 - 7);
    t43 = (t42 * -1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t28 = (t29 + t45);
    t15 = *((unsigned char *)t28);
    t18 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t12, t15);
    t30 = (t0 + 3592U);
    t31 = *((char **)t30);
    t46 = (5 - 7);
    t47 = (t46 * -1);
    t48 = (1U * t47);
    t49 = (0 + t48);
    t30 = (t31 + t49);
    t26 = *((unsigned char *)t30);
    t50 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t18, t26);
    t51 = (t0 + 3592U);
    t52 = *((char **)t51);
    t53 = (6 - 7);
    t54 = (t53 * -1);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t51 = (t52 + t56);
    t57 = *((unsigned char *)t51);
    t58 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t50, t57);
    t59 = (t0 + 3592U);
    t60 = *((char **)t59);
    t61 = (7 - 7);
    t62 = (t61 * -1);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t59 = (t60 + t64);
    t65 = *((unsigned char *)t59);
    t66 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t58, t65);
    t67 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t66);
    t68 = (t0 + 10328);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    *((unsigned char *)t72) = t67;
    xsi_driver_first_trans_fast_port(t68);
    xsi_set_current_line(250, ng0);
    t3 = (t0 + 10392);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(251, ng0);
    t3 = (t0 + 10456);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB18;

LAB20:    xsi_set_current_line(254, ng0);
    t3 = (t0 + 10328);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t13 = (t9 + 56U);
    t16 = *((char **)t13);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(255, ng0);
    t3 = (t0 + 10456);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(256, ng0);
    t3 = (t0 + 10392);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB21;

LAB23:    xsi_set_current_line(259, ng0);
    t3 = (t0 + 10328);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t13 = (t9 + 56U);
    t16 = *((char **)t13);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(260, ng0);
    t3 = (t0 + 10456);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(261, ng0);
    t3 = (t0 + 10392);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(262, ng0);
    t3 = (t0 + 5808U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    *((int *)t3) = 0;
    goto LAB24;

LAB26:    xsi_set_current_line(267, ng0);
    t3 = (t0 + 10328);
    t6 = (t3 + 56U);
    t9 = *((char **)t6);
    t13 = (t9 + 56U);
    t16 = *((char **)t13);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(268, ng0);
    t3 = (t0 + 10456);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(269, ng0);
    t3 = (t0 + 10392);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(270, ng0);
    t3 = (t0 + 5808U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    *((int *)t3) = 0;
    goto LAB27;

LAB29:    xsi_set_current_line(273, ng0);
    t3 = (t0 + 10328);
    t13 = (t3 + 56U);
    t16 = *((char **)t13);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(274, ng0);
    t3 = (t0 + 10456);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(275, ng0);
    t3 = (t0 + 10392);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(276, ng0);
    t3 = (t0 + 5808U);
    t5 = *((char **)t3);
    t3 = (t5 + 0);
    *((int *)t3) = 0;
    goto LAB30;

LAB32:    t1 = (unsigned char)1;
    goto LAB34;

LAB35:    t2 = (unsigned char)1;
    goto LAB37;

}

static void work_a_2216420078_1516540902_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(280, ng0);

LAB3:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10520);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9480);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2216420078_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2216420078_1516540902_p_0,(void *)work_a_2216420078_1516540902_p_1,(void *)work_a_2216420078_1516540902_p_2,(void *)work_a_2216420078_1516540902_p_3,(void *)work_a_2216420078_1516540902_p_4,(void *)work_a_2216420078_1516540902_p_5,(void *)work_a_2216420078_1516540902_p_6,(void *)work_a_2216420078_1516540902_p_7,(void *)work_a_2216420078_1516540902_p_8,(void *)work_a_2216420078_1516540902_p_9};
	xsi_register_didat("work_a_2216420078_1516540902", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/a_2216420078_1516540902.didat");
	xsi_register_executes(pe);
}
