/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nNS_tLedout_TECSGEN_H
#define nNS_tLedout_TECSGEN_H

/*
 * celltype          :  tLedout
 * global name       :  nNS_tLedout
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
typedef const struct tag_nNS_tLedout_INIB {
    /* attribute(RO) #_ATO_# */ 
    int32_t        a;
    int32_t        ab;
    char_t*        s;
}  nNS_tLedout_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_nNS_tLedout_CB {
    nNS_tLedout_INIB  *_inib;
    /* var #_VA_# */ 
    int32_t        b;
}  nNS_tLedout_CB;
extern nNS_tLedout_CB  nNS_tLedout_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_nNS_tLedout_CB *nNS_tLedout_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nNS_tLedout_ID_BASE         (1)  /* ID のベース  #_NIDB_# */
#define nNS_tLedout_N_CELL          (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nNS_tLedout_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nNS_tLedout_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nNS_tLedout_ATTR_a( p_that )	((p_that)->_inib->a)
#define nNS_tLedout_ATTR_ab( p_that )	((p_that)->_inib->ab)
#define nNS_tLedout_ATTR_s( p_that )	((p_that)->_inib->s)

#define nNS_tLedout_GET_a(p_that)	((p_that)->_inib->a)
#define nNS_tLedout_GET_ab(p_that)	((p_that)->_inib->ab)
#define nNS_tLedout_GET_s(p_that)	((p_that)->_inib->s)


/* var アクセスマクロ #_VAM_# */
#define nNS_tLedout_VAR_b(p_that)	((p_that)->b)

#define nNS_tLedout_GET_b(p_that)	((p_that)->b)
#define nNS_tLedout_SET_b(p_that,val)	((p_that)->b=(val))

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
#define VALID_IDX(IDX)  nNS_tLedout_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nNS_tLedout_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nNS_tLedout_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nNS_tLedout_IDX

#define tLedout_IDX  nNS_tLedout_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a               nNS_tLedout_ATTR_a( p_cellcb )
#define ATTR_ab              nNS_tLedout_ATTR_ab( p_cellcb )
#define ATTR_s               nNS_tLedout_ATTR_s( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_b                nNS_tLedout_VAR_b( p_cellcb )



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nNS_tLedout_N_CELL; (i)++ ){ \
       (p_cb) = &nNS_tLedout_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &nNS_tLedout_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nNS_tLedout_TECSGENH */
