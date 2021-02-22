/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECS2Mruby_tsMrubyCaller_TECSGEN_H
#define nTECS2Mruby_tsMrubyCaller_TECSGEN_H

/*
 * celltype          :  tsMrubyCaller
 * global name       :  nTECS2Mruby_tsMrubyCaller
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  no
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sMrubyCaller_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB (ダミー)型宣言 #_CCDP_# */
typedef struct tag_nTECS2Mruby_tsMrubyCaller_CB {
    int  dummy;
} nTECS2Mruby_tsMrubyCaller_CB;
extern nTECS2Mruby_tsMrubyCaller_CB  nTECS2Mruby_tsMrubyCaller_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef int   nTECS2Mruby_tsMrubyCaller_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sMrubyCaller */
void         nTECS2Mruby_tsMrubyCaller_eEnt_func(nTECS2Mruby_tsMrubyCaller_IDX idx);
int32_t      nTECS2Mruby_tsMrubyCaller_eEnt_func3(nTECS2Mruby_tsMrubyCaller_IDX idx, int32_t val, int32_t val2);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECS2Mruby_tsMrubyCaller_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECS2Mruby_tsMrubyCaller_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECS2Mruby_tsMrubyCaller_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nTECS2Mruby_tsMrubyCaller_GET_CELLCB(idx) ((void *)0)
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
#define VALID_IDX(IDX)  nTECS2Mruby_tsMrubyCaller_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECS2Mruby_tsMrubyCaller_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECS2Mruby_tsMrubyCaller_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECS2Mruby_tsMrubyCaller_IDX

#define tsMrubyCaller_IDX  nTECS2Mruby_tsMrubyCaller_IDX



/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eEnt_func        nTECS2Mruby_tsMrubyCaller_eEnt_func
#define eEnt_func3       nTECS2Mruby_tsMrubyCaller_eEnt_func3

/* イテレータコード (FOREACH_CELL)の生成(CB,INIB は存在しない) #_NFEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for((i)=0;(i)<0;(i)++){

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECS2Mruby_tsMrubyCaller_TECSGENH */
