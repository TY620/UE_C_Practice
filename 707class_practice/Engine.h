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
	static Engine* Instance; // ������ ������ �� �Ҵ�? ����
	inline int GetKeyCode() { return KeyCode; }
	//inline : ª�� Ȯ��?

protected: 
	int KeyCode;
	void Input();
	void Tick();
	void Render();
	vector<AActor*> Actors;

	 bool IsRunning = true;
};

#define GEngine Engine::Instance // ���� �����