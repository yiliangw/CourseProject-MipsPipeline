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
static const char *ng0 = "C:/Users/Administrator/Desktop/P6/PipelineCPU/NPC.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {12288U, 0U};



static void NetDecl_14_0(char *t0)
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

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 3992);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 3896);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_16_1(char *t0)
{
    char t9[8];
    char t34[8];
    char t35[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
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
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 3912);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(94, ng0);

LAB72:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(20, ng0);

LAB26:    xsi_set_current_line(21, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t10 = (t8 + 4);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB30;

LAB27:    if (t21 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t9) = 1;

LAB30:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(26, ng0);

LAB35:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t3, 32, t2, 32);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 32);

LAB33:    goto LAB25;

LAB9:    xsi_set_current_line(31, ng0);

LAB36:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t8);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB40;

LAB37:    if (t21 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t9) = 1;

LAB40:    t11 = (t9 + 4);
    t26 = *((unsigned int *)t11);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(37, ng0);

LAB45:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t3, 32, t2, 32);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 32);

LAB43:    goto LAB25;

LAB11:    xsi_set_current_line(42, ng0);

LAB46:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t35, 0, 8);
    xsi_vlog_signed_leq(t35, 32, t4, 32, t3, 32);
    t7 = (t35 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t35);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(48, ng0);

LAB51:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t3, 32, t2, 32);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 32);

LAB49:    goto LAB25;

LAB13:    xsi_set_current_line(53, ng0);

LAB52:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t35, 0, 8);
    xsi_vlog_signed_less(t35, 32, t4, 32, t3, 32);
    t7 = (t35 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t35);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(59, ng0);

LAB57:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t3, 32, t2, 32);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 32);

LAB55:    goto LAB25;

LAB15:    xsi_set_current_line(64, ng0);

LAB58:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t35, 0, 8);
    xsi_vlog_signed_greatereq(t35, 32, t4, 32, t3, 32);
    t7 = (t35 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t35);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(70, ng0);

LAB63:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t3, 32, t2, 32);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 32);

LAB61:    goto LAB25;

LAB17:    xsi_set_current_line(75, ng0);

LAB64:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t35, 0, 8);
    xsi_vlog_signed_greater(t35, 32, t4, 32, t3, 32);
    t7 = (t35 + 4);
    t12 = *((unsigned int *)t7);
    t13 = (~(t12));
    t14 = *((unsigned int *)t35);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(81, ng0);

LAB69:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t3, 32, t2, 32);
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 32);

LAB67:    goto LAB25;

LAB19:    xsi_set_current_line(86, ng0);

LAB70:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1688U);
    t7 = *((char **)t4);
    t4 = (t0 + 2008U);
    t8 = *((char **)t4);
    memset(t34, 0, 8);
    t4 = (t34 + 4);
    t10 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 28);
    *((unsigned int *)t34) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 28);
    *((unsigned int *)t4) = t15;
    t16 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t16 & 15U);
    t17 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t17 & 15U);
    xsi_vlogtype_concat(t9, 32, 32, 3U, t34, 4, t7, 26, t3, 2);
    t11 = (t0 + 2408);
    xsi_vlogvar_assign_value(t11, t9, 0, 0, 32);
    goto LAB25;

LAB21:    xsi_set_current_line(90, ng0);

LAB71:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB25;

LAB29:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(22, ng0);

LAB34:    xsi_set_current_line(23, ng0);
    t31 = (t0 + 1368U);
    t32 = *((char **)t31);
    t31 = (t0 + 1528U);
    t33 = *((char **)t31);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t32, 32, t33, 32);
    t31 = (t0 + 2408);
    xsi_vlogvar_assign_value(t31, t34, 0, 0, 32);
    goto LAB33;

LAB39:    t10 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(33, ng0);

LAB44:    xsi_set_current_line(34, ng0);
    t24 = (t0 + 1368U);
    t25 = *((char **)t24);
    t24 = (t0 + 1528U);
    t31 = *((char **)t24);
    memset(t34, 0, 8);
    xsi_vlog_unsigned_add(t34, 32, t25, 32, t31, 32);
    t24 = (t0 + 2408);
    xsi_vlogvar_assign_value(t24, t34, 0, 0, 32);
    goto LAB43;

LAB47:    xsi_set_current_line(44, ng0);

LAB50:    xsi_set_current_line(45, ng0);
    t8 = (t0 + 1368U);
    t10 = *((char **)t8);
    t8 = (t0 + 1528U);
    t11 = *((char **)t8);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t10, 32, t11, 32);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t36, 0, 0, 32);
    goto LAB49;

LAB53:    xsi_set_current_line(55, ng0);

LAB56:    xsi_set_current_line(56, ng0);
    t8 = (t0 + 1368U);
    t10 = *((char **)t8);
    t8 = (t0 + 1528U);
    t11 = *((char **)t8);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t10, 32, t11, 32);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t36, 0, 0, 32);
    goto LAB55;

LAB59:    xsi_set_current_line(66, ng0);

LAB62:    xsi_set_current_line(67, ng0);
    t8 = (t0 + 1368U);
    t10 = *((char **)t8);
    t8 = (t0 + 1528U);
    t11 = *((char **)t8);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t10, 32, t11, 32);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t36, 0, 0, 32);
    goto LAB61;

LAB65:    xsi_set_current_line(77, ng0);

LAB68:    xsi_set_current_line(78, ng0);
    t8 = (t0 + 1368U);
    t10 = *((char **)t8);
    t8 = (t0 + 1528U);
    t11 = *((char **)t8);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 32, t10, 32, t11, 32);
    t8 = (t0 + 2408);
    xsi_vlogvar_assign_value(t8, t36, 0, 0, 32);
    goto LAB67;

}


extern void work_m_00000000001006699946_0757879789_init()
{
	static char *pe[] = {(void *)NetDecl_14_0,(void *)Always_16_1};
	xsi_register_didat("work_m_00000000001006699946_0757879789", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000001006699946_0757879789.didat");
	xsi_register_executes(pe);
}
