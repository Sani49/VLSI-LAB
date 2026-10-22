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
static const char *ng0 = "/home/ise/Linked_Folder/CPU 8bit/cpu_alu_set_5.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1023172313_1181938964_p_0(char *t0)
{
    char t26[16];
    char t27[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t28;
    unsigned char t29;

LAB0:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 5576U);
    t2 = *((char **)t1);
    t1 = (t0 + 15912);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB9:    t5 = (t0 + 15915);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB10:    t8 = (t0 + 15918);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB11:    t11 = (t0 + 15921);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB12:    t14 = (t0 + 15924);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB13:
LAB8:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    t1 = (t0 + 10008);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 9928);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(80, ng0);
    t17 = (t0 + 5416U);
    t18 = *((char **)t17);
    t17 = (t0 + 10008);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t18, 8U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB2;

LAB4:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 5896U);
    t2 = *((char **)t1);
    t1 = (t0 + 10008);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 6056U);
    t2 = *((char **)t1);
    t1 = (t0 + 10008);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 6216U);
    t2 = *((char **)t1);
    t1 = (t0 + 10008);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 5256U);
    t2 = *((char **)t1);
    t23 = (7 - 7);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t1 = (t2 + t25);
    t5 = ((IEEE_P_2592010699) + 4000);
    t6 = (t27 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 7;
    t8 = (t6 + 4U);
    *((int *)t8) = 1;
    t8 = (t6 + 8U);
    *((int *)t8) = -1;
    t4 = (1 - 7);
    t28 = (t4 * -1);
    t28 = (t28 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t28;
    t3 = xsi_base_array_concat(t3, t26, t5, (char)99, (unsigned char)2, (char)97, t1, t27, (char)101);
    t28 = (1U + 7U);
    t29 = (8U != t28);
    if (t29 == 1)
        goto LAB15;

LAB16:    t8 = (t0 + 10008);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t3, 8U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB14:;
LAB15:    xsi_size_not_matching(8U, t28, 0);
    goto LAB16;

}


extern void work_a_1023172313_1181938964_init()
{
	static char *pe[] = {(void *)work_a_1023172313_1181938964_p_0};
	xsi_register_didat("work_a_1023172313_1181938964", "isim/cpu_8bit_tb_isim_beh.exe.sim/work/a_1023172313_1181938964.didat");
	xsi_register_executes(pe);
}
