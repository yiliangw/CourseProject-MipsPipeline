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
static const char *ng0 = "C:/Users/Administrator/Desktop/P6/PipelineCPU/WriteInf.v";
static int ng1[] = {0, 0, 0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static int ng8[] = {0, 0};
static int ng9[] = {1, 0};



static void Always_28_0(char *t0)
{
    char t17[8];
    char t30[8];
    char t45[8];
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
    char *t15;
    char *t16;
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
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
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
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    int t85;
    char *t86;
    char *t87;

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 5728);
    *((int *)t2) = 1;
    t3 = (t0 + 5440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
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

LAB7:    xsi_set_current_line(35, ng0);

LAB10:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:
LAB13:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);

LAB9:    xsi_set_current_line(32, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    t13 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t13, t11, 3, 0, 1, 0LL);
    t14 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t14, t11, 4, 0, 2, 0LL);
    t15 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t15, t11, 6, 0, 5, 0LL);
    t16 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t16, t11, 11, 0, 32, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(37, ng0);

LAB14:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t4);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t11);
    t26 = *((unsigned int *)t12);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB18;

LAB15:    if (t27 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t17) = 1;

LAB18:    t14 = (t0 + 2008U);
    t15 = *((char **)t14);
    t14 = ((char*)((ng2)));
    memset(t30, 0, 8);
    t16 = (t15 + 4);
    t31 = (t14 + 4);
    t32 = *((unsigned int *)t15);
    t33 = *((unsigned int *)t14);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t16);
    t36 = *((unsigned int *)t31);
    t37 = (t35 ^ t36);
    t38 = (t34 | t37);
    t39 = *((unsigned int *)t16);
    t40 = *((unsigned int *)t31);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB22;

LAB19:    if (t41 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t30) = 1;

LAB22:    t46 = *((unsigned int *)t17);
    t47 = *((unsigned int *)t30);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t17 + 4);
    t50 = (t30 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB23;

LAB24:
LAB25:    t77 = (t45 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t45);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(51, ng0);

LAB46:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB28:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t17, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB50;

LAB47:    if (t22 != 0)
        goto LAB49;

LAB48:    *((unsigned int *)t17) = 1;

LAB50:    t12 = (t17 + 4);
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t17);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(62, ng0);

LAB55:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_minus(t17, 32, t3, 2, t2, 32);
    t4 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t4, t17, 0, 0, 2, 0LL);

LAB53:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    goto LAB13;

LAB17:    t13 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB18;

LAB21:    t44 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB22;

LAB23:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t17 + 4);
    t60 = (t30 + 4);
    t61 = *((unsigned int *)t17);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t30);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB25;

LAB26:    xsi_set_current_line(39, ng0);

LAB29:    xsi_set_current_line(40, ng0);
    t83 = (t0 + 1528U);
    t84 = *((char **)t83);

LAB30:    t83 = ((char*)((ng2)));
    t85 = xsi_vlog_unsigned_case_compare(t84, 3, t83, 3);
    if (t85 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng3)));
    t69 = xsi_vlog_unsigned_case_compare(t84, 3, t2, 3);
    if (t69 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng4)));
    t69 = xsi_vlog_unsigned_case_compare(t84, 3, t2, 3);
    if (t69 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng5)));
    t69 = xsi_vlog_unsigned_case_compare(t84, 3, t2, 3);
    if (t69 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng6)));
    t69 = xsi_vlog_unsigned_case_compare(t84, 3, t2, 3);
    if (t69 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng7)));
    t69 = xsi_vlog_unsigned_case_compare(t84, 3, t2, 3);
    if (t69 == 1)
        goto LAB41;

LAB42:
LAB44:
LAB43:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB45:    goto LAB28;

LAB31:    xsi_set_current_line(41, ng0);
    t86 = (t0 + 2968U);
    t87 = *((char **)t86);
    t86 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t86, t87, 0, 0, 32, 0LL);
    goto LAB45;

LAB33:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 3448U);
    t4 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB45;

LAB35:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 2808U);
    t4 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB45;

LAB37:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 2648U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t4, 32, t3, 32);
    t5 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t5, t17, 0, 0, 32, 0LL);
    goto LAB45;

LAB39:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 3128U);
    t4 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB45;

LAB41:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 3288U);
    t4 = *((char **)t3);
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB45;

LAB49:    t11 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(58, ng0);

LAB54:    xsi_set_current_line(59, ng0);
    t13 = ((char*)((ng8)));
    t14 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 2, 0LL);
    goto LAB53;

}


extern void work_m_00000000004249519211_4165209039_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000004249519211_4165209039", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000004249519211_4165209039.didat");
	xsi_register_executes(pe);
}
