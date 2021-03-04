/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTim_TECSGEN_H
#define sTim_TECSGEN_H

/*
 * signature   :  sTim
 * global name :  sTim
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTim_VDES {
    struct tag_sTim_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTim_VMT {
    ER             (*set_tim__T)( const struct tag_sTim_VDES *edp, const SYSTIM* p_systim );
    ER             (*get_tim__T)( const struct tag_sTim_VDES *edp, SYSTIM* p_systim );
    ER             (*isig_tim__T)( const struct tag_sTim_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTim_Defined
#define  Descriptor_of_sTim_Defined
typedef struct { struct tag_sTim_VDES *vdes; } Descriptor( sTim );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STIM_SET_TIM                    (1)
#define	FUNCID_STIM_GET_TIM                    (2)
#define	FUNCID_STIM_ISIG_TIM                   (3)

#endif /* sTim_TECSGEN_H */
