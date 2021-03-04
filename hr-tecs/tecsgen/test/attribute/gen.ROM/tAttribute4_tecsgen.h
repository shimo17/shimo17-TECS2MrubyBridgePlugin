/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tAttribute4_TECSGEN_H
#define tAttribute4_TECSGEN_H

/*
 * celltype          :  tAttribute4
 * global name       :  tAttribute4
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tAttribute4_INIB {
    /* attribute(RO) #_ATO_# */ 
    char*          buf0[2];
}  tAttribute4_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tAttribute4_CB_tab           tAttribute4_INIB_tab
#define tAttribute4_SINGLE_CELL_CB   tAttribute4_SINGLE_CELL_INIB
#define tAttribute4_CB               tAttribute4_INIB
#define tag_tAttribute4_CB           tag_tAttribute4_INIB

extern tAttribute4_CB  tAttribute4_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tAttribute4_INIB *tAttribute4_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tAttribute4_ID_BASE         (1)  /* ID のベース  #_NIDB_# */
#define tAttribute4_N_CELL          (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tAttribute4_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tAttribute4_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tAttribute4_ATTR_buf0( p_that )	((p_that)->buf0)

#define tAttribute4_GET_buf0(p_that)	((p_that)->buf0)



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
#define VALID_IDX(IDX)  tAttribute4_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tAttribute4_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tAttribute4_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tAttribute4_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_buf0            tAttribute4_ATTR_buf0( p_cellcb )




/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tAttribute4_N_CELL; (i)++ ){ \
       (p_cb) = &tAttribute4_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tAttribute4_TECSGENH */
