/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tAttribute2_tecsgen.h"
#include "tAttribute2_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eMain : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eMain : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eMain : omitted by entry port optimize */

/* 変数(構造体、配列)初期値 #_AVI_# */
const int32_t	tAttribute2_array_VAR_INIT[2] = { 1, 2, };

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
const const int32_t tAttribute2_Cell2_CB_sizeArray_INIT[2] = { 1, 2, };
int32_t tAttribute2_Cell2_CB_array_INIT[2];
/* セル INIB #_INIB_# */
tAttribute2_INIB tAttribute2_INIB_tab[] = {
    /* cell: tAttribute2_CB_tab[0]:  Cell2 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        tAttribute2_Cell2_CB_sizeArray_INIT,     /* sizeArray */
        (int8_t*)0x1,                            /* p */
        2,                                       /* size */
        tAttribute2_Cell2_CB_array_INIT,         /* array */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* eMain : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
tAttribute2_CB_initialize()
{
    tAttribute2_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
