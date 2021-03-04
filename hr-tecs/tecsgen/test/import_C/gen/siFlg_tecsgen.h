/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef siFlg_TECSGEN_H
#define siFlg_TECSGEN_H

/*
 * signature   :  siFlg
 * global name :  siFlg
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_siFlg_VDES {
    struct tag_siFlg_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_siFlg_VMT {
    ER             (*iset_flg__T)( const struct tag_siFlg_VDES *edp, FLGPTN setptn );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_siFlg_Defined
#define  Descriptor_of_siFlg_Defined
typedef struct { struct tag_siFlg_VDES *vdes; } Descriptor( siFlg );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIFLG_ISET_FLG                  (1)

#endif /* siFlg_TECSGEN_H */
