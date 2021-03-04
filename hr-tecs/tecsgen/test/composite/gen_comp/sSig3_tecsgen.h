/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSig3_TECSGEN_H
#define sSig3_TECSGEN_H

/*
 * signature   :  sSig3
 * global name :  sSig3
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSig3_VDES {
    struct tag_sSig3_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSig3_VMT {
    ER             (*func1__T)( const struct tag_sSig3_VDES *edp, int32_t a );
    int32_t        (*func2__T)( const struct tag_sSig3_VDES *edp, int32_t a );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSig3_Defined
#define  Descriptor_of_sSig3_Defined
typedef struct { struct tag_sSig3_VDES *vdes; } Descriptor( sSig3 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIG3_FUNC1                     (1)
#define	FUNCID_SSIG3_FUNC2                     (2)

#endif /* sSig3_TECSGEN_H */
