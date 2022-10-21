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
static const char *ng0 = "C:/Users/Administrator/Desktop/P6/PipelineCPU/GRF.v";
static unsigned int ng1[] = {4U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {32U, 0U};
static const char *ng6 = "%d@%h: $%d <= %h";



static void NetDecl_17_0(char *t0)
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

LAB0:    t1 = (t0 + 4424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 2464U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 5616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 5488);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_21_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t24[8];
    char t40[8];
    char t74[8];
    char t90[8];
    char t141[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
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
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
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
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;

LAB0:    t1 = (t0 + 4672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2144U);
    t5 = *((char **)t2);
    t2 = (t0 + 1824U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB7:    t22 = (t0 + 1664U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t22);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB11;

LAB8:    if (t36 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t24) = 1;

LAB11:    t41 = *((unsigned int *)t7);
    t42 = *((unsigned int *)t24);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t7 + 4);
    t45 = (t24 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB12;

LAB13:
LAB14:    t72 = (t0 + 2144U);
    t73 = *((char **)t72);
    t72 = ((char*)((ng3)));
    memset(t74, 0, 8);
    t75 = (t73 + 4);
    t76 = (t72 + 4);
    t77 = *((unsigned int *)t73);
    t78 = *((unsigned int *)t72);
    t79 = (t77 ^ t78);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t76);
    t86 = (t84 | t85);
    t87 = (~(t86));
    t88 = (t83 & t87);
    if (t88 != 0)
        goto LAB16;

LAB15:    if (t86 != 0)
        goto LAB17;

LAB18:    t91 = *((unsigned int *)t40);
    t92 = *((unsigned int *)t74);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t94 = (t40 + 4);
    t95 = (t74 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB19;

LAB20:
LAB21:    memset(t4, 0, 8);
    t122 = (t90 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t90);
    t126 = (t125 & t124);
    t127 = (t126 & 1U);
    if (t127 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t122) != 0)
        goto LAB24;

LAB25:    t129 = (t4 + 4);
    t130 = *((unsigned int *)t4);
    t131 = *((unsigned int *)t129);
    t132 = (t130 || t131);
    if (t132 > 0)
        goto LAB26;

LAB27:    t135 = *((unsigned int *)t4);
    t136 = (~(t135));
    t137 = *((unsigned int *)t129);
    t138 = (t136 || t137);
    if (t138 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t129) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t4) > 0)
        goto LAB32;

LAB33:    memcpy(t3, t141, 8);

LAB34:    t148 = (t0 + 5680);
    t150 = (t148 + 56U);
    t151 = *((char **)t150);
    t152 = (t151 + 56U);
    t153 = *((char **)t152);
    memcpy(t153, t3, 8);
    xsi_driver_vfirst_trans(t148, 0, 31);
    t154 = (t0 + 5504);
    *((int *)t154) = 1;

LAB1:    return;
LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB10:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB11;

LAB12:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t7 + 4);
    t55 = (t24 + 4);
    t56 = *((unsigned int *)t7);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t24);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB14;

LAB16:    *((unsigned int *)t74) = 1;
    goto LAB18;

LAB17:    t89 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB18;

LAB19:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t40 + 4);
    t105 = (t74 + 4);
    t106 = *((unsigned int *)t40);
    t107 = (~(t106));
    t108 = *((unsigned int *)t104);
    t109 = (~(t108));
    t110 = *((unsigned int *)t74);
    t111 = (~(t110));
    t112 = *((unsigned int *)t105);
    t113 = (~(t112));
    t114 = (t107 & t109);
    t115 = (t111 & t113);
    t116 = (~(t114));
    t117 = (~(t115));
    t118 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t118 & t116);
    t119 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t119 & t117);
    t120 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t120 & t116);
    t121 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t121 & t117);
    goto LAB21;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB24:    t128 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB25;

LAB26:    t133 = (t0 + 2304U);
    t134 = *((char **)t133);
    goto LAB27;

LAB28:    t133 = (t0 + 3344);
    t139 = (t133 + 56U);
    t140 = *((char **)t139);
    t142 = (t0 + 3344);
    t143 = (t142 + 72U);
    t144 = *((char **)t143);
    t145 = (t0 + 3344);
    t146 = (t145 + 64U);
    t147 = *((char **)t146);
    t148 = (t0 + 1824U);
    t149 = *((char **)t148);
    xsi_vlog_generic_get_array_select_value(t141, 32, t140, t144, t147, 2, 1, t149, 5, 2);
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t3, 32, t134, 32, t141, 32);
    goto LAB34;

LAB32:    memcpy(t3, t134, 8);
    goto LAB34;

}

static void Cont_22_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t24[8];
    char t40[8];
    char t74[8];
    char t90[8];
    char t141[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
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
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
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
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t154;

LAB0:    t1 = (t0 + 4920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2144U);
    t5 = *((char **)t2);
    t2 = (t0 + 1984U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB7:    t22 = (t0 + 1664U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = (t22 + 4);
    t27 = *((unsigned int *)t23);
    t28 = *((unsigned int *)t22);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB11;

LAB8:    if (t36 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t24) = 1;

LAB11:    t41 = *((unsigned int *)t7);
    t42 = *((unsigned int *)t24);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t7 + 4);
    t45 = (t24 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB12;

LAB13:
LAB14:    t72 = (t0 + 2144U);
    t73 = *((char **)t72);
    t72 = ((char*)((ng3)));
    memset(t74, 0, 8);
    t75 = (t73 + 4);
    t76 = (t72 + 4);
    t77 = *((unsigned int *)t73);
    t78 = *((unsigned int *)t72);
    t79 = (t77 ^ t78);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = (t79 | t82);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t76);
    t86 = (t84 | t85);
    t87 = (~(t86));
    t88 = (t83 & t87);
    if (t88 != 0)
        goto LAB16;

LAB15:    if (t86 != 0)
        goto LAB17;

LAB18:    t91 = *((unsigned int *)t40);
    t92 = *((unsigned int *)t74);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t94 = (t40 + 4);
    t95 = (t74 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB19;

LAB20:
LAB21:    memset(t4, 0, 8);
    t122 = (t90 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t90);
    t126 = (t125 & t124);
    t127 = (t126 & 1U);
    if (t127 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t122) != 0)
        goto LAB24;

LAB25:    t129 = (t4 + 4);
    t130 = *((unsigned int *)t4);
    t131 = *((unsigned int *)t129);
    t132 = (t130 || t131);
    if (t132 > 0)
        goto LAB26;

LAB27:    t135 = *((unsigned int *)t4);
    t136 = (~(t135));
    t137 = *((unsigned int *)t129);
    t138 = (t136 || t137);
    if (t138 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t129) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t4) > 0)
        goto LAB32;

LAB33:    memcpy(t3, t141, 8);

LAB34:    t148 = (t0 + 5744);
    t150 = (t148 + 56U);
    t151 = *((char **)t150);
    t152 = (t151 + 56U);
    t153 = *((char **)t152);
    memcpy(t153, t3, 8);
    xsi_driver_vfirst_trans(t148, 0, 31);
    t154 = (t0 + 5520);
    *((int *)t154) = 1;

LAB1:    return;
LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB10:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB11;

LAB12:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t7 + 4);
    t55 = (t24 + 4);
    t56 = *((unsigned int *)t7);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t24);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB14;

LAB16:    *((unsigned int *)t74) = 1;
    goto LAB18;

LAB17:    t89 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB18;

LAB19:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t40 + 4);
    t105 = (t74 + 4);
    t106 = *((unsigned int *)t40);
    t107 = (~(t106));
    t108 = *((unsigned int *)t104);
    t109 = (~(t108));
    t110 = *((unsigned int *)t74);
    t111 = (~(t110));
    t112 = *((unsigned int *)t105);
    t113 = (~(t112));
    t114 = (t107 & t109);
    t115 = (t111 & t113);
    t116 = (~(t114));
    t117 = (~(t115));
    t118 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t118 & t116);
    t119 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t119 & t117);
    t120 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t120 & t116);
    t121 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t121 & t117);
    goto LAB21;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB24:    t128 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB25;

LAB26:    t133 = (t0 + 2304U);
    t134 = *((char **)t133);
    goto LAB27;

LAB28:    t133 = (t0 + 3344);
    t139 = (t133 + 56U);
    t140 = *((char **)t139);
    t142 = (t0 + 3344);
    t143 = (t142 + 72U);
    t144 = *((char **)t143);
    t145 = (t0 + 3344);
    t146 = (t145 + 64U);
    t147 = *((char **)t146);
    t148 = (t0 + 1984U);
    t149 = *((char **)t148);
    xsi_vlog_generic_get_array_select_value(t141, 32, t140, t144, t147, 2, 1, t149, 5, 2);
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t3, 32, t134, 32, t141, 32);
    goto LAB34;

LAB32:    memcpy(t3, t134, 8);
    goto LAB34;

}

static void Always_24_3(char *t0)
{
    char t15[8];
    char t18[8];
    char t19[8];
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    int t31;
    char *t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;

LAB0:    t1 = (t0 + 5168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 5536);
    *((int *)t2) = 1;
    t3 = (t0 + 5200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1344U);
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

LAB23:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB24;

LAB25:
LAB26:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);

LAB9:    t11 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t11, &&LAB10);
    t12 = (t0 + 4976);
    xsi_vlog_namedbase_pushprocess(t11, t12);

LAB11:    xsi_set_current_line(29, ng0);
    xsi_set_current_line(29, ng0);
    t13 = ((char*)((ng4)));
    t14 = (t0 + 3504);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 6);

LAB12:    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB14;

LAB13:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB14;

LAB17:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB15;

LAB16:    t14 = (t15 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB10:    t3 = (t0 + 4976);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB8;

LAB14:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB16;

LAB15:    *((unsigned int *)t15) = 1;
    goto LAB16;

LAB18:    xsi_set_current_line(30, ng0);

LAB20:    xsi_set_current_line(31, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 3344);
    t20 = (t0 + 3344);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 3344);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 3504);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_convert_array_indices(t18, t19, t22, t25, 2, 1, t28, 6, 2);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t19 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (!(t33));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3504);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 6, t5, 32);
    t11 = (t0 + 3504);
    xsi_vlogvar_assign_value(t11, t15, 0, 0, 6);
    goto LAB12;

LAB21:    t36 = *((unsigned int *)t18);
    t37 = *((unsigned int *)t19);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, *((unsigned int *)t19), t39, 0LL);
    goto LAB22;

LAB24:    xsi_set_current_line(37, ng0);

LAB27:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2144U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t30 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t4);
    t36 = (t30 ^ t33);
    t37 = *((unsigned int *)t11);
    t40 = *((unsigned int *)t12);
    t41 = (t37 ^ t40);
    t42 = (t36 | t41);
    t43 = *((unsigned int *)t11);
    t44 = *((unsigned int *)t12);
    t45 = (t43 | t44);
    t46 = (~(t45));
    t47 = (t42 & t46);
    if (t47 != 0)
        goto LAB29;

LAB28:    if (t45 != 0)
        goto LAB30;

LAB31:    t14 = (t15 + 4);
    t48 = *((unsigned int *)t14);
    t49 = (~(t48));
    t50 = *((unsigned int *)t15);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(40, ng0);
    t2 = xsi_vlog_time(t57, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2944U);
    t4 = *((char **)t3);
    t3 = (t0 + 2144U);
    t5 = *((char **)t3);
    t3 = (t0 + 2304U);
    t11 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng6, 5, t0, (char)118, t57, 64, (char)118, t4, 32, (char)118, t5, 5, (char)118, t11, 32);
    goto LAB26;

LAB29:    *((unsigned int *)t15) = 1;
    goto LAB31;

LAB30:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(39, ng0);
    t16 = (t0 + 2304U);
    t17 = *((char **)t16);
    t16 = (t0 + 3344);
    t20 = (t0 + 3344);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t0 + 3344);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = (t0 + 2144U);
    t27 = *((char **)t26);
    xsi_vlog_generic_convert_array_indices(t18, t19, t22, t25, 2, 1, t27, 5, 2);
    t26 = (t18 + 4);
    t53 = *((unsigned int *)t26);
    t31 = (!(t53));
    t28 = (t19 + 4);
    t54 = *((unsigned int *)t28);
    t34 = (!(t54));
    t35 = (t31 && t34);
    if (t35 == 1)
        goto LAB35;

LAB36:    goto LAB34;

LAB35:    t55 = *((unsigned int *)t18);
    t56 = *((unsigned int *)t19);
    t38 = (t55 - t56);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t16, t17, 0, *((unsigned int *)t19), t39, 0LL);
    goto LAB36;

}


extern void work_m_00000000002816090924_1621229167_init()
{
	static char *pe[] = {(void *)NetDecl_17_0,(void *)Cont_21_1,(void *)Cont_22_2,(void *)Always_24_3};
	xsi_register_didat("work_m_00000000002816090924_1621229167", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000002816090924_1621229167.didat");
	xsi_register_executes(pe);
}
