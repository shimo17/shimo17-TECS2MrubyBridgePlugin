/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCTBool_TClient_tecsgen.h"
#include "tCTBool_TClient_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSigBool_T_VDES TracePlugin__0_eThroughEntry_des;
extern struct tag_sSigBool_T_VDES TracePlugin__1_eThroughEntry_des;

/* 呼び口配列 #_CPA_# */
struct tag_sSigBool_T_VDES * const boo_client_cBooo[] = {
    &TracePlugin__0_eThroughEntry_des,
    &TracePlugin__1_eThroughEntry_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCTBool_TClient_INIB tCTBool_TClient_SINGLE_CELL_INIB = 
{
    /* call port (INIB) #_CP_# */ 
    boo_client_cBooo,                        /* #_CCP3B_# */
    2,                                       /* length of cBooo (n_cBooo) #_CCP4_# */
};

/* 受け口ディスクリプタ #_EPD_# */
