/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tA_TECSGEN_H
#define tA_TECSGEN_H

/*
 * celltype          :  tA
 * global name       :  tA
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
typedef const struct tag_tA_INIB {
    /* attribute(RO) #_ATO_# */ 
    struct A       a1;
    struct A       a2;
    struct B       a3;
    int32_t        a4[2];
    int32_t        a5;
}  tA_INIB;
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tA_CB {
    tA_INIB  *_inib;
    /* var #_VA_# */ 
    int32_t        v1;
    struct A       v2;
    struct A       v3;
    int32_t        v4[2];
}  tA_CB;
extern tA_CB  tA_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tA_CB *tA_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tA_ID_BASE                  (1)  /* ID のベース  #_NIDB_# */
#define tA_N_CELL                   (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tA_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tA_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tA_ATTR_a1( p_that )	((p_that)->_inib->a1)
#define tA_ATTR_a2( p_that )	((p_that)->_inib->a2)
#define tA_ATTR_a3( p_that )	((p_that)->_inib->a3)
#define tA_ATTR_a4( p_that )	((p_that)->_inib->a4)
#define tA_ATTR_a5( p_that )	((p_that)->_inib->a5)

#define tA_GET_a1(p_that)   	((p_that)->_inib->a1)
#define tA_GET_a2(p_that)   	((p_that)->_inib->a2)
#define tA_GET_a3(p_that)   	((p_that)->_inib->a3)
#define tA_GET_a4(p_that)   	((p_that)->_inib->a4)
#define tA_GET_a5(p_that)   	((p_that)->_inib->a5)


/* var アクセスマクロ #_VAM_# */
#define tA_VAR_v1(p_that)   	((p_that)->v1)
#define tA_VAR_v2(p_that)   	((p_that)->v2)
#define tA_VAR_v3(p_that)   	((p_that)->v3)
#define tA_VAR_v4(p_that)   	((p_that)->v4)

#define tA_GET_v1(p_that)   	((p_that)->v1)
#define tA_SET_v1(p_that,val)	((p_that)->v1=(val))
#define tA_GET_v2(p_that)   	((p_that)->v2)
#define tA_SET_v2(p_that,val)	((p_that)->v2=(val))
#define tA_GET_v3(p_that)   	((p_that)->v3)
#define tA_SET_v3(p_that,val)	((p_that)->v3=(val))
#define tA_GET_v4(p_that)   	((p_that)->v4)
#define tA_SET_v4(p_that,val)	((p_that)->v4=(val))

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
#define VALID_IDX(IDX)  tA_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tA_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tA_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tA_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_a1              tA_ATTR_a1( p_cellcb )
#define ATTR_a2              tA_ATTR_a2( p_cellcb )
#define ATTR_a3              tA_ATTR_a3( p_cellcb )
#define ATTR_a4              tA_ATTR_a4( p_cellcb )
#define ATTR_a5              tA_ATTR_a5( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_v1               tA_VAR_v1( p_cellcb )
#define VAR_v2               tA_VAR_v2( p_cellcb )
#define VAR_v3               tA_VAR_v3( p_cellcb )
#define VAR_v4               tA_VAR_v4( p_cellcb )



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tA_N_CELL; (i)++ ){ \
       (p_cb) = &tA_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
extern const struct A tA_v2_VAR_INIT;
extern const struct A tA_v3_VAR_INIT;
extern const int32_t tA_v4_VAR_INIT[2];
#define INITIALIZE_CB(p_that)\
	(p_that)->v1 = tA_ATTR_a5(p_that);\
	memcpy((void*)&tA_VAR_v2(p_that), (void*)&tA_v2_VAR_INIT, sizeof(tA_v2_VAR_INIT));\
	memcpy((void*)&tA_VAR_v3(p_that), (void*)&tA_v3_VAR_INIT, sizeof(tA_v3_VAR_INIT));\
	memcpy((void*)&tA_VAR_v4(p_that)[0], (void*)&tA_v4_VAR_INIT[0], sizeof(tA_v4_VAR_INIT));
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tA_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tA_TECSGENH */
