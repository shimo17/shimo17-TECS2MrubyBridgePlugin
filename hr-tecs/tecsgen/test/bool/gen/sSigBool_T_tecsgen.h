/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSigBool_T_TECSGEN_H
#define sSigBool_T_TECSGEN_H

/*
 * signature   :  sSigBool_T
 * global name :  sSigBool_T
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSigBool_T_VDES {
    struct tag_sSigBool_T_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSigBool_T_VMT {
    bool_t         (*func__T)( const struct tag_sSigBool_T_VDES *edp, bool_t boo, bool_t* boo2 );
    bool_t*        (*func2__T)( const struct tag_sSigBool_T_VDES *edp, const bool_t* boo, int sz );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSigBool_T_Defined
#define  Descriptor_of_sSigBool_T_Defined
typedef struct { struct tag_sSigBool_T_VDES *vdes; } Descriptor( sSigBool_T );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSIGBOOL_T_FUNC                 (1)
#define	FUNCID_SSIGBOOL_T_FUNC2                (2)

#endif /* sSigBool_T_TECSGEN_H */
