/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tAttribute3_tecsgen.h"
#include "tAttribute3_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
char tAttribute3_Attr3_CB_buf_INIT[5][2];
/* セル INIB #_INIB_# */
tAttribute3_INIB tAttribute3_INIB_tab[] = {
    /* cell: tAttribute3_CB_tab[0]:  Attr3 id=1 */
    {
        /* attribute(RO) */ 
        5,                                       /* size */
        tAttribute3_Attr3_CB_buf_INIT,           /* buf */
    },
};

/* 受け口ディスクリプタ #_EPD_# */
/* CB 初期化コード #_CIC_# */
void
tAttribute3_CB_initialize()
{
    tAttribute3_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
