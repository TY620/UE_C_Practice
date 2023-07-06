#pragma once
#include <string>

using namespace std;

class State
{
public:
	State();
	State(int id, string sname);
	State(int id);
	virtual ~State(); // ¼Ò¸êÀÚ
	
private:
	int ID;
	string StateName;

public:
	void SetName(string name) { StateName = name; }
	int GetID() { return ID; }
};

