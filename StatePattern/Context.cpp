#include "Context.h"
#include "StatePattern.h"

void Context::SetState(IState* pState)
{
	m_curState = std::auto_ptr<IState>(pState);
}

void Context::Handle(std::string str)
{
	m_curState->Handle(str);
}

Context::Context()
{
	m_curState = std::auto_ptr<IState>(NULL);
}

