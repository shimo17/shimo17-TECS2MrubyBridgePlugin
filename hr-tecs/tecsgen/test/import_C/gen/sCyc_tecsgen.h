/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sCyc_TECSGEN_H
#define sCyc_TECSGEN_H

/*
 * signature   :  sCyc
 * global name :  sCyc
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sCyc_VDES {
    struct tag_sCyc_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sCyc_VMT {
    ER             (*sta_cyc__T)( const struct tag_sCyc_VDES *edp );
    ER             (*stp_cyc__T)( const struct tag_sCyc_VDES *edp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sCyc_Defined
#define  Descriptor_of_sCyc_Defined
typedef struct { struct tag_sCyc_VDES *vdes; } Descriptor( sCyc );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SCYC_STA_CYC                    (1)
#define	FUNCID_SCYC_STP_CYC                    (2)

#endif /* sCyc_TECSGEN_H */
