/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCTBool_TClient_TECSGEN_H
#define tCTBool_TClient_TECSGEN_H

/*
 * celltype          :  tCTBool_TClient
 * global name       :  tCTBool_TClient
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
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
typedef const struct tag_tCTBool_TClient_INIB {
    /* call port #_TCP_# */
    struct tag_sSigBool_T_VDES *const*cBooo;
    int_t n_cBooo;
}  tCTBool_TClient_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCTBool_TClient_CB_tab           tCTBool_TClient_INIB_tab
#define tCTBool_TClient_SINGLE_CELL_CB   tCTBool_TClient_SINGLE_CELL_INIB
#define tCTBool_TClient_CB               tCTBool_TClient_INIB
#define tag_tCTBool_TClient_CB           tag_tCTBool_TClient_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tCTBool_TClient_INIB  tCTBool_TClient_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCTBool_TClient_INIB *tCTBool_TClient_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cBooo  (tCTBool_TClient_SINGLE_CELL_INIB.n_cBooo)
#define NCP_cBooo   (tCTBool_TClient_SINGLE_CELL_INIB.n_cBooo)

/* セルCBを得るマクロ #_GCB_# */
#define tCTBool_TClient_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define tCTBool_TClient_cBooo_func( subscript, boo, boo2 ) \
	  tCTBool_TClient_SINGLE_CELL_INIB.cBooo[subscript]->VMT->func__T( \
	  tCTBool_TClient_SINGLE_CELL_INIB.cBooo[subscript], (boo), (boo2) )
#define tCTBool_TClient_cBooo_func2( subscript, boo, sz ) \
	  tCTBool_TClient_SINGLE_CELL_INIB.cBooo[subscript]->VMT->func2__T( \
	  tCTBool_TClient_SINGLE_CELL_INIB.cBooo[subscript], (boo), (sz) )

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


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCTBool_TClient_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCTBool_TClient_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCTBool_TClient_IDX

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cBooo_func( subscript, boo, boo2 ) \
          tCTBool_TClient_cBooo_func( subscript, boo, boo2 )
#define cBooo_func2( subscript, boo, sz ) \
          tCTBool_TClient_cBooo_func2( subscript, boo, sz )



/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCTBool_TClient_TECSGENH */
