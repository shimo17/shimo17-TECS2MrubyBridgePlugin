/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nNS_tLedout_tecsgen.h"
#include "nNS_tLedout_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nNS_tLedout_INIB nNS_tLedout_INIB_tab[] = {
    /* cell: nNS_tLedout_CB_tab[0]:  ce id=1 */
    {
        /* attribute(RO) */ 
        100,                                     /* a */
        99,                                      /* ab */
        "abc",                                   /* s */
    },
};

/* セル CB #_CB_# */
struct tag_nNS_tLedout_CB nNS_tLedout_CB_tab[] = {
    /* cell: nNS_tLedout_CB_tab[0]:  ce id=1 */
    {
        &nNS_tLedout_INIB_tab[0],                /* _inib */
        /* var */ 
        0,                                       /* b */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
