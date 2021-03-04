/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sMain_TECSGEN_H
#define sMain_TECSGEN_H

/*
 * signature   :  sMain
 * global name :  sMain
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sMain_VDES {
    struct tag_sMain_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sMain_VMT {
    ER             (*main__T)( const struct tag_sMain_VDES *edp, const void* exinf );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sMain_Defined
#define  Descriptor_of_sMain_Defined
typedef struct { struct tag_sMain_VDES *vdes; } Descriptor( sMain );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SMAIN_MAIN                      (1)

#endif /* sMain_TECSGEN_H */
