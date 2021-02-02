/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tEventflag_template.c => src/tEventflag.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * id               ID               ATTR_id         
 * mutex            pthread_mutex_t  VAR_mutex       
 * cond             pthread_cond_t   VAR_cond        
 * once             pthread_once_t   VAR_once        
 * pattern          FLGPTN           VAR_pattern     
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tEventflag_tecsgen.h"
#include "mruby.h"
#include "mruby/dump.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eEventflag
 * entry port: eEventflag
 * signature:  sEventflag
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEventflag_set
 * name:         eEventflag_set
 * global_name:  tEventflag_eEventflag_set
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_set(CELLIDX idx, FLGPTN set_pattern)
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

/* #[<ENTRY_FUNC>]# eEventflag_clear
 * name:         eEventflag_clear
 * global_name:  tEventflag_eEventflag_clear
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_clear(CELLIDX idx, FLGPTN clear_pattern)
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

/* #[<ENTRY_FUNC>]# eEventflag_wait
 * name:         eEventflag_wait
 * global_name:  tEventflag_eEventflag_wait
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_wait(CELLIDX idx, FLGPTN wait_pattern, MODE wait_flag_mode, FLGPTN* p_flag_pattern)
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

/* #[<ENTRY_FUNC>]# eEventflag_waitPolling
 * name:         eEventflag_waitPolling
 * global_name:  tEventflag_eEventflag_waitPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_waitPolling(CELLIDX idx, FLGPTN wait_pattern, MODE wait_flag_mode, FLGPTN* p_flag_pattern)
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

/* #[<ENTRY_FUNC>]# eEventflag_waitTimeout
 * name:         eEventflag_waitTimeout
 * global_name:  tEventflag_eEventflag_waitTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_waitTimeout(CELLIDX idx, FLGPTN wait_pattern, MODE wait_flag_mode, FLGPTN* p_flag_pattern, TMO timeout)
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

/* #[<ENTRY_FUNC>]# eEventflag_initialize
 * name:         eEventflag_initialize
 * global_name:  tEventflag_eEventflag_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_initialize(CELLIDX idx)
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

/* #[<ENTRY_FUNC>]# eEventflag_refer
 * name:         eEventflag_refer
 * global_name:  tEventflag_eEventflag_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eEventflag_refer(CELLIDX idx, T_RFLG* pk_eventflag_status)
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

/* #[<ENTRY_PORT>]# eiEventflag
 * entry port: eiEventflag
 * signature:  siEventflag
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiEventflag_set
 * name:         eiEventflag_set
 * global_name:  tEventflag_eiEventflag_set
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiEventflag_set(CELLIDX idx, FLGPTN set_pattern)
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
