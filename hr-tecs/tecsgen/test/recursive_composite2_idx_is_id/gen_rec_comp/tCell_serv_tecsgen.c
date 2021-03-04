/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCell_serv_tecsgen.h"
#include "tCell_serv_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEntry : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eEntry : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEntry : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: cell_serv1_CB:  cell_serv1 id=9 */
const tCell_serv_INIB cell_serv1_INIB = {
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    5,                                       /* a */
};

/* cell: cell_serv2_CB:  cell_serv2 id=10 */
const tCell_serv_INIB cell_serv2_INIB = {
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    201,                                     /* a */
};

/* 受け口ディスクリプタ #_EPD_# */
/* eEntry : omitted by entry port optimize */
/* eEntry : omitted by entry port optimize */
/* ID to INIB table #_INTAB_# */
tCell_serv_INIB *tCell_serv_INIB_tab[] ={
    &cell_serv1_INIB,
    &cell_serv2_INIB,
};
