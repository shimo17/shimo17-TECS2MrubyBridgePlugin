/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sTex_TECSGEN_H
#define sTex_TECSGEN_H

/*
 * signature   :  sTex
 * global name :  sTex
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sTex_VDES {
    struct tag_sTex_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sTex_VMT {
    ER             (*tex__T)( const struct tag_sTex_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sTex_Defined
#define  Descriptor_of_sTex_Defined
typedef struct { struct tag_sTex_VDES *vdes; } Descriptor( sTex );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STEX_TEX                        (1)

#endif /* sTex_TECSGEN_H */
