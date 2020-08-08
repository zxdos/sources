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
static const char *ng0 = "/home/avlixa/FPGA/ZXDOS/ZX_Spectrum_Next_FPGA/cores/zxnext/src/input/ps2_mouse.v";
static unsigned int ng1[] = {2047U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {9U, 0U};
static unsigned int ng5[] = {4094U, 0U};
static unsigned int ng6[] = {4070U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3472U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {3272U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {3744U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {3556U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {3560U, 0U};
static unsigned int ng19[] = {65535U, 0U};
static int ng20[] = {4, 0};
static int ng21[] = {0, 0};
static int ng22[] = {1, 0};
static int ng23[] = {2, 0};
static int ng24[] = {6, 0};
static int ng25[] = {3, 0};
static int ng26[] = {5, 0};
static int ng27[] = {7, 0};
static int ng28[] = {8, 0};
static unsigned int ng29[] = {1U, 1U};
static unsigned int ng30[] = {7U, 7U};



static void Cont_93_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 8440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 14384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 13968);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_94_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 8688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14448);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 13984);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_98_2(char *t0)
{
    char t4[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 8936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 14000);
    *((int *)t2) = 1;
    t3 = (t0 + 8968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);

LAB5:    xsi_set_current_line(99, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    t5 = (t0 + 4648);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t10 = (t9 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t10) = t17;
    xsi_vlogtype_concat(t4, 2, 2, 2U, t9, 1, t6, 1);
    t18 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 2, 1LL);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 4808);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t8 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (t12 >> 0);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t8);
    t15 = (t14 >> 0);
    *((unsigned int *)t7) = t15;
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 3U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 3U);
    xsi_vlogtype_concat(t4, 3, 3, 2U, t9, 2, t3, 1);
    t10 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t10, t4, 0, 0, 3, 1LL);
    goto LAB2;

}

static void Cont_104_3(char *t0)
{
    char t5[8];
    char t14[8];
    char t18[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;

LAB0:    t1 = (t0 + 9184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t15 = (t0 + 4808);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 1);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    memset(t14, 0, 8);
    t27 = (t18 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t27) == 0)
        goto LAB4;

LAB6:    t33 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t33) = 1;

LAB7:    t35 = *((unsigned int *)t5);
    t36 = *((unsigned int *)t14);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t5 + 4);
    t39 = (t14 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB8;

LAB9:
LAB10:    t66 = (t0 + 14512);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memset(t70, 0, 8);
    t71 = 1U;
    t72 = t71;
    t73 = (t34 + 4);
    t74 = *((unsigned int *)t34);
    t71 = (t71 & t74);
    t75 = *((unsigned int *)t73);
    t72 = (t72 & t75);
    t76 = (t70 + 4);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t77 | t71);
    t78 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t78 | t72);
    xsi_driver_vfirst_trans(t66, 0, 0);
    t79 = (t0 + 14016);
    *((int *)t79) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t14) = 1;
    goto LAB7;

LAB8:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t5 + 4);
    t49 = (t14 + 4);
    t50 = *((unsigned int *)t5);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t14);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB10;

}

static void Always_107_4(char *t0)
{
    char t15[8];
    char t16[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 9432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 14032);
    *((int *)t2) = 1;
    t3 = (t0 + 9464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(107, ng0);

LAB5:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 6408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB9;

LAB10:
LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(109, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 11, 1LL);
    goto LAB8;

LAB9:    xsi_set_current_line(111, ng0);
    t4 = (t0 + 4968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t16, 0, 8);
    t7 = (t16 + 4);
    t13 = (t6 + 4);
    t17 = *((unsigned int *)t6);
    t18 = (t17 >> 1);
    *((unsigned int *)t16) = t18;
    t19 = *((unsigned int *)t13);
    t20 = (t19 >> 1);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t21 & 1023U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 1023U);
    t14 = (t0 + 4648);
    t23 = (t14 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t26 = (t25 + 4);
    t27 = (t24 + 4);
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 1);
    t30 = (t29 & 1);
    *((unsigned int *)t25) = t30;
    t31 = *((unsigned int *)t27);
    t32 = (t31 >> 1);
    t33 = (t32 & 1);
    *((unsigned int *)t26) = t33;
    xsi_vlogtype_concat(t15, 11, 11, 2U, t25, 1, t16, 10);
    t34 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t34, t15, 0, 0, 11, 1LL);
    goto LAB11;

}

static void Cont_114_5(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 9680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4968);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    memset(t3, 0, 8);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t15) == 0)
        goto LAB4;

LAB6:    t21 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t21) = 1;

LAB7:    t22 = (t0 + 14576);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 14048);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Always_117_6(char *t0)
{
    char t13[8];
    char t17[8];
    char t26[8];
    char t34[8];
    char t76[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t77;

LAB0:    t1 = (t0 + 9928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 14064);
    *((int *)t2) = 1;
    t3 = (t0 + 9960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(117, ng0);

LAB5:    xsi_set_current_line(118, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 7368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t5) != 0)
        goto LAB11;

LAB12:    t12 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t12);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB13;

LAB14:    memcpy(t34, t13, 8);

LAB15:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB27;

LAB28:
LAB29:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(119, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 1LL);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB11:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB13:    t18 = (t0 + 3128U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t18) == 0)
        goto LAB16;

LAB18:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB19:    memset(t26, 0, 8);
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t17);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t27) != 0)
        goto LAB22;

LAB23:    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t13 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB15;

LAB16:    *((unsigned int *)t17) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t26) = 1;
    goto LAB23;

LAB22:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB23;

LAB24:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t13 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t13);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB26;

LAB27:    xsi_set_current_line(121, ng0);
    t72 = (t0 + 7208);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = ((char*)((ng3)));
    memset(t76, 0, 8);
    xsi_vlog_unsigned_add(t76, 4, t74, 4, t75, 4);
    t77 = (t0 + 7208);
    xsi_vlogvar_wait_assign_value(t77, t76, 0, 0, 4, 1LL);
    goto LAB29;

}

static void Cont_124_7(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 10176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 7208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 14640);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 14080);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Always_127_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 10424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 14096);
    *((int *)t2) = 1;
    t3 = (t0 + 10456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(127, ng0);

LAB5:    xsi_set_current_line(128, ng0);
    t4 = (t0 + 7208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 7528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);

LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(130, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 7528);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 12);
    goto LAB27;

LAB9:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 7528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    goto LAB27;

LAB11:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 7528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    goto LAB27;

LAB13:    xsi_set_current_line(133, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 7528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    goto LAB27;

LAB15:    xsi_set_current_line(134, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 7528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    goto LAB27;

LAB17:    xsi_set_current_line(135, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 7528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    goto LAB27;

LAB19:    xsi_set_current_line(136, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 7528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    goto LAB27;

LAB21:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 7528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    goto LAB27;

LAB23:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 7528);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 12);
    goto LAB27;

}

static void Always_144_9(char *t0)
{
    char t17[8];
    char t18[8];
    char t27[8];
    char t33[8];
    char t70[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 10672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 14112);
    *((int *)t2) = 1;
    t3 = (t0 + 10704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(144, ng0);

LAB5:    xsi_set_current_line(145, ng0);
    t4 = (t0 + 6568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t2) == 0)
        goto LAB9;

LAB11:    t4 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t4) = 1;

LAB12:    memset(t18, 0, 8);
    t5 = (t17 + 4);
    t19 = *((unsigned int *)t5);
    t20 = (~(t19));
    t21 = *((unsigned int *)t17);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t5) != 0)
        goto LAB15;

LAB16:    t7 = (t18 + 4);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t7);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB17;

LAB18:    memcpy(t33, t18, 8);

LAB19:    t64 = (t33 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t33);
    t68 = (t67 & t66);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB27;

LAB28:
LAB29:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(146, ng0);
    t13 = (t0 + 7528);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t16, t15, 0, 0, 12, 1LL);
    goto LAB8;

LAB9:    *((unsigned int *)t17) = 1;
    goto LAB12;

LAB13:    *((unsigned int *)t18) = 1;
    goto LAB16;

LAB15:    t6 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB16;

LAB17:    t13 = (t0 + 2328U);
    t14 = *((char **)t13);
    memset(t27, 0, 8);
    t13 = (t14 + 4);
    t28 = *((unsigned int *)t13);
    t29 = (~(t28));
    t30 = *((unsigned int *)t14);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t13) != 0)
        goto LAB22;

LAB23:    t34 = *((unsigned int *)t18);
    t35 = *((unsigned int *)t27);
    t36 = (t34 & t35);
    *((unsigned int *)t33) = t36;
    t16 = (t18 + 4);
    t37 = (t27 + 4);
    t38 = (t33 + 4);
    t39 = *((unsigned int *)t16);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB19;

LAB20:    *((unsigned int *)t27) = 1;
    goto LAB23;

LAB22:    t15 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB23;

LAB24:    t44 = *((unsigned int *)t33);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t33) = (t44 | t45);
    t46 = (t18 + 4);
    t47 = (t27 + 4);
    t48 = *((unsigned int *)t18);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t27);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t60 & t58);
    t61 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t61 & t59);
    t62 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t62 & t58);
    t63 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t63 & t59);
    goto LAB26;

LAB27:    xsi_set_current_line(148, ng0);
    t72 = (t0 + 5128);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memset(t71, 0, 8);
    t75 = (t71 + 4);
    t76 = (t74 + 4);
    t77 = *((unsigned int *)t74);
    t78 = (t77 >> 1);
    *((unsigned int *)t71) = t78;
    t79 = *((unsigned int *)t76);
    t80 = (t79 >> 1);
    *((unsigned int *)t75) = t80;
    t81 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t81 & 2047U);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t82 & 2047U);
    t83 = ((char*)((ng2)));
    xsi_vlogtype_concat(t70, 12, 12, 2U, t83, 1, t71, 11);
    t84 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t84, t70, 0, 0, 12, 1LL);
    goto LAB29;

}

static void Cont_151_10(char *t0)
{
    char t3[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 10920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 5128);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 4095U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 4095U);
    t14 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t16 = (t3 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    t31 = (t0 + 14704);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t15 + 4);
    t39 = *((unsigned int *)t15);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 14128);
    *((int *)t44) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

}

static void Cont_152_11(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 11168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 14768);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 14144);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_155_12(char *t0)
{
    char t15[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t16;

LAB0:    t1 = (t0 + 11416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 14160);
    *((int *)t2) = 1;
    t3 = (t0 + 11448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(155, ng0);

LAB5:    xsi_set_current_line(156, ng0);
    t4 = (t0 + 6728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 65535U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 65535U);
    t7 = ((char*)((ng3)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 16, t15, 16, t7, 16);
    t13 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t13, t17, 0, 0, 16, 1LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(157, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 16, 1LL);
    goto LAB8;

}

static void Cont_162_13(char *t0)
{
    char t3[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;

LAB0:    t1 = (t0 + 11664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 5288);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 65535U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = ((char*)((ng19)));
    memset(t15, 0, 8);
    t16 = (t3 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB4:    if (t27 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t15) = 1;

LAB7:    t31 = (t0 + 14832);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 1U;
    t37 = t36;
    t38 = (t15 + 4);
    t39 = *((unsigned int *)t15);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 14176);
    *((int *)t44) = 1;

LAB1:    return;
LAB6:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB7;

}

static void Cont_163_14(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 11912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 11);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 11);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 14896);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 14192);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_165_15(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;

LAB0:    t1 = (t0 + 12160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 14208);
    *((int *)t2) = 1;
    t3 = (t0 + 12192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(165, ng0);

LAB5:    xsi_set_current_line(166, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t14, t6, 0, 0, 1, 1LL);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t5 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 2, 1LL);
    goto LAB2;

}

static void Always_170_16(char *t0)
{
    char t9[8];
    char t11[8];
    char t24[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 12408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 14224);
    *((int *)t2) = 1;
    t3 = (t0 + 12440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(170, ng0);

LAB5:    xsi_set_current_line(171, ng0);
    t4 = (t0 + 5928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = (t17 >> 3);
    *((unsigned int *)t11) = t18;
    t19 = *((unsigned int *)t7);
    t20 = (t19 >> 3);
    *((unsigned int *)t5) = t20;
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 63U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 63U);
    t10 = (t0 + 4968);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    memset(t24, 0, 8);
    t14 = (t24 + 4);
    t15 = (t13 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (t25 >> 8);
    t27 = (t26 & 1);
    *((unsigned int *)t24) = t27;
    t28 = *((unsigned int *)t15);
    t29 = (t28 >> 8);
    t30 = (t29 & 1);
    *((unsigned int *)t14) = t30;
    t16 = (t0 + 4968);
    t23 = (t16 + 56U);
    t31 = *((char **)t23);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t34 = (t31 + 4);
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 8);
    t37 = (t36 & 1);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 8);
    t40 = (t39 & 1);
    *((unsigned int *)t33) = t40;
    xsi_vlogtype_concat(t9, 8, 8, 3U, t32, 1, t24, 1, t11, 6);
    t41 = (t0 + 6088);
    xsi_vlogvar_assign_value(t41, t9, 0, 0, 8);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(172, ng0);
    t10 = ((char*)((ng2)));
    t12 = (t0 + 4968);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t11 + 4);
    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 1);
    *((unsigned int *)t11) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 1);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 127U);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 127U);
    xsi_vlogtype_concat(t9, 8, 8, 2U, t11, 7, t10, 1);
    t23 = (t0 + 6088);
    xsi_vlogvar_assign_value(t23, t9, 0, 0, 8);
    goto LAB15;

LAB9:    xsi_set_current_line(173, ng0);
    t3 = (t0 + 4968);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 1);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 1);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t21 & 255U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 255U);
    t12 = (t0 + 6088);
    xsi_vlogvar_assign_value(t12, t9, 0, 0, 8);
    goto LAB15;

LAB11:    xsi_set_current_line(174, ng0);
    t3 = (t0 + 4968);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t7 = (t11 + 4);
    t10 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (t17 >> 2);
    *((unsigned int *)t11) = t18;
    t19 = *((unsigned int *)t10);
    t20 = (t19 >> 2);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 127U);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 127U);
    t12 = (t0 + 4968);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t24, 0, 8);
    t15 = (t24 + 4);
    t16 = (t14 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (t25 >> 8);
    t27 = (t26 & 1);
    *((unsigned int *)t24) = t27;
    t28 = *((unsigned int *)t16);
    t29 = (t28 >> 8);
    t30 = (t29 & 1);
    *((unsigned int *)t15) = t30;
    xsi_vlogtype_concat(t9, 8, 8, 2U, t24, 1, t11, 7);
    t23 = (t0 + 6088);
    xsi_vlogvar_assign_value(t23, t9, 0, 0, 8);
    goto LAB15;

}

static void Always_179_17(char *t0)
{
    char t13[8];
    char t17[8];
    char t29[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;

LAB0:    t1 = (t0 + 12656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 14240);
    *((int *)t2) = 1;
    t3 = (t0 + 12688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(179, ng0);

LAB5:    xsi_set_current_line(180, ng0);
    t4 = (t0 + 5768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t17) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 1);
    t20 = (t12 & 1);
    *((unsigned int *)t5) = t20;
    t7 = (t0 + 4968);
    t14 = (t7 + 56U);
    t15 = *((char **)t14);
    memset(t29, 0, 8);
    t16 = (t29 + 4);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 2);
    t23 = (t22 & 1);
    *((unsigned int *)t29) = t23;
    t24 = *((unsigned int *)t18);
    t25 = (t24 >> 2);
    t32 = (t25 & 1);
    *((unsigned int *)t16) = t32;
    t19 = (t0 + 4968);
    t26 = (t19 + 56U);
    t27 = *((char **)t26);
    memset(t41, 0, 8);
    t28 = (t41 + 4);
    t30 = (t27 + 4);
    t33 = *((unsigned int *)t27);
    t34 = (t33 >> 3);
    t35 = (t34 & 1);
    *((unsigned int *)t41) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 3);
    t44 = (t37 & 1);
    *((unsigned int *)t28) = t44;
    xsi_vlogtype_concat(t13, 3, 3, 3U, t41, 1, t29, 1, t17, 1);
    t31 = (t0 + 6248);
    xsi_vlogvar_assign_value(t31, t13, 0, 0, 3);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(181, ng0);
    t14 = (t0 + 4968);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 2);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 2);
    t25 = (t24 & 1);
    *((unsigned int *)t18) = t25;
    t26 = (t0 + 4968);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t29, 0, 8);
    t30 = (t29 + 4);
    t31 = (t28 + 4);
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 1);
    t34 = (t33 & 1);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 >> 1);
    t37 = (t36 & 1);
    *((unsigned int *)t30) = t37;
    t38 = (t0 + 4968);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t41, 0, 8);
    t42 = (t41 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t40);
    t45 = (t44 >> 3);
    t46 = (t45 & 1);
    *((unsigned int *)t41) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 >> 3);
    t49 = (t48 & 1);
    *((unsigned int *)t42) = t49;
    xsi_vlogtype_concat(t13, 3, 3, 3U, t41, 1, t29, 1, t17, 1);
    t50 = (t0 + 6248);
    xsi_vlogvar_assign_value(t50, t13, 0, 0, 3);
    goto LAB8;

}

static void Always_187_18(char *t0)
{
    char t15[8];
    char t34[8];
    char t43[8];
    char t45[8];
    char t53[8];
    char t58[8];
    char t67[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t68;

LAB0:    t1 = (t0 + 12904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 14256);
    *((int *)t2) = 1;
    t3 = (t0 + 12936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(187, ng0);

LAB5:    xsi_set_current_line(188, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(193, ng0);

LAB10:    xsi_set_current_line(196, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB14;

LAB11:    if (t20 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t15) = 1;

LAB14:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(198, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB21;

LAB18:    if (t20 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t15) = 1;

LAB21:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(200, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB28;

LAB25:    if (t20 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t15) = 1;

LAB28:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB35;

LAB32:    if (t20 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t15) = 1;

LAB35:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB36;

LAB37:
LAB38:
LAB31:
LAB24:
LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(188, ng0);

LAB9:    xsi_set_current_line(189, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 1LL);
    t13 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t13, t11, 1, 0, 1, 1LL);
    t14 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t14, t11, 2, 0, 1, 1LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 1LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 1LL);
    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 1LL);
    goto LAB8;

LAB13:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(197, ng0);
    t28 = (t0 + 6248);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 1, 1LL);
    t32 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t32, t30, 1, 0, 1, 1LL);
    t33 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t33, t30, 2, 0, 1, 1LL);
    goto LAB17;

LAB20:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(199, ng0);
    t28 = (t0 + 3848);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t34, 0, 8);
    t31 = (t34 + 4);
    t32 = (t30 + 4);
    t35 = *((unsigned int *)t30);
    t36 = (t35 >> 0);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 0);
    *((unsigned int *)t31) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 255U);
    t33 = (t0 + 6088);
    t41 = (t33 + 56U);
    t42 = *((char **)t41);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 8, t34, 8, t42, 8);
    t44 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t44, t43, 0, 0, 8, 1LL);
    goto LAB24;

LAB27:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(201, ng0);
    t28 = (t0 + 3688);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t34, 0, 8);
    t31 = (t34 + 4);
    t32 = (t30 + 4);
    t35 = *((unsigned int *)t30);
    t36 = (t35 >> 0);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 0);
    *((unsigned int *)t31) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 255U);
    t33 = (t0 + 6088);
    t41 = (t33 + 56U);
    t42 = *((char **)t41);
    memset(t43, 0, 8);
    xsi_vlog_unsigned_add(t43, 8, t34, 8, t42, 8);
    t44 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t44, t43, 0, 0, 8, 1LL);
    goto LAB31;

LAB34:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(203, ng0);
    t28 = (t0 + 3528);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t34, 0, 8);
    t31 = (t34 + 4);
    t32 = (t30 + 4);
    t35 = *((unsigned int *)t30);
    t36 = (t35 >> 0);
    *((unsigned int *)t34) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 0);
    *((unsigned int *)t31) = t38;
    t39 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t39 & 255U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 255U);
    t33 = (t0 + 4968);
    t41 = (t33 + 56U);
    t42 = *((char **)t41);
    memset(t45, 0, 8);
    t44 = (t45 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t42);
    t48 = (t47 >> 1);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 1);
    *((unsigned int *)t44) = t50;
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t51 & 15U);
    t52 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t52 & 15U);
    t54 = ((char*)((ng20)));
    t55 = (t0 + 4968);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memset(t58, 0, 8);
    t59 = (t58 + 4);
    t60 = (t57 + 4);
    t61 = *((unsigned int *)t57);
    t62 = (t61 >> 4);
    t63 = (t62 & 1);
    *((unsigned int *)t58) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 >> 4);
    t66 = (t65 & 1);
    *((unsigned int *)t59) = t66;
    xsi_vlog_mul_concat(t53, 4, 1, t54, 1U, t58, 1);
    xsi_vlogtype_concat(t43, 8, 8, 2U, t53, 4, t45, 4);
    memset(t67, 0, 8);
    xsi_vlog_unsigned_add(t67, 8, t34, 8, t43, 8);
    t68 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t68, t67, 0, 0, 8, 1LL);
    goto LAB38;

}

static void Always_214_19(char *t0)
{
    char t13[8];
    char t22[8];
    char t34[8];
    char t47[8];
    char t63[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;

LAB0:    t1 = (t0 + 13152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 14272);
    *((int *)t2) = 1;
    t3 = (t0 + 13184);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(214, ng0);

LAB5:    xsi_set_current_line(215, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    memset(t22, 0, 8);
    t23 = (t13 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t23) != 0)
        goto LAB15;

LAB16:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB17;

LAB18:    memcpy(t71, t22, 8);

LAB19:    t103 = (t71 + 4);
    t104 = *((unsigned int *)t103);
    t105 = (~(t104));
    t106 = *((unsigned int *)t71);
    t107 = (t106 & t105);
    t108 = (t107 != 0);
    if (t108 > 0)
        goto LAB31;

LAB32:
LAB33:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(216, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 1LL);
    goto LAB8;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    *((unsigned int *)t22) = 1;
    goto LAB16;

LAB15:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB16;

LAB17:    t35 = (t0 + 4968);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t34, 0, 8);
    t38 = (t34 + 4);
    t39 = (t37 + 4);
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 1);
    *((unsigned int *)t34) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 1);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t44 & 3U);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t45 & 3U);
    t46 = ((char*)((ng9)));
    memset(t47, 0, 8);
    t48 = (t34 + 4);
    t49 = (t46 + 4);
    t50 = *((unsigned int *)t34);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = *((unsigned int *)t48);
    t54 = *((unsigned int *)t49);
    t55 = (t53 ^ t54);
    t56 = (t52 | t55);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t49);
    t59 = (t57 | t58);
    t60 = (~(t59));
    t61 = (t56 & t60);
    if (t61 != 0)
        goto LAB23;

LAB20:    if (t59 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t47) = 1;

LAB23:    memset(t63, 0, 8);
    t64 = (t47 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t47);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t64) != 0)
        goto LAB26;

LAB27:    t72 = *((unsigned int *)t22);
    t73 = *((unsigned int *)t63);
    t74 = (t72 & t73);
    *((unsigned int *)t71) = t74;
    t75 = (t22 + 4);
    t76 = (t63 + 4);
    t77 = (t71 + 4);
    t78 = *((unsigned int *)t75);
    t79 = *((unsigned int *)t76);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = *((unsigned int *)t77);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB19;

LAB22:    t62 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t63) = 1;
    goto LAB27;

LAB26:    t70 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB27;

LAB28:    t83 = *((unsigned int *)t71);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t71) = (t83 | t84);
    t85 = (t22 + 4);
    t86 = (t63 + 4);
    t87 = *((unsigned int *)t22);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (~(t89));
    t91 = *((unsigned int *)t63);
    t92 = (~(t91));
    t93 = *((unsigned int *)t86);
    t94 = (~(t93));
    t95 = (t88 & t90);
    t96 = (t92 & t94);
    t97 = (~(t95));
    t98 = (~(t96));
    t99 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t99 & t97);
    t100 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t100 & t98);
    t101 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t101 & t97);
    t102 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t102 & t98);
    goto LAB30;

LAB31:    xsi_set_current_line(218, ng0);
    t109 = ((char*)((ng3)));
    t110 = (t0 + 7048);
    xsi_vlogvar_wait_assign_value(t110, t109, 0, 0, 1, 1LL);
    goto LAB33;

}

static void Always_222_20(char *t0)
{
    char t6[8];
    char t20[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;

LAB0:    t1 = (t0 + 13400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 14288);
    *((int *)t2) = 1;
    t3 = (t0 + 13432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(222, ng0);

LAB5:    xsi_set_current_line(223, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t27, t6, 8);

LAB12:    t55 = (t27 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t27);
    t59 = (t58 & t57);
    t60 = (t59 != 0);
    if (t60 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 1LL);

LAB22:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 2808U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t18) != 0)
        goto LAB15;

LAB16:    t28 = *((unsigned int *)t6);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    *((unsigned int *)t27) = t30;
    t31 = (t6 + 4);
    t32 = (t20 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t20) = 1;
    goto LAB16;

LAB15:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB17:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t6 + 4);
    t42 = (t20 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t6);
    t46 = (t45 & t44);
    t47 = *((unsigned int *)t42);
    t48 = (~(t47));
    t49 = *((unsigned int *)t20);
    t50 = (t49 & t48);
    t51 = (~(t46));
    t52 = (~(t50));
    t53 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t53 & t51);
    t54 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t54 & t52);
    goto LAB19;

LAB20:    xsi_set_current_line(224, ng0);
    t61 = ((char*)((ng21)));
    t62 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t62, t61, 0, 0, 3, 1LL);
    goto LAB22;

}

static void Always_229_21(char *t0)
{
    char t15[8];
    char t16[8];
    char t17[8];
    char t23[8];
    char t32[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 13648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 14304);
    *((int *)t2) = 1;
    t3 = (t0 + 13680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(229, ng0);

LAB5:    xsi_set_current_line(230, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(232, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(233, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(337, ng0);

LAB148:    xsi_set_current_line(339, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 4488);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(340, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(341, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(342, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 6568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(343, ng0);
    t2 = ((char*)((ng30)));
    t3 = (t0 + 6888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(344, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(238, ng0);

LAB24:    xsi_set_current_line(240, ng0);
    t7 = ((char*)((ng22)));
    t8 = (t0 + 6728);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB23;

LAB9:    xsi_set_current_line(244, ng0);

LAB25:    xsi_set_current_line(246, ng0);
    t3 = ((char*)((ng21)));
    t5 = (t0 + 4488);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(247, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 6568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(249, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(252, ng0);

LAB30:    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB28:    goto LAB23;

LAB11:    xsi_set_current_line(257, ng0);

LAB31:    xsi_set_current_line(259, ng0);
    t3 = ((char*)((ng22)));
    t5 = (t0 + 6408);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(260, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(261, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(276, ng0);

LAB58:    xsi_set_current_line(277, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB34:    goto LAB23;

LAB13:    xsi_set_current_line(281, ng0);

LAB59:    xsi_set_current_line(283, ng0);
    t3 = ((char*)((ng22)));
    t7 = (t0 + 6728);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    xsi_set_current_line(284, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(289, ng0);

LAB64:    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB62:    goto LAB23;

LAB15:    xsi_set_current_line(295, ng0);

LAB65:    xsi_set_current_line(297, ng0);
    t3 = ((char*)((ng22)));
    t7 = (t0 + 6728);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    xsi_set_current_line(298, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(303, ng0);

LAB70:    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB68:    goto LAB23;

LAB17:    xsi_set_current_line(309, ng0);

LAB71:    xsi_set_current_line(311, ng0);
    t3 = ((char*)((ng22)));
    t7 = (t0 + 6728);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    xsi_set_current_line(312, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(317, ng0);

LAB107:    xsi_set_current_line(319, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB74:    goto LAB23;

LAB19:    xsi_set_current_line(323, ng0);

LAB108:    xsi_set_current_line(325, ng0);
    t3 = ((char*)((ng22)));
    t7 = (t0 + 6728);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 1);
    xsi_set_current_line(326, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB109;

LAB110:    xsi_set_current_line(331, ng0);

LAB147:    xsi_set_current_line(333, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB111:    goto LAB23;

LAB26:    xsi_set_current_line(249, ng0);

LAB29:    xsi_set_current_line(251, ng0);
    t5 = ((char*)((ng23)));
    t7 = (t0 + 5608);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    goto LAB28;

LAB32:    xsi_set_current_line(261, ng0);

LAB35:    xsi_set_current_line(263, ng0);
    t5 = ((char*)((ng22)));
    t7 = (t0 + 7368);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    xsi_set_current_line(264, ng0);
    t2 = (t0 + 7208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB36:    t7 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t7, 32);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB53;

LAB54:
LAB56:
LAB55:    xsi_set_current_line(274, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB57:    goto LAB34;

LAB37:    xsi_set_current_line(265, ng0);
    t8 = ((char*)((ng20)));
    t14 = (t0 + 5608);
    xsi_vlogvar_assign_value(t14, t8, 0, 0, 3);
    goto LAB57;

LAB39:    xsi_set_current_line(266, ng0);
    t3 = ((char*)((ng24)));
    t7 = (t0 + 5608);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 3);
    goto LAB57;

LAB41:    xsi_set_current_line(267, ng0);
    t3 = ((char*)((ng24)));
    t7 = (t0 + 5608);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 3);
    goto LAB57;

LAB43:    xsi_set_current_line(268, ng0);
    t3 = ((char*)((ng24)));
    t7 = (t0 + 5608);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 3);
    goto LAB57;

LAB45:    xsi_set_current_line(269, ng0);
    t3 = ((char*)((ng24)));
    t7 = (t0 + 5608);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 3);
    goto LAB57;

LAB47:    xsi_set_current_line(270, ng0);
    t3 = ((char*)((ng24)));
    t7 = (t0 + 5608);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 3);
    goto LAB57;

LAB49:    xsi_set_current_line(271, ng0);
    t3 = ((char*)((ng24)));
    t7 = (t0 + 5608);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 3);
    goto LAB57;

LAB51:    xsi_set_current_line(272, ng0);
    t3 = ((char*)((ng26)));
    t7 = (t0 + 5608);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 3);
    goto LAB57;

LAB53:    xsi_set_current_line(273, ng0);
    t3 = ((char*)((ng24)));
    t7 = (t0 + 5608);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 3);
    goto LAB57;

LAB60:    xsi_set_current_line(284, ng0);

LAB63:    xsi_set_current_line(286, ng0);
    t7 = ((char*)((ng22)));
    t8 = (t0 + 6888);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    xsi_set_current_line(287, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(288, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB62;

LAB66:    xsi_set_current_line(298, ng0);

LAB69:    xsi_set_current_line(300, ng0);
    t7 = ((char*)((ng23)));
    t8 = (t0 + 6888);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    xsi_set_current_line(301, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(302, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 5608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB68;

LAB72:    xsi_set_current_line(312, ng0);

LAB75:    xsi_set_current_line(314, ng0);
    t7 = ((char*)((ng25)));
    t8 = (t0 + 6888);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(316, ng0);
    t2 = (t0 + 7048);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    memset(t17, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t8) != 0)
        goto LAB78;

LAB79:    t18 = (t17 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (!(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB80;

LAB81:    memcpy(t40, t17, 8);

LAB82:    memset(t16, 0, 8);
    t67 = (t40 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t40);
    t71 = (t70 & t69);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t67) != 0)
        goto LAB96;

LAB97:    t74 = (t16 + 4);
    t75 = *((unsigned int *)t16);
    t76 = *((unsigned int *)t74);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB98;

LAB99:    t79 = *((unsigned int *)t16);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t74) > 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t16) > 0)
        goto LAB104;

LAB105:    memcpy(t15, t83, 8);

LAB106:    t84 = (t0 + 5608);
    xsi_vlogvar_assign_value(t84, t15, 0, 0, 3);
    goto LAB74;

LAB76:    *((unsigned int *)t17) = 1;
    goto LAB79;

LAB78:    t14 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB79;

LAB80:    t24 = (t0 + 3128U);
    t25 = *((char **)t24);
    memset(t23, 0, 8);
    t24 = (t25 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t25);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB86;

LAB84:    if (*((unsigned int *)t24) == 0)
        goto LAB83;

LAB85:    t31 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t31) = 1;

LAB86:    memset(t32, 0, 8);
    t33 = (t23 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t23);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t33) != 0)
        goto LAB89;

LAB90:    t41 = *((unsigned int *)t17);
    t42 = *((unsigned int *)t32);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = (t17 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB91;

LAB92:
LAB93:    goto LAB82;

LAB83:    *((unsigned int *)t23) = 1;
    goto LAB86;

LAB87:    *((unsigned int *)t32) = 1;
    goto LAB90;

LAB89:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB90;

LAB91:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t17 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t54);
    t57 = (~(t56));
    t58 = *((unsigned int *)t17);
    t6 = (t58 & t57);
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t32);
    t62 = (t61 & t60);
    t63 = (~(t6));
    t64 = (~(t62));
    t65 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t65 & t63);
    t66 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t66 & t64);
    goto LAB93;

LAB94:    *((unsigned int *)t16) = 1;
    goto LAB97;

LAB96:    t73 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB97;

LAB98:    t78 = ((char*)((ng24)));
    goto LAB99;

LAB100:    t83 = ((char*)((ng25)));
    goto LAB101;

LAB102:    xsi_vlog_unsigned_bit_combine(t15, 32, t78, 32, t83, 32);
    goto LAB106;

LAB104:    memcpy(t15, t78, 8);
    goto LAB106;

LAB109:    xsi_set_current_line(326, ng0);

LAB112:    xsi_set_current_line(328, ng0);
    t7 = (t0 + 7208);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    t18 = ((char*)((ng28)));
    memset(t17, 0, 8);
    t24 = (t14 + 4);
    t25 = (t18 + 4);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t18);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t24);
    t26 = *((unsigned int *)t25);
    t27 = (t22 ^ t26);
    t28 = (t21 | t27);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t25);
    t34 = (t29 | t30);
    t35 = (~(t34));
    t36 = (t28 & t35);
    if (t36 != 0)
        goto LAB116;

LAB113:    if (t34 != 0)
        goto LAB115;

LAB114:    *((unsigned int *)t17) = 1;

LAB116:    memset(t16, 0, 8);
    t33 = (t17 + 4);
    t37 = *((unsigned int *)t33);
    t38 = (~(t37));
    t41 = *((unsigned int *)t17);
    t42 = (t41 & t38);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t33) != 0)
        goto LAB119;

LAB120:    t44 = (t16 + 4);
    t47 = *((unsigned int *)t16);
    t48 = *((unsigned int *)t44);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB121;

LAB122:    t50 = *((unsigned int *)t16);
    t51 = (~(t50));
    t52 = *((unsigned int *)t44);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB123;

LAB124:    if (*((unsigned int *)t44) > 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t16) > 0)
        goto LAB127;

LAB128:    memcpy(t15, t46, 8);

LAB129:    t54 = (t0 + 6888);
    xsi_vlogvar_assign_value(t54, t15, 0, 0, 3);
    xsi_set_current_line(329, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(330, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    memset(t17, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB133;

LAB131:    if (*((unsigned int *)t2) == 0)
        goto LAB130;

LAB132:    t7 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t7) = 1;

LAB133:    memset(t16, 0, 8);
    t8 = (t17 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (~(t19));
    t21 = *((unsigned int *)t17);
    t22 = (t21 & t20);
    t26 = (t22 & 1U);
    if (t26 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t8) != 0)
        goto LAB136;

LAB137:    t18 = (t16 + 4);
    t27 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t18);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB138;

LAB139:    t30 = *((unsigned int *)t16);
    t34 = (~(t30));
    t35 = *((unsigned int *)t18);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t18) > 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t16) > 0)
        goto LAB144;

LAB145:    memcpy(t15, t25, 8);

LAB146:    t31 = (t0 + 5608);
    xsi_vlogvar_assign_value(t31, t15, 0, 0, 3);
    goto LAB111;

LAB115:    t31 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB116;

LAB117:    *((unsigned int *)t16) = 1;
    goto LAB120;

LAB119:    t39 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB120;

LAB121:    t45 = ((char*)((ng26)));
    goto LAB122;

LAB123:    t46 = ((char*)((ng20)));
    goto LAB124;

LAB125:    xsi_vlog_unsigned_bit_combine(t15, 32, t45, 32, t46, 32);
    goto LAB129;

LAB127:    memcpy(t15, t45, 8);
    goto LAB129;

LAB130:    *((unsigned int *)t17) = 1;
    goto LAB133;

LAB134:    *((unsigned int *)t16) = 1;
    goto LAB137;

LAB136:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB137;

LAB138:    t24 = ((char*)((ng21)));
    goto LAB139;

LAB140:    t25 = ((char*)((ng25)));
    goto LAB141;

LAB142:    xsi_vlog_unsigned_bit_combine(t15, 32, t24, 32, t25, 32);
    goto LAB146;

LAB144:    memcpy(t15, t24, 8);
    goto LAB146;

}


extern void work_m_08977370731017262872_3589057620_init()
{
	static char *pe[] = {(void *)Cont_93_0,(void *)Cont_94_1,(void *)Always_98_2,(void *)Cont_104_3,(void *)Always_107_4,(void *)Cont_114_5,(void *)Always_117_6,(void *)Cont_124_7,(void *)Always_127_8,(void *)Always_144_9,(void *)Cont_151_10,(void *)Cont_152_11,(void *)Always_155_12,(void *)Cont_162_13,(void *)Cont_163_14,(void *)Always_165_15,(void *)Always_170_16,(void *)Always_179_17,(void *)Always_187_18,(void *)Always_214_19,(void *)Always_222_20,(void *)Always_229_21};
	xsi_register_didat("work_m_08977370731017262872_3589057620", "isim/zxnext_top_issue2_gomados_2M_lx25_isim_beh.exe.sim/work/m_08977370731017262872_3589057620.didat");
	xsi_register_executes(pe);
}
