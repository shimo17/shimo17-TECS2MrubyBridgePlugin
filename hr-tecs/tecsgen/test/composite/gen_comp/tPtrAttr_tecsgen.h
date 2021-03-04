/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tPtrAttr_TECSGEN_H
#define tPtrAttr_TECSGEN_H

/*
 * celltype          :  tPtrAttr
 * global name       :  tPtrAttr
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
typedef const struct tag_tPtrAttr_INIB {
    /* attribute(RO) #_ATO_# */ 
    int8_t*        p_attr0;
    int8_t*        p_attr1;
    int8_t*        p_attr2;
    int8_t*        p_attr3;
}  tPtrAttr_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tPtrAttr_CB_tab           tPtrAttr_INIB_tab
#define tPtrAttr_SINGLE_CELL_CB   tPtrAttr_SINGLE_CELL_INIB
#define tPtrAttr_CB               tPtrAttr_INIB
#define tag_tPtrAttr_CB           tag_tPtrAttr_INIB

extern tPtrAttr_CB  tPtrAttr_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tPtrAttr_INIB *tPtrAttr_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tPtrAttr_ID_BASE            (1)  /* ID のベース  #_NIDB_# */
#define tPtrAttr_N_CELL             (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tPtrAttr_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tPtrAttr_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tPtrAttr_ATTR_p_attr0( p_that )	((p_that)->p_attr0)
#define tPtrAttr_ATTR_p_attr1( p_that )	((p_that)->p_attr1)
#define tPtrAttr_ATTR_p_attr2( p_that )	((p_that)->p_attr2)
#define tPtrAttr_ATTR_p_attr3( p_that )	((p_that)->p_attr3)

#define tPtrAttr_GET_p_attr0(p_that)	((p_that)->p_attr0)
#define tPtrAttr_GET_p_attr1(p_that)	((p_that)->p_attr1)
#define tPtrAttr_GET_p_attr2(p_that)	((p_that)->p_attr2)
#define tPtrAttr_GET_p_attr3(p_that)	((p_that)->p_attr3)



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
#define VALID_IDX(IDX)  tPtrAttr_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tPtrAttr_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tPtrAttr_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tPtrAttr_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_p_attr0         tPtrAttr_ATTR_p_attr0( p_cellcb )
#define ATTR_p_attr1         tPtrAttr_ATTR_p_attr1( p_cellcb )
#define ATTR_p_attr2         tPtrAttr_ATTR_p_attr2( p_cellcb )
#define ATTR_p_attr3         tPtrAttr_ATTR_p_attr3( p_cellcb )




/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tPtrAttr_N_CELL; (i)++ ){ \
       //(p_cb) = &tPtrAttr_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tPtrAttr_TECSGENH */
