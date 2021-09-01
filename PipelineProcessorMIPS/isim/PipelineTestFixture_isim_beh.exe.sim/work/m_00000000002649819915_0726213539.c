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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/5th Semester/Computer Organization/Xilinx/PipelineProcessorMIPS/InstructionDecodeStage.v";
static int ng1[] = {16, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {0, 0};
static int ng7[] = {1, 0};



static void Cont_52_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t14[8];
    char t18[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 4664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = (t0 + 1060U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 65535U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 65535U);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 1060U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 15);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t16) = t25;
    xsi_vlog_mul_concat(t14, 16, 1, t15, 1U, t18, 1);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t14, 16, t5, 16);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t3, 32, t4, 32);
    t27 = (t0 + 5664);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    memcpy(t31, t26, 8);
    xsi_driver_vfirst_trans(t27, 0, 31);
    t32 = (t0 + 5580);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Cont_53_1(char *t0)
{
    char t6[8];
    char t40[8];
    char t60[8];
    char t92[8];
    char t122[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;

LAB0:    t1 = (t0 + 4808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3176U);
    t3 = *((char **)t2);
    t2 = (t0 + 3956);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t5);
    t9 = (t7 & t8);
    *((unsigned int *)t6) = t9;
    t10 = (t3 + 4);
    t11 = (t5 + 4);
    t12 = (t6 + 4);
    t13 = *((unsigned int *)t10);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB4;

LAB5:
LAB6:    t38 = (t0 + 3268U);
    t39 = *((char **)t38);
    t38 = (t0 + 3956);
    t41 = (t38 + 36U);
    t42 = *((char **)t41);
    memset(t40, 0, 8);
    t43 = (t42 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t42);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t43) == 0)
        goto LAB7;

LAB9:    t49 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t49) = 1;

LAB10:    t50 = (t40 + 4);
    t51 = (t42 + 4);
    t52 = *((unsigned int *)t42);
    t53 = (~(t52));
    *((unsigned int *)t40) = t53;
    *((unsigned int *)t50) = 0;
    if (*((unsigned int *)t51) != 0)
        goto LAB12;

LAB11:    t58 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t58 & 1U);
    t59 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t59 & 1U);
    t61 = *((unsigned int *)t39);
    t62 = *((unsigned int *)t40);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t39 + 4);
    t65 = (t40 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB13;

LAB14:
LAB15:    t93 = *((unsigned int *)t6);
    t94 = *((unsigned int *)t60);
    t95 = (t93 | t94);
    *((unsigned int *)t92) = t95;
    t96 = (t6 + 4);
    t97 = (t60 + 4);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB16;

LAB17:
LAB18:    t120 = (t0 + 2440U);
    t121 = *((char **)t120);
    t123 = *((unsigned int *)t92);
    t124 = *((unsigned int *)t121);
    t125 = (t123 | t124);
    *((unsigned int *)t122) = t125;
    t120 = (t92 + 4);
    t126 = (t121 + 4);
    t127 = (t122 + 4);
    t128 = *((unsigned int *)t120);
    t129 = *((unsigned int *)t126);
    t130 = (t128 | t129);
    *((unsigned int *)t127) = t130;
    t131 = *((unsigned int *)t127);
    t132 = (t131 != 0);
    if (t132 == 1)
        goto LAB19;

LAB20:
LAB21:    t149 = (t0 + 5700);
    t150 = (t149 + 32U);
    t151 = *((char **)t150);
    t152 = (t151 + 40U);
    t153 = *((char **)t152);
    memset(t153, 0, 8);
    t154 = 1U;
    t155 = t154;
    t156 = (t122 + 4);
    t157 = *((unsigned int *)t122);
    t154 = (t154 & t157);
    t158 = *((unsigned int *)t156);
    t155 = (t155 & t158);
    t159 = (t153 + 4);
    t160 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t160 | t154);
    t161 = *((unsigned int *)t159);
    *((unsigned int *)t159) = (t161 | t155);
    xsi_driver_vfirst_trans(t149, 0, 0);
    t162 = (t0 + 5588);
    *((int *)t162) = 1;

LAB1:    return;
LAB4:    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t18 | t19);
    t20 = (t3 + 4);
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (~(t28));
    t30 = (t23 & t25);
    t31 = (t27 & t29);
    t32 = (~(t30));
    t33 = (~(t31));
    t34 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t34 & t32);
    t35 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t35 & t33);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t32);
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t33);
    goto LAB6;

LAB7:    *((unsigned int *)t40) = 1;
    goto LAB10;

LAB12:    t54 = *((unsigned int *)t40);
    t55 = *((unsigned int *)t51);
    *((unsigned int *)t40) = (t54 | t55);
    t56 = *((unsigned int *)t50);
    t57 = *((unsigned int *)t51);
    *((unsigned int *)t50) = (t56 | t57);
    goto LAB11;

LAB13:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t39 + 4);
    t75 = (t40 + 4);
    t76 = *((unsigned int *)t39);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t40);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB15;

LAB16:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t6 + 4);
    t107 = (t60 + 4);
    t108 = *((unsigned int *)t106);
    t109 = (~(t108));
    t110 = *((unsigned int *)t6);
    t111 = (t110 & t109);
    t112 = *((unsigned int *)t107);
    t113 = (~(t112));
    t114 = *((unsigned int *)t60);
    t115 = (t114 & t113);
    t116 = (~(t111));
    t117 = (~(t115));
    t118 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t118 & t116);
    t119 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t119 & t117);
    goto LAB18;

LAB19:    t133 = *((unsigned int *)t122);
    t134 = *((unsigned int *)t127);
    *((unsigned int *)t122) = (t133 | t134);
    t135 = (t92 + 4);
    t136 = (t121 + 4);
    t137 = *((unsigned int *)t135);
    t138 = (~(t137));
    t139 = *((unsigned int *)t92);
    t140 = (t139 & t138);
    t141 = *((unsigned int *)t136);
    t142 = (~(t141));
    t143 = *((unsigned int *)t121);
    t144 = (t143 & t142);
    t145 = (~(t140));
    t146 = (~(t144));
    t147 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t147 & t145);
    t148 = *((unsigned int *)t127);
    *((unsigned int *)t127) = (t148 & t146);
    goto LAB21;

}

static void Cont_54_2(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 4952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4048);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 4140);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t4, 32, t7, 32);
    t9 = (t0 + 5736);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t8, 8);
    xsi_driver_vfirst_trans(t9, 0, 31);
    t14 = (t0 + 5596);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Always_55_3(char *t0)
{
    char t11[8];
    char t22[8];
    char t23[8];
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
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    int t31;

LAB0:    t1 = (t0 + 5096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 5604);
    *((int *)t2) = 1;
    t3 = (t0 + 5124);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 3084U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 31U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 31U);
    t5 = (t0 + 3864);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 5);

LAB8:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2440U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2532U);
    t3 = *((char **)t2);
    t2 = (t0 + 3772);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB11:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2900U);
    t3 = *((char **)t2);

LAB12:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t31 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t31 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t31 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t31 == 1)
        goto LAB19;

LAB20:
LAB21:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2992U);
    t4 = *((char **)t2);

LAB22:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t31 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t31 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t31 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng5)));
    t31 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t31 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB6:    xsi_set_current_line(57, ng0);
    t12 = (t0 + 1060U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 11);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 11);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 31U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 31U);
    t21 = (t0 + 3864);
    xsi_vlogvar_assign_value(t21, t11, 0, 0, 5);
    goto LAB8;

LAB9:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    memset(t22, 0, 8);
    t4 = (t22 + 4);
    t12 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t22) = t16;
    t17 = *((unsigned int *)t12);
    t18 = (t17 >> 0);
    *((unsigned int *)t4) = t18;
    t19 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t19 & 67108863U);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 67108863U);
    t13 = (t0 + 1244U);
    t14 = *((char **)t13);
    memset(t23, 0, 8);
    t13 = (t23 + 4);
    t21 = (t14 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (t24 >> 26);
    *((unsigned int *)t23) = t25;
    t26 = *((unsigned int *)t21);
    t27 = (t26 >> 26);
    *((unsigned int *)t13) = t27;
    t28 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t28 & 63U);
    t29 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t29 & 63U);
    xsi_vlogtype_concat(t11, 32, 32, 2U, t23, 6, t22, 26);
    t30 = (t0 + 3772);
    xsi_vlogvar_assign_value(t30, t11, 0, 0, 32);
    goto LAB11;

LAB13:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 2624U);
    t5 = *((char **)t4);
    t4 = (t0 + 4048);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB21;

LAB15:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t0 + 4048);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB21;

LAB17:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1428U);
    t5 = *((char **)t4);
    t4 = (t0 + 4048);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB21;

LAB19:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t4 = (t0 + 4048);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB21;

LAB23:    xsi_set_current_line(71, ng0);
    t5 = (t0 + 2716U);
    t12 = *((char **)t5);
    t5 = (t0 + 4140);
    xsi_vlogvar_assign_value(t5, t12, 0, 0, 32);
    goto LAB31;

LAB25:    xsi_set_current_line(72, ng0);
    t5 = (t0 + 1336U);
    t12 = *((char **)t5);
    t5 = (t0 + 4140);
    xsi_vlogvar_assign_value(t5, t12, 0, 0, 32);
    goto LAB31;

LAB27:    xsi_set_current_line(73, ng0);
    t5 = (t0 + 1428U);
    t12 = *((char **)t5);
    t5 = (t0 + 4140);
    xsi_vlogvar_assign_value(t5, t12, 0, 0, 32);
    goto LAB31;

LAB29:    xsi_set_current_line(74, ng0);
    t5 = (t0 + 1152U);
    t12 = *((char **)t5);
    t5 = (t0 + 4140);
    xsi_vlogvar_assign_value(t5, t12, 0, 0, 32);
    goto LAB31;

}

static void Always_77_4(char *t0)
{
    char t13[8];
    char t14[8];
    char t21[8];
    char t24[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5612);
    *((int *)t2) = 1;
    t3 = (t0 + 5268);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);

LAB5:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 4048);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4140);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3588);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2348U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t14) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t12 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t5 = ((char*)((ng2)));
    xsi_vlogtype_concat(t13, 32, 32, 2U, t5, 16, t14, 16);
    t6 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t6, t13, 0, 0, 32, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t14 + 4);
    t6 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t14) = t16;
    t17 = *((unsigned int *)t6);
    t18 = (t17 >> 0);
    *((unsigned int *)t4) = t18;
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t19 & 65535U);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 65535U);
    t7 = ((char*)((ng1)));
    t22 = (t0 + 1060U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    t22 = (t24 + 4);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 15);
    t28 = (t27 & 1);
    *((unsigned int *)t24) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 15);
    t31 = (t30 & 1);
    *((unsigned int *)t22) = t31;
    xsi_vlog_mul_concat(t21, 16, 1, t7, 1U, t24, 1);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t21, 16, t14, 16);
    t32 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t32, t13, 0, 0, 32, 0LL);
    goto LAB8;

}

static void Always_85_5(char *t0)
{
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

LAB0:    t1 = (t0 + 5384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 5620);
    *((int *)t2) = 1;
    t3 = (t0 + 5412);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 2808U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3956);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(87, ng0);
    t11 = ((char*)((ng6)));
    t12 = (t0 + 3956);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB8;

}


extern void work_m_00000000002649819915_0726213539_init()
{
	static char *pe[] = {(void *)Cont_52_0,(void *)Cont_53_1,(void *)Cont_54_2,(void *)Always_55_3,(void *)Always_77_4,(void *)Always_85_5};
	xsi_register_didat("work_m_00000000002649819915_0726213539", "isim/PipelineTestFixture_isim_beh.exe.sim/work/m_00000000002649819915_0726213539.didat");
	xsi_register_executes(pe);
}
