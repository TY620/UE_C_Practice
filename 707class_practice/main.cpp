#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

//overloading
// ���� �Լ��� �Ű������� �ٸ��� ����

//���ø��� �����ؼ� �� �� ����.. #include<list>

//template<typename A> // ���ø� �Լ�
//A Add(A A1, A A2)
//{
//	return A1 + A2;
//}
//
//template<typename A, typename B> // ���ø� Ŭ����
//class Array
//{
//public:
//	A Data1[10];
//	B Data2[20];
//};

int main()
{
	////���ø� ����
	//Add<int>(3, 5);
	//Add<float>(3.0, 4.5);

	//Array<int,float> IntFloatArray;
	//IntFloatArray.Data1;
	//IntFloatArray.Data2;

	//Abstract Class �߻�ȭ(�����⸸)
	//AActor* A;

	Engine* MyEngine = new Engine();

	//���͸� Load File
	MyEngine->SpawnActor(new APlayer());
	MyEngine->SpawnActor(new AMonster());

	MyEngine->Run();

	delete MyEngine;


	return 0;

}