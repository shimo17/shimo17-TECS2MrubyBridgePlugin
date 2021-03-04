/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tMbx_TECSGEN_H
#define tMbx_TECSGEN_H

/*
 * celltype          :  tMbx
 * global name       :  tMbx
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
#include "sMbx_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tMbx_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
    INT            dtqcnt;
}  tMbx_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tMbx_CB_tab           tMbx_INIB_tab
#define tMbx_SINGLE_CELL_CB   tMbx_SINGLE_CELL_INIB
#define tMbx_CB               tMbx_INIB
#define tag_tMbx_CB           tag_tMbx_INIB

extern tMbx_CB  tMbx_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tMbx_INIB *tMbx_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sMbx */
ER           tMbx_eM_snd_mbx(tMbx_IDX idx, const T_MSG* pk_msg);
ER           tMbx_eM_rcv_mbx(tMbx_IDX idx, T_MSG** ppk_msg);
ER           tMbx_eM_prcv_mbx(tMbx_IDX idx, T_MSG** ppk_msg);
ER           tMbx_eM_trcv_mbx(tMbx_IDX idx, T_MSG** ppk_msg, TMO tmout);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tMbx_ID_BASE                (1)  /* ID のベース  #_NIDB_# */
#define tMbx_N_CELL                 (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tMbx_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tMbx_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tMbx_ATTR_id( p_that )	((p_that)->id)
#define tMbx_ATTR_dtqcnt( p_that )	((p_that)->dtqcnt)

#define tMbx_GET_id(p_that) 	((p_that)->id)
#define tMbx_GET_dtqcnt(p_that)	((p_that)->dtqcnt)



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
#define VALID_IDX(IDX)  tMbx_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tMbx_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tMbx_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tMbx_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tMbx_ATTR_id( p_cellcb )
#define ATTR_dtqcnt          tMbx_ATTR_dtqcnt( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eM_snd_mbx       tMbx_eM_snd_mbx
#define eM_rcv_mbx       tMbx_eM_rcv_mbx
#define eM_prcv_mbx      tMbx_eM_prcv_mbx
#define eM_trcv_mbx      tMbx_eM_trcv_mbx

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tMbx_N_CELL; (i)++ ){ \
       //(p_cb) = &tMbx_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMbx_TECSGENH */
