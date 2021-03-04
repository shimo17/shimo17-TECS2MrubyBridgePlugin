/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sMpf_TECSGEN_H
#define sMpf_TECSGEN_H

/*
 * signature   :  sMpf
 * global name :  sMpf
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sMpf_VDES {
    struct tag_sMpf_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sMpf_VMT {
    ER             (*get_mpf__T)( const struct tag_sMpf_VDES *edp, VP* p_blk );
    ER             (*pget_mpf__T)( const struct tag_sMpf_VDES *edp, VP* p_blk );
    ER             (*tget_mpf__T)( const struct tag_sMpf_VDES *edp, VP* p_blk, TMO tmout );
    ER             (*rel_mpf__T)( const struct tag_sMpf_VDES *edp, const void* blk );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sMpf_Defined
#define  Descriptor_of_sMpf_Defined
typedef struct { struct tag_sMpf_VDES *vdes; } Descriptor( sMpf );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SMPF_GET_MPF                    (1)
#define	FUNCID_SMPF_PGET_MPF                   (2)
#define	FUNCID_SMPF_TGET_MPF                   (3)
#define	FUNCID_SMPF_REL_MPF                    (4)

#endif /* sMpf_TECSGEN_H */
