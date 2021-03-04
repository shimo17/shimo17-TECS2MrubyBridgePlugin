/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCell4_tecsgen.h"
#include "tCell4_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEntry4 : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eEntry4 : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEntry4 : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig5_VDES cell_serv1_eEntry_des;

extern struct tag_sSig5_VDES cell_serv2_eEntry_des;

extern struct tag_sSig5_VDES rLargeComp_CellServ1_eEntry_des;

extern struct tag_sSig5_VDES rLargeComp_CellServ2_eEntry_des;

/* 呼び口配列 #_CPA_# */




/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCell4_INIB tCell4_INIB_tab[] = {
    /* cell: tCell4_CB_tab[0]:  comp1_comp12_cell4 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell_serv_CB_tab[1],                   /* cCall4 #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "comp1_comp12_cell4",                    /* name */
        101,                                     /* a */
    },
    /* cell: tCell4_CB_tab[1]:  comp2_comp12_cell4 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell_serv_CB_tab[0],                   /* cCall4 #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "comp2_comp12_cell4",                    /* name */
        10,                                      /* a */
    },
    /* cell: tCell4_CB_tab[2]:  LargeComp_comp1_comp12_cell4 id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell_serv_CB_tab[2],                   /* cCall4 #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "LargeComp_comp1_comp12_cell4",          /* name */
        101,                                     /* a */
    },
    /* cell: tCell4_CB_tab[3]:  LargeComp_comp2_comp12_cell4 id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell_serv_CB_tab[3],                   /* cCall4 #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "LargeComp_comp2_comp12_cell4",          /* name */
        10,                                      /* a */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eEntry4 : omitted by entry port optimize */
/* eEntry4 : omitted by entry port optimize */
/* eEntry4 : omitted by entry port optimize */
/* eEntry4 : omitted by entry port optimize */
