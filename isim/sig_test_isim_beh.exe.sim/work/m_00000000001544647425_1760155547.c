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
static const char *ng0 = "C:/Users/Aruna/Documents/ISE/XOR_NN/Sigmoid.v";
static unsigned int ng1[] = {49U, 0U};
static unsigned int ng2[] = {100U, 0U};
static unsigned int ng3[] = {39U, 0U};
static unsigned int ng4[] = {50U, 0U};
static unsigned int ng5[] = {98U, 0U};
static unsigned int ng6[] = {34U, 0U};
static unsigned int ng7[] = {40U, 0U};
static unsigned int ng8[] = {29U, 0U};
static unsigned int ng9[] = {35U, 0U};
static unsigned int ng10[] = {95U, 0U};
static unsigned int ng11[] = {24U, 0U};
static unsigned int ng12[] = {30U, 0U};
static unsigned int ng13[] = {92U, 0U};
static unsigned int ng14[] = {19U, 0U};
static unsigned int ng15[] = {25U, 0U};
static unsigned int ng16[] = {88U, 0U};
static unsigned int ng17[] = {14U, 0U};
static unsigned int ng18[] = {20U, 0U};
static unsigned int ng19[] = {81U, 0U};
static unsigned int ng20[] = {9U, 0U};
static unsigned int ng21[] = {15U, 0U};
static unsigned int ng22[] = {73U, 0U};
static unsigned int ng23[] = {4U, 0U};
static unsigned int ng24[] = {10U, 0U};
static unsigned int ng25[] = {62U, 0U};
static unsigned int ng26[] = {5U, 0U};



static void Always_10_0(char *t0)
{
    char t6[8];
    char t18[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
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
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;

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
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) > *((unsigned int *)t4))
        goto LAB8;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB15;

LAB14:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB16;

LAB17:    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng4)));
    memset(t18, 0, 8);
    t10 = (t9 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB20;

LAB19:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t9) < *((unsigned int *)t8))
        goto LAB21;

LAB22:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t18);
    t13 = (t11 & t12);
    *((unsigned int *)t19) = t13;
    t20 = (t6 + 4);
    t21 = (t18 + 4);
    t22 = (t19 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t23 = (t14 | t15);
    *((unsigned int *)t22) = t23;
    t24 = *((unsigned int *)t22);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB24;

LAB25:
LAB26:    t46 = (t19 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t19);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB31;

LAB30:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB32;

LAB33:    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng7)));
    memset(t18, 0, 8);
    t10 = (t9 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB36;

LAB35:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t9) < *((unsigned int *)t8))
        goto LAB37;

LAB38:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t18);
    t13 = (t11 & t12);
    *((unsigned int *)t19) = t13;
    t20 = (t6 + 4);
    t21 = (t18 + 4);
    t22 = (t19 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t23 = (t14 | t15);
    *((unsigned int *)t22) = t23;
    t24 = *((unsigned int *)t22);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB40;

LAB41:
LAB42:    t46 = (t19 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t19);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB47;

LAB46:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB48;

LAB49:    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng9)));
    memset(t18, 0, 8);
    t10 = (t9 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB52;

LAB51:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB52;

LAB55:    if (*((unsigned int *)t9) < *((unsigned int *)t8))
        goto LAB53;

LAB54:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t18);
    t13 = (t11 & t12);
    *((unsigned int *)t19) = t13;
    t20 = (t6 + 4);
    t21 = (t18 + 4);
    t22 = (t19 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t23 = (t14 | t15);
    *((unsigned int *)t22) = t23;
    t24 = *((unsigned int *)t22);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB56;

LAB57:
LAB58:    t46 = (t19 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t19);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB63;

LAB62:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB64;

LAB65:    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng12)));
    memset(t18, 0, 8);
    t10 = (t9 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB68;

LAB67:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB68;

LAB71:    if (*((unsigned int *)t9) < *((unsigned int *)t8))
        goto LAB69;

LAB70:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t18);
    t13 = (t11 & t12);
    *((unsigned int *)t19) = t13;
    t20 = (t6 + 4);
    t21 = (t18 + 4);
    t22 = (t19 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t23 = (t14 | t15);
    *((unsigned int *)t22) = t23;
    t24 = *((unsigned int *)t22);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB72;

LAB73:
LAB74:    t46 = (t19 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t19);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB79;

LAB78:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB79;

LAB82:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB80;

LAB81:    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng15)));
    memset(t18, 0, 8);
    t10 = (t9 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB84;

LAB83:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB84;

LAB87:    if (*((unsigned int *)t9) < *((unsigned int *)t8))
        goto LAB85;

LAB86:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t18);
    t13 = (t11 & t12);
    *((unsigned int *)t19) = t13;
    t20 = (t6 + 4);
    t21 = (t18 + 4);
    t22 = (t19 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t23 = (t14 | t15);
    *((unsigned int *)t22) = t23;
    t24 = *((unsigned int *)t22);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB88;

LAB89:
LAB90:    t46 = (t19 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t19);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng17)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB95;

LAB94:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB95;

LAB98:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB96;

LAB97:    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng18)));
    memset(t18, 0, 8);
    t10 = (t9 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB100;

LAB99:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB100;

LAB103:    if (*((unsigned int *)t9) < *((unsigned int *)t8))
        goto LAB101;

LAB102:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t18);
    t13 = (t11 & t12);
    *((unsigned int *)t19) = t13;
    t20 = (t6 + 4);
    t21 = (t18 + 4);
    t22 = (t19 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t23 = (t14 | t15);
    *((unsigned int *)t22) = t23;
    t24 = *((unsigned int *)t22);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB104;

LAB105:
LAB106:    t46 = (t19 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t19);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB107;

LAB108:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng20)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB111;

LAB110:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB111;

LAB114:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB112;

LAB113:    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng21)));
    memset(t18, 0, 8);
    t10 = (t9 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB116;

LAB115:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB116;

LAB119:    if (*((unsigned int *)t9) < *((unsigned int *)t8))
        goto LAB117;

LAB118:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t18);
    t13 = (t11 & t12);
    *((unsigned int *)t19) = t13;
    t20 = (t6 + 4);
    t21 = (t18 + 4);
    t22 = (t19 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t23 = (t14 | t15);
    *((unsigned int *)t22) = t23;
    t24 = *((unsigned int *)t22);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB120;

LAB121:
LAB122:    t46 = (t19 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t19);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB123;

LAB124:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng23)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB127;

LAB126:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB127;

LAB130:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB128;

LAB129:    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    t8 = ((char*)((ng24)));
    memset(t18, 0, 8);
    t10 = (t9 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB132;

LAB131:    t16 = (t8 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB132;

LAB135:    if (*((unsigned int *)t9) < *((unsigned int *)t8))
        goto LAB133;

LAB134:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t18);
    t13 = (t11 & t12);
    *((unsigned int *)t19) = t13;
    t20 = (t6 + 4);
    t21 = (t18 + 4);
    t22 = (t19 + 4);
    t14 = *((unsigned int *)t20);
    t15 = *((unsigned int *)t21);
    t23 = (t14 | t15);
    *((unsigned int *)t22) = t23;
    t24 = *((unsigned int *)t22);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB136;

LAB137:
LAB138:    t46 = (t19 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t19);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng26)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB143;

LAB142:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB143;

LAB146:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB144;

LAB145:    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB147;

LAB148:
LAB149:
LAB141:
LAB125:
LAB109:
LAB93:
LAB77:
LAB61:
LAB45:
LAB29:
LAB13:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(11, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 8, 0LL);
    goto LAB13;

LAB15:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB20:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB22;

LAB21:    *((unsigned int *)t18) = 1;
    goto LAB22;

LAB24:    t26 = *((unsigned int *)t19);
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t19) = (t26 | t27);
    t28 = (t6 + 4);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t6);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & t40);
    t45 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t45 & t41);
    goto LAB26;

LAB27:    xsi_set_current_line(12, ng0);
    t52 = ((char*)((ng5)));
    t53 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 8, 0LL);
    goto LAB29;

LAB31:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t6) = 1;
    goto LAB33;

LAB36:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB38;

LAB37:    *((unsigned int *)t18) = 1;
    goto LAB38;

LAB40:    t26 = *((unsigned int *)t19);
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t19) = (t26 | t27);
    t28 = (t6 + 4);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t6);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & t40);
    t45 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t45 & t41);
    goto LAB42;

LAB43:    xsi_set_current_line(13, ng0);
    t52 = ((char*)((ng5)));
    t53 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 8, 0LL);
    goto LAB45;

LAB47:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB49;

LAB48:    *((unsigned int *)t6) = 1;
    goto LAB49;

LAB52:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB54;

LAB53:    *((unsigned int *)t18) = 1;
    goto LAB54;

LAB56:    t26 = *((unsigned int *)t19);
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t19) = (t26 | t27);
    t28 = (t6 + 4);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t6);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & t40);
    t45 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t45 & t41);
    goto LAB58;

LAB59:    xsi_set_current_line(14, ng0);
    t52 = ((char*)((ng10)));
    t53 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 8, 0LL);
    goto LAB61;

LAB63:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB65;

LAB64:    *((unsigned int *)t6) = 1;
    goto LAB65;

LAB68:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB70;

LAB69:    *((unsigned int *)t18) = 1;
    goto LAB70;

LAB72:    t26 = *((unsigned int *)t19);
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t19) = (t26 | t27);
    t28 = (t6 + 4);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t6);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & t40);
    t45 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t45 & t41);
    goto LAB74;

LAB75:    xsi_set_current_line(15, ng0);
    t52 = ((char*)((ng13)));
    t53 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 8, 0LL);
    goto LAB77;

LAB79:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB81;

LAB80:    *((unsigned int *)t6) = 1;
    goto LAB81;

LAB84:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB86;

LAB85:    *((unsigned int *)t18) = 1;
    goto LAB86;

LAB88:    t26 = *((unsigned int *)t19);
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t19) = (t26 | t27);
    t28 = (t6 + 4);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t6);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & t40);
    t45 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t45 & t41);
    goto LAB90;

LAB91:    xsi_set_current_line(16, ng0);
    t52 = ((char*)((ng16)));
    t53 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 8, 0LL);
    goto LAB93;

LAB95:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB97;

LAB96:    *((unsigned int *)t6) = 1;
    goto LAB97;

LAB100:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB102;

LAB101:    *((unsigned int *)t18) = 1;
    goto LAB102;

LAB104:    t26 = *((unsigned int *)t19);
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t19) = (t26 | t27);
    t28 = (t6 + 4);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t6);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & t40);
    t45 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t45 & t41);
    goto LAB106;

LAB107:    xsi_set_current_line(17, ng0);
    t52 = ((char*)((ng19)));
    t53 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 8, 0LL);
    goto LAB109;

LAB111:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB113;

LAB112:    *((unsigned int *)t6) = 1;
    goto LAB113;

LAB116:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB118;

LAB117:    *((unsigned int *)t18) = 1;
    goto LAB118;

LAB120:    t26 = *((unsigned int *)t19);
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t19) = (t26 | t27);
    t28 = (t6 + 4);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t6);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & t40);
    t45 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t45 & t41);
    goto LAB122;

LAB123:    xsi_set_current_line(18, ng0);
    t52 = ((char*)((ng22)));
    t53 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 8, 0LL);
    goto LAB125;

LAB127:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB129;

LAB128:    *((unsigned int *)t6) = 1;
    goto LAB129;

LAB132:    t17 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB134;

LAB133:    *((unsigned int *)t18) = 1;
    goto LAB134;

LAB136:    t26 = *((unsigned int *)t19);
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t19) = (t26 | t27);
    t28 = (t6 + 4);
    t29 = (t18 + 4);
    t30 = *((unsigned int *)t6);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t18);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    t44 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t44 & t40);
    t45 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t45 & t41);
    goto LAB138;

LAB139:    xsi_set_current_line(19, ng0);
    t52 = ((char*)((ng25)));
    t53 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 8, 0LL);
    goto LAB141;

LAB143:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB145;

LAB144:    *((unsigned int *)t6) = 1;
    goto LAB145;

LAB147:    xsi_set_current_line(20, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 8, 0LL);
    goto LAB149;

}


extern void work_m_00000000001544647425_1760155547_init()
{
	static char *pe[] = {(void *)Always_10_0};
	xsi_register_didat("work_m_00000000001544647425_1760155547", "isim/sig_test_isim_beh.exe.sim/work/m_00000000001544647425_1760155547.didat");
	xsi_register_executes(pe);
}
