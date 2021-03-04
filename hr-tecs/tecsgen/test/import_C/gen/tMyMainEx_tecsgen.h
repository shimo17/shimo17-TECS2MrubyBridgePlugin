/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMyMainEx_TECSGEN_H
#define tMyMainEx_TECSGEN_H

/*
 * celltype          :  tMyMainEx
 * global name       :  tMyMainEx
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
#include "sTex_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tMyMainEx_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        main_no;
}  tMyMainEx_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tMyMainEx_CB_tab           tMyMainEx_INIB_tab
#define tMyMainEx_SINGLE_CELL_CB   tMyMainEx_SINGLE_CELL_INIB
#define tMyMainEx_CB               tMyMainEx_INIB
#define tag_tMyMainEx_CB           tag_tMyMainEx_INIB

extern tMyMainEx_CB  tMyMainEx_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tMyMainEx_INIB *tMyMainEx_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sMain */
ER           tMyMainEx_eM_main(tMyMainEx_IDX idx, const void* exinf);
/* sTex */
ER           tMyMainEx_eT_tex(tMyMainEx_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tMyMainEx_ID_BASE           (1)  /* ID のベース  #_NIDB_# */
#define tMyMainEx_N_CELL            (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tMyMainEx_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tMyMainEx_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tMyMainEx_ATTR_main_no( p_that )	((p_that)->main_no)

#define tMyMainEx_GET_main_no(p_that)	((p_that)->main_no)



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
#define VALID_IDX(IDX)  tMyMainEx_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMyMainEx_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMyMainEx_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMyMainEx_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_main_no         tMyMainEx_ATTR_main_no( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eM_main          tMyMainEx_eM_main
#define eT_tex           tMyMainEx_eT_tex

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tMyMainEx_N_CELL; (i)++ ){ \
       //(p_cb) = &tMyMainEx_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMyMainEx_TECSGENH */
