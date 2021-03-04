/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef GLOBAL_TECSGEN_H
#define GLOBAL_TECSGEN_H


/* import_C により import されるヘッダ #_IMP_# */
#include "tecs.h"
#include "attr.h"
/**/

#ifndef TOPPERS_MACRO_ONLY

struct tagT {
                int32_t        a;
};
typedef struct tagT    T;
struct tTag {
                int32_t        a;
};
typedef int32_t        INT32_T;

#define INITIALIZE_TECS() 
#define INITIALZE_TECSGEN() INITIALIZE_TECS()  /* for backward compatibility */

/* Descriptor for dynamic join */
#define Descriptor( signature_global_name )  DynDesc__ ## signature_global_name
#define is_descriptor_unjoined( desc )  ((desc).vdes==NULL)

#endif /* TOPPERS_MACRO_ONLY */

#define VAL_INIT       ((const int32_t)CONST_INTVAL)

#endif /* GLOBAL_TECSGEN_H */
