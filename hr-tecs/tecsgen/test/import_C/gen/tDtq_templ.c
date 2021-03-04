/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tDtq_template.c => src/tDtq.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * id               ID               ATTR_id         
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tDtq_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eD
 * entry port: eD
 * signature:  sDtq
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eD_snd_dtq
 * name:         eD_snd_dtq
 * global_name:  tDtq_eD_snd_dtq
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eD_snd_dtq(CELLIDX idx, const void* data)
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

/* #[<ENTRY_FUNC>]# eD_psnd_dtq
 * name:         eD_psnd_dtq
 * global_name:  tDtq_eD_psnd_dtq
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eD_psnd_dtq(CELLIDX idx, const void* data)
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

/* #[<ENTRY_FUNC>]# eD_tsnd_dtq
 * name:         eD_tsnd_dtq
 * global_name:  tDtq_eD_tsnd_dtq
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eD_tsnd_dtq(CELLIDX idx, const void* data, TMO tmout)
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

/* #[<ENTRY_FUNC>]# eD_fsnd_dtq
 * name:         eD_fsnd_dtq
 * global_name:  tDtq_eD_fsnd_dtq
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eD_fsnd_dtq(CELLIDX idx, const void* data)
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

/* #[<ENTRY_FUNC>]# eD_rcv_dtq
 * name:         eD_rcv_dtq
 * global_name:  tDtq_eD_rcv_dtq
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eD_rcv_dtq(CELLIDX idx, VP_INT* p_data)
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

/* #[<ENTRY_FUNC>]# eD_prcv_dtq
 * name:         eD_prcv_dtq
 * global_name:  tDtq_eD_prcv_dtq
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eD_prcv_dtq(CELLIDX idx, VP_INT* p_data)
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

/* #[<ENTRY_FUNC>]# eD_trcv_dtq
 * name:         eD_trcv_dtq
 * global_name:  tDtq_eD_trcv_dtq
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eD_trcv_dtq(CELLIDX idx, VP_INT* p_data, TMO tmout)
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

/* #[<ENTRY_PORT>]# eiD
 * entry port: eiD
 * signature:  siDtq
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiD_ipsnd_dtq
 * name:         eiD_ipsnd_dtq
 * global_name:  tDtq_eiD_ipsnd_dtq
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiD_ipsnd_dtq(CELLIDX idx, const void* data)
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

/* #[<ENTRY_FUNC>]# eiD_ifsnd_dtq
 * name:         eiD_ifsnd_dtq
 * global_name:  tDtq_eiD_ifsnd_dtq
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiD_ifsnd_dtq(CELLIDX idx, const void* data)
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
