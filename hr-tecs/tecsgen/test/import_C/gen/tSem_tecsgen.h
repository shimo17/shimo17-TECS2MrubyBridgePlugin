/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSem_TECSGEN_H
#define tSem_TECSGEN_H

/*
 * celltype          :  tSem
 * global name       :  tSem
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
#include "sSem_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSem_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
}  tSem_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSem_CB_tab           tSem_INIB_tab
#define tSem_SINGLE_CELL_CB   tSem_SINGLE_CELL_INIB
#define tSem_CB               tSem_INIB
#define tag_tSem_CB           tag_tSem_INIB

extern tSem_CB  tSem_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSem_INIB *tSem_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSem */
ER           tSem_eS_sig_sem(tSem_IDX idx);
ER           tSem_eS_isig_sem(tSem_IDX idx);
ER           tSem_eS_wai_sem(tSem_IDX idx);
ER           tSem_eS_pol_sem(tSem_IDX idx);
ER           tSem_eS_twai_sem(tSem_IDX idx, TMO tmout);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tSem_ID_BASE                (1)  /* ID のベース  #_NIDB_# */
#define tSem_N_CELL                 (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tSem_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tSem_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tSem_ATTR_id( p_that )	((p_that)->id)

#define tSem_GET_id(p_that) 	((p_that)->id)



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
#define VALID_IDX(IDX)  tSem_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tSem_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSem_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSem_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tSem_ATTR_id( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eS_sig_sem       tSem_eS_sig_sem
#define eS_isig_sem      tSem_eS_isig_sem
#define eS_wai_sem       tSem_eS_wai_sem
#define eS_pol_sem       tSem_eS_pol_sem
#define eS_twai_sem      tSem_eS_twai_sem

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSem_N_CELL; (i)++ ){ \
       //(p_cb) = &tSem_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSem_TECSGENH */
