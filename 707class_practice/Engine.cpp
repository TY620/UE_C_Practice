#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include <conio.h> // 콘솔 입력

Engine* Engine::Instance = nullptr; // 정적으로 할당하면 초기화 필요함


Engine::Engine()
{
	Instance = this;
}

Engine::~Engine()
{
	for (auto Current : Actors)
	{
		delete Current;
	}

	Actors.clear();
	//Actors 배열 모든 범위의 데이터를 지우고, 그 배열을 지움
}

void Engine::Run()
{
	//BeginPlay();
	
	while (IsRunning)
	{
		Input();
		Tick();
		Render();
	}

	//EndPlay();
}

void Engine::SpawnActor(AActor* NewActor)
{
	Actors.push_back(NewActor);
}

void Engine::Input()
{
	KeyCode = _getch(); // 입력받은 값
}

void Engine::Tick()
{
	//범위 기반 for문 c++ 11
	for (auto Current : Actors)
	{

		//for (auto Current : Actors)	//범위로 할지
		//{
		//	APlayer* Player = dynamic_cast<APlayer*>(Current); // 형변환
		//	if (Player != nullptr) // Player인지 확인
		//	{
		//		Player->X++;
		//	}

		//	AMonster* Monster = dynamic_cast<AMonster*>(Current); // 형변환
		//	if (Monster != nullptr) // Player인지 확인
		//	{
		//		Monster->Y++;
		//	}

		Current->Tick();
	}
	//}
}

void Engine::Render()
{
	system("cls");
	
	for (int i = 0; i < Actors.size(); i++)
	{
		Actors[i]->Render();
	}
}
