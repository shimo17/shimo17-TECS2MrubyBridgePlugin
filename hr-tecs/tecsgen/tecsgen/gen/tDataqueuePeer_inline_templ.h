#ifndef tDataqueuePeer__INLINE_H
#define tDataqueuePeer__INLINE_H

/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tDataqueuePeer_inline_template.h => src/tDataqueuePeer_inline.h
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * attribute        ATR              ATTR_attribute  
 * count            uint_t           ATTR_count      
 * pdqmb            void*            ATTR_pdqmb      
 * fd               int_t [2]        VAR_fd          
 * b_init           bool_t           VAR_b_init      
 *
 * 呼び口関数 #_TCPF_#
 * call port: cInitializing signature: sSemaphore context:task
 *   ER             cInitializing_signal( );
 *   ER             cInitializing_wait( );
 *   ER             cInitializing_waitPolling( );
 *   ER             cInitializing_waitTimeout( TMO timeout );
 *   ER             cInitializing_initialize( );
 *   ER             cInitializing_refer( T_RSEM* pk_semaphore_status );
 *
 * #[</PREAMBLE>]# */

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eDataqueue
 * entry port: eDataqueue
 * signature:  sDataqueue
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eDataqueue_send
 * name:         eDataqueue_send
 * global_name:  tDataqueuePeer_eDataqueue_send
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eDataqueue_send(CELLIDX idx, intptr_t data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_sendPolling
 * name:         eDataqueue_sendPolling
 * global_name:  tDataqueuePeer_eDataqueue_sendPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eDataqueue_sendPolling(CELLIDX idx, intptr_t data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_sendTimeout
 * name:         eDataqueue_sendTimeout
 * global_name:  tDataqueuePeer_eDataqueue_sendTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eDataqueue_sendTimeout(CELLIDX idx, intptr_t data, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_sendForce
 * name:         eDataqueue_sendForce
 * global_name:  tDataqueuePeer_eDataqueue_sendForce
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eDataqueue_sendForce(CELLIDX idx, intptr_t data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_receive
 * name:         eDataqueue_receive
 * global_name:  tDataqueuePeer_eDataqueue_receive
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eDataqueue_receive(CELLIDX idx, intptr_t* p_data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_receivePolling
 * name:         eDataqueue_receivePolling
 * global_name:  tDataqueuePeer_eDataqueue_receivePolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eDataqueue_receivePolling(CELLIDX idx, intptr_t* p_data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_receiveTimeout
 * name:         eDataqueue_receiveTimeout
 * global_name:  tDataqueuePeer_eDataqueue_receiveTimeout
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eDataqueue_receiveTimeout(CELLIDX idx, intptr_t* p_data, TMO timeout)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_initialize
 * name:         eDataqueue_initialize
 * global_name:  tDataqueuePeer_eDataqueue_initialize
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eDataqueue_initialize(CELLIDX idx)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eDataqueue_refer
 * name:         eDataqueue_refer
 * global_name:  tDataqueuePeer_eDataqueue_refer
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eDataqueue_refer(CELLIDX idx, T_RDTQ* pk_dataqueue_status)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_PORT>]# eiDataqueue
 * entry port: eiDataqueue
 * signature:  siDataqueue
 * context:    non-task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eiDataqueue_sendPolling
 * name:         eiDataqueue_sendPolling
 * global_name:  tDataqueuePeer_eiDataqueue_sendPolling
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiDataqueue_sendPolling(CELLIDX idx, intptr_t data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<ENTRY_FUNC>]# eiDataqueue_sendForce
 * name:         eiDataqueue_sendForce
 * global_name:  tDataqueuePeer_eiDataqueue_sendForce
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
Inline ER
eiDataqueue_sendForce(CELLIDX idx, intptr_t data)
{
	ER		ercd = E_OK;
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		return(E_ID);
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

	return(ercd);
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/

#endif /* tDataqueuePeer_INLINEH */
