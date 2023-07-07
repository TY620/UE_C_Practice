#pragma once
#include <vector>
#include "Actor.h"

using namespace std;

class Engine
{
public:
	Engine();
	virtual ~Engine();
	void Run();
	void SpawnActor(AActor* NewActor);
	static Engine* Instance; // 무조건 시작할 때 할당? 정적
	inline int GetKeyCode() { return KeyCode; }
	//inline : 짧게 확인?

protected: 
	int KeyCode;
	void Input();
	void Tick();
	void Render();
	vector<AActor*> Actors;

	 bool IsRunning = true;
};

#define GEngine Engine::Instance // 별명 만들기