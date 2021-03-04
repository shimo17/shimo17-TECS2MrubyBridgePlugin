/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tFlg_TECSGEN_H
#define tFlg_TECSGEN_H

/*
 * celltype          :  tFlg
 * global name       :  tFlg
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
#include "sFlg_tecsgen.h"
#include "siFlg_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tFlg_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
}  tFlg_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tFlg_CB_tab           tFlg_INIB_tab
#define tFlg_SINGLE_CELL_CB   tFlg_SINGLE_CELL_INIB
#define tFlg_CB               tFlg_INIB
#define tag_tFlg_CB           tag_tFlg_INIB

extern tFlg_CB  tFlg_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tFlg_INIB *tFlg_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sFlg */
ER           tFlg_eF_set_flg(tFlg_IDX idx, FLGPTN setptn);
ER           tFlg_eF_clr_flg(tFlg_IDX idx, FLGPTN clrptn);
ER           tFlg_eF_wai_flg(tFlg_IDX idx, FLGPTN waiptn, MODE wfmode, FLGPTN* p_flgptn);
ER           tFlg_eF_pol_flg(tFlg_IDX idx, FLGPTN waiptn, MODE wfmode, FLGPTN* p_flgptn);
ER           tFlg_eF_twai_flg(tFlg_IDX idx, FLGPTN waiptn, MODE wfmode, FLGPTN* p_flgptn, TMO tmout);
/* siFlg */
ER           tFlg_eiF_iset_flg(tFlg_IDX idx, FLGPTN setptn);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tFlg_ID_BASE                (1)  /* ID のベース  #_NIDB_# */
#define tFlg_N_CELL                 (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tFlg_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tFlg_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tFlg_ATTR_id( p_that )	((p_that)->id)

#define tFlg_GET_id(p_that) 	((p_that)->id)



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
#define VALID_IDX(IDX)  tFlg_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tFlg_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tFlg_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tFlg_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tFlg_ATTR_id( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eF_set_flg       tFlg_eF_set_flg
#define eF_clr_flg       tFlg_eF_clr_flg
#define eF_wai_flg       tFlg_eF_wai_flg
#define eF_pol_flg       tFlg_eF_pol_flg
#define eF_twai_flg      tFlg_eF_twai_flg
#define eiF_iset_flg     tFlg_eiF_iset_flg

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tFlg_N_CELL; (i)++ ){ \
       //(p_cb) = &tFlg_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tFlg_TECSGENH */
