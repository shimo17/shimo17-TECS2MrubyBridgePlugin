/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tAttributeSt_tecsgen.h"
#include "tAttributeSt_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain */
struct tag_tAttributeSt_eMain_DES {
    const struct tag_sMain_VMT *vmt;
    tAttributeSt_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain */
ER             tAttributeSt_eMain_main_skel( const struct tag_sMain_VDES *epd)
{
    struct tag_tAttributeSt_eMain_DES *lepd
        = (struct tag_tAttributeSt_eMain_DES *)epd;
    return tAttributeSt_eMain_main( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain */
const struct tag_sMain_VMT tAttributeSt_eMain_MT_ = {
    tAttributeSt_eMain_main_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */


/* 呼び口配列 #_CPA_# */


/* 属性・変数の配列 #_AVAI_# */
const const struct tTag tAttributeSt_tst_CB_st_array_INIT[2] = { { 1, }, { 2, }, };
const const struct tTag tAttributeSt_tst2_CB_st_array_INIT[3] = { { 100, }, };
/* セル INIB #_INIB_# */
tAttributeSt_INIB tAttributeSt_INIB_tab[] = {
    /* cell: tAttributeSt_CB_tab[0]:  tst id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        2,                                       /* size */
        tAttributeSt_tst_CB_st_array_INIT,       /* st_array */
    },
    /* cell: tAttributeSt_CB_tab[1]:  tst2 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        3,                                       /* size */
        tAttributeSt_tst2_CB_st_array_INIT,      /* st_array */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_tAttributeSt_eMain_DES tst_eMain_des;
const struct tag_tAttributeSt_eMain_DES tst_eMain_des = {
    &tAttributeSt_eMain_MT_,
    &tAttributeSt_INIB_tab[0],   /* INIB */
};
extern const struct tag_tAttributeSt_eMain_DES tst2_eMain_des;
const struct tag_tAttributeSt_eMain_DES tst2_eMain_des = {
    &tAttributeSt_eMain_MT_,
    &tAttributeSt_INIB_tab[1],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
tAttributeSt_CB_initialize()
{
    tAttributeSt_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
