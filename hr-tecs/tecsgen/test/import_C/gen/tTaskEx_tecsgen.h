/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tTaskEx_TECSGEN_H
#define tTaskEx_TECSGEN_H

/*
 * celltype          :  tTaskEx
 * global name       :  tTaskEx
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
#include "sTex_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tTaskEx_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    ID             id;
    VP_INT         exinf;
}  tTaskEx_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tTaskEx_CB_tab           tTaskEx_INIB_tab
#define tTaskEx_SINGLE_CELL_CB   tTaskEx_SINGLE_CELL_INIB
#define tTaskEx_CB               tTaskEx_INIB
#define tag_tTaskEx_CB           tag_tTaskEx_INIB

extern tTaskEx_CB  tTaskEx_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tTaskEx_INIB *tTaskEx_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTask */
ER           tTaskEx_eT_act_tsk(tTaskEx_IDX idx);
ER_UINT      tTaskEx_eT_can_act(tTaskEx_IDX idx);
ER           tTaskEx_eT_ter_tsk(tTaskEx_IDX idx);
ER           tTaskEx_eT_chg_pri(tTaskEx_IDX idx, PRI tskpri);
ER           tTaskEx_eT_get_pri(tTaskEx_IDX idx, PRI* p_tskpri);
ER           tTaskEx_eT_wup_tsk(tTaskEx_IDX idx);
ER_UINT      tTaskEx_eT_can_wup(tTaskEx_IDX idx);
ER           tTaskEx_eT_rel_wai(tTaskEx_IDX idx);
ER           tTaskEx_eT_sus_tsk(tTaskEx_IDX idx);
ER           tTaskEx_eT_rsm_tsk(tTaskEx_IDX idx);
ER           tTaskEx_eT_frsm_tsk(tTaskEx_IDX idx);
ER           tTaskEx_eT_ras_tex(tTaskEx_IDX idx, TEXPTN rasptn);
/* siTask */
ER           tTaskEx_eiT_iact_tsk(tTaskEx_IDX idx);
ER           tTaskEx_eiT_iwup_tsk(tTaskEx_IDX idx);
ER           tTaskEx_eiT_irel_wai(tTaskEx_IDX idx);
ER           tTaskEx_eiT_iras_tex(tTaskEx_IDX idx, TEXPTN rasptn);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tTaskEx_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tMyMainEx_tecsgen.h"
#ifdef  tTaskEx_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tTaskEx_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tTaskEx_ID_BASE             (1)  /* ID のベース  #_NIDB_# */
#define tTaskEx_N_CELL              (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tTaskEx_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tTaskEx_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define tTaskEx_ATTR_id( p_that )	((p_that)->id)
#define tTaskEx_ATTR_exinf( p_that )	((p_that)->exinf)

#define tTaskEx_GET_id(p_that)	((p_that)->id)
#define tTaskEx_GET_exinf(p_that)	((p_that)->exinf)



 /* 呼び口関数マクロ #_CPM_# */
#define tTaskEx_cMain_main( p_that, exinf ) \
	  tMyMainEx_eM_main( \
	   &tMyMainEx_CB_tab[0], (exinf) )
#define tTaskEx_cTex_tex( p_that ) \
	  tMyMainEx_eT_tex( \
	   &tMyMainEx_CB_tab[0] )

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
#define VALID_IDX(IDX)  tTaskEx_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tTaskEx_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tTaskEx_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tTaskEx_IDX


/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_id              tTaskEx_ATTR_id( p_cellcb )
#define ATTR_exinf           tTaskEx_ATTR_exinf( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cMain_main( exinf ) \
          ((void)p_cellcb, tTaskEx_cMain_main( p_cellcb, exinf ))
#define cTex_tex( ) \
          ((void)p_cellcb, tTaskEx_cTex_tex( p_cellcb ))




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eT_act_tsk       tTaskEx_eT_act_tsk
#define eT_can_act       tTaskEx_eT_can_act
#define eT_ter_tsk       tTaskEx_eT_ter_tsk
#define eT_chg_pri       tTaskEx_eT_chg_pri
#define eT_get_pri       tTaskEx_eT_get_pri
#define eT_wup_tsk       tTaskEx_eT_wup_tsk
#define eT_can_wup       tTaskEx_eT_can_wup
#define eT_rel_wai       tTaskEx_eT_rel_wai
#define eT_sus_tsk       tTaskEx_eT_sus_tsk
#define eT_rsm_tsk       tTaskEx_eT_rsm_tsk
#define eT_frsm_tsk      tTaskEx_eT_frsm_tsk
#define eT_ras_tex       tTaskEx_eT_ras_tex
#define eiT_iact_tsk     tTaskEx_eiT_iact_tsk
#define eiT_iwup_tsk     tTaskEx_eiT_iwup_tsk
#define eiT_irel_wai     tTaskEx_eiT_irel_wai
#define eiT_iras_tex     tTaskEx_eiT_iras_tex

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTaskEx_N_CELL; (i)++ ){ \
       //(p_cb) = &tTaskEx_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTaskEx_TECSGENH */
