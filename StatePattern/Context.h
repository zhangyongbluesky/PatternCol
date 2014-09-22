#pragma once

#include "public.h"
class IState;

class Context
{
public:
	Context();
	void SetState(IState* pState);
	void Handle(std::string str);
protected:
private:
	std::auto_ptr<IState> m_curState;
};
