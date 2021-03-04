/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCell4_TECSGEN_H
#define tCell4_TECSGEN_H

/*
 * celltype          :  tCell4
 * global name       :  tCell4
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
#include "sSig4_tecsgen.h"
#include "sSig5_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCell4_INIB {
    /* call port #_TCP_# */
    const struct tag_tCell_serv_INIB * cCall4;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
    char*          name;
}  tCell4_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCell4_CB_tab           tCell4_INIB_tab
#define tCell4_SINGLE_CELL_CB   tCell4_SINGLE_CELL_INIB
#define tCell4_CB               tCell4_INIB
#define tag_tCell4_CB           tag_tCell4_INIB

extern tCell4_CB  tCell4_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCell4_INIB *tCell4_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig4 */
int32_t      tCell4_eEntry4_func1(tCell4_IDX idx, int32_t a);
int32_t      tCell4_eEntry4_func2(tCell4_IDX idx, int32_t a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCell4_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCell_serv_tecsgen.h"
#ifdef  tCell4_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCell4_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCell4_ID_BASE              (1)  /* ID のベース  #_NIDB_# */
#define tCell4_N_CELL               (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCell4_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCell4_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCell4_ATTR_a( p_that )	((p_that)->a)
#define tCell4_ATTR_name( p_that )	((p_that)->name)

#define tCell4_GET_a(p_that)	((p_that)->a)
#define tCell4_GET_name(p_that)	((p_that)->name)



 /* 呼び口関数マクロ #_CPM_# */
#define tCell4_cCall4_func1( p_that, a ) \
	  tCell_serv_eEntry_func1( \
	   (p_that)->cCall4, (a) )
#define tCell4_cCall4_func2( p_that, a ) \
	  tCell_serv_eEntry_func2( \
	   (p_that)->cCall4, (a) )

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
#define VALID_IDX(IDX)  tCell4_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCell4_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCell4_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCell4_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tCell4_ATTR_a( p_cellcb )
#define ATTR_name            tCell4_ATTR_name( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall4_func1( a ) \
          ((void)p_cellcb, tCell4_cCall4_func1( p_cellcb, a ))
#define cCall4_func2( a ) \
          ((void)p_cellcb, tCell4_cCall4_func2( p_cellcb, a ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEntry4_func1    tCell4_eEntry4_func1
#define eEntry4_func2    tCell4_eEntry4_func2

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCell4_N_CELL; (i)++ ){ \
       //(p_cb) = &tCell4_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCell4_TECSGENH */
