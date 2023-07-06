#include "Transition.h"


Transition::Transition()
{
	CurrentState = 0;
	Condition = "";
	NextState = 0;
}

Transition::Transition(int InCurrenState, string InCondition, int InNextState)
{
	InCurrenState = CurrentState;
	InCondition =  Condition;
	InNextState = NextState;
}

Transition::~Transition()
{

}
