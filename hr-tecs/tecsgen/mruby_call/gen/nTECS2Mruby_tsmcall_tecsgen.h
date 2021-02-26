/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECS2Mruby_tsmcall_TECSGEN_H
#define nTECS2Mruby_tsmcall_TECSGEN_H

/*
 * celltype          :  tsmcall
 * global name       :  nTECS2Mruby_tsmcall
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
#include "smcall_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_nTECS2Mruby_tsmcall_CB {
    int  dummy;
} nTECS2Mruby_tsmcall_CB;
extern nTECS2Mruby_tsmcall_CB  nTECS2Mruby_tsmcall_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   nTECS2Mruby_tsmcall_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* smcall */
void         nTECS2Mruby_tsmcall_eEnt_func(nTECS2Mruby_tsmcall_IDX idx);
int32_t      nTECS2Mruby_tsmcall_eEnt_func2(nTECS2Mruby_tsmcall_IDX idx, int32_t val, int32_t val6);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nTECS2Mruby_tsmcall_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tTECS2MrubyVM_tecsgen.h"
#ifdef  nTECS2Mruby_tsmcall_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nTECS2Mruby_tsmcall_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECS2Mruby_tsmcall_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECS2Mruby_tsmcall_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECS2Mruby_tsmcall_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nTECS2Mruby_tsmcall_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define nTECS2Mruby_tsmcall_cCal_init( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_init( \
	   &tTECS2MrubyVM_CB_tab[0] )
#define nTECS2Mruby_tsmcall_cCal_get_mrb( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_get_mrb( \
	   &tTECS2MrubyVM_CB_tab[0] )
#define nTECS2Mruby_tsmcall_cCal_fin( p_that ) \
	  tTECS2MrubyVM_eTECS2MrubyVM_fin( \
	   &tTECS2MrubyVM_CB_tab[0] )

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
#define VALID_IDX(IDX)  nTECS2Mruby_tsmcall_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECS2Mruby_tsmcall_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECS2Mruby_tsmcall_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECS2Mruby_tsmcall_IDX

#define tsmcall_IDX  nTECS2Mruby_tsmcall_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCal_init( ) \
          ((void)p_cellcb, nTECS2Mruby_tsmcall_cCal_init( p_cellcb ))
#define cCal_get_mrb( ) \
          ((void)p_cellcb, nTECS2Mruby_tsmcall_cCal_get_mrb( p_cellcb ))
#define cCal_fin( ) \
          ((void)p_cellcb, nTECS2Mruby_tsmcall_cCal_fin( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        nTECS2Mruby_tsmcall_eEnt_func
#define eEnt_func2       nTECS2Mruby_tsmcall_eEnt_func2

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECS2Mruby_tsmcall_TECSGENH */
