/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tTracePlugin_sSigBool_T_tecsgen.h"
#include "tTracePlugin_sSigBool_T_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eThroughEntry */
struct tag_tTracePlugin_sSigBool_T_eThroughEntry_DES {
    const struct tag_sSigBool_T_VMT *vmt;
    tTracePlugin_sSigBool_T_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eThroughEntry */
bool_t         tTracePlugin_sSigBool_T_eThroughEntry_func_skel( const struct tag_sSigBool_T_VDES *epd, bool_t boo, bool_t* boo2)
{
    struct tag_tTracePlugin_sSigBool_T_eThroughEntry_DES *lepd
        = (struct tag_tTracePlugin_sSigBool_T_eThroughEntry_DES *)epd;
    return tTracePlugin_sSigBool_T_eThroughEntry_func( lepd->idx, boo, boo2 );
}
bool_t*        tTracePlugin_sSigBool_T_eThroughEntry_func2_skel( const struct tag_sSigBool_T_VDES *epd, const bool_t* boo, int sz)
{
    struct tag_tTracePlugin_sSigBool_T_eThroughEntry_DES *lepd
        = (struct tag_tTracePlugin_sSigBool_T_eThroughEntry_DES *)epd;
    return tTracePlugin_sSigBool_T_eThroughEntry_func2( lepd->idx, boo, sz );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eThroughEntry */
const struct tag_sSigBool_T_VMT tTracePlugin_sSigBool_T_eThroughEntry_MT_ = {
    tTracePlugin_sSigBool_T_eThroughEntry_func_skel,
    tTracePlugin_sSigBool_T_eThroughEntry_func2_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSigBool_T_VDES Boo_eBooo_des;

extern struct tag_sSigBool_T_VDES Boo2_eBooo_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tTracePlugin_sSigBool_T_INIB tTracePlugin_sSigBool_T_INIB_tab[] = {
    /* cell: tTracePlugin_sSigBool_T_CB_tab[0]:  TracePlugin__0 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCTBool_T_CB_tab[0],                    /* cCall #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        ": ",                                    /* probeName_str */
        "boo_client",                            /* from_str */
    },
    /* cell: tTracePlugin_sSigBool_T_CB_tab[1]:  TracePlugin__1 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCTBool_T_CB_tab[1],                    /* cCall #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        ": ",                                    /* probeName_str */
        "boo_client",                            /* from_str */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tTracePlugin_sSigBool_T_eThroughEntry_DES TracePlugin__0_eThroughEntry_des;
const struct tag_tTracePlugin_sSigBool_T_eThroughEntry_DES TracePlugin__0_eThroughEntry_des = {
    &tTracePlugin_sSigBool_T_eThroughEntry_MT_,
    &tTracePlugin_sSigBool_T_INIB_tab[0],   /* INIB */
};
extern const struct tag_tTracePlugin_sSigBool_T_eThroughEntry_DES TracePlugin__1_eThroughEntry_des;
const struct tag_tTracePlugin_sSigBool_T_eThroughEntry_DES TracePlugin__1_eThroughEntry_des = {
    &tTracePlugin_sSigBool_T_eThroughEntry_MT_,
    &tTracePlugin_sSigBool_T_INIB_tab[1],   /* INIB */
};
