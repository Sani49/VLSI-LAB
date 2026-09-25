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
static const char *ng0 = "/home/ise/Linked_Folder/fulladder/adder_4bit_tb.vhd";



static void work_a_3706571913_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    unsigned char t10;
    unsigned char t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;

LAB0:    t1 = (t0 + 2824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5318);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 5322);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(36, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5326);
    t11 = 1;
    if (4U == 4U)
        goto LAB13;

LAB14:    t11 = 0;

LAB15:    if (t11 == 1)
        goto LAB10;

LAB11:    t10 = (unsigned char)0;

LAB12:    if (t10 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5351);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5355);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(43, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t7 = (t0 + 5330);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB9;

LAB10:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB12;

LAB13:    t12 = 0;

LAB16:    if (t12 < 4U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB14;

LAB18:    t12 = (t12 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5359);
    t11 = 1;
    if (4U == 4U)
        goto LAB28;

LAB29:    t11 = 0;

LAB30:    if (t11 == 1)
        goto LAB25;

LAB26:    t10 = (unsigned char)0;

LAB27:    if (t10 == 0)
        goto LAB23;

LAB24:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5384);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5388);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(50, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

LAB23:    t7 = (t0 + 5363);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB24;

LAB25:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB27;

LAB28:    t12 = 0;

LAB31:    if (t12 < 4U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB29;

LAB33:    t12 = (t12 + 1);
    goto LAB31;

LAB34:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5392);
    t11 = 1;
    if (4U == 4U)
        goto LAB43;

LAB44:    t11 = 0;

LAB45:    if (t11 == 1)
        goto LAB40;

LAB41:    t10 = (unsigned char)0;

LAB42:    if (t10 == 0)
        goto LAB38;

LAB39:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5417);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5421);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(57, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB51:    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    t7 = (t0 + 5396);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB39;

LAB40:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB42;

LAB43:    t12 = 0;

LAB46:    if (t12 < 4U)
        goto LAB47;
    else
        goto LAB45;

LAB47:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB44;

LAB48:    t12 = (t12 + 1);
    goto LAB46;

LAB49:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5425);
    t11 = 1;
    if (4U == 4U)
        goto LAB58;

LAB59:    t11 = 0;

LAB60:    if (t11 == 1)
        goto LAB55;

LAB56:    t10 = (unsigned char)0;

LAB57:    if (t10 == 0)
        goto LAB53;

LAB54:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5450);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5454);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(64, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB50:    goto LAB49;

LAB52:    goto LAB50;

LAB53:    t7 = (t0 + 5429);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB54;

LAB55:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB57;

LAB58:    t12 = 0;

LAB61:    if (t12 < 4U)
        goto LAB62;
    else
        goto LAB60;

LAB62:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB59;

LAB63:    t12 = (t12 + 1);
    goto LAB61;

LAB64:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5458);
    t11 = 1;
    if (4U == 4U)
        goto LAB73;

LAB74:    t11 = 0;

LAB75:    if (t11 == 1)
        goto LAB70;

LAB71:    t10 = (unsigned char)0;

LAB72:    if (t10 == 0)
        goto LAB68;

LAB69:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5483);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5487);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(71, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB81:    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

LAB68:    t7 = (t0 + 5462);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB69;

LAB70:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB72;

LAB73:    t12 = 0;

LAB76:    if (t12 < 4U)
        goto LAB77;
    else
        goto LAB75;

LAB77:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB74;

LAB78:    t12 = (t12 + 1);
    goto LAB76;

LAB79:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5491);
    t11 = 1;
    if (4U == 4U)
        goto LAB88;

LAB89:    t11 = 0;

LAB90:    if (t11 == 1)
        goto LAB85;

LAB86:    t10 = (unsigned char)0;

LAB87:    if (t10 == 0)
        goto LAB83;

LAB84:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5516);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5520);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(78, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB96:    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB80:    goto LAB79;

LAB82:    goto LAB80;

LAB83:    t7 = (t0 + 5495);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB84;

LAB85:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB87;

LAB88:    t12 = 0;

LAB91:    if (t12 < 4U)
        goto LAB92;
    else
        goto LAB90;

LAB92:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB89;

LAB93:    t12 = (t12 + 1);
    goto LAB91;

LAB94:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5524);
    t11 = 1;
    if (4U == 4U)
        goto LAB103;

LAB104:    t11 = 0;

LAB105:    if (t11 == 1)
        goto LAB100;

LAB101:    t10 = (unsigned char)0;

LAB102:    if (t10 == 0)
        goto LAB98;

LAB99:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5549);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5553);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(85, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB111:    *((char **)t1) = &&LAB112;
    goto LAB1;

LAB95:    goto LAB94;

LAB97:    goto LAB95;

LAB98:    t7 = (t0 + 5528);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB99;

LAB100:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB102;

LAB103:    t12 = 0;

LAB106:    if (t12 < 4U)
        goto LAB107;
    else
        goto LAB105;

LAB107:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB104;

LAB108:    t12 = (t12 + 1);
    goto LAB106;

LAB109:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5557);
    t11 = 1;
    if (4U == 4U)
        goto LAB118;

LAB119:    t11 = 0;

LAB120:    if (t11 == 1)
        goto LAB115;

LAB116:    t10 = (unsigned char)0;

LAB117:    if (t10 == 0)
        goto LAB113;

LAB114:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5582);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5586);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB126:    *((char **)t1) = &&LAB127;
    goto LAB1;

LAB110:    goto LAB109;

LAB112:    goto LAB110;

LAB113:    t7 = (t0 + 5561);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB114;

LAB115:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB117;

LAB118:    t12 = 0;

LAB121:    if (t12 < 4U)
        goto LAB122;
    else
        goto LAB120;

LAB122:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB119;

LAB123:    t12 = (t12 + 1);
    goto LAB121;

LAB124:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5590);
    t11 = 1;
    if (4U == 4U)
        goto LAB133;

LAB134:    t11 = 0;

LAB135:    if (t11 == 1)
        goto LAB130;

LAB131:    t10 = (unsigned char)0;

LAB132:    if (t10 == 0)
        goto LAB128;

LAB129:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5615);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5619);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(99, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB141:    *((char **)t1) = &&LAB142;
    goto LAB1;

LAB125:    goto LAB124;

LAB127:    goto LAB125;

LAB128:    t7 = (t0 + 5594);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB129;

LAB130:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB132;

LAB133:    t12 = 0;

LAB136:    if (t12 < 4U)
        goto LAB137;
    else
        goto LAB135;

LAB137:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB134;

LAB138:    t12 = (t12 + 1);
    goto LAB136;

LAB139:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5623);
    t11 = 1;
    if (4U == 4U)
        goto LAB148;

LAB149:    t11 = 0;

LAB150:    if (t11 == 1)
        goto LAB145;

LAB146:    t10 = (unsigned char)0;

LAB147:    if (t10 == 0)
        goto LAB143;

LAB144:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5648);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5652);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(106, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB156:    *((char **)t1) = &&LAB157;
    goto LAB1;

LAB140:    goto LAB139;

LAB142:    goto LAB140;

LAB143:    t7 = (t0 + 5627);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB144;

LAB145:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB147;

LAB148:    t12 = 0;

LAB151:    if (t12 < 4U)
        goto LAB152;
    else
        goto LAB150;

LAB152:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB149;

LAB153:    t12 = (t12 + 1);
    goto LAB151;

LAB154:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5656);
    t11 = 1;
    if (4U == 4U)
        goto LAB163;

LAB164:    t11 = 0;

LAB165:    if (t11 == 1)
        goto LAB160;

LAB161:    t10 = (unsigned char)0;

LAB162:    if (t10 == 0)
        goto LAB158;

LAB159:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5681);
    t4 = (t0 + 3208);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5685);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(113, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, t9);

LAB171:    *((char **)t1) = &&LAB172;
    goto LAB1;

LAB155:    goto LAB154;

LAB157:    goto LAB155;

LAB158:    t7 = (t0 + 5660);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB159;

LAB160:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB162;

LAB163:    t12 = 0;

LAB166:    if (t12 < 4U)
        goto LAB167;
    else
        goto LAB165;

LAB167:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB164;

LAB168:    t12 = (t12 + 1);
    goto LAB166;

LAB169:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5689);
    t11 = 1;
    if (4U == 4U)
        goto LAB178;

LAB179:    t11 = 0;

LAB180:    if (t11 == 1)
        goto LAB175;

LAB176:    t10 = (unsigned char)0;

LAB177:    if (t10 == 0)
        goto LAB173;

LAB174:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 5714);
    xsi_report(t2, 36U, (unsigned char)0);
    xsi_set_current_line(121, ng0);

LAB186:    *((char **)t1) = &&LAB187;
    goto LAB1;

LAB170:    goto LAB169;

LAB172:    goto LAB170;

LAB173:    t7 = (t0 + 5693);
    xsi_report(t7, 21U, (unsigned char)2);
    goto LAB174;

LAB175:    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB177;

LAB178:    t12 = 0;

LAB181:    if (t12 < 4U)
        goto LAB182;
    else
        goto LAB180;

LAB182:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB179;

LAB183:    t12 = (t12 + 1);
    goto LAB181;

LAB184:    goto LAB2;

LAB185:    goto LAB184;

LAB187:    goto LAB185;

}


extern void work_a_3706571913_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3706571913_3212880686_p_0};
	xsi_register_didat("work_a_3706571913_3212880686", "isim/adder_4bit_tb_isim_beh.exe.sim/work/a_3706571913_3212880686.didat");
	xsi_register_executes(pe);
}
