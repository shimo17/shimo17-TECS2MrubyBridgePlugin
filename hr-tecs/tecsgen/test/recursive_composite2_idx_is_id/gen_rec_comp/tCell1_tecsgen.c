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
/* eEntry1 : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sSig2_VDES comp1_comp11_cell2_eEntry2_des;

extern struct tag_sSig2_VDES comp2_comp11_cell2_eEntry2_des;

/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: comp1_comp11_cell1_CB:  comp1_comp11_cell1 id=1 */
const tCell1_INIB comp1_comp11_cell1_INIB = {
    /* call port (INIB) #_CP_# */ 
    3,                                       /* cCall1 #_CCP2_# */
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    10,                                      /* a */
};

/* cell: comp2_comp11_cell1_CB:  comp2_comp11_cell1 id=2 */
const tCell1_INIB comp2_comp11_cell1_INIB = {
    /* call port (INIB) #_CP_# */ 
    4,                                       /* cCall1 #_CCP2_# */
    /* entry port #_EP_# */ 
    /* attribute(RO) */ 
    10,                                      /* a */
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tCell1_eEntry1_DES comp1_comp11_cell1_eEntry1_des;
const struct tag_tCell1_eEntry1_DES comp1_comp11_cell1_eEntry1_des = {
    0,
    1,     /* ID */
};
extern const struct tag_tCell1_eEntry1_DES comp2_comp11_cell1_eEntry1_des;
const struct tag_tCell1_eEntry1_DES comp2_comp11_cell1_eEntry1_des = {
    0,
    2,     /* ID */
};
/* ID to INIB table #_INTAB_# */
tCell1_INIB *tCell1_INIB_tab[] ={
    &comp1_comp11_cell1_INIB,
    &comp2_comp11_cell1_INIB,
};
