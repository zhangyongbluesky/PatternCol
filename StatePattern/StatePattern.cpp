#include <iostream>
#include "Context.h"
#include "StatePattern.h"

void StateA::Handle(std::string str)
{
	std::cout<<"StateA"<<str<<std::endl;
	ChangeState();
}

void StateA::ChangeState()
{
	pContext->SetState(new StateB(pContext)); 
}

StateA::StateA(Context* pContext)
: IState(pContext)
{

}


void StateB::Handle(std::string str)
{
	std::cout<<"StateB"<<str<<std::endl;
	ChangeState();
}

void StateB::ChangeState()
{
	pContext->SetState(new StateA(pContext));
}

StateB::StateB(Context* pContext)
: IState(pContext)
{

}

IState::IState(Context* pContext)
: pContext(pContext)
{

}
