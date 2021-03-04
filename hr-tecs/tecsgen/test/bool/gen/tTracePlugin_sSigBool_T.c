/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * probeName_str    char_t*          ATTR_probeName_str
 * from_str         char_t*          ATTR_from_str   
 *
 * 呼び口関数 #_TCPF_#
 * call port: cCall signature: sSigBool_T context:task
 *   bool_t         cCall_func( bool_t boo, bool_t* boo2 );
 *   bool_t*        cCall_func2( const bool_t* boo, int sz );
 * require port: signature:sSysLog context:task
 *   ER             write( uint_t prio, const SYSLOG* p_syslog );
 *   ER_UINT        read( SYSLOG* p_syslog );
 *   ER             mask( uint_t logmask, uint_t lowmask );
 *   ER             refer( T_SYSLOG_RLOG* pk_rlog );
 * require port: signature:sKernel context:task
 *   ER             delay( RELTIM delay_time );
 *   ER             exitTask( );
 *   ER             getTime( SYSTIM* p_system_time );
 *   ER             getMicroTime( SYSUTM* p_system_micro_time );
 *   ER             exitKernel( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTracePlugin_sSigBool_T_tecsgen.h"
#include <mruby.h>
#include <mruby/dump.h>

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eThroughEntry
 * entry port: eThroughEntry
 * signature:  sSigBool_T
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eThroughEntry_func
 * name:         eThroughEntry_func
 * global_name:  tTracePlugin_sSigBool_T_eThroughEntry_func
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t
eThroughEntry_func(CELLIDX idx, bool_t boo, bool_t* boo2)
{
	bool_t	retval;
	SYSUTM	utime;
	tTracePlugin_sSigBool_T_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSigBool_T_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Boo.eBooo.func calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    [IN]bool_t boo = %d;", boo );
	retval = cCall_func( boo, boo2 );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Boo.eBooo.func", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    [OUT]bool_t *boo2 = %d;", *boo2 );
    syslog( LOG_INFO, "    [RETURN]bool_t retval = %d;", retval );
	return retval;
}

/* #[<ENTRY_FUNC>]# eThroughEntry_func2
 * name:         eThroughEntry_func2
 * global_name:  tTracePlugin_sSigBool_T_eThroughEntry_func2
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
bool_t*
eThroughEntry_func2(CELLIDX idx, const bool_t* boo, int sz)
{
	bool_t*	retval;
	SYSUTM	utime;
	tTracePlugin_sSigBool_T_CB *p_cellcb;
	if( VALID_IDX( idx ) ){
		p_cellcb = tTracePlugin_sSigBool_T_GET_CELLCB(idx);
	}else{
		/* put code here for error */
	}

	getMicroTime( &utime );
	syslog( LOG_INFO, "Enter: %sTime=%d: Boo.eBooo.func2 calledFrom: %s", ATTR_probeName_str, utime, ATTR_from_str );
    syslog( LOG_INFO, "    size_is(sz)=%d", sz );
    {
    	int i__0, loop_count__ = (((sz)>16) ? 16 : (sz));
    	for( i__0 = 0; i__0 < loop_count__; i__0+=4 ){
    		syslog( LOG_INFO, "    [IN]const bool_t boo[%d]: %d %d %d %d",
    				i__0, boo[i__0], boo[i__0+1], boo[i__0+2], boo[i__0+3] );
    	} /* for ( i__0 ) */
    	if( i__0 < sz )
    		syslog( LOG_INFO, "    (%d elements are omitted)", sz - i__0 );
    	else if( i__0 > sz )
    		syslog( LOG_INFO, "    (last %d elements are void)", i__0 - sz );
    }
    if( sizeof(sz) > sizeof(int_t) )
    	syslog( LOG_INFO, "    [IN]int sz = %ld;", (long)sz );
    else
    	syslog( LOG_INFO, "    [IN]int sz = %d;", sz );
	retval = cCall_func2( boo, sz );
	getMicroTime( &utime );
	syslog( LOG_INFO, "Leave: %sTime=%d: Boo.eBooo.func2", ATTR_probeName_str, utime );
    syslog( LOG_INFO, "    [RETURN]bool_t *retval = %d;", *retval );
	return retval;
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
