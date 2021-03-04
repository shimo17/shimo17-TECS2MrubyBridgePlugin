/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMain_TECSGEN_H
#define tMain_TECSGEN_H

/*
 * celltype          :  tMain
 * global name       :  tMain
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  true
 * has_INIB          :  false
 * rom               :  no
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sMain_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPO_# */
typedef struct tag_tMain_CB {
    /* call port #_TCP_# */
    struct tag_sMain_VDES *const*cMain;
    int_t n_cMain;
    /* attribute #_AT_# */ 
    int32_t        a;
    /* var #_VA_# */ 
    int32_t        v;
}  tMain_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tMain_CB  tMain_SINGLE_CELL_CB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tMain_CB *tMain_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cMain  (tMain_SINGLE_CELL_CB.n_cMain)
#define NCP_cMain   (tMain_SINGLE_CELL_CB.n_cMain)

/* セルCBを得るマクロ #_GCB_# */
#define tMain_GET_CELLCB(idx) ((void *)0)

/* 属性アクセスマクロ #_AAM_# */
#define tMain_ATTR_a        	(tMain_SINGLE_CELL_CB.a)

#define tMain_GET_a()       	(tMain_SINGLE_CELL_CB.a)


/* var アクセスマクロ #_VAM_# */
#define tMain_VAR_v         	(tMain_SINGLE_CELL_CB.v)

#define tMain_GET_v()       	(tMain_SINGLE_CELL_CB.v)
#define tMain_SET_v(val)    	(tMain_SINGLE_CELL_CB.v=(val))

 /* 呼び口関数マクロ #_CPM_# */
#define tMain_cMain_main( subscript ) \
	  tMain_SINGLE_CELL_CB.cMain[subscript]->VMT->main__T( \
	  tMain_SINGLE_CELL_CB.cMain[subscript] )

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
#define GET_CELLCB(idx)  tMain_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMain_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMain_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               tMain_ATTR_a


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_v                tMain_VAR_v

/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cMain_main( subscript ) \
          tMain_cMain_main( subscript )



/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()\
	tMain_SINGLE_CELL_CB.v = tMain_ATTR_a;
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMain_TECSGENH */
