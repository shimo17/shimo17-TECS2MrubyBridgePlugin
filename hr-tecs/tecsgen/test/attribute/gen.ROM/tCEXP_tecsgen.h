/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tCEXP_TECSGEN_H
#define tCEXP_TECSGEN_H

/*
 * celltype          :  tCEXP
 * global name       :  tCEXP
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

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tCEXP_INIB {
    /* attribute(RO) #_ATO_# */ 
    int32_t        val;
}  tCEXP_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tCEXP_CB {
    tCEXP_INIB  *_inib;
    /* var #_VA_# */ 
    int32_t        vval;
}  tCEXP_CB;
extern tCEXP_CB  tCEXP_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tCEXP_CB *tCEXP_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tCEXP_ID_BASE               (1)  /* ID のベース  #_NIDB_# */
#define tCEXP_N_CELL                (3)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tCEXP_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tCEXP_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tCEXP_ATTR_val( p_that )	((p_that)->_inib->val)

#define tCEXP_GET_val(p_that)	((p_that)->_inib->val)


/* var アクセスマクロ #_VAM_# */
#define tCEXP_VAR_vval(p_that)	((p_that)->vval)

#define tCEXP_GET_vval(p_that)	((p_that)->vval)
#define tCEXP_SET_vval(p_that,val)	((p_that)->vval=(val))

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

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tCEXP_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tCEXP_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tCEXP_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tCEXP_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_val             tCEXP_ATTR_val( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_vval             tCEXP_VAR_vval( p_cellcb )



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tCEXP_N_CELL; (i)++ ){ \
       (p_cb) = &tCEXP_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->vval = tCEXP_ATTR_val(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tCEXP_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tCEXP_TECSGENH */
