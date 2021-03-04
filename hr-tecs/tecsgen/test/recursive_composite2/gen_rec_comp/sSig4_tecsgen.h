/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSig4_TECSGEN_H
#define sSig4_TECSGEN_H

/*
 * signature   :  sSig4
 * global name :  sSig4
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSig4_VDES {
    struct tag_sSig4_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSig4_VMT {
    int32_t        (*func1__T)( const struct tag_sSig4_VDES *edp, int32_t a );
    int32_t        (*func2__T)( const struct tag_sSig4_VDES *edp, int32_t a );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSig4_Defined
#define  Descriptor_of_sSig4_Defined
typedef struct { struct tag_sSig4_VDES *vdes; } Descriptor( sSig4 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIG4_FUNC1                     (1)
#define	FUNCID_SSIG4_FUNC2                     (2)

#endif /* sSig4_TECSGEN_H */
