/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sMrubyCaller_TECSGEN_H
#define sMrubyCaller_TECSGEN_H

/*
 * signature   :  sMrubyCaller
 * global name :  sMrubyCaller
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sMrubyCaller_VDES {
    struct tag_sMrubyCaller_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sMrubyCaller_VMT {
    void           (*func__T)( const struct tag_sMrubyCaller_VDES *edp );
    int32_t        (*func3__T)( const struct tag_sMrubyCaller_VDES *edp, int32_t val, int32_t val2 );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sMrubyCaller_Defined
#define  Descriptor_of_sMrubyCaller_Defined
typedef struct { struct tag_sMrubyCaller_VDES *vdes; } Descriptor( sMrubyCaller );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SMRUBYCALLER_FUNC               (1)
#define	FUNCID_SMRUBYCALLER_FUNC3              (2)

#endif /* sMrubyCaller_TECSGEN_H */
