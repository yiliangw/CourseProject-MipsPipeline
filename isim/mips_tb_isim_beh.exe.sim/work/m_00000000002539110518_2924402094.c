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
static const char *ng0 = "C:/Users/Administrator/Desktop/P6/PipelineCPU/DM.v";
static unsigned int ng1[] = {4U, 0U};
static int ng2[] = {2, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {16, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {24, 0};
static int ng9[] = {0, 0};
static unsigned int ng10[] = {16384U, 0U, 0U, 0U};
static int ng11[] = {1, 0};
static const char *ng12 = "%d@%h: *%h <= %h";



static void NetDecl_16_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 3056U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 7376);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 7216);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_17_1(char *t0)
{
    char t4[4096];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 2736U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlog_unsigned_rshift(t4, 16384, t3, 32, t2, 32);
    t5 = (t0 + 7440);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 16384);
    xsi_driver_vfirst_trans(t5, 0, 16383U);
    t10 = (t0 + 7232);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_20_2(char *t0)
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

LAB0:    t1 = (t0 + 6152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 4096);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4096);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 3376U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 16384, 2);
    t12 = (t0 + 7504);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31U);
    t18 = (t0 + 7248);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_24_3(char *t0)
{
    char t9[8];
    char t19[8];
    char t30[8];
    char t31[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    int t18;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t32;
    char *t34;

LAB0:    t1 = (t0 + 6400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 7264);
    *((int *)t2) = 1;
    t3 = (t0 + 6432);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1936U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(27, ng0);

LAB14:    xsi_set_current_line(28, ng0);
    t7 = (t0 + 3536U);
    t8 = *((char **)t7);
    t7 = (t0 + 3936);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB13;

LAB9:    xsi_set_current_line(30, ng0);

LAB15:    t3 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t3, &&LAB16);
    t4 = (t0 + 6208);
    xsi_vlog_namedbase_pushprocess(t3, t4);

LAB17:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 2736U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t9 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 1);
    t16 = (t15 & 1);
    *((unsigned int *)t7) = t16;

LAB18:    t17 = ((char*)((ng3)));
    t18 = xsi_vlog_unsigned_case_compare(t9, 1, t17, 1);
    if (t18 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 1, t2, 1);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4416);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB25:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2096U);
    t3 = *((char **)t2);

LAB26:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 3936);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB33:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB16:    t4 = (t0 + 6208);
    xsi_vlog_dispose_process_subprogram_invocation(t4);
    goto LAB13;

LAB11:    xsi_set_current_line(43, ng0);

LAB34:    t4 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB35);
    t7 = (t0 + 6208);
    xsi_vlog_namedbase_pushprocess(t4, t7);

LAB36:    xsi_set_current_line(45, ng0);
    t8 = (t0 + 2736U);
    t10 = *((char **)t8);
    memset(t19, 0, 8);
    t8 = (t19 + 4);
    t17 = (t10 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (t11 >> 0);
    *((unsigned int *)t19) = t12;
    t13 = *((unsigned int *)t17);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t15 & 3U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 3U);

LAB37:    t20 = ((char*)((ng3)));
    t18 = xsi_vlog_unsigned_case_compare(t19, 2, t20, 2);
    if (t18 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t6 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t6 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t19, 2, t2, 2);
    if (t6 == 1)
        goto LAB44;

LAB45:
LAB47:
LAB46:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 4576);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 8);

LAB48:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);

LAB49:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t6 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t6 == 1)
        goto LAB52;

LAB53:
LAB55:
LAB54:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3936);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 32);

LAB56:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB35:    t7 = (t0 + 6208);
    xsi_vlog_dispose_process_subprogram_invocation(t7);
    goto LAB13;

LAB19:    xsi_set_current_line(33, ng0);
    t20 = (t0 + 3536U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t22 = (t21 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 0);
    *((unsigned int *)t20) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 65535U);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 65535U);
    t29 = (t0 + 4416);
    xsi_vlogvar_assign_value(t29, t19, 0, 0, 16);
    goto LAB25;

LAB21:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 3536U);
    t4 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t7 = (t4 + 4);
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 16);
    *((unsigned int *)t19) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 16);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t15 & 65535U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 65535U);
    t8 = (t0 + 4416);
    xsi_vlogvar_assign_value(t8, t19, 0, 0, 16);
    goto LAB25;

LAB27:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 4416);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng5)));
    t17 = (t0 + 4416);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    memset(t31, 0, 8);
    t22 = (t31 + 4);
    t29 = (t21 + 4);
    t11 = *((unsigned int *)t21);
    t12 = (t11 >> 15);
    t13 = (t12 & 1);
    *((unsigned int *)t31) = t13;
    t14 = *((unsigned int *)t29);
    t15 = (t14 >> 15);
    t16 = (t15 & 1);
    *((unsigned int *)t22) = t16;
    xsi_vlog_mul_concat(t30, 16, 1, t10, 1U, t31, 1);
    xsi_vlogtype_concat(t19, 32, 32, 2U, t30, 16, t8, 16);
    t32 = (t0 + 3936);
    xsi_vlogvar_assign_value(t32, t19, 0, 0, 32);
    goto LAB33;

LAB29:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 4416);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng3)));
    xsi_vlogtype_concat(t19, 32, 32, 2U, t10, 16, t8, 16);
    t17 = (t0 + 3936);
    xsi_vlogvar_assign_value(t17, t19, 0, 0, 32);
    goto LAB33;

LAB38:    xsi_set_current_line(46, ng0);
    t21 = (t0 + 3536U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t29 = (t22 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (t23 >> 0);
    *((unsigned int *)t30) = t24;
    t25 = *((unsigned int *)t29);
    t26 = (t25 >> 0);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t27 & 255U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 255U);
    t32 = (t0 + 4576);
    xsi_vlogvar_assign_value(t32, t30, 0, 0, 8);
    goto LAB48;

LAB40:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 3536U);
    t7 = *((char **)t4);
    memset(t30, 0, 8);
    t4 = (t30 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 8);
    *((unsigned int *)t30) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 8);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t15 & 255U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 255U);
    t10 = (t0 + 4576);
    xsi_vlogvar_assign_value(t10, t30, 0, 0, 8);
    goto LAB48;

LAB42:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 3536U);
    t7 = *((char **)t4);
    memset(t30, 0, 8);
    t4 = (t30 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 16);
    *((unsigned int *)t30) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 16);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t15 & 255U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 255U);
    t10 = (t0 + 4576);
    xsi_vlogvar_assign_value(t10, t30, 0, 0, 8);
    goto LAB48;

LAB44:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 3536U);
    t7 = *((char **)t4);
    memset(t30, 0, 8);
    t4 = (t30 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 24);
    *((unsigned int *)t30) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 24);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t15 & 255U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 255U);
    t10 = (t0 + 4576);
    xsi_vlogvar_assign_value(t10, t30, 0, 0, 8);
    goto LAB48;

LAB50:    xsi_set_current_line(53, ng0);
    t7 = (t0 + 4576);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t17 = ((char*)((ng8)));
    t20 = (t0 + 4576);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t33, 0, 8);
    t29 = (t33 + 4);
    t32 = (t22 + 4);
    t11 = *((unsigned int *)t22);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t33) = t13;
    t14 = *((unsigned int *)t32);
    t15 = (t14 >> 7);
    t16 = (t15 & 1);
    *((unsigned int *)t29) = t16;
    xsi_vlog_mul_concat(t31, 24, 1, t17, 1U, t33, 1);
    xsi_vlogtype_concat(t30, 32, 32, 2U, t31, 24, t10, 8);
    t34 = (t0 + 3936);
    xsi_vlogvar_assign_value(t34, t30, 0, 0, 32);
    goto LAB56;

LAB52:    xsi_set_current_line(54, ng0);
    t7 = (t0 + 4576);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t17 = ((char*)((ng3)));
    xsi_vlogtype_concat(t30, 32, 32, 2U, t17, 24, t10, 8);
    t20 = (t0 + 3936);
    xsi_vlogvar_assign_value(t20, t30, 0, 0, 32);
    goto LAB56;

}

static void Always_65_4(char *t0)
{
    char t9[8];
    char t17[8];
    char t18[8];
    char t28[8];
    char t39[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    int t16;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 6648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 7280);
    *((int *)t2) = 1;
    t3 = (t0 + 6680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 1936U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(68, ng0);

LAB14:    xsi_set_current_line(69, ng0);
    t7 = (t0 + 2896U);
    t8 = *((char **)t7);
    t7 = (t0 + 4256);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB13;

LAB9:    xsi_set_current_line(71, ng0);

LAB15:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 2736U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t3) = t15;

LAB16:    t8 = ((char*)((ng3)));
    t16 = xsi_vlog_unsigned_case_compare(t9, 1, t8, 1);
    if (t16 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 1, t2, 1);
    if (t6 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB23:    goto LAB13;

LAB11:    xsi_set_current_line(78, ng0);

LAB24:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 2736U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t3 = (t17 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t17) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t14 & 3U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 3U);

LAB25:    t8 = ((char*)((ng3)));
    t16 = xsi_vlog_unsigned_case_compare(t17, 2, t8, 2);
    if (t16 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 2, t2, 2);
    if (t6 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 2, t2, 2);
    if (t6 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t17, 2, t2, 2);
    if (t6 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4256);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB36:    goto LAB13;

LAB17:    xsi_set_current_line(73, ng0);
    t19 = (t0 + 2896U);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 65535U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 65535U);
    t29 = (t0 + 3536U);
    t30 = *((char **)t29);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t31 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (t32 >> 16);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 16);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 & 65535U);
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 65535U);
    xsi_vlogtype_concat(t17, 32, 32, 2U, t28, 16, t18, 16);
    t38 = (t0 + 4256);
    xsi_vlogvar_assign_value(t38, t17, 0, 0, 32);
    goto LAB23;

LAB19:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 3536U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t18 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t18) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t14 & 65535U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 65535U);
    t8 = (t0 + 2896U);
    t19 = *((char **)t8);
    memset(t28, 0, 8);
    t8 = (t28 + 4);
    t20 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t28) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 0);
    *((unsigned int *)t8) = t25;
    t26 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t26 & 65535U);
    t27 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t27 & 65535U);
    xsi_vlogtype_concat(t17, 32, 32, 2U, t28, 16, t18, 16);
    t21 = (t0 + 4256);
    xsi_vlogvar_assign_value(t21, t17, 0, 0, 32);
    goto LAB23;

LAB26:    xsi_set_current_line(80, ng0);
    t19 = (t0 + 2896U);
    t20 = *((char **)t19);
    memset(t28, 0, 8);
    t19 = (t28 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t28) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t26 & 255U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 255U);
    t29 = (t0 + 3536U);
    t30 = *((char **)t29);
    memset(t39, 0, 8);
    t29 = (t39 + 4);
    t31 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (t32 >> 8);
    *((unsigned int *)t39) = t33;
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 8);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t36 & 16777215U);
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 16777215U);
    xsi_vlogtype_concat(t18, 32, 32, 2U, t39, 24, t28, 8);
    t38 = (t0 + 4256);
    xsi_vlogvar_assign_value(t38, t18, 0, 0, 32);
    goto LAB36;

LAB28:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 3536U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t28 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t28) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t8 = (t0 + 2896U);
    t19 = *((char **)t8);
    memset(t39, 0, 8);
    t8 = (t39 + 4);
    t20 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t39) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 0);
    *((unsigned int *)t8) = t25;
    t26 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t26 & 255U);
    t27 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t27 & 255U);
    t21 = (t0 + 3536U);
    t29 = *((char **)t21);
    memset(t40, 0, 8);
    t21 = (t40 + 4);
    t30 = (t29 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 16);
    *((unsigned int *)t40) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 >> 16);
    *((unsigned int *)t21) = t35;
    t36 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t36 & 65535U);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & 65535U);
    xsi_vlogtype_concat(t18, 32, 32, 3U, t40, 16, t39, 8, t28, 8);
    t31 = (t0 + 4256);
    xsi_vlogvar_assign_value(t31, t18, 0, 0, 32);
    goto LAB36;

LAB30:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 3536U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t28 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t28) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t14 & 65535U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 65535U);
    t8 = (t0 + 2896U);
    t19 = *((char **)t8);
    memset(t39, 0, 8);
    t8 = (t39 + 4);
    t20 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t39) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 0);
    *((unsigned int *)t8) = t25;
    t26 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t26 & 255U);
    t27 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t27 & 255U);
    t21 = (t0 + 3536U);
    t29 = *((char **)t21);
    memset(t40, 0, 8);
    t21 = (t40 + 4);
    t30 = (t29 + 4);
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 24);
    *((unsigned int *)t40) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 >> 24);
    *((unsigned int *)t21) = t35;
    t36 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t36 & 255U);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & 255U);
    xsi_vlogtype_concat(t18, 32, 32, 3U, t40, 8, t39, 8, t28, 16);
    t31 = (t0 + 4256);
    xsi_vlogvar_assign_value(t31, t18, 0, 0, 32);
    goto LAB36;

LAB32:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 3536U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t28 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t28) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t14 & 16777215U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 16777215U);
    t8 = (t0 + 2896U);
    t19 = *((char **)t8);
    memset(t39, 0, 8);
    t8 = (t39 + 4);
    t20 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t39) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 0);
    *((unsigned int *)t8) = t25;
    t26 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t26 & 255U);
    t27 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t27 & 255U);
    xsi_vlogtype_concat(t18, 32, 32, 2U, t39, 8, t28, 24);
    t21 = (t0 + 4256);
    xsi_vlogvar_assign_value(t21, t18, 0, 0, 32);
    goto LAB36;

}

static void Always_96_5(char *t0)
{
    char t15[16];
    char t16[8];
    char t17[8];
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;

LAB0:    t1 = (t0 + 6896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 7296);
    *((int *)t2) = 1;
    t3 = (t0 + 6928);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);

LAB5:    xsi_set_current_line(98, ng0);
    t4 = (t0 + 2256U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(107, ng0);

LAB18:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2576U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(99, ng0);

LAB9:    t11 = (t0 + 872);
    xsi_vlog_namedbase_setdisablestate(t11, &&LAB10);
    t12 = (t0 + 6704);
    xsi_vlog_namedbase_pushprocess(t11, t12);

LAB11:    xsi_set_current_line(101, ng0);
    xsi_set_current_line(101, ng0);
    t13 = ((char*)((ng9)));
    t14 = (t0 + 4736);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB12:    t2 = (t0 + 4736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    xsi_vlog_unsigned_less(t15, 46, t4, 32, t5, 46);
    t11 = (t15 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB13;

LAB14:    t2 = (t0 + 872);
    xsi_vlog_namedbase_popprocess(t2);

LAB10:    t3 = (t0 + 6704);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB8;

LAB13:    xsi_set_current_line(102, ng0);

LAB15:    xsi_set_current_line(103, ng0);
    t12 = ((char*)((ng9)));
    t13 = (t0 + 4096);
    t14 = (t0 + 4096);
    t18 = (t14 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 4096);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 4736);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t16, t17, t19, t22, 2, 1, t25, 32, 2);
    t26 = (t16 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t17 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 4736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t4, 32, t5, 32);
    t11 = (t0 + 4736);
    xsi_vlogvar_assign_value(t11, t16, 0, 0, 32);
    goto LAB12;

LAB16:    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t17);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t17), t36, 0LL);
    goto LAB17;

LAB19:    xsi_set_current_line(109, ng0);

LAB22:    xsi_set_current_line(110, ng0);
    t4 = (t0 + 4256);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 4096);
    t13 = (t0 + 4096);
    t14 = (t13 + 72U);
    t18 = *((char **)t14);
    t19 = (t0 + 4096);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3376U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t16, t17, t18, t21, 2, 1, t23, 16384, 2);
    t22 = (t16 + 4);
    t27 = *((unsigned int *)t22);
    t28 = (!(t27));
    t24 = (t17 + 4);
    t30 = *((unsigned int *)t24);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(111, ng0);
    t2 = xsi_vlog_time(t15, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 3216U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 2736U);
    t11 = *((char **)t5);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 2);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 2);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 1073741823U);
    t27 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t27 & 1073741823U);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t17, 30, t3, 2);
    t13 = (t0 + 4256);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t15, 64, (char)118, t4, 32, (char)118, t16, 32, (char)118, t18, 32);
    goto LAB21;

LAB23:    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t17);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, *((unsigned int *)t17), t36, 0LL);
    goto LAB24;

}


extern void work_m_00000000002539110518_2924402094_init()
{
	static char *pe[] = {(void *)NetDecl_16_0,(void *)NetDecl_17_1,(void *)NetDecl_20_2,(void *)Always_24_3,(void *)Always_65_4,(void *)Always_96_5};
	xsi_register_didat("work_m_00000000002539110518_2924402094", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002539110518_2924402094.didat");
	xsi_register_executes(pe);
}
