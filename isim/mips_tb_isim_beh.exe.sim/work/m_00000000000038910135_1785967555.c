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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Administrator/Desktop/P6/PipelineCPU/EXT.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {16, 0};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {14, 0};
static unsigned int ng6[] = {3U, 0U};



static void Always_10_0(char *t0)
{
    char t7[8];
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(13, ng0);
    t8 = (t0 + 1208U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t7, 32, 32, 2U, t8, 16, t9, 16);
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(14, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    t8 = (t0 + 1208U);
    t9 = *((char **)t8);
    memset(t12, 0, 8);
    t8 = (t12 + 4);
    t10 = (t9 + 4);
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 15);
    t15 = (t14 & 1);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t10);
    t17 = (t16 >> 15);
    t18 = (t17 & 1);
    *((unsigned int *)t8) = t18;
    xsi_vlog_mul_concat(t11, 16, 1, t3, 1U, t12, 1);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t11, 16, t4, 16);
    t19 = (t0 + 1608);
    xsi_vlogvar_assign_value(t19, t7, 0, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(15, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1208U);
    t8 = *((char **)t4);
    t4 = ((char*)((ng5)));
    t9 = (t0 + 1208U);
    t10 = *((char **)t9);
    memset(t12, 0, 8);
    t9 = (t12 + 4);
    t19 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 15);
    t15 = (t14 & 1);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t19);
    t17 = (t16 >> 15);
    t18 = (t17 & 1);
    *((unsigned int *)t9) = t18;
    xsi_vlog_mul_concat(t11, 14, 1, t4, 1U, t12, 1);
    xsi_vlogtype_concat(t7, 32, 32, 3U, t11, 14, t8, 16, t3, 2);
    t20 = (t0 + 1608);
    xsi_vlogvar_assign_value(t20, t7, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(16, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1208U);
    t8 = *((char **)t4);
    xsi_vlogtype_concat(t7, 32, 32, 2U, t8, 16, t3, 16);
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 32);
    goto LAB17;

}


extern void work_m_00000000000038910135_1785967555_init()
{
	static char *pe[] = {(void *)Always_10_0};
	xsi_register_didat("work_m_00000000000038910135_1785967555", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000038910135_1785967555.didat");
	xsi_register_executes(pe);
}