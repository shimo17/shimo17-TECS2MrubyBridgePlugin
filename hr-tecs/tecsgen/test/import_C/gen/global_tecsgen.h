/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C により import されるヘッダ #_IMP_# */
#include "my_stdint.h"
#include "kernel.h"
#include "myheader.h"
#include "union.h"
#include "int_const.h"
#include "typedef.h"
#include "some_types.h"
/**/

#ifndef TOPPERS_MACRO_ONLY

typedef int32_t        INT32;
struct tag_st {
                int32_t        member_a;
                int16_t        member_b;
};
typedef ST             ST2;
typedef struct tag_st  st;

#define INITIALIZE_TECS() 
#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#include "a.h"

#endif /* GLOBAL_TECSGEN_H */
