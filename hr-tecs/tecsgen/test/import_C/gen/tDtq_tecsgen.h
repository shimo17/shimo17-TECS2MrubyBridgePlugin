/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tDtq_TECSGEN_H
#define tDtq_TECSGEN_H

/*
 * celltype          :  tDtq
 * global name       :  tDtq
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sDtq_tecsgen.h"
#include "siDtq_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tDtq_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
}  tDtq_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tDtq_CB_tab           tDtq_INIB_tab
#define tDtq_SINGLE_CELL_CB   tDtq_SINGLE_CELL_INIB
#define tDtq_CB               tDtq_INIB
#define tag_tDtq_CB           tag_tDtq_INIB

extern tDtq_CB  tDtq_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tDtq_INIB *tDtq_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sDtq */
ER           tDtq_eD_snd_dtq(tDtq_IDX idx, const void* data);
ER           tDtq_eD_psnd_dtq(tDtq_IDX idx, const void* data);
ER           tDtq_eD_tsnd_dtq(tDtq_IDX idx, const void* data, TMO tmout);
ER           tDtq_eD_fsnd_dtq(tDtq_IDX idx, const void* data);
ER           tDtq_eD_rcv_dtq(tDtq_IDX idx, VP_INT* p_data);
ER           tDtq_eD_prcv_dtq(tDtq_IDX idx, VP_INT* p_data);
ER           tDtq_eD_trcv_dtq(tDtq_IDX idx, VP_INT* p_data, TMO tmout);
/* siDtq */
ER           tDtq_eiD_ipsnd_dtq(tDtq_IDX idx, const void* data);
ER           tDtq_eiD_ifsnd_dtq(tDtq_IDX idx, const void* data);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tDtq_ID_BASE                (1)  /* ID のベース  #_NIDB_# */
#define tDtq_N_CELL                 (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tDtq_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tDtq_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tDtq_ATTR_id( p_that )	((p_that)->id)

#define tDtq_GET_id(p_that) 	((p_that)->id)



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
#define VALID_IDX(IDX)  tDtq_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tDtq_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tDtq_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tDtq_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tDtq_ATTR_id( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eD_snd_dtq       tDtq_eD_snd_dtq
#define eD_psnd_dtq      tDtq_eD_psnd_dtq
#define eD_tsnd_dtq      tDtq_eD_tsnd_dtq
#define eD_fsnd_dtq      tDtq_eD_fsnd_dtq
#define eD_rcv_dtq       tDtq_eD_rcv_dtq
#define eD_prcv_dtq      tDtq_eD_prcv_dtq
#define eD_trcv_dtq      tDtq_eD_trcv_dtq
#define eiD_ipsnd_dtq    tDtq_eiD_ipsnd_dtq
#define eiD_ifsnd_dtq    tDtq_eiD_ifsnd_dtq

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tDtq_N_CELL; (i)++ ){ \
       //(p_cb) = &tDtq_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tDtq_TECSGENH */
