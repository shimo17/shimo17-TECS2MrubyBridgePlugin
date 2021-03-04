/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tKernel_template.c => src/tKernel.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * dummy            int32_t          VAR_dummy       
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tKernel_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eTim
 * entry port: eTim
 * signature:  sTim
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eTim_set_tim
 * name:         eTim_set_tim
 * global_name:  tKernel_eTim_set_tim
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTim_set_tim(const SYSTIM* p_systim)
{
}

/* #[<ENTRY_FUNC>]# eTim_get_tim
 * name:         eTim_get_tim
 * global_name:  tKernel_eTim_get_tim
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTim_get_tim(SYSTIM* p_systim)
{
}

/* #[<ENTRY_FUNC>]# eTim_isig_tim
 * name:         eTim_isig_tim
 * global_name:  tKernel_eTim_isig_tim
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eTim_isig_tim()
{
}

/* #[<ENTRY_PORT>]# eSystem
 * entry port: eSystem
 * signature:  sSystem
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eSystem_dis_tex
 * name:         eSystem_dis_tex
 * global_name:  tKernel_eSystem_dis_tex
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSystem_dis_tex()
{
}

/* #[<ENTRY_FUNC>]# eSystem_ena_tex
 * name:         eSystem_ena_tex
 * global_name:  tKernel_eSystem_ena_tex
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSystem_ena_tex()
{
}

/* #[<ENTRY_FUNC>]# eSystem_sns_tex
 * name:         eSystem_sns_tex
 * global_name:  tKernel_eSystem_sns_tex
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
BOOL
eSystem_sns_tex()
{
}

/* #[<ENTRY_FUNC>]# eSystem_ext_tsk
 * name:         eSystem_ext_tsk
 * global_name:  tKernel_eSystem_ext_tsk
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eSystem_ext_tsk()
{
}

/* #[<ENTRY_FUNC>]# eSystem_slp_tsk
 * name:         eSystem_slp_tsk
 * global_name:  tKernel_eSystem_slp_tsk
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSystem_slp_tsk()
{
}

/* #[<ENTRY_FUNC>]# eSystem_tslp_tsk
 * name:         eSystem_tslp_tsk
 * global_name:  tKernel_eSystem_tslp_tsk
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSystem_tslp_tsk(TMO tmout)
{
}

/* #[<ENTRY_FUNC>]# eSystem_dly_tsk
 * name:         eSystem_dly_tsk
 * global_name:  tKernel_eSystem_dly_tsk
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSystem_dly_tsk(RELTIM dlytim)
{
}

/* #[<ENTRY_FUNC>]# eSystem_rot_rdq
 * name:         eSystem_rot_rdq
 * global_name:  tKernel_eSystem_rot_rdq
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSystem_rot_rdq(PRI tskpri)
{
}

/* #[<ENTRY_FUNC>]# eSystem_get_tid
 * name:         eSystem_get_tid
 * global_name:  tKernel_eSystem_get_tid
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSystem_get_tid(ID* p_tskid)
{
}

/* #[<ENTRY_FUNC>]# eSystem_loc_cpu
 * name:         eSystem_loc_cpu
 * global_name:  tKernel_eSystem_loc_cpu
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSystem_loc_cpu()
{
}

/* #[<ENTRY_FUNC>]# eSystem_unl_cpu
 * name:         eSystem_unl_cpu
 * global_name:  tKernel_eSystem_unl_cpu
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSystem_unl_cpu()
{
}

/* #[<ENTRY_FUNC>]# eSystem_dis_dsp
 * name:         eSystem_dis_dsp
 * global_name:  tKernel_eSystem_dis_dsp
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSystem_dis_dsp()
{
}

/* #[<ENTRY_FUNC>]# eSystem_ena_dsp
 * name:         eSystem_ena_dsp
 * global_name:  tKernel_eSystem_ena_dsp
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eSystem_ena_dsp()
{
}

/* #[<ENTRY_FUNC>]# eSystem_sns_ctx
 * name:         eSystem_sns_ctx
 * global_name:  tKernel_eSystem_sns_ctx
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
BOOL
eSystem_sns_ctx()
{
}

/* #[<ENTRY_FUNC>]# eSystem_sns_loc
 * name:         eSystem_sns_loc
 * global_name:  tKernel_eSystem_sns_loc
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
BOOL
eSystem_sns_loc()
{
}

/* #[<ENTRY_FUNC>]# eSystem_sns_dsp
 * name:         eSystem_sns_dsp
 * global_name:  tKernel_eSystem_sns_dsp
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
BOOL
eSystem_sns_dsp()
{
}

/* #[<ENTRY_FUNC>]# eSystem_sns_dpn
 * name:         eSystem_sns_dpn
 * global_name:  tKernel_eSystem_sns_dpn
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
BOOL
eSystem_sns_dpn()
{
}

/* #[<ENTRY_PORT>]# eiSystem
 * entry port: eiSystem
 * signature:  siSystem
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiSystem_irot_rdq
 * name:         eiSystem_irot_rdq
 * global_name:  tKernel_eiSystem_irot_rdq
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiSystem_irot_rdq(PRI tskpri)
{
}

/* #[<ENTRY_FUNC>]# eiSystem_iget_tid
 * name:         eiSystem_iget_tid
 * global_name:  tKernel_eiSystem_iget_tid
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiSystem_iget_tid(ID* p_tskid)
{
}

/* #[<ENTRY_FUNC>]# eiSystem_iloc_cpu
 * name:         eiSystem_iloc_cpu
 * global_name:  tKernel_eiSystem_iloc_cpu
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiSystem_iloc_cpu()
{
}

/* #[<ENTRY_FUNC>]# eiSystem_iunl_cpu
 * name:         eiSystem_iunl_cpu
 * global_name:  tKernel_eiSystem_iunl_cpu
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiSystem_iunl_cpu()
{
}

/* #[<ENTRY_PORT>]# eVxsns
 * entry port: eVxsns
 * signature:  sVxsns
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eVxsns_vxsns_ctx
 * name:         eVxsns_vxsns_ctx
 * global_name:  tKernel_eVxsns_vxsns_ctx
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
BOOL
eVxsns_vxsns_ctx(VP p_excinf)
{
}

/* #[<ENTRY_FUNC>]# eVxsns_vxsns_loc
 * name:         eVxsns_vxsns_loc
 * global_name:  tKernel_eVxsns_vxsns_loc
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
BOOL
eVxsns_vxsns_loc(VP p_excinf)
{
}

/* #[<ENTRY_FUNC>]# eVxsns_vxsns_dsp
 * name:         eVxsns_vxsns_dsp
 * global_name:  tKernel_eVxsns_vxsns_dsp
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
BOOL
eVxsns_vxsns_dsp(VP p_excinf)
{
}

/* #[<ENTRY_FUNC>]# eVxsns_vxsns_dpn
 * name:         eVxsns_vxsns_dpn
 * global_name:  tKernel_eVxsns_vxsns_dpn
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
BOOL
eVxsns_vxsns_dpn(VP p_excinf)
{
}

/* #[<ENTRY_FUNC>]# eVxsns_vxsns_tex
 * name:         eVxsns_vxsns_tex
 * global_name:  tKernel_eVxsns_vxsns_tex
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
BOOL
eVxsns_vxsns_tex(VP p_excinf)
{
}

/* #[<ENTRY_PORT>]# eVsns
 * entry port: eVsns
 * signature:  sVsns
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eVsns_vsns_ini
 * name:         eVsns_vsns_ini
 * global_name:  tKernel_eVsns_vsns_ini
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
BOOL
eVsns_vsns_ini()
{
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
