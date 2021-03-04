/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTask_TECSGEN_H
#define sTask_TECSGEN_H

/*
 * signature   :  sTask
 * global name :  sTask
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTask_VDES {
    struct tag_sTask_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTask_VMT {
    ER             (*act_tsk__T)( const struct tag_sTask_VDES *edp );
    ER_UINT        (*can_act__T)( const struct tag_sTask_VDES *edp );
    ER             (*ter_tsk__T)( const struct tag_sTask_VDES *edp );
    ER             (*chg_pri__T)( const struct tag_sTask_VDES *edp, PRI tskpri );
    ER             (*get_pri__T)( const struct tag_sTask_VDES *edp, PRI* p_tskpri );
    ER             (*wup_tsk__T)( const struct tag_sTask_VDES *edp );
    ER_UINT        (*can_wup__T)( const struct tag_sTask_VDES *edp );
    ER             (*rel_wai__T)( const struct tag_sTask_VDES *edp );
    ER             (*sus_tsk__T)( const struct tag_sTask_VDES *edp );
    ER             (*rsm_tsk__T)( const struct tag_sTask_VDES *edp );
    ER             (*frsm_tsk__T)( const struct tag_sTask_VDES *edp );
    ER             (*ras_tex__T)( const struct tag_sTask_VDES *edp, TEXPTN rasptn );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTask_Defined
#define  Descriptor_of_sTask_Defined
typedef struct { struct tag_sTask_VDES *vdes; } Descriptor( sTask );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STASK_ACT_TSK                   (1)
#define	FUNCID_STASK_CAN_ACT                   (2)
#define	FUNCID_STASK_TER_TSK                   (3)
#define	FUNCID_STASK_CHG_PRI                   (4)
#define	FUNCID_STASK_GET_PRI                   (5)
#define	FUNCID_STASK_WUP_TSK                   (6)
#define	FUNCID_STASK_CAN_WUP                   (7)
#define	FUNCID_STASK_REL_WAI                   (8)
#define	FUNCID_STASK_SUS_TSK                   (9)
#define	FUNCID_STASK_RSM_TSK                   (10)
#define	FUNCID_STASK_FRSM_TSK                  (11)
#define	FUNCID_STASK_RAS_TEX                   (12)

#endif /* sTask_TECSGEN_H */
