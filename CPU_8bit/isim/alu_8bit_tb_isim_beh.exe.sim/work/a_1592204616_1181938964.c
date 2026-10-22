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
static const char *ng0 = "/home/ise/Linked_Folder/fulladder/alu_8bit.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);


static void work_a_1592204616_1181938964_p_0(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 3464U);
    t2 = *((char **)t1);
    t1 = (t0 + 16816);
    t4 = 1;
    if (3U == 3U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB13:    t21 = (t0 + 3304U);
    t22 = *((char **)t21);
    t21 = (t0 + 9432);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t22, 8U);
    xsi_driver_first_trans_fast(t21);

LAB2:    t27 = (t0 + 9288);
    *((int *)t27) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 3304U);
    t10 = *((char **)t9);
    t9 = (t0 + 16512U);
    t11 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t8, t10, t9);
    t12 = (t8 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (1U * t13);
    t15 = (8U != t14);
    if (t15 == 1)
        goto LAB11;

LAB12:    t16 = (t0 + 9432);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 8U);
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 3U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_size_not_matching(8U, t14, 0);
    goto LAB12;

LAB14:    goto LAB2;

}

static void work_a_1592204616_1181938964_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
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

LAB0:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 3464U);
    t2 = *((char **)t1);
    t1 = (t0 + 16819);
    t4 = 1;
    if (3U == 3U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t13 = (t0 + 9496);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 9304);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 9496);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 3U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void work_a_1592204616_1181938964_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 3464U);
    t2 = *((char **)t1);
    t1 = (t0 + 16822);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB11:    t5 = (t0 + 16825);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB12:    t8 = (t0 + 16828);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB13:    t11 = (t0 + 16831);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB14:    t14 = (t0 + 16834);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB15:    t17 = (t0 + 16837);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB16:    t20 = (t0 + 16840);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB17:
LAB10:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 3304U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t1 = (t0 + 9320);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(120, ng0);
    t23 = (t0 + 4424U);
    t24 = *((char **)t23);
    t23 = (t0 + 9560);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t24, 8U);
    xsi_driver_first_trans_fast(t23);
    goto LAB2;

LAB4:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 4584U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 4744U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 4904U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 5224U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 5224U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    t1 = (t0 + 9560);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB18:;
}

static void work_a_1592204616_1181938964_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(156, ng0);

LAB3:    t1 = (t0 + 5864U);
    t2 = *((char **)t1);
    t1 = (t0 + 9624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 9336);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1592204616_1181938964_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3464U);
    t3 = *((char **)t2);
    t2 = (t0 + 16843);
    t5 = 1;
    if (3U == 3U)
        goto LAB8;

LAB9:    t5 = 0;

LAB10:    if (t5 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 3464U);
    t10 = *((char **)t9);
    t9 = (t0 + 16846);
    t12 = 1;
    if (3U == 3U)
        goto LAB14;

LAB15:    t12 = 0;

LAB16:    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB20:    t23 = (t0 + 9688);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t23);

LAB2:    t28 = (t0 + 9352);
    *((int *)t28) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 5544U);
    t17 = *((char **)t16);
    t18 = *((unsigned char *)t17);
    t16 = (t0 + 9688);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t18;
    xsi_driver_first_trans_fast_port(t16);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t6 = 0;

LAB11:    if (t6 < 3U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB9;

LAB13:    t6 = (t6 + 1);
    goto LAB11;

LAB14:    t13 = 0;

LAB17:    if (t13 < 3U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t14 = (t10 + t13);
    t15 = (t9 + t13);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB15;

LAB19:    t13 = (t13 + 1);
    goto LAB17;

LAB21:    goto LAB2;

}


extern void work_a_1592204616_1181938964_init()
{
	static char *pe[] = {(void *)work_a_1592204616_1181938964_p_0,(void *)work_a_1592204616_1181938964_p_1,(void *)work_a_1592204616_1181938964_p_2,(void *)work_a_1592204616_1181938964_p_3,(void *)work_a_1592204616_1181938964_p_4};
	xsi_register_didat("work_a_1592204616_1181938964", "isim/alu_8bit_tb_isim_beh.exe.sim/work/a_1592204616_1181938964.didat");
	xsi_register_executes(pe);
}
