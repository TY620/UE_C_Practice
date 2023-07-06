#include "State.h"

State::State()
{
	ID = 0;
	StateName = "";
}

State::State(int id, string sname)
{
	ID = id;
	StateName = sname;
}

State::State(int id)
{
	ID = id;
	StateName = "";
}

State::~State()
{

}
