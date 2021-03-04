/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCell1_tecsgen.h"
#include "tCell1_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEntry : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eEntry : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEntry : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig1_VDES cell_serv_eEntry_des;

extern struct tag_sSig1_VDES cell_serv_eEntry_des;

extern struct tag_sSig1_VDES cell_serv2_eEntry_des;

/* 呼び口配列 #_CPA_# */



/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCell1_INIB tCell1_INIB_tab[] = {
    /* cell: tCell1_CB_tab[0]:  compcell1_cell1 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell_serv_CB_tab[0],                   /* cCall #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        VAL_tComposite_compcell1,                /* a */
    },
    /* cell: tCell1_CB_tab[1]:  compcell2_cell1 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell_serv_CB_tab[0],                   /* cCall #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        100,                                     /* a */
    },
    /* cell: tCell1_CB_tab[2]:  active_singleton_cell1 id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell_serv_CB_tab[1],                   /* cCall #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        2000,                                    /* a */
    },
};

/* セル CB #_CB_# */
struct tag_tCell1_CB tCell1_CB_tab[] = {
    /* cell: tCell1_CB_tab[0]:  compcell1_cell1 id=1 */
    {
        &tCell1_INIB_tab[0],                     /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        VAL_tComposite_compcell1,                /* b */
    },
    /* cell: tCell1_CB_tab[1]:  compcell2_cell1 id=2 */
    {
        &tCell1_INIB_tab[1],                     /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        100,                                     /* b */
    },
    /* cell: tCell1_CB_tab[2]:  active_singleton_cell1 id=3 */
    {
        &tCell1_INIB_tab[2],                     /* _inib */
        /* entry port #_EP_# */ 
        /* var */ 
        2000,                                    /* b */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eEntry : omitted by entry port optimize */
/* eEntry : omitted by entry port optimize */
/* eEntry : omitted by entry port optimize */
