/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tAttributeSt_TECSGEN_H
#define tAttributeSt_TECSGEN_H

/*
 * celltype          :  tAttributeSt
 * global name       :  tAttributeSt
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
#include "sMain_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tAttributeSt_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        size;
    const struct tTag*   st_array;
}  tAttributeSt_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tAttributeSt_CB_tab           tAttributeSt_INIB_tab
#define tAttributeSt_SINGLE_CELL_CB   tAttributeSt_SINGLE_CELL_INIB
#define tAttributeSt_CB               tAttributeSt_INIB
#define tag_tAttributeSt_CB           tag_tAttributeSt_INIB

extern tAttributeSt_CB  tAttributeSt_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tAttributeSt_INIB *tAttributeSt_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sMain */
ER           tAttributeSt_eMain_main(tAttributeSt_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tAttributeSt_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define tAttributeSt_N_CELL         (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tAttributeSt_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tAttributeSt_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tAttributeSt_ATTR_size( p_that )	((p_that)->size)
#define tAttributeSt_ATTR_st_array( p_that )	((p_that)->st_array)

#define tAttributeSt_GET_size(p_that)	((p_that)->size)
#define tAttributeSt_GET_st_array(p_that)	((p_that)->st_array)



#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
ER             tAttributeSt_eMain_main_skel( const struct tag_sMain_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tAttributeSt_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tAttributeSt_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tAttributeSt_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tAttributeSt_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_size            tAttributeSt_ATTR_size( p_cellcb )
#define ATTR_st_array        tAttributeSt_ATTR_st_array( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tAttributeSt_eMain_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tAttributeSt_N_CELL; (i)++ ){ \
       //(p_cb) = &tAttributeSt_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tAttributeSt_TECSGENH */
