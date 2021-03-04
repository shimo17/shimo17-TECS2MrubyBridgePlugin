/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tCell2_template.c => src/tCell2.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * name             char*            ATTR_name       
 * a                int32_t          ATTR_a          
 *
 * 呼び口関数 #_TCPF_#
 * call port: cCall2 signature: sSig3 context:task
 *   int32_t        cCall2_func1( subscript, int32_t a );
 *   int32_t        cCall2_func2( subscript, int32_t a );
 *       subscript:  0...(NCP_cCall2-1)
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tCell2_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eEntry2
 * entry port: eEntry2
 * signature:  sSig2
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEntry2_func1
 * name:         eEntry2_func1
 * global_name:  tCell2_eEntry2_func1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int32_t
eEntry2_func1(CELLIDX idx, int32_t a)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eEntry2_func2
 * name:         eEntry2_func2
 * global_name:  tCell2_eEntry2_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int32_t
eEntry2_func2(CELLIDX idx, int32_t a)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_PORT>]# eEntryB
 * entry port: eEntryB
 * signature:  sSigB
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEntryB_func1
 * name:         eEntryB_func1
 * global_name:  tCell2_eEntryB_func1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int32_t
eEntryB_func1(CELLIDX idx, int32_t a)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<ENTRY_FUNC>]# eEntryB_func2
 * name:         eEntryB_func2
 * global_name:  tCell2_eEntryB_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int32_t
eEntryB_func2(CELLIDX idx, int32_t a)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
