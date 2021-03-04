/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tFlg_template.c => src/tFlg.c
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
#include "tFlg_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eF
 * entry port: eF
 * signature:  sFlg
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eF_set_flg
 * name:         eF_set_flg
 * global_name:  tFlg_eF_set_flg
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eF_set_flg(CELLIDX idx, FLGPTN setptn)
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

/* #[<ENTRY_FUNC>]# eF_clr_flg
 * name:         eF_clr_flg
 * global_name:  tFlg_eF_clr_flg
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eF_clr_flg(CELLIDX idx, FLGPTN clrptn)
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

/* #[<ENTRY_FUNC>]# eF_wai_flg
 * name:         eF_wai_flg
 * global_name:  tFlg_eF_wai_flg
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eF_wai_flg(CELLIDX idx, FLGPTN waiptn, MODE wfmode, FLGPTN* p_flgptn)
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

/* #[<ENTRY_FUNC>]# eF_pol_flg
 * name:         eF_pol_flg
 * global_name:  tFlg_eF_pol_flg
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eF_pol_flg(CELLIDX idx, FLGPTN waiptn, MODE wfmode, FLGPTN* p_flgptn)
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

/* #[<ENTRY_FUNC>]# eF_twai_flg
 * name:         eF_twai_flg
 * global_name:  tFlg_eF_twai_flg
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eF_twai_flg(CELLIDX idx, FLGPTN waiptn, MODE wfmode, FLGPTN* p_flgptn, TMO tmout)
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

/* #[<ENTRY_PORT>]# eiF
 * entry port: eiF
 * signature:  siFlg
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiF_iset_flg
 * name:         eiF_iset_flg
 * global_name:  tFlg_eiF_iset_flg
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
ER
eiF_iset_flg(CELLIDX idx, FLGPTN setptn)
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
