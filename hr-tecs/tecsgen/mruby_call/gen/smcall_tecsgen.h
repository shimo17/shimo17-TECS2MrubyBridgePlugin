/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef smcall_TECSGEN_H
#define smcall_TECSGEN_H

/*
 * signature   :  smcall
 * global name :  smcall
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_smcall_VDES {
    struct tag_smcall_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_smcall_VMT {
    void           (*func__T)( const struct tag_smcall_VDES *edp );
    int32_t        (*func2__T)( const struct tag_smcall_VDES *edp, int32_t val, int32_t val6 );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_smcall_Defined
#define  Descriptor_of_smcall_Defined
typedef struct { struct tag_smcall_VDES *vdes; } Descriptor( smcall );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SMCALL_FUNC                     (1)
#define	FUNCID_SMCALL_FUNC2                    (2)

#endif /* smcall_TECSGEN_H */
