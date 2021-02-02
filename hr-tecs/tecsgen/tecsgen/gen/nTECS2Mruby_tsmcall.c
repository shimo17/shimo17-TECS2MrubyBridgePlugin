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
#include "nTECS2Mruby_tsmcall_tecsgen.h"
#include "mruby.h"
#include "mruby/dump.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eEnt
 * entry port: eEnt
 * signature:  smcall
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEnt_func
 * name:         eEnt_func
 * global_name:  nTECS2Mruby_tsmcall_eEnt_func
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEnt_func(CELLIDX idx)
{
  tsmcall_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述*/
  }

  

  mrb_class_obj_get( st, "gy" );
  mrb_funcall( st, "func_inst" );
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
