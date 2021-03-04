/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sArray_TECSGEN_H
#define sArray_TECSGEN_H

/*
 * signature   :  sArray
 * global name :  sArray
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sArray_VDES {
    struct tag_sArray_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sArray_VMT {
    int32_t        (*func__T)( const struct tag_sArray_VDES *edp, int32_t a );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sArray_Defined
#define  Descriptor_of_sArray_Defined
typedef struct { struct tag_sArray_VDES *vdes; } Descriptor( sArray );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SARRAY_FUNC                     (1)

#endif /* sArray_TECSGEN_H */
