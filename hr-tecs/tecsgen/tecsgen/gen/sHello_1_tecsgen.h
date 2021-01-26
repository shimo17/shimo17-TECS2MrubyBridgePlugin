/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sHello_1_TECSGEN_H
#define sHello_1_TECSGEN_H

/*
 * signature   :  sHello_1
 * global name :  sHello_1
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sHello_1_VDES {
    struct tag_sHello_1_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sHello_1_VMT {
    void           (*func__T)( const struct tag_sHello_1_VDES *edp );
    int16_t        (*func1__T)( const struct tag_sHello_1_VDES *edp );
    int32_t        (*func2__T)( const struct tag_sHello_1_VDES *edp, const char* str );
    int32_t        (*func3__T)( const struct tag_sHello_1_VDES *edp, int32_t val, int32_t val2 );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sHello_1_Defined
#define  Descriptor_of_sHello_1_Defined
typedef struct { struct tag_sHello_1_VDES *vdes; } Descriptor( sHello_1 );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SHELLO_1_FUNC                   (1)
#define	FUNCID_SHELLO_1_FUNC1                  (2)
#define	FUNCID_SHELLO_1_FUNC2                  (3)
#define	FUNCID_SHELLO_1_FUNC3                  (4)

#endif /* sHello_1_TECSGEN_H */
