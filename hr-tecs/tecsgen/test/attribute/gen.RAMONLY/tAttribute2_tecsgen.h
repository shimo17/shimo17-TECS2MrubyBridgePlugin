/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tAttribute2_TECSGEN_H
#define tAttribute2_TECSGEN_H

/*
 * celltype          :  tAttribute2
 * global name       :  tAttribute2
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
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
typedef struct tag_tAttribute2_CB {
    /* call port #_NEP_# */ 
    /* attribute #_AT_# */ 
    const int32_t*       sizeArray;
    int8_t*        p;
    int_t          size;
    int32_t*       array;
    /* var #_VA_# */ 
}  tAttribute2_CB;
extern tAttribute2_CB  tAttribute2_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tAttribute2_CB *tAttribute2_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sMain */
ER           tAttribute2_eMain_main(tAttribute2_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tAttribute2_ID_BASE         (1)  /* ID のベース  #_NIDB_# */
#define tAttribute2_N_CELL          (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tAttribute2_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tAttribute2_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tAttribute2_ATTR_sizeArray( p_that )	((p_that)->sizeArray)
#define tAttribute2_ATTR_p( p_that )	((p_that)->p)
#define tAttribute2_ATTR_size( p_that )	((p_that)->size)

#define tAttribute2_GET_sizeArray(p_that)	((p_that)->sizeArray)
#define tAttribute2_GET_p(p_that)	((p_that)->p)
#define tAttribute2_GET_size(p_that)	((p_that)->size)


/* var アクセスマクロ #_VAM_# */
#define tAttribute2_VAR_array(p_that)	((p_that)->array)

#define tAttribute2_GET_array(p_that)	((p_that)->array)
#define tAttribute2_SET_array(p_that,val)	((p_that)->array=(val))

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
#define VALID_IDX(IDX)  tAttribute2_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tAttribute2_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tAttribute2_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tAttribute2_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_sizeArray       tAttribute2_ATTR_sizeArray( p_cellcb )
#define ATTR_p               tAttribute2_ATTR_p( p_cellcb )
#define ATTR_size            tAttribute2_ATTR_size( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_array            tAttribute2_VAR_array( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tAttribute2_eMain_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tAttribute2_N_CELL; (i)++ ){ \
       (p_cb) = &tAttribute2_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
extern const int32_t tAttribute2_array_VAR_INIT[2];
#define INITIALIZE_CB(p_that)\
	memcpy((void*)&tAttribute2_VAR_array(p_that)[0], (void*)&tAttribute2_array_VAR_INIT[0], sizeof(tAttribute2_array_VAR_INIT));
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tAttribute2_TECSGENH */
