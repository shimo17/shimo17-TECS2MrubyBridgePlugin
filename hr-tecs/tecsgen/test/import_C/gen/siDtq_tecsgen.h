/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef siDtq_TECSGEN_H
#define siDtq_TECSGEN_H

/*
 * signature   :  siDtq
 * global name :  siDtq
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_siDtq_VDES {
    struct tag_siDtq_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_siDtq_VMT {
    ER             (*ipsnd_dtq__T)( const struct tag_siDtq_VDES *edp, const void* data );
    ER             (*ifsnd_dtq__T)( const struct tag_siDtq_VDES *edp, const void* data );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_siDtq_Defined
#define  Descriptor_of_siDtq_Defined
typedef struct { struct tag_siDtq_VDES *vdes; } Descriptor( siDtq );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIDTQ_IPSND_DTQ                 (1)
#define	FUNCID_SIDTQ_IFSND_DTQ                 (2)

#endif /* siDtq_TECSGEN_H */
