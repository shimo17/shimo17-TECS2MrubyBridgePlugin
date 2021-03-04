/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tAttribute_TECSGEN_H
#define tAttribute_TECSGEN_H

/*
 * celltype          :  tAttribute
 * global name       :  tAttribute
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
typedef struct tag_tAttribute_CB {
    /* call port #_NEP_# */ 
    /* attribute #_AT_# */ 
    uint32_t       size;
    uint32_t       size2;
    const int32_t*       size_array;
    volatile int32_t* ptr;
    int32_t        very_long_name_more_than_16char;
    char_t*        msg;
    int32_t*       sz_array;
    /* var #_VA_# */ 
    T              st;
    char_t*        msg2;
}  tAttribute_CB;
extern tAttribute_CB  tAttribute_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tAttribute_CB *tAttribute_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sMain */
ER           tAttribute_eMain_main(tAttribute_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tAttribute_ID_BASE          (1)  /* ID のベース  #_NIDB_# */
#define tAttribute_N_CELL           (5)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tAttribute_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tAttribute_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tAttribute_ATTR_size( p_that )	((p_that)->size)
#define tAttribute_ATTR_size2( p_that )	((p_that)->size2)
#define tAttribute_ATTR_size_array( p_that )	((p_that)->size_array)
#define tAttribute_ATTR_ptr( p_that )	((p_that)->ptr)
#define tAttribute_ATTR_very_long_name_more_than_16char( p_that )	((p_that)->very_long_name_more_than_16char)
#define tAttribute_ATTR_msg( p_that )	((p_that)->msg)

#define tAttribute_GET_size(p_that)	((p_that)->size)
#define tAttribute_GET_size2(p_that)	((p_that)->size2)
#define tAttribute_GET_size_array(p_that)	((p_that)->size_array)
#define tAttribute_GET_ptr(p_that)	((p_that)->ptr)
#define tAttribute_GET_very_long_name_more_than_16char(p_that)	((p_that)->very_long_name_more_than_16char)
#define tAttribute_GET_msg(p_that)	((p_that)->msg)


/* var アクセスマクロ #_VAM_# */
#define tAttribute_VAR_sz_array(p_that)	((p_that)->sz_array)
#define tAttribute_VAR_st(p_that)	((p_that)->st)
#define tAttribute_VAR_msg2(p_that)	((p_that)->msg2)

#define tAttribute_GET_sz_array(p_that)	((p_that)->sz_array)
#define tAttribute_SET_sz_array(p_that,val)	((p_that)->sz_array=(val))
#define tAttribute_GET_st(p_that)	((p_that)->st)
#define tAttribute_SET_st(p_that,val)	((p_that)->st=(val))
#define tAttribute_GET_msg2(p_that)	((p_that)->msg2)
#define tAttribute_SET_msg2(p_that,val)	((p_that)->msg2=(val))

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eMain */
ER             tAttribute_eMain_main_skel( const struct tag_sMain_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tAttribute_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tAttribute_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tAttribute_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tAttribute_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_size            tAttribute_ATTR_size( p_cellcb )
#define ATTR_size2           tAttribute_ATTR_size2( p_cellcb )
#define ATTR_size_array      tAttribute_ATTR_size_array( p_cellcb )
#define ATTR_ptr             tAttribute_ATTR_ptr( p_cellcb )
#define ATTR_very_long_name_more_than_16char tAttribute_ATTR_very_long_name_more_than_16char( p_cellcb )
#define ATTR_msg             tAttribute_ATTR_msg( p_cellcb )


/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_sz_array         tAttribute_VAR_sz_array( p_cellcb )
#define VAR_st               tAttribute_VAR_st( p_cellcb )
#define VAR_msg2             tAttribute_VAR_msg2( p_cellcb )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eMain_main       tAttribute_eMain_main

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tAttribute_N_CELL; (i)++ ){ \
       (p_cb) = &tAttribute_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
extern const T tAttribute_st_VAR_INIT;
#define INITIALIZE_CB(p_that)\
	memcpy((void*)&tAttribute_VAR_st(p_that), (void*)&tAttribute_st_VAR_INIT, sizeof(tAttribute_st_VAR_INIT));\
	(p_that)->msg2 = tAttribute_ATTR_msg(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tAttribute_TECSGENH */
