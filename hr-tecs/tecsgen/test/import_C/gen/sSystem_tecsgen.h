/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSystem_TECSGEN_H
#define sSystem_TECSGEN_H

/*
 * signature   :  sSystem
 * global name :  sSystem
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSystem_VDES {
    struct tag_sSystem_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSystem_VMT {
    ER             (*dis_tex__T)( const struct tag_sSystem_VDES *edp );
    ER             (*ena_tex__T)( const struct tag_sSystem_VDES *edp );
    BOOL           (*sns_tex__T)( const struct tag_sSystem_VDES *edp );
    void           (*ext_tsk__T)( const struct tag_sSystem_VDES *edp );
    ER             (*slp_tsk__T)( const struct tag_sSystem_VDES *edp );
    ER             (*tslp_tsk__T)( const struct tag_sSystem_VDES *edp, TMO tmout );
    ER             (*dly_tsk__T)( const struct tag_sSystem_VDES *edp, RELTIM dlytim );
    ER             (*rot_rdq__T)( const struct tag_sSystem_VDES *edp, PRI tskpri );
    ER             (*get_tid__T)( const struct tag_sSystem_VDES *edp, ID* p_tskid );
    ER             (*loc_cpu__T)( const struct tag_sSystem_VDES *edp );
    ER             (*unl_cpu__T)( const struct tag_sSystem_VDES *edp );
    ER             (*dis_dsp__T)( const struct tag_sSystem_VDES *edp );
    ER             (*ena_dsp__T)( const struct tag_sSystem_VDES *edp );
    BOOL           (*sns_ctx__T)( const struct tag_sSystem_VDES *edp );
    BOOL           (*sns_loc__T)( const struct tag_sSystem_VDES *edp );
    BOOL           (*sns_dsp__T)( const struct tag_sSystem_VDES *edp );
    BOOL           (*sns_dpn__T)( const struct tag_sSystem_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSystem_Defined
#define  Descriptor_of_sSystem_Defined
typedef struct { struct tag_sSystem_VDES *vdes; } Descriptor( sSystem );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSYSTEM_DIS_TEX                 (1)
#define	FUNCID_SSYSTEM_ENA_TEX                 (2)
#define	FUNCID_SSYSTEM_SNS_TEX                 (3)
#define	FUNCID_SSYSTEM_EXT_TSK                 (4)
#define	FUNCID_SSYSTEM_SLP_TSK                 (5)
#define	FUNCID_SSYSTEM_TSLP_TSK                (6)
#define	FUNCID_SSYSTEM_DLY_TSK                 (7)
#define	FUNCID_SSYSTEM_ROT_RDQ                 (8)
#define	FUNCID_SSYSTEM_GET_TID                 (9)
#define	FUNCID_SSYSTEM_LOC_CPU                 (10)
#define	FUNCID_SSYSTEM_UNL_CPU                 (11)
#define	FUNCID_SSYSTEM_DIS_DSP                 (12)
#define	FUNCID_SSYSTEM_ENA_DSP                 (13)
#define	FUNCID_SSYSTEM_SNS_CTX                 (14)
#define	FUNCID_SSYSTEM_SNS_LOC                 (15)
#define	FUNCID_SSYSTEM_SNS_DSP                 (16)
#define	FUNCID_SSYSTEM_SNS_DPN                 (17)

#endif /* sSystem_TECSGEN_H */
