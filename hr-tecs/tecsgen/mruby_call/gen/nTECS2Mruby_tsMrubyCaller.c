/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "nTECS2Mruby_tsMrubyCaller_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eEnt
 * entry port: eEnt
 * signature:  sMrubyCaller
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEnt_func
 * name:         eEnt_func
 * global_name:  nTECS2Mruby_tsMrubyCaller_eEnt_func
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEnt_func(CELLIDX idx)
{
  tsMrubyCaller_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述*/
  }

  

京都mrb_value func_call = mrb_funcall(mrb ,mrb_top_self(mrb), "func", 0 );
}

/* #[<ENTRY_FUNC>]# eEnt_func3
 * name:         eEnt_func3
 * global_name:  nTECS2Mruby_tsMrubyCaller_eEnt_func3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int32_t
eEnt_func3(CELLIDX idx, int32_t val, int32_t val2)
{
  int32_t  retval;
  tsMrubyCaller_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述*/
  }

  

京都mrb_value func3_call = mrb_funcall(mrb ,mrb_top_self(mrb), "func3", 0  2, 2 );
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
