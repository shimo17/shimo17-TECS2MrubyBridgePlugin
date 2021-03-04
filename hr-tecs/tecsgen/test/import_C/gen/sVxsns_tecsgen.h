/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sVxsns_TECSGEN_H
#define sVxsns_TECSGEN_H

/*
 * signature   :  sVxsns
 * global name :  sVxsns
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sVxsns_VDES {
    struct tag_sVxsns_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sVxsns_VMT {
    BOOL           (*vxsns_ctx__T)( const struct tag_sVxsns_VDES *edp, VP p_excinf );
    BOOL           (*vxsns_loc__T)( const struct tag_sVxsns_VDES *edp, VP p_excinf );
    BOOL           (*vxsns_dsp__T)( const struct tag_sVxsns_VDES *edp, VP p_excinf );
    BOOL           (*vxsns_dpn__T)( const struct tag_sVxsns_VDES *edp, VP p_excinf );
    BOOL           (*vxsns_tex__T)( const struct tag_sVxsns_VDES *edp, VP p_excinf );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sVxsns_Defined
#define  Descriptor_of_sVxsns_Defined
typedef struct { struct tag_sVxsns_VDES *vdes; } Descriptor( sVxsns );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SVXSNS_VXSNS_CTX                (1)
#define	FUNCID_SVXSNS_VXSNS_LOC                (2)
#define	FUNCID_SVXSNS_VXSNS_DSP                (3)
#define	FUNCID_SVXSNS_VXSNS_DPN                (4)
#define	FUNCID_SVXSNS_VXSNS_TEX                (5)

#endif /* sVxsns_TECSGEN_H */
