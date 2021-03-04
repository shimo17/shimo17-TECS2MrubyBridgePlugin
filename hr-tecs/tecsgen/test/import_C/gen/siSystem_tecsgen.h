/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef siSystem_TECSGEN_H
#define siSystem_TECSGEN_H

/*
 * signature   :  siSystem
 * global name :  siSystem
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_siSystem_VDES {
    struct tag_siSystem_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_siSystem_VMT {
    ER             (*irot_rdq__T)( const struct tag_siSystem_VDES *edp, PRI tskpri );
    ER             (*iget_tid__T)( const struct tag_siSystem_VDES *edp, ID* p_tskid );
    ER             (*iloc_cpu__T)( const struct tag_siSystem_VDES *edp );
    ER             (*iunl_cpu__T)( const struct tag_siSystem_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_siSystem_Defined
#define  Descriptor_of_siSystem_Defined
typedef struct { struct tag_siSystem_VDES *vdes; } Descriptor( siSystem );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SISYSTEM_IROT_RDQ               (1)
#define	FUNCID_SISYSTEM_IGET_TID               (2)
#define	FUNCID_SISYSTEM_ILOC_CPU               (3)
#define	FUNCID_SISYSTEM_IUNL_CPU               (4)

#endif /* siSystem_TECSGEN_H */
