/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "tMain_tecsgen.h"
#include "tMain_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_sMain_VDES attr1_eMain_des;
extern struct tag_sMain_VDES attr2_eMain_des;
extern struct tag_sMain_VDES attr3_eMain_des;
extern struct tag_sMain_VDES tst_eMain_des;
extern struct tag_sMain_VDES tst2_eMain_des;

/* 呼び口配列 #_CPA_# */
struct tag_sMain_VDES * const Main_cMain[] = {
    &attr1_eMain_des,
    &attr2_eMain_des,
    &attr3_eMain_des,
    &tst_eMain_des,
    &tst2_eMain_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
tMain_INIB tMain_SINGLE_CELL_INIB = 
{
    /* call port (INIB) #_CP_# */ 
    Main_cMain,                              /* #_CCP3B_# */
    5,                                       /* length of cMain (n_cMain) #_CCP4_# */
    /* attribute(RO) */ 
    100,                                     /* a */
};

/* セル CB #_CB_# */
struct tag_tMain_CB tMain_SINGLE_CELL_CB;
/* 受け口ディスクリプタ #_EPD_# */
/* CB 初期化コード #_CIC_# */
void
tMain_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
