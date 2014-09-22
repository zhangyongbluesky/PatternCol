#pragma once
#include "public.h"
class Context;

class IState
{
public:
	IState(Context* pContext);
	virtual void Handle(std::string str) = 0;
	virtual void ChangeState() = 0;
protected:
	Context* pContext;
private:
};


class StateA : public IState
{
public:
	StateA(Context* pContext);
	virtual void Handle(std::string str);
	virtual void ChangeState();
};

class StateB : public IState
{
public:
	StateB(Context* pContext);
	virtual void Handle(std::string str);
	virtual void ChangeState();
};