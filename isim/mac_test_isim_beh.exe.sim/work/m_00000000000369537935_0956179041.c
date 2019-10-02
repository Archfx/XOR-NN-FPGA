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
static const char *ng0 = "C:/Users/Aruna/Documents/ISE/XOR_NN/mac.v";
static int ng1[] = {0, 0};
static int ng2[] = {7, 0};
static int ng3[] = {1, 0};



static void Always_116_0(char *t0)
{
    char t6[8];
    char t15[8];
    char t23[8];
    char t29[8];
    char t62[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    unsigned int t77;
    int t78;
    char *t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4216);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(117, ng0);

LAB5:    xsi_set_current_line(121, ng0);
    xsi_set_current_line(121, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(122, ng0);
    xsi_set_current_line(122, ng0);
    t13 = ((char*)((ng1)));
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 32);

LAB9:    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_leq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB10:    xsi_set_current_line(123, ng0);
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    t13 = (t0 + 1168U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2568);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t15, 1, t14, t17, 2, t20, 32, 1);
    t21 = (t0 + 1368U);
    t22 = *((char **)t21);
    t21 = (t0 + 1328U);
    t24 = (t21 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 2408);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    xsi_vlog_generic_get_index_select_value(t23, 1, t22, t25, 2, t28, 32, 1);
    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t23);
    t32 = (t30 & t31);
    *((unsigned int *)t29) = t32;
    t33 = (t15 + 4);
    t34 = (t23 + 4);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB12;

LAB13:
LAB14:    t61 = (t0 + 2728);
    t64 = (t0 + 2728);
    t65 = (t64 + 72U);
    t66 = *((char **)t65);
    t67 = (t0 + 2728);
    t68 = (t67 + 64U);
    t69 = *((char **)t68);
    t70 = (t0 + 2568);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t0 + 2408);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    xsi_vlog_generic_convert_array_indices(t62, t63, t66, t69, 2, 2, t72, 32, 1, t75, 32, 1);
    t76 = (t62 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (!(t77));
    t79 = (t63 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (!(t80));
    t82 = (t78 && t81);
    if (t82 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2568);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB9;

LAB12:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t29) = (t41 | t42);
    t43 = (t15 + 4);
    t44 = (t23 + 4);
    t45 = *((unsigned int *)t15);
    t46 = (~(t45));
    t47 = *((unsigned int *)t43);
    t48 = (~(t47));
    t49 = *((unsigned int *)t23);
    t50 = (~(t49));
    t51 = *((unsigned int *)t44);
    t52 = (~(t51));
    t53 = (t46 & t48);
    t54 = (t50 & t52);
    t55 = (~(t53));
    t56 = (~(t54));
    t57 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t57 & t55);
    t58 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t58 & t56);
    t59 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t59 & t55);
    t60 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t60 & t56);
    goto LAB14;

LAB15:    t83 = *((unsigned int *)t62);
    t84 = *((unsigned int *)t63);
    t85 = (t83 - t84);
    t86 = (t85 + 1);
    xsi_vlogvar_wait_assign_value(t61, t29, 0, *((unsigned int *)t63), t86, 0LL);
    goto LAB16;

}

static void Cont_309_1(char *t0)
{
    char t3[8];
    char t6[8];
    char t17[8];
    char t27[8];
    char t37[8];
    char t48[8];
    char t57[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
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
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(309, ng0);
    t2 = (t0 + 2728);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2728);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2728);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng1)));
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t6, 1, t5, t9, t12, 2, 2, t13, 32, 1, t14, 32, 1);
    t15 = (t0 + 1848U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 0);
    t24 = (t23 & 1);
    *((unsigned int *)t15) = t24;
    t25 = (t0 + 1848U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t25 = (t27 + 4);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 16);
    t31 = (t30 & 1);
    *((unsigned int *)t27) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 16);
    t34 = (t33 & 1);
    *((unsigned int *)t25) = t34;
    t35 = (t0 + 1848U);
    t36 = *((char **)t35);
    memset(t37, 0, 8);
    t35 = (t37 + 4);
    t38 = (t36 + 8);
    t39 = (t36 + 12);
    t40 = *((unsigned int *)t38);
    t41 = (t40 >> 0);
    t42 = (t41 & 1);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 >> 0);
    t45 = (t44 & 1);
    *((unsigned int *)t35) = t45;
    t46 = (t0 + 1848U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    t46 = (t48 + 4);
    t49 = (t47 + 8);
    t50 = (t47 + 12);
    t51 = *((unsigned int *)t49);
    t52 = (t51 >> 10);
    t53 = (t52 & 1);
    *((unsigned int *)t48) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 >> 10);
    t56 = (t55 & 1);
    *((unsigned int *)t46) = t56;
    t58 = (t0 + 1848U);
    t59 = *((char **)t58);
    memset(t57, 0, 8);
    t58 = (t57 + 4);
    t60 = (t59 + 8);
    t61 = (t59 + 12);
    t62 = *((unsigned int *)t60);
    t63 = (t62 >> 21);
    *((unsigned int *)t57) = t63;
    t64 = *((unsigned int *)t61);
    t65 = (t64 >> 21);
    *((unsigned int *)t58) = t65;
    t66 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t66 & 2047U);
    t67 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t67 & 2047U);
    xsi_vlogtype_concat(t3, 16, 16, 6U, t57, 11, t48, 1, t37, 1, t27, 1, t17, 1, t6, 1);
    t68 = (t0 + 4312);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memset(t72, 0, 8);
    t73 = 65535U;
    t74 = t73;
    t75 = (t3 + 4);
    t76 = *((unsigned int *)t3);
    t73 = (t73 & t76);
    t77 = *((unsigned int *)t75);
    t74 = (t74 & t77);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t79 | t73);
    t80 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t80 | t74);
    xsi_driver_vfirst_trans(t68, 0, 15);
    t81 = (t0 + 4232);
    *((int *)t81) = 1;

LAB1:    return;
}


extern void work_m_00000000000369537935_0956179041_init()
{
	static char *pe[] = {(void *)Always_116_0,(void *)Cont_309_1};
	xsi_register_didat("work_m_00000000000369537935_0956179041", "isim/mac_test_isim_beh.exe.sim/work/m_00000000000369537935_0956179041.didat");
	xsi_register_executes(pe);
}
