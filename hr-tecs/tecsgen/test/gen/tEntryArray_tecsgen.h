/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tEntryArray_TECSGEN_H
#define tEntryArray_TECSGEN_H

/*
 * celltype          :  tEntryArray
 * global name       :  tEntryArray
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
#include "sArrayBack_tecsgen.h"
#include "sArray_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tEntryArray_INIB {
    /* call port #_TCP_# */
    struct tag_sArrayBack_VDES *const*callback;
    /* call port #_NEP_# */ 
    int_t n_earray;
}  tEntryArray_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tEntryArray_CB_tab           tEntryArray_INIB_tab
#define tEntryArray_SINGLE_CELL_CB   tEntryArray_SINGLE_CELL_INIB
#define tEntryArray_CB               tEntryArray_INIB
#define tag_tEntryArray_CB           tag_tEntryArray_INIB

extern tEntryArray_CB  tEntryArray_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tEntryArray_INIB *tEntryArray_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sArray */
int32_t      tEntryArray_earray_func(tEntryArray_IDX idx, int_t subscript, int32_t a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tEntryArray_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCallArray_tecsgen.h"
#ifdef  tEntryArray_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tEntryArray_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tEntryArray_ID_BASE         (1)  /* ID のベース  #_NIDB_# */
#define tEntryArray_N_CELL          (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tEntryArray_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_callback    (2)
#define NCP_callback     (2)
/* 受け口配列の大きさを得るマクロ #_NEPA_# */
#define NEP_earray           ((p_cellcb)->n_earray)

/* セルCBを得るマクロ #_GCB_# */
#define tEntryArray_GET_CELLCB(idx) (idx)
 /* 呼び口関数マクロ #_CPM_# */
#define tEntryArray_callback_func( p_that, subscript, a ) \
	  tCallArray_callback_func_skel( \
	   (p_that)->callback[subscript], (a) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* earray */
int32_t        tEntryArray_earray_func_skel( const struct tag_sArray_VDES *epd, int32_t a);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tEntryArray_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tEntryArray_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tEntryArray_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tEntryArray_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define callback_func( subscript, a ) \
          ((void)p_cellcb, tEntryArray_callback_func( p_cellcb, subscript, a ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define earray_func      tEntryArray_earray_func

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tEntryArray_N_CELL; (i)++ ){ \
       //(p_cb) = &tEntryArray_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tEntryArray_TECSGENH */
