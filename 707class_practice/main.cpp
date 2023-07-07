#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "Monster.h"
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

//overloading
// 같은 함수를 매개변수만 다르게 적용

//템플릿을 적용해서 좀 더 쉽게.. #include<list>

//template<typename A> // 템플릿 함수
//A Add(A A1, A A2)
//{
//	return A1 + A2;
//}
//
//template<typename A, typename B> // 템플릿 클래스
//class Array
//{
//public:
//	A Data1[10];
//	B Data2[20];
//};

int main()
{
	////템플릿 예시
	//Add<int>(3, 5);
	//Add<float>(3.0, 4.5);

	//Array<int,float> IntFloatArray;
	//IntFloatArray.Data1;
	//IntFloatArray.Data2;

	//Abstract Class 추상화(껍데기만)
	//AActor* A;

	Engine* MyEngine = new Engine();

	//액터를 Load File
	MyEngine->SpawnActor(new APlayer());
	MyEngine->SpawnActor(new AMonster());

	MyEngine->Run();

	delete MyEngine;


	return 0;

}