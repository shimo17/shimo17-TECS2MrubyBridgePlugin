/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCell2_tecsgen.h"
#include "tCell2_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEntry : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eEntry : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEntry : omitted by entry port optimize */

/* 変数(構造体、配列)初期値 #_AVI_# */
const int32_t	tCell2_c_VAR_INIT[2] = { 1, 2, };

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig2_VDES compcell1_cell1_eEntry_des;

extern struct tag_sSig2_VDES compcell2_cell1_eEntry_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCell2_INIB tCell2_INIB_tab[] = {
    /* cell: tCell2_CB_tab[0]:  compcell1_cell2 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell1_CB_tab[0],                       /* cCall #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        VAL_tComposite_compcell1,                /* a */
        VAL_tComposite_compcell1,                /* b */
    },
    /* cell: tCell2_CB_tab[1]:  compcell2_cell2 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell1_CB_tab[1],                       /* cCall #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        100,                                     /* a */
        VAL_tComposite_compcell2,                /* b */
    },
};

/* セル CB #_CB_# */
struct tag_tCell2_CB tCell2_CB_tab[] = {
    /* cell: tCell2_CB_tab[0]:  compcell1_cell2 id=1 */
    {
        &tCell2_INIB_tab[0],                     /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        {
            1,                                       /* c[0] */
            2,                                       /* c[1] */
        },
    },
    /* cell: tCell2_CB_tab[1]:  compcell2_cell2 id=2 */
    {
        &tCell2_INIB_tab[1],                     /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        {
            1,                                       /* c[0] */
            2,                                       /* c[1] */
        },
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eEntry : omitted by entry port optimize */
/* eEntry : omitted by entry port optimize */
