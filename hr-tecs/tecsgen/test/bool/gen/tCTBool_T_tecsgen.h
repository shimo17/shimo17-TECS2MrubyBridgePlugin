/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCTBool_T_TECSGEN_H
#define tCTBool_T_TECSGEN_H

/*
 * celltype          :  tCTBool_T
 * global name       :  tCTBool_T
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
#include "sSigBool_T_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCTBool_T_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    bool_t         boo;
    bool_t         boo2;
    bool_t         boo3;
}  tCTBool_T_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCTBool_T_CB_tab           tCTBool_T_INIB_tab
#define tCTBool_T_SINGLE_CELL_CB   tCTBool_T_SINGLE_CELL_INIB
#define tCTBool_T_CB               tCTBool_T_INIB
#define tag_tCTBool_T_CB           tag_tCTBool_T_INIB

extern tCTBool_T_CB  tCTBool_T_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCTBool_T_INIB *tCTBool_T_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSigBool_T */
bool_t       tCTBool_T_eBooo_func(tCTBool_T_IDX idx, bool_t boo, bool_t* boo2);
bool_t*      tCTBool_T_eBooo_func2(tCTBool_T_IDX idx, const bool_t* boo, int sz);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCTBool_T_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tCTBool_T_N_CELL            (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCTBool_T_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCTBool_T_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCTBool_T_ATTR_boo( p_that )	((p_that)->boo)
#define tCTBool_T_ATTR_boo2( p_that )	((p_that)->boo2)
#define tCTBool_T_ATTR_boo3( p_that )	((p_that)->boo3)

#define tCTBool_T_GET_boo(p_that)	((p_that)->boo)
#define tCTBool_T_GET_boo2(p_that)	((p_that)->boo2)
#define tCTBool_T_GET_boo3(p_that)	((p_that)->boo3)



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
#define VALID_IDX(IDX)  tCTBool_T_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCTBool_T_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCTBool_T_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCTBool_T_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_boo             tCTBool_T_ATTR_boo( p_cellcb )
#define ATTR_boo2            tCTBool_T_ATTR_boo2( p_cellcb )
#define ATTR_boo3            tCTBool_T_ATTR_boo3( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBooo_func       tCTBool_T_eBooo_func
#define eBooo_func2      tCTBool_T_eBooo_func2

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCTBool_T_N_CELL; (i)++ ){ \
       //(p_cb) = &tCTBool_T_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCTBool_T_TECSGENH */
