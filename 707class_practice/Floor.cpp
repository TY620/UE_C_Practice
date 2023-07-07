#include "Floor.h"
#include <iostream>

using namespace std;

AFloor::AFloor()
{
	X = 1;
	Y = 1;

	Shape = ' ';
}

AFloor::~AFloor()
{
}

void AFloor::Tick()
{
}

void AFloor::Render()
{
	cout << Shape;
}
