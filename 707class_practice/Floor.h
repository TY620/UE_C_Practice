#pragma once
#include "Actor.h"

class AFloor : public AActor
{
public:
	AFloor();
	virtual ~AFloor();

	int X;
	int Y;
	char Shape; // ��µǴ� ���� *

	virtual void Tick() override;
	void Render();

};

