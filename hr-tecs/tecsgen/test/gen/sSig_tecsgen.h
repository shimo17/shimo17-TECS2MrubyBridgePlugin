/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSig_TECSGEN_H
#define sSig_TECSGEN_H

/*
 * signature   :  sSig
 * global name :  sSig
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSig_VDES {
    struct tag_sSig_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSig_VMT {
    ER             (*func1__T)( const struct tag_sSig_VDES *edp, int32_t arg1 );
    ER             (*func2__T)( const struct tag_sSig_VDES *edp, int32_t arg1 );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSig_Defined
#define  Descriptor_of_sSig_Defined
typedef struct { struct tag_sSig_VDES *vdes; } Descriptor( sSig );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIG_FUNC1                      (1)
#define	FUNCID_SSIG_FUNC2                      (2)

#endif /* sSig_TECSGEN_H */
