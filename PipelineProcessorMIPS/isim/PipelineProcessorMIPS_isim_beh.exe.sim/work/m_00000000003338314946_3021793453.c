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
static const char *ng0 = "D:/5th Semester/Computer Organization/Xilinx/PipelineProcessorMIPS/ThirtyTwoBitAlu.v";
static int ng1[] = {30, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4294967295U, 4294967295U};
static int ng8[] = {1, 0};



static void Always_33_0(char *t0)
{
    char t11[8];
    char t24[8];
    char t25[8];
    char t28[8];
    char t29[8];
    char t30[8];
    char t31[8];
    char t54[16];
    char t55[16];
    char t56[16];
    char t57[16];
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t26;
    char *t27;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    char *t39;
    unsigned int t40;
    int t41;
    int t42;
    char *t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    char *t53;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2796);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1840);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB8:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t11) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t10 & 2147483647U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 2147483647U);
    t5 = (t0 + 1840);
    t12 = (t5 + 36U);
    t13 = *((char **)t12);
    memset(t24, 0, 8);
    t14 = (t24 + 4);
    t23 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 0);
    *((unsigned int *)t24) = t17;
    t18 = *((unsigned int *)t23);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t20 & 2147483647U);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 & 2147483647U);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_add(t25, 32, t11, 32, t24, 32);
    t26 = (t0 + 876U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 32, t25, 32, t27, 1);
    t26 = (t0 + 1656);
    t32 = (t0 + 1656);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng1)));
    t36 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t29, t30, t31, ((int*)(t34)), 2, t35, 32, 1, t36, 32, 1);
    t37 = (t29 + 4);
    t22 = *((unsigned int *)t37);
    t38 = (!(t22));
    t39 = (t30 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    t42 = (t38 && t41);
    t43 = (t31 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB11;

LAB12:    t53 = (t0 + 1932);
    xsi_vlogvar_assign_value(t53, t28, 31, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t54, 33, t3, 31, 0);
    t2 = (t0 + 1840);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    xsi_vlog_get_part_select_value(t55, 33, t5, 31, 0);
    xsi_vlog_unsigned_add(t56, 33, t54, 33, t55, 33);
    t12 = (t0 + 876U);
    t13 = *((char **)t12);
    xsi_vlog_unsigned_add(t57, 33, t56, 33, t13, 1);
    t12 = (t0 + 1656);
    xsi_vlogvar_assign_value(t12, t57, 0, 0, 32);
    t14 = (t0 + 1380);
    xsi_vlogvar_assign_value(t14, t57, 32, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1932);
    t12 = (t5 + 36U);
    t13 = *((char **)t12);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    *((unsigned int *)t11) = t8;
    t14 = (t4 + 4);
    t23 = (t13 + 4);
    t26 = (t11 + 4);
    t9 = *((unsigned int *)t14);
    t10 = *((unsigned int *)t23);
    t15 = (t9 | t10);
    *((unsigned int *)t26) = t15;
    t16 = *((unsigned int *)t26);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB13;

LAB14:
LAB15:    t27 = (t0 + 1472);
    xsi_vlogvar_assign_value(t27, t11, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1656);
    t12 = (t5 + 36U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t14 = (t11 + 4);
    t23 = (t13 + 4);
    t6 = *((unsigned int *)t13);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t11) = t8;
    t9 = *((unsigned int *)t23);
    t10 = (t9 >> 31);
    t15 = (t10 & 1);
    *((unsigned int *)t14) = t15;
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t11);
    t18 = (t16 ^ t17);
    *((unsigned int *)t24) = t18;
    t26 = (t4 + 4);
    t27 = (t11 + 4);
    t32 = (t24 + 4);
    t19 = *((unsigned int *)t26);
    t20 = *((unsigned int *)t27);
    t21 = (t19 | t20);
    *((unsigned int *)t32) = t21;
    t22 = *((unsigned int *)t32);
    t40 = (t22 != 0);
    if (t40 == 1)
        goto LAB16;

LAB17:
LAB18:    t33 = (t0 + 1564);
    xsi_vlogvar_assign_value(t33, t24, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);

LAB19:    t2 = ((char*)((ng3)));
    t38 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t38 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t38 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t38 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng5)));
    t38 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t38 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng6)));
    t38 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t38 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB30:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);
    t12 = (t0 + 692U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (~(t15));
    *((unsigned int *)t11) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB9:    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 4294967295U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 4294967295U);
    t23 = (t0 + 1840);
    xsi_vlogvar_assign_value(t23, t11, 0, 0, 32);
    goto LAB8;

LAB10:    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t11) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB9;

LAB11:    t47 = *((unsigned int *)t31);
    t48 = (t47 + 0);
    t49 = *((unsigned int *)t29);
    t50 = *((unsigned int *)t30);
    t51 = (t49 - t50);
    t52 = (t51 + 1);
    xsi_vlogvar_assign_value(t26, t28, t48, *((unsigned int *)t30), t52);
    goto LAB12;

LAB13:    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t26);
    *((unsigned int *)t11) = (t18 | t19);
    goto LAB15;

LAB16:    t44 = *((unsigned int *)t24);
    t47 = *((unsigned int *)t32);
    *((unsigned int *)t24) = (t44 | t47);
    goto LAB18;

LAB20:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t0 + 1840);
    t12 = (t4 + 36U);
    t13 = *((char **)t12);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t13);
    t8 = (t6 & t7);
    *((unsigned int *)t11) = t8;
    t14 = (t5 + 4);
    t23 = (t13 + 4);
    t26 = (t11 + 4);
    t9 = *((unsigned int *)t14);
    t10 = *((unsigned int *)t23);
    t15 = (t9 | t10);
    *((unsigned int *)t26) = t15;
    t16 = *((unsigned int *)t26);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB31;

LAB32:
LAB33:    t33 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t33, t11, 0, 0, 32, 0LL);
    goto LAB30;

LAB22:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t0 + 1840);
    t12 = (t4 + 36U);
    t13 = *((char **)t12);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t13);
    t8 = (t6 | t7);
    *((unsigned int *)t11) = t8;
    t14 = (t5 + 4);
    t23 = (t13 + 4);
    t26 = (t11 + 4);
    t9 = *((unsigned int *)t14);
    t10 = *((unsigned int *)t23);
    t15 = (t9 | t10);
    *((unsigned int *)t26) = t15;
    t16 = *((unsigned int *)t26);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB34;

LAB35:
LAB36:    t33 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t33, t11, 0, 0, 32, 0LL);
    goto LAB30;

LAB24:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1656);
    t5 = (t4 + 36U);
    t12 = *((char **)t5);
    t13 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 32, 0LL);
    goto LAB30;

LAB26:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1564);
    t5 = (t4 + 36U);
    t12 = *((char **)t5);
    memcpy(t11, t12, 8);
    t13 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 32, 0LL);
    goto LAB30;

LAB31:    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t26);
    *((unsigned int *)t11) = (t18 | t19);
    t27 = (t5 + 4);
    t32 = (t13 + 4);
    t20 = *((unsigned int *)t5);
    t21 = (~(t20));
    t22 = *((unsigned int *)t27);
    t40 = (~(t22));
    t44 = *((unsigned int *)t13);
    t47 = (~(t44));
    t49 = *((unsigned int *)t32);
    t50 = (~(t49));
    t41 = (t21 & t40);
    t42 = (t47 & t50);
    t58 = (~(t41));
    t59 = (~(t42));
    t60 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t60 & t58);
    t61 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t61 & t59);
    t62 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t62 & t58);
    t63 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t63 & t59);
    goto LAB33;

LAB34:    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t26);
    *((unsigned int *)t11) = (t18 | t19);
    t27 = (t5 + 4);
    t32 = (t13 + 4);
    t20 = *((unsigned int *)t27);
    t21 = (~(t20));
    t22 = *((unsigned int *)t5);
    t41 = (t22 & t21);
    t40 = *((unsigned int *)t32);
    t44 = (~(t40));
    t47 = *((unsigned int *)t13);
    t42 = (t47 & t44);
    t49 = (~(t41));
    t50 = (~(t42));
    t58 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t58 & t49);
    t59 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t59 & t50);
    goto LAB36;

}

static void Always_50_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 2600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2804);
    *((int *)t2) = 1;
    t3 = (t0 + 2628);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1748);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t22 = (t8 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t8);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(53, ng0);
    t28 = ((char*)((ng8)));
    t29 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 1, 0LL);
    goto LAB12;

}


extern void work_m_00000000003338314946_3021793453_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Always_50_1};
	xsi_register_didat("work_m_00000000003338314946_3021793453", "isim/PipelineProcessorMIPS_isim_beh.exe.sim/work/m_00000000003338314946_3021793453.didat");
	xsi_register_executes(pe);
}
