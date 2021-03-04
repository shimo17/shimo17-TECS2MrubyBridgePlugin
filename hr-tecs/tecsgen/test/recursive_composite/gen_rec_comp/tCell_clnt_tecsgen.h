/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCell_clnt_TECSGEN_H
#define tCell_clnt_TECSGEN_H

/*
 * celltype          :  tCell_clnt
 * global name       :  tCell_clnt
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
#include "sSig1_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCell_clnt_INIB {
    /* call port #_TCP_# */
    struct tag_sSig1_VDES *const*cCall;
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
}  tCell_clnt_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tCell_clnt_CB_tab           tCell_clnt_INIB_tab
#define tCell_clnt_SINGLE_CELL_CB   tCell_clnt_SINGLE_CELL_INIB
#define tCell_clnt_CB               tCell_clnt_INIB
#define tag_tCell_clnt_CB           tag_tCell_clnt_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tCell_clnt_INIB  tCell_clnt_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tCell_clnt_INIB *tCell_clnt_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tCell_clnt_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tCell1_tecsgen.h"
#ifdef  tCell_clnt_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tCell_clnt_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cCall    (2)
#define NCP_cCall     (2)

/* セルCBを得るマクロ #_GCB_# */
#define tCell_clnt_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tCell_clnt_ATTR_a   	(tCell_clnt_SINGLE_CELL_INIB.a)

#define tCell_clnt_GET_a()  	(tCell_clnt_SINGLE_CELL_INIB.a)



 /* 呼び口関数マクロ #_CPM_# */
#define tCell_clnt_cCall_func1( subscript, a ) \
	  tCell1_eEntry1_func1_skel( \
	  tCell_clnt_SINGLE_CELL_INIB.cCall[subscript], (a) )
#define tCell_clnt_cCall_func2( subscript, a ) \
	  tCell1_eEntry1_func2_skel( \
	  tCell_clnt_SINGLE_CELL_INIB.cCall[subscript], (a) )

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
#define GET_CELLCB(idx)  tCell_clnt_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCell_clnt_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCell_clnt_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tCell_clnt_ATTR_a


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cCall_func1( subscript, a ) \
          tCell_clnt_cCall_func1( subscript, a )
#define cCall_func2( subscript, a ) \
          tCell_clnt_cCall_func2( subscript, a )



/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCell_clnt_TECSGENH */
