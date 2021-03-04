/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCallArray_TECSGEN_H
#define tCallArray_TECSGEN_H

/*
 * celltype          :  tCallArray
 * global name       :  tCallArray
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
#include "sArray_tecsgen.h"
#include "sArrayBack_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCallArray_INIB {
    /* call port #_TCP_# */
    struct tag_sArray_VDES *const*carray;
    struct tag_sArray_VDES *const*carray2;
    int_t n_carray2;
    /* call port #_NEP_# */ 
}  tCallArray_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCallArray_CB_tab           tCallArray_INIB_tab
#define tCallArray_SINGLE_CELL_CB   tCallArray_SINGLE_CELL_INIB
#define tCallArray_CB               tCallArray_INIB
#define tag_tCallArray_CB           tag_tCallArray_INIB

extern tCallArray_CB  tCallArray_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCallArray_INIB *tCallArray_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sArrayBack */
int32_t      tCallArray_callback_func(tCallArray_IDX idx, int_t subscript, int32_t a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCallArray_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tEntryArray_tecsgen.h"
#ifdef  tCallArray_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCallArray_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCallArray_ID_BASE          (1)  /* ID のベース  #_NIDB_# */
#define tCallArray_N_CELL           (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCallArray_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_carray    (2)
#define NCP_carray     (2)
#define N_CP_carray2(p_that)  ((p_that)->n_carray2)
#define NCP_carray2           (N_CP_carray2(p_cellcb))
/* 受け口配列の大きさを得るマクロ #_NEPA_# */
#define NEP_callback     (2)

/* セルCBを得るマクロ #_GCB_# */
#define tCallArray_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tCallArray_carray_func( p_that, subscript, a ) \
	  tEntryArray_earray_func_skel( \
	   (p_that)->carray[subscript], (a) )
#define tCallArray_carray2_func( p_that, subscript, a ) \
	  (p_that)->carray2[subscript]->VMT->func__T( \
	   (p_that)->carray2[subscript], (a) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* callback */
int32_t        tCallArray_callback_func_skel( const struct tag_sArrayBack_VDES *epd, int32_t a);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCallArray_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCallArray_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCallArray_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCallArray_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define carray_func( subscript, a ) \
          ((void)p_cellcb, tCallArray_carray_func( p_cellcb, subscript, a ))
#define carray2_func( subscript, a ) \
          tCallArray_carray2_func( p_cellcb, subscript, a )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define callback_func    tCallArray_callback_func

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCallArray_N_CELL; (i)++ ){ \
       //(p_cb) = &tCallArray_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCallArray_TECSGENH */
