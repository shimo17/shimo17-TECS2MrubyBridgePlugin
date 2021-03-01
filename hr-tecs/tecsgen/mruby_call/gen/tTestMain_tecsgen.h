/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTestMain_TECSGEN_H
#define tTestMain_TECSGEN_H

/*
 * celltype          :  tTestMain
 * global name       :  tTestMain
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTECS2MrubyVM_tecsgen.h"
#include "sMcall_tecsgen.h"
#include "sTaskBody_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_tTestMain_CB {
    int  dummy;
} tTestMain_CB;
extern tTestMain_CB  tTestMain_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   tTestMain_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tTestMain_eBody_main(tTestMain_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTestMain_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTECS2MrubyVM_tecsgen.h"
#include "nTECS2Mruby_tsMcall_tecsgen.h"
#ifdef  tTestMain_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTestMain_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTestMain_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tTestMain_N_CELL            (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTestMain_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTestMain_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tTestMain_cTECS2MrubyVM_init( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_init( \
	   &tTECS2MrubyVM_CB_tab[0] )
#define tTestMain_cTECS2MrubyVM_get_mrb( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_get_mrb( \
	   &tTECS2MrubyVM_CB_tab[0] )
#define tTestMain_cTECS2MrubyVM_fin( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_fin( \
	   &tTECS2MrubyVM_CB_tab[0] )
#define tTestMain_cBody2_func( p_that ) \
	  nTECS2Mruby_tsMcall_eEnt_func( \
	   (nTECS2Mruby_tsMcall_IDX)0 )
#define tTestMain_cBody2_func2( p_that, val, val6 ) \
	  nTECS2Mruby_tsMcall_eEnt_func2( \
	   (nTECS2Mruby_tsMcall_IDX)0, (val), (val6) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tTestMain_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTestMain_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTestMain_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTestMain_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTECS2MrubyVM_init( ) \
          ((void)p_cellcb, tTestMain_cTECS2MrubyVM_init( p_cellcb ))
#define cTECS2MrubyVM_get_mrb( ) \
          ((void)p_cellcb, tTestMain_cTECS2MrubyVM_get_mrb( p_cellcb ))
#define cTECS2MrubyVM_fin( ) \
          ((void)p_cellcb, tTestMain_cTECS2MrubyVM_fin( p_cellcb ))
#define cBody2_func( ) \
          ((void)p_cellcb, tTestMain_cBody2_func( p_cellcb ))
#define cBody2_func2( val, val6 ) \
          ((void)p_cellcb, tTestMain_cBody2_func2( p_cellcb, val, val6 ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBody_main       tTestMain_eBody_main

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTestMain_TECSGENH */
