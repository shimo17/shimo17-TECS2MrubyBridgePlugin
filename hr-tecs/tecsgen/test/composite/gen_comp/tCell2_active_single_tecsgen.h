/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCell2_active_single_TECSGEN_H
#define tCell2_active_single_TECSGEN_H

/*
 * celltype          :  tCell2_active_single
 * global name       :  tCell2_active_single
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  true
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSig2_tecsgen.h"
#include "sSig3_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCell2_active_single_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tCell2_active_single_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tCell2_active_single_CB {
    tCell2_active_single_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int32_t        b;
}  tCell2_active_single_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tCell2_active_single_CB  tCell2_active_single_SINGLE_CELL_CB;
extern  tCell2_active_single_INIB  tCell2_active_single_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tCell2_active_single_CB *tCell2_active_single_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSig3 */
ER           tCell2_active_single_eEntry_func1( int32_t a);
int32_t      tCell2_active_single_eEntry_func2( int32_t a);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCell2_active_single_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCell1_tecsgen.h"
#ifdef  tCell2_active_single_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCell2_active_single_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tCell2_active_single_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tCell2_active_single_ATTR_a	(tCell2_active_single_SINGLE_CELL_INIB.a)

#define tCell2_active_single_GET_a()	(tCell2_active_single_SINGLE_CELL_INIB.a)


/* var アクセスマクロ #_VAM_# */
#define tCell2_active_single_VAR_b	(tCell2_active_single_SINGLE_CELL_CB.b)

#define tCell2_active_single_GET_b()	(tCell2_active_single_SINGLE_CELL_CB.b)
#define tCell2_active_single_SET_b(val)	(tCell2_active_single_SINGLE_CELL_CB.b=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tCell2_active_single_cCall_func1( a ) \
	  tCell1_eEntry_func1( \
	   &tCell1_CB_tab[2], (a) )
#define tCell2_active_single_cCall_func2( a ) \
	  tCell1_eEntry_func2( \
	   &tCell1_CB_tab[2], (a) )

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


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCell2_active_single_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCell2_active_single_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCell2_active_single_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tCell2_active_single_ATTR_a


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_b                tCell2_active_single_VAR_b

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func1( a ) \
          tCell2_active_single_cCall_func1( a )
#define cCall_func2( a ) \
          tCell2_active_single_cCall_func2( a )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEntry_func1     tCell2_active_single_eEntry_func1
#define eEntry_func2     tCell2_active_single_eEntry_func2

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	tCell2_active_single_SINGLE_CELL_CB._inib = &tCell2_active_single_SINGLE_CELL_INIB;

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCell2_active_single_TECSGENH */
