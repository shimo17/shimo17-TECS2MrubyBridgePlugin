/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSizeArray_TECSGEN_H
#define tSizeArray_TECSGEN_H

/*
 * celltype          :  tSizeArray
 * global name       :  tSizeArray
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

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSizeArray_INIB {
    /* attribute(RO) #_ATO_# */ 
    int32_t        size;
    const int8_t*        array;
}  tSizeArray_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSizeArray_CB_tab           tSizeArray_INIB_tab
#define tSizeArray_SINGLE_CELL_CB   tSizeArray_SINGLE_CELL_INIB
#define tSizeArray_CB               tSizeArray_INIB
#define tag_tSizeArray_CB           tag_tSizeArray_INIB

extern tSizeArray_CB  tSizeArray_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSizeArray_INIB *tSizeArray_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tSizeArray_ID_BASE          (1)  /* ID のベース  #_NIDB_# */
#define tSizeArray_N_CELL           (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSizeArray_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSizeArray_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tSizeArray_ATTR_size( p_that )	((p_that)->size)
#define tSizeArray_ATTR_array( p_that )	((p_that)->array)

#define tSizeArray_GET_size(p_that)	((p_that)->size)
#define tSizeArray_GET_array(p_that)	((p_that)->array)



#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tSizeArray_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSizeArray_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSizeArray_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSizeArray_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_size            tSizeArray_ATTR_size( p_cellcb )
#define ATTR_array           tSizeArray_ATTR_array( p_cellcb )




/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSizeArray_N_CELL; (i)++ ){ \
       //(p_cb) = &tSizeArray_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSizeArray_TECSGENH */
