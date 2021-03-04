/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCell_clnt_TECSGEN_H
#define tCell_clnt_TECSGEN_H

/*
 * celltype          :  tCell_clnt
 * global name       :  tCell_clnt
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTaskBody_tecsgen.h"
#include "sSig1_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCell_clnt_INIB {
    /* call port #_TCP_# */
    struct tag_sSig1_VDES *const*cCall;
    int_t n_cCall;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tCell_clnt_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCell_clnt_CB_tab           tCell_clnt_INIB_tab
#define tCell_clnt_SINGLE_CELL_CB   tCell_clnt_SINGLE_CELL_INIB
#define tCell_clnt_CB               tCell_clnt_INIB
#define tag_tCell_clnt_CB           tag_tCell_clnt_INIB

extern tCell_clnt_CB  tCell_clnt_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCell_clnt_INIB *tCell_clnt_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTaskBody */
void         tCell_clnt_eMain_main(tCell_clnt_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCell_clnt_ID_BASE          (1)  /* ID のベース  #_NIDB_# */
#define tCell_clnt_N_CELL           (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCell_clnt_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cCall(p_that)  ((p_that)->n_cCall)
#define NCP_cCall           (N_CP_cCall(p_cellcb))

/* セルCBを得るマクロ #_GCB_# */
#define tCell_clnt_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCell_clnt_ATTR_a( p_that )	((p_that)->a)

#define tCell_clnt_GET_a(p_that)	((p_that)->a)



 /* 呼び口関数マクロ #_CPM_# */
#define tCell_clnt_cCall_func1( p_that, subscript, a ) \
	  (p_that)->cCall[subscript]->VMT->func1__T( \
	   (p_that)->cCall[subscript], (a) )
#define tCell_clnt_cCall_func2( p_that, subscript, a ) \
	  (p_that)->cCall[subscript]->VMT->func2__T( \
	   (p_that)->cCall[subscript], (a) )

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
#define VALID_IDX(IDX)  tCell_clnt_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCell_clnt_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCell_clnt_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCell_clnt_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tCell_clnt_ATTR_a( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func1( subscript, a ) \
          tCell_clnt_cCall_func1( p_cellcb, subscript, a )
#define cCall_func2( subscript, a ) \
          tCell_clnt_cCall_func2( p_cellcb, subscript, a )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tCell_clnt_eMain_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCell_clnt_N_CELL; (i)++ ){ \
       //(p_cb) = &tCell_clnt_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCell_clnt_TECSGENH */
