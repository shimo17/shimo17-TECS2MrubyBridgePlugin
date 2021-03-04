/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTask_TECSGEN_H
#define tTask_TECSGEN_H

/*
 * celltype          :  tTask
 * global name       :  tTask
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
#include "sTask_tecsgen.h"
#include "siTask_tecsgen.h"
#include "sMain_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTask_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
    VP_INT         exinf;
}  tTask_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTask_CB_tab           tTask_INIB_tab
#define tTask_SINGLE_CELL_CB   tTask_SINGLE_CELL_INIB
#define tTask_CB               tTask_INIB
#define tag_tTask_CB           tag_tTask_INIB

extern tTask_CB  tTask_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTask_INIB *tTask_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTask */
ER           tTask_eT_act_tsk(tTask_IDX idx);
ER_UINT      tTask_eT_can_act(tTask_IDX idx);
ER           tTask_eT_ter_tsk(tTask_IDX idx);
ER           tTask_eT_chg_pri(tTask_IDX idx, PRI tskpri);
ER           tTask_eT_get_pri(tTask_IDX idx, PRI* p_tskpri);
ER           tTask_eT_wup_tsk(tTask_IDX idx);
ER_UINT      tTask_eT_can_wup(tTask_IDX idx);
ER           tTask_eT_rel_wai(tTask_IDX idx);
ER           tTask_eT_sus_tsk(tTask_IDX idx);
ER           tTask_eT_rsm_tsk(tTask_IDX idx);
ER           tTask_eT_frsm_tsk(tTask_IDX idx);
ER           tTask_eT_ras_tex(tTask_IDX idx, TEXPTN rasptn);
/* siTask */
ER           tTask_eiT_iact_tsk(tTask_IDX idx);
ER           tTask_eiT_iwup_tsk(tTask_IDX idx);
ER           tTask_eiT_irel_wai(tTask_IDX idx);
ER           tTask_eiT_iras_tex(tTask_IDX idx, TEXPTN rasptn);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTask_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tMyMain_tecsgen.h"
#ifdef  tTask_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTask_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTask_ID_BASE               (1)  /* ID のベース  #_NIDB_# */
#define tTask_N_CELL                (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTask_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTask_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTask_ATTR_id( p_that )	((p_that)->id)
#define tTask_ATTR_exinf( p_that )	((p_that)->exinf)

#define tTask_GET_id(p_that)	((p_that)->id)
#define tTask_GET_exinf(p_that)	((p_that)->exinf)



 /* 呼び口関数マクロ #_CPM_# */
#define tTask_cMain_main( p_that, exinf ) \
	  tMyMain_eM_main( \
	   &tMyMain_CB_tab[1], (exinf) )

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
#define VALID_IDX(IDX)  tTask_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTask_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTask_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTask_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tTask_ATTR_id( p_cellcb )
#define ATTR_exinf           tTask_ATTR_exinf( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cMain_main( exinf ) \
          ((void)p_cellcb, tTask_cMain_main( p_cellcb, exinf ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eT_act_tsk       tTask_eT_act_tsk
#define eT_can_act       tTask_eT_can_act
#define eT_ter_tsk       tTask_eT_ter_tsk
#define eT_chg_pri       tTask_eT_chg_pri
#define eT_get_pri       tTask_eT_get_pri
#define eT_wup_tsk       tTask_eT_wup_tsk
#define eT_can_wup       tTask_eT_can_wup
#define eT_rel_wai       tTask_eT_rel_wai
#define eT_sus_tsk       tTask_eT_sus_tsk
#define eT_rsm_tsk       tTask_eT_rsm_tsk
#define eT_frsm_tsk      tTask_eT_frsm_tsk
#define eT_ras_tex       tTask_eT_ras_tex
#define eiT_iact_tsk     tTask_eiT_iact_tsk
#define eiT_iwup_tsk     tTask_eiT_iwup_tsk
#define eiT_irel_wai     tTask_eiT_irel_wai
#define eiT_iras_tex     tTask_eiT_iras_tex

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTask_N_CELL; (i)++ ){ \
       //(p_cb) = &tTask_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTask_TECSGENH */
