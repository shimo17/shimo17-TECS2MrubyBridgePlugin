/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sVsns_TECSGEN_H
#define sVsns_TECSGEN_H

/*
 * signature   :  sVsns
 * global name :  sVsns
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sVsns_VDES {
    struct tag_sVsns_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sVsns_VMT {
    BOOL           (*vsns_ini__T)( const struct tag_sVsns_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sVsns_Defined
#define  Descriptor_of_sVsns_Defined
typedef struct { struct tag_sVsns_VDES *vdes; } Descriptor( sVsns );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SVSNS_VSNS_INI                  (1)

#endif /* sVsns_TECSGEN_H */
