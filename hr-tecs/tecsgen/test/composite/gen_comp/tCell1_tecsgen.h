/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCell1_TECSGEN_H
#define tCell1_TECSGEN_H

/*
 * celltype          :  tCell1
 * global name       :  tCell1
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
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
    const struct tag_tCell_serv_INIB * cCall;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tCell1_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tCell1_CB {
    tCell1_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int32_t        b;
}  tCell1_CB;
extern tCell1_CB  tCell1_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tCell1_CB *tCell1_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig2 */
ER           tCell1_eEntry_func1(tCell1_IDX idx, int32_t a);
int32_t      tCell1_eEntry_func2(tCell1_IDX idx, int32_t a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCell1_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCell_serv_tecsgen.h"
#ifdef  tCell1_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCell1_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tCell1_ID_BASE              (1)  /* ID のベース  #_NIDB_# */
#define tCell1_N_CELL               (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCell1_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCell1_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCell1_ATTR_a( p_that )	((p_that)->_inib->a)

#define tCell1_GET_a(p_that)	((p_that)->_inib->a)


/* var アクセスマクロ #_VAM_# */
#define tCell1_VAR_b(p_that)	((p_that)->b)

#define tCell1_GET_b(p_that)	((p_that)->b)
#define tCell1_SET_b(p_that,val)	((p_that)->b=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tCell1_cCall_func1( p_that, a ) \
	  tCell_serv_eEntry_func1( \
	   (p_that)->_inib->cCall, (a) )
#define tCell1_cCall_func2( p_that, a ) \
	  tCell_serv_eEntry_func2( \
	   (p_that)->_inib->cCall, (a) )

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
#define VALID_IDX(IDX)  tCell1_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCell1_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCell1_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCell1_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tCell1_ATTR_a( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_b                tCell1_VAR_b( p_cellcb )

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func1( a ) \
          ((void)p_cellcb, tCell1_cCall_func1( p_cellcb, a ))
#define cCall_func2( a ) \
          ((void)p_cellcb, tCell1_cCall_func2( p_cellcb, a ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEntry_func1     tCell1_eEntry_func1
#define eEntry_func2     tCell1_eEntry_func2

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCell1_N_CELL; (i)++ ){ \
       (p_cb) = &tCell1_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->b = tCell1_ATTR_a(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tCell1_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCell1_TECSGENH */
