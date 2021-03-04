/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCell1_TECSGEN_H
#define tCell1_TECSGEN_H

/*
 * celltype          :  tCell1
 * global name       :  tCell1
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
#include "sSig1_tecsgen.h"
#include "sSig2_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCell1_INIB {
    /* call port #_TCP_# */
    ID cCall1;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tCell1_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCell1_CB_tab           tCell1_INIB_tab
#define tCell1_SINGLE_CELL_CB   tCell1_SINGLE_CELL_INIB
#define tCell1_CB               tCell1_INIB
#define tag_tCell1_CB           tag_tCell1_INIB

extern tCell1_CB  *tCell1_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tCell1_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig1 */
int32_t      tCell1_eEntry1_func1(tCell1_IDX idx, int32_t a);
int32_t      tCell1_eEntry1_func2(tCell1_IDX idx, int32_t a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCell1_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCell2_tecsgen.h"
#ifdef  tCell1_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCell1_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCell1_ID_BASE              (1)  /* ID のベース  #_NIDB_# */
#define tCell1_N_CELL               (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCell1_VALID_IDX(IDX) (tCell1_ID_BASE <= (IDX) && (IDX) < tCell1_ID_BASE+tCell1_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define tCell1_GET_CELLCB(idx) (tCell1_CB_tab[(idx) - tCell1_ID_BASE])

/* 属性アクセスマクロ #_AAM_# */
#define tCell1_ATTR_a( p_that )	((p_that)->a)

#define tCell1_GET_a(p_that)	((p_that)->a)



 /* 呼び口関数マクロ #_CPM_# */
#define tCell1_cCall1_func1( p_that, a ) \
	  tCell2_eEntry2_func1( \
	   (p_that)->cCall1, (a) )
#define tCell1_cCall1_func2( p_that, a ) \
	  tCell2_eEntry2_func2( \
	   (p_that)->cCall1, (a) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEntry1 */
int32_t        tCell1_eEntry1_func1_skel( const struct tag_sSig1_VDES *epd, int32_t a);
int32_t        tCell1_eEntry1_func2_skel( const struct tag_sSig1_VDES *epd, int32_t a);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCell1_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCell1_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCell1_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCell1_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tCell1_ATTR_a( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall1_func1( a ) \
          ((void)p_cellcb, tCell1_cCall1_func1( p_cellcb, a ))
#define cCall1_func2( a ) \
          ((void)p_cellcb, tCell1_cCall1_func2( p_cellcb, a ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEntry1_func1    tCell1_eEntry1_func1
#define eEntry1_func2    tCell1_eEntry1_func2

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCell1_N_CELL; (i)++ ){ \
       //(p_cb) = tCell1_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCell1_TECSGENH */
