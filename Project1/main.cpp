#include <iostream>
#include "State.h"
#include "Transition.h"

#include<vector> // 배열과 비슷한 개념
#include<map> // key와 value

int swap(int num1, int num2) { return num1 + num2; };
int swap(int num1, int num2, int num3) { return num1 + num2 + num3; };
float swap(float num1, float num2) { return num1 + num2; };

int main()
{
	// 생략은 지양
	// 무조건 초기화

	//managed language : 메모리 삭제를 컴퓨터가 해줌 (C++)
	//unmanaged language : 메모리 할당을 수동으로 사람이 관리

	int a = 200;

	int* Ptr = new int(); //메모리 주소값을 가르키는 int형 포인터
	int* Ptr = &a;	// &는 해당 주소값을 표현
	delete Ptr; // 할당 끝
	
	// *Ptr 역참조 - &a에 있는 값

	//map 예시
	map<int, State> States; // Key, Value값
	States[1] = State(1, "배회");
	
	//vector 예시
	vector<Transition> Transitions;
	Transitions.push_back(Transition(1, "적발견", 2));
	

	int MonsterCurrentState = 1;
	string MonsterCondition = "적발견";
	int MonsterNextState = 0;
	for (int i = 0; i < Transitions.size(); i++)
	{
		if (Transitions[i].CurrentState == MonsterCurrentState &&
			Transitions[i].Condition == MonsterCondition)

		{
			MonsterNextState = Transitions[i].NextState;
		}
	}

	State state1; // 선언과 동시에 초기화
	State state2(1, "name"); // 선언과 동시에 초기화
	State user1(1);
	user1.SetName("nickname");


	



	// 오버로드 : 변수 이름이 같아도 매개변수만 다르게 받아서 사용. 

	return 0;
}