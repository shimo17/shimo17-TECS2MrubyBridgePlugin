/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sMcall_TECSGEN_H
#define sMcall_TECSGEN_H

/*
 * signature   :  sMcall
 * global name :  sMcall
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sMcall_VDES {
    struct tag_sMcall_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sMcall_VMT {
    void           (*Hello__T)( const struct tag_sMcall_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sMcall_Defined
#define  Descriptor_of_sMcall_Defined
typedef struct { struct tag_sMcall_VDES *vdes; } Descriptor( sMcall );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SMCALL_HELLO                    (1)

#endif /* sMcall_TECSGEN_H */
