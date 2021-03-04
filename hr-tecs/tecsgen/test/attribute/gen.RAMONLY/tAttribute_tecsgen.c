/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tAttribute_tecsgen.h"
#include "tAttribute_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tAttribute_eMain_DES {
    const struct tag_sMain_VMT *vmt;
    tAttribute_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
ER             tAttribute_eMain_main_skel( const struct tag_sMain_VDES *epd)
{
    struct tag_tAttribute_eMain_DES *lepd
        = (struct tag_tAttribute_eMain_DES *)epd;
    return tAttribute_eMain_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sMain_VMT tAttribute_eMain_MT_ = {
    tAttribute_eMain_main_skel,
};

/* 変数(構造体、配列)初期値 #_AVI_# */
const T	tAttribute_st_VAR_INIT = { 100, };

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */





/* 呼び口配列 #_CPA_# */





/* 属性・変数の配列 #_AVAI_# */
const const int32_t tAttribute_attr1_CB_size_array_INIT[2] = { 1, 2, };
int32_t tAttribute_attr1_CB_sz_array_INIT[4];
const const int32_t tAttribute_attr2_CB_size_array_INIT[10] = { 1, 2, };
int32_t tAttribute_attr2_CB_sz_array_INIT[20];
const const int32_t tAttribute_attr3_CB_size_array_INIT[10] = { 0, 1, 2, };
int32_t tAttribute_attr3_CB_sz_array_INIT[20];
const const int32_t tAttribute_attr4_CB_size_array_INIT[10] = { 0, 1, 2, };
int32_t tAttribute_attr4_CB_sz_array_INIT[20];
const const int32_t tAttribute_attr5_CB_size_array_INIT[10] = { 0, 1, 2, };
int32_t tAttribute_attr5_CB_sz_array_INIT[20];
/* セル CB #_CB_# */
struct tag_tAttribute_CB tAttribute_CB_tab[] = {
    /* cell: tAttribute_CB_tab[0]:  attr1 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        2,                                       /* size */
        2,                                       /* size2 */
        tAttribute_attr1_CB_size_array_INIT,     /* size_array */
        0,                                       /* ptr */
        0,                                       /* very_long_name_more_than_16char */
        "abc",                                   /* msg */
        tAttribute_attr1_CB_sz_array_INIT,       /* sz_array */
        /* var */ 
        {                                        /* st */
            100,                                     /* a */
        },
        "abc",                                   /* msg2 */
    },
    /* cell: tAttribute_CB_tab[1]:  attr2 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        10,                                      /* size */
        2,                                       /* size2 */
        tAttribute_attr2_CB_size_array_INIT,     /* size_array */
        0,                                       /* ptr */
        0,                                       /* very_long_name_more_than_16char */
        "hello \
world!",                        /* msg */
        tAttribute_attr2_CB_sz_array_INIT,       /* sz_array */
        /* var */ 
        {                                        /* st */
            100,                                     /* a */
        },
        "hello \
world!",                        /* msg2 */
    },
    /* cell: tAttribute_CB_tab[2]:  attr3 id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        10,                                      /* size */
        2,                                       /* size2 */
        tAttribute_attr3_CB_size_array_INIT,     /* size_array */
        (int32_t*)0x30,                          /* ptr */
        0,                                       /* very_long_name_more_than_16char */
        "hello \
wao \
good-bye",                /* msg */
        tAttribute_attr3_CB_sz_array_INIT,       /* sz_array */
        /* var */ 
        {                                        /* st */
            100,                                     /* a */
        },
        "hello \
wao \
good-bye",                /* msg2 */
    },
    /* cell: tAttribute_CB_tab[3]:  attr4 id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        10,                                      /* size */
        2,                                       /* size2 */
        tAttribute_attr4_CB_size_array_INIT,     /* size_array */
        (int32_t*)0x40,                          /* ptr */
        0,                                       /* very_long_name_more_than_16char */
        "hello world!",                          /* msg */
        tAttribute_attr4_CB_sz_array_INIT,       /* sz_array */
        /* var */ 
        {                                        /* st */
            100,                                     /* a */
        },
        "hello world!",                          /* msg2 */
    },
    /* cell: tAttribute_CB_tab[4]:  attr5 id=5 */
    {
        /* entry port #_EP_# */ 
        /* attribute */ 
        10,                                      /* size */
        2,                                       /* size2 */
        tAttribute_attr5_CB_size_array_INIT,     /* size_array */
        (int32_t*)0x50,                          /* ptr */
        0,                                       /* very_long_name_more_than_16char */
        "hello world! ハロー",                /* msg */
        tAttribute_attr5_CB_sz_array_INIT,       /* sz_array */
        /* var */ 
        {                                        /* st */
            100,                                     /* a */
        },
        "hello world! ハロー",                /* msg2 */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tAttribute_eMain_DES attr1_eMain_des;
const struct tag_tAttribute_eMain_DES attr1_eMain_des = {
    &tAttribute_eMain_MT_,
    &tAttribute_CB_tab[0],     /* CB */
};
extern const struct tag_tAttribute_eMain_DES attr2_eMain_des;
const struct tag_tAttribute_eMain_DES attr2_eMain_des = {
    &tAttribute_eMain_MT_,
    &tAttribute_CB_tab[1],     /* CB */
};
extern const struct tag_tAttribute_eMain_DES attr3_eMain_des;
const struct tag_tAttribute_eMain_DES attr3_eMain_des = {
    &tAttribute_eMain_MT_,
    &tAttribute_CB_tab[2],     /* CB */
};
extern const struct tag_tAttribute_eMain_DES attr4_eMain_des;
const struct tag_tAttribute_eMain_DES attr4_eMain_des = {
    &tAttribute_eMain_MT_,
    &tAttribute_CB_tab[3],     /* CB */
};
extern const struct tag_tAttribute_eMain_DES attr5_eMain_des;
const struct tag_tAttribute_eMain_DES attr5_eMain_des = {
    &tAttribute_eMain_MT_,
    &tAttribute_CB_tab[4],     /* CB */
};
