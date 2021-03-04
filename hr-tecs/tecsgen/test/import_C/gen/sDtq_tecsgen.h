/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sDtq_TECSGEN_H
#define sDtq_TECSGEN_H

/*
 * signature   :  sDtq
 * global name :  sDtq
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sDtq_VDES {
    struct tag_sDtq_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sDtq_VMT {
    ER             (*snd_dtq__T)( const struct tag_sDtq_VDES *edp, const void* data );
    ER             (*psnd_dtq__T)( const struct tag_sDtq_VDES *edp, const void* data );
    ER             (*tsnd_dtq__T)( const struct tag_sDtq_VDES *edp, const void* data, TMO tmout );
    ER             (*fsnd_dtq__T)( const struct tag_sDtq_VDES *edp, const void* data );
    ER             (*rcv_dtq__T)( const struct tag_sDtq_VDES *edp, VP_INT* p_data );
    ER             (*prcv_dtq__T)( const struct tag_sDtq_VDES *edp, VP_INT* p_data );
    ER             (*trcv_dtq__T)( const struct tag_sDtq_VDES *edp, VP_INT* p_data, TMO tmout );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sDtq_Defined
#define  Descriptor_of_sDtq_Defined
typedef struct { struct tag_sDtq_VDES *vdes; } Descriptor( sDtq );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SDTQ_SND_DTQ                    (1)
#define	FUNCID_SDTQ_PSND_DTQ                   (2)
#define	FUNCID_SDTQ_TSND_DTQ                   (3)
#define	FUNCID_SDTQ_FSND_DTQ                   (4)
#define	FUNCID_SDTQ_RCV_DTQ                    (5)
#define	FUNCID_SDTQ_PRCV_DTQ                   (6)
#define	FUNCID_SDTQ_TRCV_DTQ                   (7)

#endif /* sDtq_TECSGEN_H */
