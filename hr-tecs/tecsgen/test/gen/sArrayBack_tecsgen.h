/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sArrayBack_TECSGEN_H
#define sArrayBack_TECSGEN_H

/*
 * signature   :  sArrayBack
 * global name :  sArrayBack
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sArrayBack_VDES {
    struct tag_sArrayBack_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sArrayBack_VMT {
    int32_t        (*func__T)( const struct tag_sArrayBack_VDES *edp, int32_t a );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sArrayBack_Defined
#define  Descriptor_of_sArrayBack_Defined
typedef struct { struct tag_sArrayBack_VDES *vdes; } Descriptor( sArrayBack );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SARRAYBACK_FUNC                 (1)

#endif /* sArrayBack_TECSGEN_H */
