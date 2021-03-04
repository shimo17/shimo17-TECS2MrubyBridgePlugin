/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tEntryArray_tecsgen.h"
#include "tEntryArray_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* earray */
struct tag_tEntryArray_earray_DES {
    const struct tag_sArray_VMT *vmt;
    tEntryArray_IDX  idx;
    int_t  subscript;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* earray */
int32_t        tEntryArray_earray_func_skel( const struct tag_sArray_VDES *epd, int32_t a)
{
    struct tag_tEntryArray_earray_DES *lepd
        = (struct tag_tEntryArray_earray_DES *)epd;
    return tEntryArray_earray_func( lepd->idx, lepd->subscript, a );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* earray */
const struct tag_sArray_VMT tEntryArray_earray_MT_ = {
    tEntryArray_earray_func_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sArrayBack_VDES Callarray_callback_des0;
extern struct tag_sArrayBack_VDES Callarray_callback_des1;

/* 呼び口配列 #_CPA_# */
struct tag_sArrayBack_VDES * const Entryarray_callback[] = {
    &Callarray_callback_des0,
    &Callarray_callback_des1,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tEntryArray_INIB tEntryArray_INIB_tab[] = {
    /* cell: tEntryArray_CB_tab[0]:  Entryarray id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        Entryarray_callback,                     /* #_CCP3B_# */
        /* entry port #_EP_# */ 
        2,                                       /*  #_EEP_# */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tEntryArray_earray_DES Entryarray_earray_des0;
const struct tag_tEntryArray_earray_DES Entryarray_earray_des0 = {
    &tEntryArray_earray_MT_,
    &tEntryArray_INIB_tab[0],    /* INIB */
    0
};
extern const struct tag_tEntryArray_earray_DES Entryarray_earray_des1;
const struct tag_tEntryArray_earray_DES Entryarray_earray_des1 = {
    &tEntryArray_earray_MT_,
    &tEntryArray_INIB_tab[0],    /* INIB */
    1
};
