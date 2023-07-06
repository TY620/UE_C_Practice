#pragma once
#include <string>
using namespace std;

class Transition
{
	Transition(); //  : CurrentState(0), Condition(""), NextState(0);
	Transition(int InCurrenState, string InCondition, int InNextState);
	virtual ~Transition();

	int CurrentState;
	string Condition;
	int NextState;

};
