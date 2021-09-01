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
static const char *ng0 = "D:/5th Semester/Computer Organization/Xilinx/PipelineProcessorMIPS/DATAMEM.v";
static int ng1[] = {4, 0};
static int ng2[] = {0, 0};
static int ng3[] = {5, 0};
static int ng4[] = {1, 0};
static int ng5[] = {6, 0};
static int ng6[] = {2, 0};
static int ng7[] = {7, 0};
static int ng8[] = {3, 0};
static int ng9[] = {8, 0};
static int ng10[] = {9, 0};
static int ng11[] = {17, 0};
static int ng12[] = {10, 0};
static int ng13[] = {11, 0};
static int ng14[] = {12, 0};
static int ng15[] = {31, 0};



static void Cont_27_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 1288);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 1288);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 784U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 2348);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 2296);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_28_1(char *t0)
{
    char t13[8];
    char t14[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    int t24;
    char *t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2304);
    *((int *)t2) = 1;
    t3 = (t0 + 1984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(30, ng0);
    t11 = (t0 + 876U);
    t12 = *((char **)t11);
    t11 = (t0 + 1288);
    t15 = (t0 + 1288);
    t16 = (t15 + 44U);
    t17 = *((char **)t16);
    t18 = (t0 + 1288);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    t21 = (t0 + 784U);
    t22 = *((char **)t21);
    xsi_vlog_generic_convert_array_indices(t13, t14, t17, t20, 2, 1, t22, 5, 2);
    t21 = (t13 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (!(t23));
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t24 && t27);
    if (t28 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t14);
    t31 = (t29 - t30);
    t32 = (t31 + 1);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, *((unsigned int *)t14), t32, 0LL);
    goto LAB10;

}

static void Initial_32_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB3;

LAB4:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng7)));
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng10)));
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng11)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t1, 32);
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t4, t23, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t23 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(41, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(42, ng0);
    t1 = ((char*)((ng8)));
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    t5 = (t0 + 1288);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng13)));
    xsi_vlog_generic_convert_array_indices(t3, t4, t7, t10, 2, 1, t11, 32, 1);
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(45, ng0);
    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng14)));
    t2 = (t0 + 1196);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB27:    t1 = (t0 + 1196);
    t2 = (t1 + 36U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng15)));
    memset(t3, 0, 8);
    xsi_vlog_signed_leq(t3, 32, t5, 32, t6, 32);
    t7 = (t3 + 4);
    t13 = *((unsigned int *)t7);
    t16 = (~(t13));
    t19 = *((unsigned int *)t3);
    t20 = (t19 & t16);
    t24 = (t20 != 0);
    if (t24 > 0)
        goto LAB28;

LAB29:
LAB1:    return;
LAB3:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB4;

LAB5:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB6;

LAB7:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB8;

LAB9:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB10;

LAB11:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB12;

LAB13:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB14;

LAB15:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t23);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t23), t22);
    goto LAB16;

LAB17:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB18;

LAB19:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB20;

LAB21:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB22;

LAB23:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB24;

LAB25:    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t4);
    t21 = (t19 - t20);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t4), t22);
    goto LAB26;

LAB28:    xsi_set_current_line(46, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t0 + 1288);
    t10 = (t0 + 1288);
    t11 = (t10 + 44U);
    t12 = *((char **)t11);
    t15 = (t0 + 1288);
    t25 = (t15 + 40U);
    t26 = *((char **)t25);
    t27 = (t0 + 1196);
    t28 = (t27 + 36U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t4, t23, t12, t26, 2, 1, t29, 32, 1);
    t30 = (t4 + 4);
    t31 = *((unsigned int *)t30);
    t14 = (!(t31));
    t32 = (t23 + 4);
    t33 = *((unsigned int *)t32);
    t17 = (!(t33));
    t18 = (t14 && t17);
    if (t18 == 1)
        goto LAB30;

LAB31:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1196);
    t2 = (t1 + 36U);
    t5 = *((char **)t2);
    t6 = ((char*)((ng4)));
    memset(t3, 0, 8);
    xsi_vlog_signed_add(t3, 32, t5, 32, t6, 32);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 32);
    goto LAB27;

LAB30:    t34 = *((unsigned int *)t4);
    t35 = *((unsigned int *)t23);
    t21 = (t34 - t35);
    t22 = (t21 + 1);
    xsi_vlogvar_assign_value(t9, t8, 0, *((unsigned int *)t23), t22);
    goto LAB31;

}


extern void work_m_00000000002440551000_2734520448_init()
{
	static char *pe[] = {(void *)Cont_27_0,(void *)Always_28_1,(void *)Initial_32_2};
	xsi_register_didat("work_m_00000000002440551000_2734520448", "isim/PipelineTestFixture_isim_beh.exe.sim/work/m_00000000002440551000_2734520448.didat");
	xsi_register_executes(pe);
}
