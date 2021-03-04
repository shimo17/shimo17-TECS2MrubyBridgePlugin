/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef siTask_TECSGEN_H
#define siTask_TECSGEN_H

/*
 * signature   :  siTask
 * global name :  siTask
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_siTask_VDES {
    struct tag_siTask_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_siTask_VMT {
    ER             (*iact_tsk__T)( const struct tag_siTask_VDES *edp );
    ER             (*iwup_tsk__T)( const struct tag_siTask_VDES *edp );
    ER             (*irel_wai__T)( const struct tag_siTask_VDES *edp );
    ER             (*iras_tex__T)( const struct tag_siTask_VDES *edp, TEXPTN rasptn );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_siTask_Defined
#define  Descriptor_of_siTask_Defined
typedef struct { struct tag_siTask_VDES *vdes; } Descriptor( siTask );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SITASK_IACT_TSK                 (1)
#define	FUNCID_SITASK_IWUP_TSK                 (2)
#define	FUNCID_SITASK_IREL_WAI                 (3)
#define	FUNCID_SITASK_IRAS_TEX                 (4)

#endif /* siTask_TECSGEN_H */
