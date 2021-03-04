/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef sFlg_TECSGEN_H
#define sFlg_TECSGEN_H

/*
 * signature   :  sFlg
 * global name :  sFlg
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_sFlg_VDES {
    struct tag_sFlg_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_sFlg_VMT {
    ER             (*set_flg__T)( const struct tag_sFlg_VDES *edp, FLGPTN setptn );
    ER             (*clr_flg__T)( const struct tag_sFlg_VDES *edp, FLGPTN clrptn );
    ER             (*wai_flg__T)( const struct tag_sFlg_VDES *edp, FLGPTN waiptn, MODE wfmode, FLGPTN* p_flgptn );
    ER             (*pol_flg__T)( const struct tag_sFlg_VDES *edp, FLGPTN waiptn, MODE wfmode, FLGPTN* p_flgptn );
    ER             (*twai_flg__T)( const struct tag_sFlg_VDES *edp, FLGPTN waiptn, MODE wfmode, FLGPTN* p_flgptn, TMO tmout );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_sFlg_Defined
#define  Descriptor_of_sFlg_Defined
typedef struct { struct tag_sFlg_VDES *vdes; } Descriptor( sFlg );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SFLG_SET_FLG                    (1)
#define	FUNCID_SFLG_CLR_FLG                    (2)
#define	FUNCID_SFLG_WAI_FLG                    (3)
#define	FUNCID_SFLG_POL_FLG                    (4)
#define	FUNCID_SFLG_TWAI_FLG                   (5)

#endif /* sFlg_TECSGEN_H */
