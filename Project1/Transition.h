#pragma once
#include <string>

class Transition
{
	Transition(); //  : CurrentState(0), Condition(""), NextState(0);
	virtual ~Transition();

	int CurrentState;
	std::string Condition;
	int NextState;

};

