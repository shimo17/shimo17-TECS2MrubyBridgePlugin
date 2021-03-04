/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCell3_tecsgen.h"
#include "tCell3_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEntry3 */
struct tag_tCell3_eEntry3_DES {
    const struct tag_sSig3_VMT *vmt;
    tCell3_IDX  idx;
    int_t  subscript;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEntry3 */
int32_t        tCell3_eEntry3_func1_skel( const struct tag_sSig3_VDES *epd, int32_t a)
{
    struct tag_tCell3_eEntry3_DES *lepd
        = (struct tag_tCell3_eEntry3_DES *)epd;
    return tCell3_eEntry3_func1( lepd->idx, lepd->subscript, a );
}
int32_t        tCell3_eEntry3_func2_skel( const struct tag_sSig3_VDES *epd, int32_t a)
{
    struct tag_tCell3_eEntry3_DES *lepd
        = (struct tag_tCell3_eEntry3_DES *)epd;
    return tCell3_eEntry3_func2( lepd->idx, lepd->subscript, a );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEntry3 */
const struct tag_sSig3_VMT tCell3_eEntry3_MT_ = {
    tCell3_eEntry3_func1_skel,
    tCell3_eEntry3_func2_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig4_VDES comp1_comp12_cell4_eEntry4_des;
extern struct tag_sSigB_VDES comp1_comp11_cell2_eEntryB_des;

extern struct tag_sSig4_VDES comp2_comp12_cell4_eEntry4_des;
extern struct tag_sSigB_VDES comp2_comp11_cell2_eEntryB_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCell3_INIB tCell3_INIB_tab[] = {
    /* cell: tCell3_CB_tab[0]:  comp1_comp12_cell3 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell4_CB_tab[0],                       /* cCall3 #_CCP2_# */
        &tCell2_CB_tab[0],                       /* cCallB #_CCP2_# */
        /* entry port #_EP_# */ 
        2,                                       /*  #_EEP_# */
        /* attribute(RO) */ 
        30,                                      /* a */
        "comp1_comp12_cell3",                    /* name */
    },
    /* cell: tCell3_CB_tab[1]:  comp2_comp12_cell3 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell4_CB_tab[1],                       /* cCall3 #_CCP2_# */
        &tCell2_CB_tab[1],                       /* cCallB #_CCP2_# */
        /* entry port #_EP_# */ 
        2,                                       /*  #_EEP_# */
        /* attribute(RO) */ 
        30,                                      /* a */
        "comp2_comp12_cell3",                    /* name */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCell3_eEntry3_DES comp1_comp12_cell3_eEntry3_des0;
const struct tag_tCell3_eEntry3_DES comp1_comp12_cell3_eEntry3_des0 = {
    &tCell3_eEntry3_MT_,
    &tCell3_INIB_tab[0],    /* INIB */
    0
};
extern const struct tag_tCell3_eEntry3_DES comp1_comp12_cell3_eEntry3_des1;
const struct tag_tCell3_eEntry3_DES comp1_comp12_cell3_eEntry3_des1 = {
    &tCell3_eEntry3_MT_,
    &tCell3_INIB_tab[0],    /* INIB */
    1
};
extern const struct tag_tCell3_eEntry3_DES comp2_comp12_cell3_eEntry3_des0;
const struct tag_tCell3_eEntry3_DES comp2_comp12_cell3_eEntry3_des0 = {
    &tCell3_eEntry3_MT_,
    &tCell3_INIB_tab[1],    /* INIB */
    0
};
extern const struct tag_tCell3_eEntry3_DES comp2_comp12_cell3_eEntry3_des1;
const struct tag_tCell3_eEntry3_DES comp2_comp12_cell3_eEntry3_des1 = {
    &tCell3_eEntry3_MT_,
    &tCell3_INIB_tab[1],    /* INIB */
    1
};
