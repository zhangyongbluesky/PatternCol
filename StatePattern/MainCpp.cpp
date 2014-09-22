#include "Context.h"
#include "StatePattern.h"

int main(void)
{
	Context* pContext = new Context;
	pContext->SetState(new StateA(pContext));
	pContext->Handle("test");
	pContext->Handle("test");
	delete pContext;
}
