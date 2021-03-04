/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tCell4_template.c => src/tCell4.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * a                int32_t          ATTR_a          
 * name             char*            ATTR_name       
 *
 * 呼び口関数 #_TCPF_#
 * call port: cCall4 signature: sSig5 context:task
 *   int32_t        cCall4_func1( int32_t a );
 *   int32_t        cCall4_func2( int32_t a );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tCell4_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eEntry4
 * entry port: eEntry4
 * signature:  sSig4
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEntry4_func1
 * name:         eEntry4_func1
 * global_name:  tCell4_eEntry4_func1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int32_t
eEntry4_func1(CELLIDX idx, int32_t a)
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

/* #[<ENTRY_FUNC>]# eEntry4_func2
 * name:         eEntry4_func2
 * global_name:  tCell4_eEntry4_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int32_t
eEntry4_func2(CELLIDX idx, int32_t a)
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
