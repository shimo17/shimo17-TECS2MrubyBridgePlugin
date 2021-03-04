/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCell_serv_TECSGEN_H
#define tCell_serv_TECSGEN_H

/*
 * celltype          :  tCell_serv
 * global name       :  tCell_serv
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
#include "sSig5_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCell_serv_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tCell_serv_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCell_serv_CB_tab           tCell_serv_INIB_tab
#define tCell_serv_SINGLE_CELL_CB   tCell_serv_SINGLE_CELL_INIB
#define tCell_serv_CB               tCell_serv_INIB
#define tag_tCell_serv_CB           tag_tCell_serv_INIB

extern tCell_serv_CB  *tCell_serv_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tCell_serv_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig5 */
int32_t      tCell_serv_eEntry_func1(tCell_serv_IDX idx, int32_t a);
int32_t      tCell_serv_eEntry_func2(tCell_serv_IDX idx, int32_t a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCell_serv_ID_BASE          (9)  /* ID のベース  #_NIDB_# */
#define tCell_serv_N_CELL           (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCell_serv_VALID_IDX(IDX) (tCell_serv_ID_BASE <= (IDX) && (IDX) < tCell_serv_ID_BASE+tCell_serv_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define tCell_serv_GET_CELLCB(idx) (tCell_serv_CB_tab[(idx) - tCell_serv_ID_BASE])

/* 属性アクセスマクロ #_AAM_# */
#define tCell_serv_ATTR_a( p_that )	((p_that)->a)

#define tCell_serv_GET_a(p_that)	((p_that)->a)



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
#define VALID_IDX(IDX)  tCell_serv_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCell_serv_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCell_serv_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCell_serv_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tCell_serv_ATTR_a( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEntry_func1     tCell_serv_eEntry_func1
#define eEntry_func2     tCell_serv_eEntry_func2

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCell_serv_N_CELL; (i)++ ){ \
       //(p_cb) = tCell_serv_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCell_serv_TECSGENH */
