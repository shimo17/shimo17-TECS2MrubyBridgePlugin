/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tMbx_template.c => src/tMbx.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * id               ID               ATTR_id         
 * dtqcnt           INT              ATTR_dtqcnt     
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tMbx_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eM
 * entry port: eM
 * signature:  sMbx
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eM_snd_mbx
 * name:         eM_snd_mbx
 * global_name:  tMbx_eM_snd_mbx
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eM_snd_mbx(CELLIDX idx, const T_MSG* pk_msg)
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

/* #[<ENTRY_FUNC>]# eM_rcv_mbx
 * name:         eM_rcv_mbx
 * global_name:  tMbx_eM_rcv_mbx
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eM_rcv_mbx(CELLIDX idx, T_MSG** ppk_msg)
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

/* #[<ENTRY_FUNC>]# eM_prcv_mbx
 * name:         eM_prcv_mbx
 * global_name:  tMbx_eM_prcv_mbx
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eM_prcv_mbx(CELLIDX idx, T_MSG** ppk_msg)
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

/* #[<ENTRY_FUNC>]# eM_trcv_mbx
 * name:         eM_trcv_mbx
 * global_name:  tMbx_eM_trcv_mbx
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eM_trcv_mbx(CELLIDX idx, T_MSG** ppk_msg, TMO tmout)
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
