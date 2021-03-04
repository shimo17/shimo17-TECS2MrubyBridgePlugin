/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCell2_TECSGEN_H
#define tCell2_TECSGEN_H

/*
 * celltype          :  tCell2
 * global name       :  tCell2
 * idx_is_id(actual) :  yes(yes)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSig2_tecsgen.h"
#include "sSig3_tecsgen.h"
#include "sSigB_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCell2_INIB {
    /* call port #_TCP_# */
    struct tag_sSig3_VDES *const*cCall2;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tCell2_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCell2_CB_tab           tCell2_INIB_tab
#define tCell2_SINGLE_CELL_CB   tCell2_SINGLE_CELL_INIB
#define tCell2_CB               tCell2_INIB
#define tag_tCell2_CB           tag_tCell2_INIB

extern tCell2_CB  *tCell2_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tCell2_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig2 */
int32_t      tCell2_eEntry2_func1(tCell2_IDX idx, int32_t a);
int32_t      tCell2_eEntry2_func2(tCell2_IDX idx, int32_t a);
/* sSigB */
int32_t      tCell2_eEntryB_func1(tCell2_IDX idx, int32_t a);
int32_t      tCell2_eEntryB_func2(tCell2_IDX idx, int32_t a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCell2_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#ifdef  tCell2_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCell2_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCell2_ID_BASE              (3)  /* ID のベース  #_NIDB_# */
#define tCell2_N_CELL               (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCell2_VALID_IDX(IDX) (tCell2_ID_BASE <= (IDX) && (IDX) < tCell2_ID_BASE+tCell2_N_CELL)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cCall2    (2)
#define NCP_cCall2     (2)

/* セルCBを得るマクロ #_GCB_# */
#define tCell2_GET_CELLCB(idx) (tCell2_CB_tab[(idx) - tCell2_ID_BASE])

/* 属性アクセスマクロ #_AAM_# */
#define tCell2_ATTR_a( p_that )	((p_that)->a)

#define tCell2_GET_a(p_that)	((p_that)->a)



 /* 呼び口関数マクロ #_CPM_# */
#define tCell2_cCall2_func1( p_that, subscript, a ) \
	  (p_that)->cCall2[subscript]->VMT->func1__T( \
	   (p_that)->cCall2[subscript], (a) )
#define tCell2_cCall2_func2( p_that, subscript, a ) \
	  (p_that)->cCall2[subscript]->VMT->func2__T( \
	   (p_that)->cCall2[subscript], (a) )

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
#define VALID_IDX(IDX)  tCell2_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCell2_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCell2_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCell2_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tCell2_ATTR_a( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall2_func1( subscript, a ) \
          tCell2_cCall2_func1( p_cellcb, subscript, a )
#define cCall2_func2( subscript, a ) \
          tCell2_cCall2_func2( p_cellcb, subscript, a )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEntry2_func1    tCell2_eEntry2_func1
#define eEntry2_func2    tCell2_eEntry2_func2
#define eEntryB_func1    tCell2_eEntryB_func1
#define eEntryB_func2    tCell2_eEntryB_func2

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCell2_N_CELL; (i)++ ){ \
       //(p_cb) = tCell2_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCell2_TECSGENH */
