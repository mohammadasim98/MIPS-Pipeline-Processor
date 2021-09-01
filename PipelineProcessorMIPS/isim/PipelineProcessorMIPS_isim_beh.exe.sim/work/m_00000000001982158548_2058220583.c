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
static const char *ng0 = "D:/5th Semester/Computer Organization/Xilinx/PipelineProcessorMIPS/Control.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3U, 3U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {32U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {33U, 0U};
static unsigned int ng8[] = {34U, 0U};
static unsigned int ng9[] = {35U, 0U};
static unsigned int ng10[] = {36U, 0U};
static unsigned int ng11[] = {37U, 0U};
static unsigned int ng12[] = {1U, 0U};
static unsigned int ng13[] = {38U, 0U};
static unsigned int ng14[] = {3U, 0U};
static unsigned int ng15[] = {8U, 0U};
static unsigned int ng16[] = {9U, 0U};
static unsigned int ng17[] = {10U, 0U};
static unsigned int ng18[] = {12U, 0U};
static unsigned int ng19[] = {13U, 0U};
static unsigned int ng20[] = {43U, 0U};
static unsigned int ng21[] = {4U, 0U};
static unsigned int ng22[] = {5U, 0U};



static void Always_28_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2796);
    *((int *)t2) = 1;
    t3 = (t0 + 2484);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);

LAB28:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 692U);
    t4 = *((char **)t2);

LAB29:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 6, t2, 6);
    if (t6 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB27;

LAB9:    xsi_set_current_line(54, ng0);

LAB48:    xsi_set_current_line(55, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    goto LAB27;

LAB11:    xsi_set_current_line(59, ng0);

LAB49:    xsi_set_current_line(60, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    goto LAB27;

LAB13:    xsi_set_current_line(64, ng0);

LAB50:    xsi_set_current_line(65, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng14)));
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB15:    xsi_set_current_line(71, ng0);

LAB51:    xsi_set_current_line(72, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    goto LAB27;

LAB17:    xsi_set_current_line(75, ng0);

LAB52:    xsi_set_current_line(76, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng12)));
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    goto LAB27;

LAB19:    xsi_set_current_line(79, ng0);

LAB53:    xsi_set_current_line(80, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB21:    xsi_set_current_line(85, ng0);

LAB54:    xsi_set_current_line(86, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB23:    xsi_set_current_line(91, ng0);

LAB55:    xsi_set_current_line(92, ng0);
    t5 = ((char*)((ng1)));
    t7 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    goto LAB27;

LAB25:    xsi_set_current_line(98, ng0);

LAB56:    xsi_set_current_line(99, ng0);
    t5 = ((char*)((ng1)));
    t7 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t5 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB27;

LAB30:    xsi_set_current_line(45, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 2, 0LL);
    goto LAB44;

LAB32:    xsi_set_current_line(46, ng0);
    t5 = ((char*)((ng6)));
    t7 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 2, 0LL);
    goto LAB44;

LAB34:    xsi_set_current_line(47, ng0);

LAB45:    xsi_set_current_line(47, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    goto LAB44;

LAB36:    xsi_set_current_line(48, ng0);

LAB46:    xsi_set_current_line(48, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    goto LAB44;

LAB38:    xsi_set_current_line(49, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 2, 0LL);
    goto LAB44;

LAB40:    xsi_set_current_line(50, ng0);
    t5 = ((char*)((ng12)));
    t7 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 2, 0LL);
    goto LAB44;

LAB42:    xsi_set_current_line(51, ng0);

LAB47:    xsi_set_current_line(51, ng0);
    t5 = ((char*)((ng3)));
    t7 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng14)));
    t5 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    goto LAB44;

}

static void Always_107_1(char *t0)
{
    char t6[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 2600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2804);
    *((int *)t2) = 1;
    t3 = (t0 + 2628);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(107, ng0);

LAB5:    xsi_set_current_line(108, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1656);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(110, ng0);
    t26 = ((char*)((ng3)));
    t27 = (t0 + 1656);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 1);
    goto LAB12;

}


extern void work_m_00000000001982158548_2058220583_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Always_107_1};
	xsi_register_didat("work_m_00000000001982158548_2058220583", "isim/PipelineProcessorMIPS_isim_beh.exe.sim/work/m_00000000001982158548_2058220583.didat");
	xsi_register_executes(pe);
}
