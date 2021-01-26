/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tMotor_template.c => src/tMotor.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * port             int32_t          ATTR_port       
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tMotor_tecsgen.h"
#include <stdio.h>
#include "mruby.h"
#include <mruby/string.h>
#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eMotor
 * entry port: eMotor
 * signature:  sMotor
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eMotor_getType
 * name:         eMotor_getType
 * global_name:  tMotor_eMotor_getType
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eMotor_getType(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	return ev3_motor_get_type(ATTR_port);
}

/* #[<ENTRY_FUNC>]# eMotor_getCounts
 * name:         eMotor_getCounts
 * global_name:  tMotor_eMotor_getCounts
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int32_t
eMotor_getCounts(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	return ev3_motor_get_counts(ATTR_port);
}

/* #[<ENTRY_FUNC>]# eMotor_getPower
 * name:         eMotor_getPower
 * global_name:  tMotor_eMotor_getPower
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int
eMotor_getPower(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	return ev3_motor_get_power(ATTR_port);
}

/* #[<ENTRY_FUNC>]# eMotor_resetCounts
 * name:         eMotor_resetCounts
 * global_name:  tMotor_eMotor_resetCounts
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eMotor_resetCounts(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	return ev3_motor_reset_counts(ATTR_port);
}

/* #[<ENTRY_FUNC>]# eMotor_setPower
 * name:         eMotor_setPower
 * global_name:  tMotor_eMotor_setPower
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eMotor_setPower(CELLIDX idx, int power)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	int main(void)
	{
		mrb_state *mrb = mrb_open();
		FILE *fd = fopen("power_up.rb","r");
		mrb_load_irep_file(mrb, fd);
		struct RClass *M_power = mrb_class_obj_get(mrb,"m_power");
		mrb_value M_power_value = mrb_obj_value(m_power);
		mrb_value power_value = mrb_fixnum_value(power);
		mrb_value mruby_power = mrb_funcall(mrb,M_power_value,"new",1,power_value)
		mrb_value power_up_value = mrb_funcall(mrb,mruby_power,"power_up",0);
		mrb_int c_power_up_value = mrb_fixnum(power_up_value);
		return c_power_value;
	}
}

/* #[<ENTRY_FUNC>]# eMotor_stop
 * name:         eMotor_stop
 * global_name:  tMotor_eMotor_stop
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eMotor_stop(CELLIDX idx, bool_t brake)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	return ev3_motor_stop(ATTR_port, brake);
}

/* #[<ENTRY_FUNC>]# eMotor_rotate
 * name:         eMotor_rotate
 * global_name:  tMotor_eMotor_rotate
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eMotor_rotate(CELLIDX idx, int degrees, uint32_t speed_abs, bool_t blocking)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	return ev3_motor_rotate(ATTR_port, degrees, speed_abs, blocking);
}

/* #[<ENTRY_FUNC>]# eMotor_initializePort
 * name:         eMotor_initializePort
 * global_name:  tMotor_eMotor_initializePort
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eMotor_initializePort(CELLIDX idx, int32_t type)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	ev3_motor_config(ATTR_port, type);
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
