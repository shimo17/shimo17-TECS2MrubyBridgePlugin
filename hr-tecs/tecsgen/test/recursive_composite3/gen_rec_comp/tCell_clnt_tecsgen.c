/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCell_clnt_tecsgen.h"
#include "tCell_clnt_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig1_VDES comp1_comp11_cell1_eEntry1_des;
extern struct tag_sSig1_VDES comp2_comp11_cell1_eEntry1_des;
extern struct tag_sSig1_VDES rLargeComp_LargeComp_comp1_comp11_cell1_eEntry1_des;
extern struct tag_sSig1_VDES rLargeComp_LargeComp_comp2_comp11_cell1_eEntry1_des;

/* 呼び口配列 #_CPA_# */
struct tag_sSig1_VDES * const cell_clnt_cCall[] = {
    &comp1_comp11_cell1_eEntry1_des,
    &comp2_comp11_cell1_eEntry1_des,
    &rLargeComp_LargeComp_comp1_comp11_cell1_eEntry1_des,
    &rLargeComp_LargeComp_comp2_comp11_cell1_eEntry1_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCell_clnt_INIB tCell_clnt_INIB_tab[] = {
    /* cell: tCell_clnt_CB_tab[0]:  cell_clnt id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        cell_clnt_cCall,                         /* #_CCP3B_# */
        4,                                       /* length of cCall (n_cCall) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        30,                                      /* a */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eMain : omitted by entry port optimize */
