#pragma once
#include "Actor.h"

class AWall : public AActor
{
public:
	AWall();
	virtual ~AWall();

	int X;
	int Y;
	char Shape; // ��µǴ� ����*

	void Render();
	virtual void Tick() override;

};

