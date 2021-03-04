/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCallArray_tecsgen.h"
#include "tCallArray_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* callback */
struct tag_tCallArray_callback_DES {
    const struct tag_sArrayBack_VMT *vmt;
    tCallArray_IDX  idx;
    int_t  subscript;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* callback */
int32_t        tCallArray_callback_func_skel( const struct tag_sArrayBack_VDES *epd, int32_t a)
{
    struct tag_tCallArray_callback_DES *lepd
        = (struct tag_tCallArray_callback_DES *)epd;
    return tCallArray_callback_func( lepd->idx, lepd->subscript, a );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* callback : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sArray_VDES Entryarray_earray_des0;
extern struct tag_sArray_VDES Entryarray_earray_des1;
extern struct tag_sArray_VDES Entryarray_earray_des0;
extern struct tag_sArray_VDES Entryarray_earray_des1;

/* 呼び口配列 #_CPA_# */
struct tag_sArray_VDES * const Callarray_carray[] = {
    &Entryarray_earray_des0,
    &Entryarray_earray_des1,
};
struct tag_sArray_VDES * const Callarray_carray2[] = {
    &Entryarray_earray_des0,
    &Entryarray_earray_des1,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCallArray_INIB tCallArray_INIB_tab[] = {
    /* cell: tCallArray_CB_tab[0]:  Callarray id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        Callarray_carray,                        /* #_CCP3B_# */
        Callarray_carray2,                       /* #_CCP3B_# */
        2,                                       /* length of carray2 (n_carray2) #_CCP4_# */
        /* entry port #_EP_# */ 
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCallArray_callback_DES Callarray_callback_des0;
const struct tag_tCallArray_callback_DES Callarray_callback_des0 = {
    0,
    &tCallArray_INIB_tab[0],    /* INIB */
    0
};
extern const struct tag_tCallArray_callback_DES Callarray_callback_des1;
const struct tag_tCallArray_callback_DES Callarray_callback_des1 = {
    0,
    &tCallArray_INIB_tab[0],    /* INIB */
    1
};
