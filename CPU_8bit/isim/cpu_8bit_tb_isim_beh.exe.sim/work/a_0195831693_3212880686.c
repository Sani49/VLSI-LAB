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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Linked_Folder/CPU 8bit/cpu_8bit_tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_0195831693_3212880686_p_0(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(38, ng0);

LAB3:    t1 = (5 * 1000LL);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 3600);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t10 = (t0 + 3600);
    xsi_driver_intertial_reject(t10, t1, t1);

LAB2:    t11 = (t0 + 3392);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0195831693_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    int64 t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;

LAB0:    t1 = (t0 + 3072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(45, ng0);

LAB6:    t2 = (t0 + 3408);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 3408);
    *((int *)t4) = 0;
    xsi_set_current_line(46, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5679);
    t7 = 1;
    if (8U == 8U)
        goto LAB14;

LAB15:    t7 = 0;

LAB16:    if (t7 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t12 = (t7 == (unsigned char)3);
    if (t12 == 0)
        goto LAB20;

LAB21:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 5740);
    t7 = 1;
    if (4U == 4U)
        goto LAB24;

LAB25:    t7 = 0;

LAB26:    if (t7 == 0)
        goto LAB22;

LAB23:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);

LAB32:    t2 = (t0 + 3424);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t10 = (t0 + 5687);
    xsi_report(t10, 28U, (unsigned char)2);
    goto LAB13;

LAB14:    t9 = 0;

LAB17:    if (t9 < 8U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB15;

LAB19:    t9 = (t9 + 1);
    goto LAB17;

LAB20:    t2 = (t0 + 5715);
    xsi_report(t2, 25U, (unsigned char)2);
    goto LAB21;

LAB22:    t10 = (t0 + 5744);
    xsi_report(t10, 26U, (unsigned char)2);
    goto LAB23;

LAB24:    t9 = 0;

LAB27:    if (t9 < 4U)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB25;

LAB29:    t9 = (t9 + 1);
    goto LAB27;

LAB30:    t4 = (t0 + 3424);
    *((int *)t4) = 0;
    xsi_set_current_line(64, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB31:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB30;
    else
        goto LAB32;

LAB33:    goto LAB31;

LAB34:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5770);
    t7 = 1;
    if (8U == 8U)
        goto LAB40;

LAB41:    t7 = 0;

LAB42:    if (t7 == 0)
        goto LAB38;

LAB39:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)2);
    if (t13 == 1)
        goto LAB48;

LAB49:    t7 = (unsigned char)0;

LAB50:    if (t7 == 0)
        goto LAB46;

LAB47:    xsi_set_current_line(75, ng0);

LAB59:    t2 = (t0 + 3440);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    t10 = (t0 + 5778);
    xsi_report(t10, 12U, (unsigned char)2);
    goto LAB39;

LAB40:    t9 = 0;

LAB43:    if (t9 < 8U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB41;

LAB45:    t9 = (t9 + 1);
    goto LAB43;

LAB46:    t11 = (t0 + 5794);
    xsi_report(t11, 15U, (unsigned char)2);
    goto LAB47;

LAB48:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5790);
    t14 = 1;
    if (4U == 4U)
        goto LAB51;

LAB52:    t14 = 0;

LAB53:    t7 = t14;
    goto LAB50;

LAB51:    t9 = 0;

LAB54:    if (t9 < 4U)
        goto LAB55;
    else
        goto LAB53;

LAB55:    t6 = (t4 + t9);
    t10 = (t2 + t9);
    if (*((unsigned char *)t6) != *((unsigned char *)t10))
        goto LAB52;

LAB56:    t9 = (t9 + 1);
    goto LAB54;

LAB57:    t4 = (t0 + 3440);
    *((int *)t4) = 0;
    xsi_set_current_line(76, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB63:    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB58:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB57;
    else
        goto LAB59;

LAB60:    goto LAB58;

LAB61:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5809);
    t7 = 1;
    if (8U == 8U)
        goto LAB67;

LAB68:    t7 = 0;

LAB69:    if (t7 == 0)
        goto LAB65;

LAB66:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)2);
    if (t13 == 1)
        goto LAB75;

LAB76:    t7 = (unsigned char)0;

LAB77:    if (t7 == 0)
        goto LAB73;

LAB74:    xsi_set_current_line(87, ng0);

LAB86:    t2 = (t0 + 3456);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB62:    goto LAB61;

LAB64:    goto LAB62;

LAB65:    t10 = (t0 + 5817);
    xsi_report(t10, 11U, (unsigned char)2);
    goto LAB66;

LAB67:    t9 = 0;

LAB70:    if (t9 < 8U)
        goto LAB71;
    else
        goto LAB69;

LAB71:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB68;

LAB72:    t9 = (t9 + 1);
    goto LAB70;

LAB73:    t11 = (t0 + 5832);
    xsi_report(t11, 17U, (unsigned char)2);
    goto LAB74;

LAB75:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5828);
    t14 = 1;
    if (4U == 4U)
        goto LAB78;

LAB79:    t14 = 0;

LAB80:    t7 = t14;
    goto LAB77;

LAB78:    t9 = 0;

LAB81:    if (t9 < 4U)
        goto LAB82;
    else
        goto LAB80;

LAB82:    t6 = (t4 + t9);
    t10 = (t2 + t9);
    if (*((unsigned char *)t6) != *((unsigned char *)t10))
        goto LAB79;

LAB83:    t9 = (t9 + 1);
    goto LAB81;

LAB84:    t4 = (t0 + 3456);
    *((int *)t4) = 0;
    xsi_set_current_line(88, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB85:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB84;
    else
        goto LAB86;

LAB87:    goto LAB85;

LAB88:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5849);
    t7 = 1;
    if (8U == 8U)
        goto LAB94;

LAB95:    t7 = 0;

LAB96:    if (t7 == 0)
        goto LAB92;

LAB93:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)2);
    if (t13 == 1)
        goto LAB102;

LAB103:    t7 = (unsigned char)0;

LAB104:    if (t7 == 0)
        goto LAB100;

LAB101:    xsi_set_current_line(99, ng0);

LAB113:    t2 = (t0 + 3472);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB114;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    t10 = (t0 + 5857);
    xsi_report(t10, 9U, (unsigned char)2);
    goto LAB93;

LAB94:    t9 = 0;

LAB97:    if (t9 < 8U)
        goto LAB98;
    else
        goto LAB96;

LAB98:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB95;

LAB99:    t9 = (t9 + 1);
    goto LAB97;

LAB100:    t11 = (t0 + 5870);
    xsi_report(t11, 15U, (unsigned char)2);
    goto LAB101;

LAB102:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5866);
    t14 = 1;
    if (4U == 4U)
        goto LAB105;

LAB106:    t14 = 0;

LAB107:    t7 = t14;
    goto LAB104;

LAB105:    t9 = 0;

LAB108:    if (t9 < 4U)
        goto LAB109;
    else
        goto LAB107;

LAB109:    t6 = (t4 + t9);
    t10 = (t2 + t9);
    if (*((unsigned char *)t6) != *((unsigned char *)t10))
        goto LAB106;

LAB110:    t9 = (t9 + 1);
    goto LAB108;

LAB111:    t4 = (t0 + 3472);
    *((int *)t4) = 0;
    xsi_set_current_line(100, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB117:    *((char **)t1) = &&LAB118;
    goto LAB1;

LAB112:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB111;
    else
        goto LAB113;

LAB114:    goto LAB112;

LAB115:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5885);
    t7 = 1;
    if (8U == 8U)
        goto LAB121;

LAB122:    t7 = 0;

LAB123:    if (t7 == 0)
        goto LAB119;

LAB120:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)2);
    if (t13 == 1)
        goto LAB129;

LAB130:    t7 = (unsigned char)0;

LAB131:    if (t7 == 0)
        goto LAB127;

LAB128:    xsi_set_current_line(111, ng0);

LAB140:    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB141;
    goto LAB1;

LAB116:    goto LAB115;

LAB118:    goto LAB116;

LAB119:    t10 = (t0 + 5893);
    xsi_report(t10, 15U, (unsigned char)2);
    goto LAB120;

LAB121:    t9 = 0;

LAB124:    if (t9 < 8U)
        goto LAB125;
    else
        goto LAB123;

LAB125:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB122;

LAB126:    t9 = (t9 + 1);
    goto LAB124;

LAB127:    t11 = (t0 + 5912);
    xsi_report(t11, 21U, (unsigned char)2);
    goto LAB128;

LAB129:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5908);
    t14 = 1;
    if (4U == 4U)
        goto LAB132;

LAB133:    t14 = 0;

LAB134:    t7 = t14;
    goto LAB131;

LAB132:    t9 = 0;

LAB135:    if (t9 < 4U)
        goto LAB136;
    else
        goto LAB134;

LAB136:    t6 = (t4 + t9);
    t10 = (t2 + t9);
    if (*((unsigned char *)t6) != *((unsigned char *)t10))
        goto LAB133;

LAB137:    t9 = (t9 + 1);
    goto LAB135;

LAB138:    t4 = (t0 + 3488);
    *((int *)t4) = 0;
    xsi_set_current_line(112, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB144:    *((char **)t1) = &&LAB145;
    goto LAB1;

LAB139:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB138;
    else
        goto LAB140;

LAB141:    goto LAB139;

LAB142:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5933);
    t7 = 1;
    if (8U == 8U)
        goto LAB148;

LAB149:    t7 = 0;

LAB150:    if (t7 == 0)
        goto LAB146;

LAB147:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB156;

LAB157:    t7 = (unsigned char)0;

LAB158:    if (t7 == 0)
        goto LAB154;

LAB155:    xsi_set_current_line(123, ng0);

LAB167:    t2 = (t0 + 3504);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB168;
    goto LAB1;

LAB143:    goto LAB142;

LAB145:    goto LAB143;

LAB146:    t10 = (t0 + 5941);
    xsi_report(t10, 12U, (unsigned char)2);
    goto LAB147;

LAB148:    t9 = 0;

LAB151:    if (t9 < 8U)
        goto LAB152;
    else
        goto LAB150;

LAB152:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB149;

LAB153:    t9 = (t9 + 1);
    goto LAB151;

LAB154:    t11 = (t0 + 5957);
    xsi_report(t11, 18U, (unsigned char)2);
    goto LAB155;

LAB156:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5953);
    t14 = 1;
    if (4U == 4U)
        goto LAB159;

LAB160:    t14 = 0;

LAB161:    t7 = t14;
    goto LAB158;

LAB159:    t9 = 0;

LAB162:    if (t9 < 4U)
        goto LAB163;
    else
        goto LAB161;

LAB163:    t6 = (t4 + t9);
    t10 = (t2 + t9);
    if (*((unsigned char *)t6) != *((unsigned char *)t10))
        goto LAB160;

LAB164:    t9 = (t9 + 1);
    goto LAB162;

LAB165:    t4 = (t0 + 3504);
    *((int *)t4) = 0;
    xsi_set_current_line(124, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB171:    *((char **)t1) = &&LAB172;
    goto LAB1;

LAB166:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB165;
    else
        goto LAB167;

LAB168:    goto LAB166;

LAB169:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5975);
    t7 = 1;
    if (8U == 8U)
        goto LAB175;

LAB176:    t7 = 0;

LAB177:    if (t7 == 0)
        goto LAB173;

LAB174:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)2);
    if (t13 == 1)
        goto LAB183;

LAB184:    t7 = (unsigned char)0;

LAB185:    if (t7 == 0)
        goto LAB181;

LAB182:    xsi_set_current_line(135, ng0);

LAB194:    t2 = (t0 + 3520);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB195;
    goto LAB1;

LAB170:    goto LAB169;

LAB172:    goto LAB170;

LAB173:    t10 = (t0 + 5983);
    xsi_report(t10, 11U, (unsigned char)2);
    goto LAB174;

LAB175:    t9 = 0;

LAB178:    if (t9 < 8U)
        goto LAB179;
    else
        goto LAB177;

LAB179:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB176;

LAB180:    t9 = (t9 + 1);
    goto LAB178;

LAB181:    t11 = (t0 + 5998);
    xsi_report(t11, 17U, (unsigned char)2);
    goto LAB182;

LAB183:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5994);
    t14 = 1;
    if (4U == 4U)
        goto LAB186;

LAB187:    t14 = 0;

LAB188:    t7 = t14;
    goto LAB185;

LAB186:    t9 = 0;

LAB189:    if (t9 < 4U)
        goto LAB190;
    else
        goto LAB188;

LAB190:    t6 = (t4 + t9);
    t10 = (t2 + t9);
    if (*((unsigned char *)t6) != *((unsigned char *)t10))
        goto LAB187;

LAB191:    t9 = (t9 + 1);
    goto LAB189;

LAB192:    t4 = (t0 + 3520);
    *((int *)t4) = 0;
    xsi_set_current_line(136, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB198:    *((char **)t1) = &&LAB199;
    goto LAB1;

LAB193:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB192;
    else
        goto LAB194;

LAB195:    goto LAB193;

LAB196:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6015);
    t7 = 1;
    if (8U == 8U)
        goto LAB202;

LAB203:    t7 = 0;

LAB204:    if (t7 == 0)
        goto LAB200;

LAB201:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t13 = (t12 == (unsigned char)2);
    if (t13 == 1)
        goto LAB210;

LAB211:    t7 = (unsigned char)0;

LAB212:    if (t7 == 0)
        goto LAB208;

LAB209:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 6063);
    xsi_report(t2, 30U, (unsigned char)0);
    xsi_set_current_line(149, ng0);

LAB221:    *((char **)t1) = &&LAB222;
    goto LAB1;

LAB197:    goto LAB196;

LAB199:    goto LAB197;

LAB200:    t10 = (t0 + 6023);
    xsi_report(t10, 15U, (unsigned char)2);
    goto LAB201;

LAB202:    t9 = 0;

LAB205:    if (t9 < 8U)
        goto LAB206;
    else
        goto LAB204;

LAB206:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB203;

LAB207:    t9 = (t9 + 1);
    goto LAB205;

LAB208:    t11 = (t0 + 6042);
    xsi_report(t11, 21U, (unsigned char)2);
    goto LAB209;

LAB210:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 6038);
    t14 = 1;
    if (4U == 4U)
        goto LAB213;

LAB214:    t14 = 0;

LAB215:    t7 = t14;
    goto LAB212;

LAB213:    t9 = 0;

LAB216:    if (t9 < 4U)
        goto LAB217;
    else
        goto LAB215;

LAB217:    t6 = (t4 + t9);
    t10 = (t2 + t9);
    if (*((unsigned char *)t6) != *((unsigned char *)t10))
        goto LAB214;

LAB218:    t9 = (t9 + 1);
    goto LAB216;

LAB219:    goto LAB2;

LAB220:    goto LAB219;

LAB222:    goto LAB220;

}


extern void work_a_0195831693_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0195831693_3212880686_p_0,(void *)work_a_0195831693_3212880686_p_1};
	xsi_register_didat("work_a_0195831693_3212880686", "isim/cpu_8bit_tb_isim_beh.exe.sim/work/a_0195831693_3212880686.didat");
	xsi_register_executes(pe);
}
