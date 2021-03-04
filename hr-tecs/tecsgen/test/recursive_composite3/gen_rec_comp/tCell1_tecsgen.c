/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tCell1_tecsgen.h"
#include "tCell1_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEntry1 */
struct tag_tCell1_eEntry1_DES {
    const struct tag_sSig1_VMT *vmt;
    tCell1_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEntry1 */
int32_t        tCell1_eEntry1_func1_skel( const struct tag_sSig1_VDES *epd, int32_t a)
{
    struct tag_tCell1_eEntry1_DES *lepd
        = (struct tag_tCell1_eEntry1_DES *)epd;
    return tCell1_eEntry1_func1( lepd->idx, a );
}
int32_t        tCell1_eEntry1_func2_skel( const struct tag_sSig1_VDES *epd, int32_t a)
{
    struct tag_tCell1_eEntry1_DES *lepd
        = (struct tag_tCell1_eEntry1_DES *)epd;
    return tCell1_eEntry1_func2( lepd->idx, a );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEntry1 */
const struct tag_sSig1_VMT tCell1_eEntry1_MT_ = {
    tCell1_eEntry1_func1_skel,
    tCell1_eEntry1_func2_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig2_VDES comp1_comp11_cell2_eEntry2_des;

extern struct tag_sSig2_VDES comp2_comp11_cell2_eEntry2_des;

extern struct tag_sSig2_VDES rLargeComp_LargeComp_comp1_comp11_cell2_eEntry2_des;

extern struct tag_sSig2_VDES rLargeComp_LargeComp_comp2_comp11_cell2_eEntry2_des;

/* 呼び口配列 #_CPA_# */




/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tCell1_INIB tCell1_INIB_tab[] = {
    /* cell: tCell1_CB_tab[0]:  comp1_comp11_cell1 id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell2_CB_tab[0],                       /* cCall1 #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "comp1_comp11_cell1",                    /* name */
        10,                                      /* a */
    },
    /* cell: tCell1_CB_tab[1]:  comp2_comp11_cell1 id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell2_CB_tab[1],                       /* cCall1 #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "comp2_comp11_cell1",                    /* name */
        10,                                      /* a */
    },
    /* cell: tCell1_CB_tab[2]:  LargeComp_comp1_comp11_cell1 id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell2_CB_tab[2],                       /* cCall1 #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "LargeComp_comp1_comp11_cell1",          /* name */
        10,                                      /* a */
    },
    /* cell: tCell1_CB_tab[3]:  LargeComp_comp2_comp11_cell1 id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &tCell2_CB_tab[3],                       /* cCall1 #_CCP2_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "LargeComp_comp2_comp11_cell1",          /* name */
        10,                                      /* a */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCell1_eEntry1_DES comp1_comp11_cell1_eEntry1_des;
const struct tag_tCell1_eEntry1_DES comp1_comp11_cell1_eEntry1_des = {
    &tCell1_eEntry1_MT_,
    &tCell1_INIB_tab[0],   /* INIB */
};
extern const struct tag_tCell1_eEntry1_DES comp2_comp11_cell1_eEntry1_des;
const struct tag_tCell1_eEntry1_DES comp2_comp11_cell1_eEntry1_des = {
    &tCell1_eEntry1_MT_,
    &tCell1_INIB_tab[1],   /* INIB */
};
extern const struct tag_tCell1_eEntry1_DES rLargeComp_LargeComp_comp1_comp11_cell1_eEntry1_des;
const struct tag_tCell1_eEntry1_DES rLargeComp_LargeComp_comp1_comp11_cell1_eEntry1_des = {
    &tCell1_eEntry1_MT_,
    &tCell1_INIB_tab[2],   /* INIB */
};
extern const struct tag_tCell1_eEntry1_DES rLargeComp_LargeComp_comp2_comp11_cell1_eEntry1_des;
const struct tag_tCell1_eEntry1_DES rLargeComp_LargeComp_comp2_comp11_cell1_eEntry1_des = {
    &tCell1_eEntry1_MT_,
    &tCell1_INIB_tab[3],   /* INIB */
};
