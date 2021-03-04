/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tKernel_TECSGEN_H
#define tKernel_TECSGEN_H

/*
 * celltype          :  tKernel
 * global name       :  tKernel
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  true
 * has_INIB          :  false
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sTim_tecsgen.h"
#include "sSystem_tecsgen.h"
#include "siSystem_tecsgen.h"
#include "sVxsns_tecsgen.h"
#include "sVsns_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル CB 型宣言 #_CCTPA_# */
typedef struct tag_tKernel_CB {
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    int32_t        dummy;
}  tKernel_CB;
/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tKernel_CB  tKernel_SINGLE_CELL_CB;


/* セルタイプのIDX型 #_CTIX_# */
typedef struct tag_tKernel_CB *tKernel_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sTim */
ER           tKernel_eTim_set_tim( const SYSTIM* p_systim);
ER           tKernel_eTim_get_tim( SYSTIM* p_systim);
ER           tKernel_eTim_isig_tim();
/* sSystem */
ER           tKernel_eSystem_dis_tex();
ER           tKernel_eSystem_ena_tex();
BOOL         tKernel_eSystem_sns_tex();
void         tKernel_eSystem_ext_tsk();
ER           tKernel_eSystem_slp_tsk();
ER           tKernel_eSystem_tslp_tsk( TMO tmout);
ER           tKernel_eSystem_dly_tsk( RELTIM dlytim);
ER           tKernel_eSystem_rot_rdq( PRI tskpri);
ER           tKernel_eSystem_get_tid( ID* p_tskid);
ER           tKernel_eSystem_loc_cpu();
ER           tKernel_eSystem_unl_cpu();
ER           tKernel_eSystem_dis_dsp();
ER           tKernel_eSystem_ena_dsp();
BOOL         tKernel_eSystem_sns_ctx();
BOOL         tKernel_eSystem_sns_loc();
BOOL         tKernel_eSystem_sns_dsp();
BOOL         tKernel_eSystem_sns_dpn();
/* siSystem */
ER           tKernel_eiSystem_irot_rdq( PRI tskpri);
ER           tKernel_eiSystem_iget_tid( ID* p_tskid);
ER           tKernel_eiSystem_iloc_cpu();
ER           tKernel_eiSystem_iunl_cpu();
/* sVxsns */
BOOL         tKernel_eVxsns_vxsns_ctx( VP p_excinf);
BOOL         tKernel_eVxsns_vxsns_loc( VP p_excinf);
BOOL         tKernel_eVxsns_vxsns_dsp( VP p_excinf);
BOOL         tKernel_eVxsns_vxsns_dpn( VP p_excinf);
BOOL         tKernel_eVxsns_vxsns_tex( VP p_excinf);
/* sVsns */
BOOL         tKernel_eVsns_vsns_ini();
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tKernel_GET_CELLCB(idx) ((void *)0)



/* var アクセスマクロ #_VAM_# */
#define tKernel_VAR_dummy   	(tKernel_SINGLE_CELL_CB.dummy)

#define tKernel_GET_dummy() 	(tKernel_SINGLE_CELL_CB.dummy)
#define tKernel_SET_dummy(val)	(tKernel_SINGLE_CELL_CB.dummy=(val))

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


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tKernel_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tKernel_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tKernel_IDX



/* var アクセスマクロ(短縮形) #_VAMA_# */
#define VAR_dummy            tKernel_VAR_dummy




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTim_set_tim     tKernel_eTim_set_tim
#define eTim_get_tim     tKernel_eTim_get_tim
#define eTim_isig_tim    tKernel_eTim_isig_tim
#define eSystem_dis_tex  tKernel_eSystem_dis_tex
#define eSystem_ena_tex  tKernel_eSystem_ena_tex
#define eSystem_sns_tex  tKernel_eSystem_sns_tex
#define eSystem_ext_tsk  tKernel_eSystem_ext_tsk
#define eSystem_slp_tsk  tKernel_eSystem_slp_tsk
#define eSystem_tslp_tsk tKernel_eSystem_tslp_tsk
#define eSystem_dly_tsk  tKernel_eSystem_dly_tsk
#define eSystem_rot_rdq  tKernel_eSystem_rot_rdq
#define eSystem_get_tid  tKernel_eSystem_get_tid
#define eSystem_loc_cpu  tKernel_eSystem_loc_cpu
#define eSystem_unl_cpu  tKernel_eSystem_unl_cpu
#define eSystem_dis_dsp  tKernel_eSystem_dis_dsp
#define eSystem_ena_dsp  tKernel_eSystem_ena_dsp
#define eSystem_sns_ctx  tKernel_eSystem_sns_ctx
#define eSystem_sns_loc  tKernel_eSystem_sns_loc
#define eSystem_sns_dsp  tKernel_eSystem_sns_dsp
#define eSystem_sns_dpn  tKernel_eSystem_sns_dpn
#define eiSystem_irot_rdq tKernel_eiSystem_irot_rdq
#define eiSystem_iget_tid tKernel_eiSystem_iget_tid
#define eiSystem_iloc_cpu tKernel_eiSystem_iloc_cpu
#define eiSystem_iunl_cpu tKernel_eiSystem_iunl_cpu
#define eVxsns_vxsns_ctx tKernel_eVxsns_vxsns_ctx
#define eVxsns_vxsns_loc tKernel_eVxsns_vxsns_loc
#define eVxsns_vxsns_dsp tKernel_eVxsns_vxsns_dsp
#define eVxsns_vxsns_dpn tKernel_eVxsns_vxsns_dpn
#define eVxsns_vxsns_tex tKernel_eVxsns_vxsns_tex
#define eVsns_vsns_ini   tKernel_eVsns_vsns_ini

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tKernel_TECSGENH */
