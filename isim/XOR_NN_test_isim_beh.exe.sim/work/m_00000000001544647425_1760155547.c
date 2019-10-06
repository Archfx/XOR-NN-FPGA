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
static unsigned int ng1[] = {65535U, 0U};
static unsigned int ng2[] = {32767U, 0U};
static unsigned int ng3[] = {16383U, 0U};
static unsigned int ng4[] = {8191U, 0U};
static unsigned int ng5[] = {4095U, 0U};
static unsigned int ng6[] = {2047U, 0U};
static unsigned int ng7[] = {1023U, 0U};
static unsigned int ng8[] = {511U, 0U};
static unsigned int ng9[] = {255U, 0U};
static unsigned int ng10[] = {127U, 0U};
static unsigned int ng11[] = {63U, 0U};
static unsigned int ng12[] = {31U, 0U};
static unsigned int ng13[] = {15U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {3U, 0U};
static unsigned int ng16[] = {1U, 0U};
static unsigned int ng17[] = {0U, 0U};
static unsigned int ng18[] = {65537U, 0U};
static unsigned int ng19[] = {65539U, 0U};
static unsigned int ng20[] = {65543U, 0U};
static unsigned int ng21[] = {65551U, 0U};
static unsigned int ng22[] = {65567U, 0U};
static unsigned int ng23[] = {65599U, 0U};
static unsigned int ng24[] = {65663U, 0U};
static unsigned int ng25[] = {65791U, 0U};
static unsigned int ng26[] = {66047U, 0U};
static unsigned int ng27[] = {66559U, 0U};
static unsigned int ng28[] = {67583U, 0U};
static unsigned int ng29[] = {69631U, 0U};
static unsigned int ng30[] = {73727U, 0U};
static unsigned int ng31[] = {81919U, 0U};
static unsigned int ng32[] = {98303U, 0U};
static unsigned int ng33[] = {131071U, 0U};



static void Always_8_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(8, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(8, ng0);

LAB5:    xsi_set_current_line(9, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t4, 17);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng30)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng32)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 17, t2, 17);
    if (t6 == 1)
        goto LAB71;

LAB72:
LAB73:    goto LAB2;

LAB7:    xsi_set_current_line(10, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 17, 0LL);
    goto LAB73;

LAB9:    xsi_set_current_line(11, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB11:    xsi_set_current_line(12, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB13:    xsi_set_current_line(13, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB15:    xsi_set_current_line(14, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB17:    xsi_set_current_line(15, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB19:    xsi_set_current_line(16, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB21:    xsi_set_current_line(17, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB23:    xsi_set_current_line(18, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB25:    xsi_set_current_line(19, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB27:    xsi_set_current_line(20, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB29:    xsi_set_current_line(21, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB31:    xsi_set_current_line(22, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB33:    xsi_set_current_line(23, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB35:    xsi_set_current_line(24, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB37:    xsi_set_current_line(25, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB39:    xsi_set_current_line(26, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB41:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB43:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB45:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB47:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB49:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB51:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB53:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB55:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB57:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB59:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB61:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB63:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB65:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB67:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB69:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

LAB71:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1448);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 17, 0LL);
    goto LAB73;

}


extern void work_m_00000000001544647425_1760155547_init()
{
	static char *pe[] = {(void *)Always_8_0};
	xsi_register_didat("work_m_00000000001544647425_1760155547", "isim/XOR_NN_test_isim_beh.exe.sim/work/m_00000000001544647425_1760155547.didat");
	xsi_register_executes(pe);
}
