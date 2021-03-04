/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tTaskEx_template.c => src/tTaskEx.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * id               ID               ATTR_id         
 * exinf            VP_INT           ATTR_exinf      
 *
 * 呼び口関数 #_TCPF_#
 * call port: cMain signature: sMain context:task
 *   ER             cMain_main( const void* exinf );
 * call port: cTex signature: sTex context:task
 *   ER             cTex_tex( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTaskEx_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eT
 * entry port: eT
 * signature:  sTask
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eT_act_tsk
 * name:         eT_act_tsk
 * global_name:  tTaskEx_eT_act_tsk
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eT_act_tsk(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eT_can_act
 * name:         eT_can_act
 * global_name:  tTaskEx_eT_can_act
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eT_can_act(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eT_ter_tsk
 * name:         eT_ter_tsk
 * global_name:  tTaskEx_eT_ter_tsk
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eT_ter_tsk(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eT_chg_pri
 * name:         eT_chg_pri
 * global_name:  tTaskEx_eT_chg_pri
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eT_chg_pri(CELLIDX idx, PRI tskpri)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eT_get_pri
 * name:         eT_get_pri
 * global_name:  tTaskEx_eT_get_pri
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eT_get_pri(CELLIDX idx, PRI* p_tskpri)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eT_wup_tsk
 * name:         eT_wup_tsk
 * global_name:  tTaskEx_eT_wup_tsk
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eT_wup_tsk(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eT_can_wup
 * name:         eT_can_wup
 * global_name:  tTaskEx_eT_can_wup
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER_UINT
eT_can_wup(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eT_rel_wai
 * name:         eT_rel_wai
 * global_name:  tTaskEx_eT_rel_wai
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eT_rel_wai(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eT_sus_tsk
 * name:         eT_sus_tsk
 * global_name:  tTaskEx_eT_sus_tsk
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eT_sus_tsk(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eT_rsm_tsk
 * name:         eT_rsm_tsk
 * global_name:  tTaskEx_eT_rsm_tsk
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eT_rsm_tsk(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eT_frsm_tsk
 * name:         eT_frsm_tsk
 * global_name:  tTaskEx_eT_frsm_tsk
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eT_frsm_tsk(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eT_ras_tex
 * name:         eT_ras_tex
 * global_name:  tTaskEx_eT_ras_tex
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eT_ras_tex(CELLIDX idx, TEXPTN rasptn)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eiT
 * entry port: eiT
 * signature:  siTask
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiT_iact_tsk
 * name:         eiT_iact_tsk
 * global_name:  tTaskEx_eiT_iact_tsk
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiT_iact_tsk(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiT_iwup_tsk
 * name:         eiT_iwup_tsk
 * global_name:  tTaskEx_eiT_iwup_tsk
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiT_iwup_tsk(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiT_irel_wai
 * name:         eiT_irel_wai
 * global_name:  tTaskEx_eiT_irel_wai
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiT_irel_wai(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiT_iras_tex
 * name:         eiT_iras_tex
 * global_name:  tTaskEx_eiT_iras_tex
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiT_iras_tex(CELLIDX idx, TEXPTN rasptn)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
