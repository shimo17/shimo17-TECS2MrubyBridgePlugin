/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tAttribute4_tecsgen.h"
#include "tAttribute4_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tAttribute4_INIB tAttribute4_INIB_tab[] = {
    /* cell: tAttribute4_CB_tab[0]:  Attr4 id=1 */
    {
        /* attribute(RO) */ 
        {
            0,                                       /* buf0[0] */
            0,                                       /* buf0[1] */
        },
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* CB 初期化コード #_CIC_# */
void
tAttribute4_CB_initialize()
{
    tAttribute4_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
