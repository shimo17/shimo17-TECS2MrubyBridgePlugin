/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCt_TECSGEN_H
#define tCt_TECSGEN_H

/*
 * celltype          :  tCt
 * global name       :  tCt
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
typedef const struct tag_tCt_INIB {
    /* attribute(RO) #_ATO_# */ 
    int32_t        id;
}  tCt_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCt_CB_tab           tCt_INIB_tab
#define tCt_SINGLE_CELL_CB   tCt_SINGLE_CELL_INIB
#define tCt_CB               tCt_INIB
#define tag_tCt_CB           tag_tCt_INIB

extern tCt_CB  tCt_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCt_INIB *tCt_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCt_ID_BASE                 (1)  /* ID のベース  #_NIDB_# */
#define tCt_N_CELL                  (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCt_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCt_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCt_ATTR_id( p_that )	((p_that)->id)

#define tCt_GET_id(p_that)  	((p_that)->id)



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
#define VALID_IDX(IDX)  tCt_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCt_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCt_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCt_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tCt_ATTR_id( p_cellcb )




/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCt_N_CELL; (i)++ ){ \
       //(p_cb) = &tCt_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCt_TECSGENH */
