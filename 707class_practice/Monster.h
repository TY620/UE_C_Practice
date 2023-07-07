#pragma once
#include "Actor.h"
#include <vector>

class AMonster : public AActor
{
public:
	AMonster();
	virtual ~AMonster();

	virtual void Tick() override;

};

