#pragma once
#include "Actor.h"

class AFloor : public AActor
{
public:
	AFloor();
	virtual ~AFloor();

	int X;
	int Y;
	char Shape; // 출력되는 문자 *

	virtual void Tick() override;
	void Render();

};

