/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sSem_TECSGEN_H
#define sSem_TECSGEN_H

/*
 * signature   :  sSem
 * global name :  sSem
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sSem_VDES {
    struct tag_sSem_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sSem_VMT {
    ER             (*sig_sem__T)( const struct tag_sSem_VDES *edp );
    ER             (*isig_sem__T)( const struct tag_sSem_VDES *edp );
    ER             (*wai_sem__T)( const struct tag_sSem_VDES *edp );
    ER             (*pol_sem__T)( const struct tag_sSem_VDES *edp );
    ER             (*twai_sem__T)( const struct tag_sSem_VDES *edp, TMO tmout );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sSem_Defined
#define  Descriptor_of_sSem_Defined
typedef struct { struct tag_sSem_VDES *vdes; } Descriptor( sSem );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSEM_SIG_SEM                    (1)
#define	FUNCID_SSEM_ISIG_SEM                   (2)
#define	FUNCID_SSEM_WAI_SEM                    (3)
#define	FUNCID_SSEM_POL_SEM                    (4)
#define	FUNCID_SSEM_TWAI_SEM                   (5)

#endif /* sSem_TECSGEN_H */
