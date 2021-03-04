/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCell3_TECSGEN_H
#define tCell3_TECSGEN_H

/*
 * celltype          :  tCell3
 * global name       :  tCell3
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
#include "sSig3_tecsgen.h"
#include "sSig4_tecsgen.h"
#include "sSigB_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCell3_INIB {
    /* call port #_TCP_# */
    ID cCall3;
    ID cCallB;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tCell3_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCell3_CB_tab           tCell3_INIB_tab
#define tCell3_SINGLE_CELL_CB   tCell3_SINGLE_CELL_INIB
#define tCell3_CB               tCell3_INIB
#define tag_tCell3_CB           tag_tCell3_INIB

extern tCell3_CB  *tCell3_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID tCell3_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig3 */
int32_t      tCell3_eEntry3_func1(tCell3_IDX idx, int_t subscript, int32_t a);
int32_t      tCell3_eEntry3_func2(tCell3_IDX idx, int_t subscript, int32_t a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCell3_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCell4_tecsgen.h"
#include "tCell2_tecsgen.h"
#ifdef  tCell3_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCell3_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCell3_ID_BASE              (5)  /* ID のベース  #_NIDB_# */
#define tCell3_N_CELL               (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCell3_VALID_IDX(IDX) (tCell3_ID_BASE <= (IDX) && (IDX) < tCell3_ID_BASE+tCell3_N_CELL)

/* 受け口配列の大きさを得るマクロ #_NEPA_# */
#define NEP_eEntry3     (2)

/* セルCBを得るマクロ #_GCB_# */
#define tCell3_GET_CELLCB(idx) (tCell3_CB_tab[(idx) - tCell3_ID_BASE])

/* 属性アクセスマクロ #_AAM_# */
#define tCell3_ATTR_a( p_that )	((p_that)->a)

#define tCell3_GET_a(p_that)	((p_that)->a)



 /* 呼び口関数マクロ #_CPM_# */
#define tCell3_cCall3_func1( p_that, a ) \
	  tCell4_eEntry4_func1( \
	   (p_that)->cCall3, (a) )
#define tCell3_cCall3_func2( p_that, a ) \
	  tCell4_eEntry4_func2( \
	   (p_that)->cCall3, (a) )
#define tCell3_cCallB_func1( p_that, a ) \
	  tCell2_eEntryB_func1( \
	   (p_that)->cCallB, (a) )
#define tCell3_cCallB_func2( p_that, a ) \
	  tCell2_eEntryB_func2( \
	   (p_that)->cCallB, (a) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eEntry3 */
int32_t        tCell3_eEntry3_func1_skel( const struct tag_sSig3_VDES *epd, int32_t a);
int32_t        tCell3_eEntry3_func2_skel( const struct tag_sSig3_VDES *epd, int32_t a);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCell3_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCell3_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCell3_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCell3_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tCell3_ATTR_a( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall3_func1( a ) \
          ((void)p_cellcb, tCell3_cCall3_func1( p_cellcb, a ))
#define cCall3_func2( a ) \
          ((void)p_cellcb, tCell3_cCall3_func2( p_cellcb, a ))
#define cCallB_func1( a ) \
          ((void)p_cellcb, tCell3_cCallB_func1( p_cellcb, a ))
#define cCallB_func2( a ) \
          ((void)p_cellcb, tCell3_cCallB_func2( p_cellcb, a ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEntry3_func1    tCell3_eEntry3_func1
#define eEntry3_func2    tCell3_eEntry3_func2

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCell3_N_CELL; (i)++ ){ \
       //(p_cb) = tCell3_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCell3_TECSGENH */
