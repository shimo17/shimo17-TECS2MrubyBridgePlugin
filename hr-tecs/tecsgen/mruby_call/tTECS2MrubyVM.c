#include<../tecsgen/tecs/mruby/tecs_mruby.h>

void 
eMrubyBody_init(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	VAR_mrb = mrb_open();
	VAR_context = mrbc_context_new( VAR_mrb );
	mrb_init_mrb(p_cellcb, VAR_mrb, VAR_context);
	
}
mrb_state
eMrubyBody_get_mrb(CELLIDX idx)
{
	return *mrb;
}

void
eMrubyBody_fin(CELLIDX idx)
{
	mrbc_context_free( VAR_mrb, VAR_context );//これ以上VMを使わないという意味になる
	mrb_close( VAR_mrb );
}