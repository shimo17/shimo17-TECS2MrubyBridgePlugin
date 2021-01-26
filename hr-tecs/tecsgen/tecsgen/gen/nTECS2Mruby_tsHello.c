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
#include "nTECS2Mruby_tsHello_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eEnt
 * entry port: eEnt
 * signature:  sHello
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eEnt_func
 * name:         eEnt_func
 * global_name:  nTECS2Mruby_tsHello_eEnt_func
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eEnt_func(CELLIDX idx)
{
  tsHello_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述*/
  }

  

  mrb_class_obj_get( st, "gy" );
  mrb_funcall( st, "func_inst" );
}

/* #[<ENTRY_FUNC>]# eEnt_func1
 * name:         eEnt_func1
 * global_name:  nTECS2Mruby_tsHello_eEnt_func1
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int16_t
eEnt_func1(CELLIDX idx)
{
  int16_t  retval;
  tsHello_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述*/
  }

  

  struct RClass *func1_inst = mrb_class_obj_get( st, "gy" );
  mrb_value func1_call = mrb_funcall( st, "func1_inst" );
}

/* #[<ENTRY_FUNC>]# eEnt_func2
 * name:         eEnt_func2
 * global_name:  nTECS2Mruby_tsHello_eEnt_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int32_t
eEnt_func2(CELLIDX idx, const char* str)
{
  int32_t  retval;
  tsHello_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述*/
  }

  

  struct RClass *func2_inst = mrb_class_obj_get( st, "gy" );
  mrb_value func2_call = mrb_funcall( st, "func2_inst" );
}

/* #[<ENTRY_FUNC>]# eEnt_func3
 * name:         eEnt_func3
 * global_name:  nTECS2Mruby_tsHello_eEnt_func3
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
int32_t
eEnt_func3(CELLIDX idx, int32_t val, int32_t val2)
{
  int32_t  retval;
  tsHello_CB    *p_cellcb;
  if( VALID_IDX( idx ) ){
    p_cellcb = GET_CELLCB(idx);
  }else{
     /* エラー処理コードをここに記述*/
  }

  

  struct RClass *func3_inst = mrb_class_obj_get( st, "gy" );
  mrb_value func3_call = mrb_funcall( st, "func3_inst" );
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
