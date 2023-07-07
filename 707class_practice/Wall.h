#pragma once
#include "Actor.h"

class AWall : public AActor
{
public:
	AWall();
	virtual ~AWall();

	int X;
	int Y;
	char Shape; // 출력되는 문자*

	void Render();
	virtual void Tick() override;

};

