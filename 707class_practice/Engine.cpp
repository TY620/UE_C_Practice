#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include <conio.h> // �ܼ� �Է�

Engine* Engine::Instance = nullptr; // �������� �Ҵ��ϸ� �ʱ�ȭ �ʿ���


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
	//Actors �迭 ��� ������ �����͸� �����, �� �迭�� ����
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
	KeyCode = _getch(); // �Է¹��� ��
}

void Engine::Tick()
{
	//���� ��� for�� c++ 11
	for (auto Current : Actors)
	{

		//for (auto Current : Actors)	//������ ����
		//{
		//	APlayer* Player = dynamic_cast<APlayer*>(Current); // ����ȯ
		//	if (Player != nullptr) // Player���� Ȯ��
		//	{
		//		Player->X++;
		//	}

		//	AMonster* Monster = dynamic_cast<AMonster*>(Current); // ����ȯ
		//	if (Monster != nullptr) // Player���� Ȯ��
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
