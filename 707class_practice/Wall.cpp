#include "Wall.h"
#include <iostream>

using namespace std;

AWall::AWall()
{
	X = 1;
	Y = 1;

	Shape = '*';
}

AWall::~AWall()
{
}

void AWall::Render()
{
	cout << Shape;
}

void AWall::Tick()
{
}
