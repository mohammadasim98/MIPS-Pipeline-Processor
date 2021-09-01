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
static int ng1[] = {1, 0};
static int ng2[] = {16, 0};
static unsigned int ng3[] = {0U, 0U};



static void Always_36_0(char *t0)
{
    char t11[8];
    char t12[8];
    char t22[8];
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 3652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3992);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 2440U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(41, ng0);

LAB10:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 2852);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 3128);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(37, ng0);

LAB9:    xsi_set_current_line(38, ng0);
    t13 = (t0 + 876U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 67108863U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 67108863U);
    t23 = (t0 + 1060U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t25 = (t24 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 26);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 26);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 63U);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 63U);
    xsi_vlogtype_concat(t11, 32, 32, 2U, t22, 6, t12, 26);
    t32 = (t0 + 2852);
    xsi_vlogvar_assign_value(t32, t11, 0, 0, 32);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

}

static void Always_46_1(char *t0)
{
    char t6[8];
    char t13[8];
    char t20[8];
    char t24[8];
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
    unsigned int t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
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

LAB0:    t1 = (t0 + 3796U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 4000);
    *((int *)t2) = 1;
    t3 = (t0 + 3824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = (t0 + 2760);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 16);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 16);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 31U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 31U);
    t5 = (t0 + 2944);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 5, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 11);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 11);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 31U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 31U);
    t5 = (t0 + 3036);
    xsi_vlogvar_wait_assign_value(t5, t6, 0, 0, 5, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2348U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t11 & 65535U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 65535U);
    t5 = ((char*)((ng3)));
    xsi_vlogtype_concat(t6, 32, 32, 2U, t5, 16, t13, 16);
    t14 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t14, t6, 0, 0, 32, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t14 = (t5 + 4);
    t12 = *((unsigned int *)t5);
    t15 = (t12 >> 0);
    *((unsigned int *)t13) = t15;
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 0);
    *((unsigned int *)t4) = t17;
    t18 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t18 & 65535U);
    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 65535U);
    t21 = ((char*)((ng2)));
    t22 = (t0 + 876U);
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
    xsi_vlog_mul_concat(t20, 16, 1, t21, 1U, t24, 1);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t20, 16, t13, 16);
    t32 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t32, t6, 0, 0, 32, 0LL);
    goto LAB8;

}


extern void work_m_00000000002642957866_0726213539_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Always_46_1};
	xsi_register_didat("work_m_00000000002642957866_0726213539", "isim/PipelineProcessorMIPS_isim_beh.exe.sim/work/m_00000000002642957866_0726213539.didat");
	xsi_register_executes(pe);
}
