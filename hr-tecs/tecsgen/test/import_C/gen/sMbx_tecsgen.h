/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sMbx_TECSGEN_H
#define sMbx_TECSGEN_H

/*
 * signature   :  sMbx
 * global name :  sMbx
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sMbx_VDES {
    struct tag_sMbx_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sMbx_VMT {
    ER             (*snd_mbx__T)( const struct tag_sMbx_VDES *edp, const T_MSG* pk_msg );
    ER             (*rcv_mbx__T)( const struct tag_sMbx_VDES *edp, T_MSG** ppk_msg );
    ER             (*prcv_mbx__T)( const struct tag_sMbx_VDES *edp, T_MSG** ppk_msg );
    ER             (*trcv_mbx__T)( const struct tag_sMbx_VDES *edp, T_MSG** ppk_msg, TMO tmout );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sMbx_Defined
#define  Descriptor_of_sMbx_Defined
typedef struct { struct tag_sMbx_VDES *vdes; } Descriptor( sMbx );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SMBX_SND_MBX                    (1)
#define	FUNCID_SMBX_RCV_MBX                    (2)
#define	FUNCID_SMBX_PRCV_MBX                   (3)
#define	FUNCID_SMBX_TRCV_MBX                   (4)

#endif /* sMbx_TECSGEN_H */
