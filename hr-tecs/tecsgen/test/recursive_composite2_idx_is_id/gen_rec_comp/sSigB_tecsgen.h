/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSigB_TECSGEN_H
#define sSigB_TECSGEN_H

/*
 * signature   :  sSigB
 * global name :  sSigB
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSigB_VDES {
    struct tag_sSigB_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSigB_VMT {
    int32_t        (*func1__T)( const struct tag_sSigB_VDES *edp, int32_t a );
    int32_t        (*func2__T)( const struct tag_sSigB_VDES *edp, int32_t a );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSigB_Defined
#define  Descriptor_of_sSigB_Defined
typedef struct { struct tag_sSigB_VDES *vdes; } Descriptor( sSigB );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIGB_FUNC1                     (1)
#define	FUNCID_SSIGB_FUNC2                     (2)

#endif /* sSigB_TECSGEN_H */
