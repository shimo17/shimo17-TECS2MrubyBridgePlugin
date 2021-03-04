/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCyc_TECSGEN_H
#define tCyc_TECSGEN_H

/*
 * celltype          :  tCyc
 * global name       :  tCyc
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
#include "sCyc_tecsgen.h"
#include "sMain_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCyc_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
    VP_INT         exinf;
}  tCyc_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCyc_CB_tab           tCyc_INIB_tab
#define tCyc_SINGLE_CELL_CB   tCyc_SINGLE_CELL_INIB
#define tCyc_CB               tCyc_INIB
#define tag_tCyc_CB           tag_tCyc_INIB

extern tCyc_CB  tCyc_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCyc_INIB *tCyc_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sCyc */
ER           tCyc_eCyc_sta_cyc(tCyc_IDX idx);
ER           tCyc_eCyc_stp_cyc(tCyc_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCyc_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tMyMain_tecsgen.h"
#ifdef  tCyc_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCyc_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCyc_ID_BASE                (1)  /* ID のベース  #_NIDB_# */
#define tCyc_N_CELL                 (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCyc_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCyc_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCyc_ATTR_id( p_that )	((p_that)->id)
#define tCyc_ATTR_exinf( p_that )	((p_that)->exinf)

#define tCyc_GET_id(p_that) 	((p_that)->id)
#define tCyc_GET_exinf(p_that)	((p_that)->exinf)



 /* 呼び口関数マクロ #_CPM_# */
#define tCyc_cHdlr_main( p_that, exinf ) \
	  tMyMain_eM_main( \
	   &tMyMain_CB_tab[0], (exinf) )

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
#define VALID_IDX(IDX)  tCyc_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCyc_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCyc_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCyc_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tCyc_ATTR_id( p_cellcb )
#define ATTR_exinf           tCyc_ATTR_exinf( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cHdlr_main( exinf ) \
          ((void)p_cellcb, tCyc_cHdlr_main( p_cellcb, exinf ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eCyc_sta_cyc     tCyc_eCyc_sta_cyc
#define eCyc_stp_cyc     tCyc_eCyc_stp_cyc

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCyc_N_CELL; (i)++ ){ \
       //(p_cb) = &tCyc_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCyc_TECSGENH */
