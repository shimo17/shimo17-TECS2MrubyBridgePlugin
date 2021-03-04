/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCEXP_tecsgen.h"
#include "tCEXP_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */



/* 呼び口配列 #_CPA_# */



/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCEXP_INIB tCEXP_INIB_tab[] = {
    /* cell: tCEXP_CB_tab[0]:  CEXP id=1 */
    {
        /* attribute(RO) */ 
        DEFINED_INTVAL,                          /* val */
    },
    /* cell: tCEXP_CB_tab[1]:  CEXP2 id=2 */
    {
        /* attribute(RO) */ 
        NOTDEFINED_INTVAL,                       /* val */
    },
    /* cell: tCEXP_CB_tab[2]:  CEXP3 id=3 */
    {
        /* attribute(RO) */ 
        CONST_INTVAL,                            /* val */
    },
};

/* セル CB #_CB_# */
struct tag_tCEXP_CB tCEXP_CB_tab[] = {
    /* cell: tCEXP_CB_tab[0]:  CEXP id=1 */
    {
        &tCEXP_INIB_tab[0],                      /* _inib */
        /* var */ 
        DEFINED_INTVAL,                          /* vval */
    },
    /* cell: tCEXP_CB_tab[1]:  CEXP2 id=2 */
    {
        &tCEXP_INIB_tab[1],                      /* _inib */
        /* var */ 
        NOTDEFINED_INTVAL,                       /* vval */
    },
    /* cell: tCEXP_CB_tab[2]:  CEXP3 id=3 */
    {
        &tCEXP_INIB_tab[2],                      /* _inib */
        /* var */ 
        CONST_INTVAL,                            /* vval */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
