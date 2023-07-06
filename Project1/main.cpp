#include <iostream>
#include "State.h"
#include "Transition.h"

#include<vector> // �迭�� ����� ����
#include<map> // key�� value

int swap(int num1, int num2) { return num1 + num2; };
int swap(int num1, int num2, int num3) { return num1 + num2 + num3; };
float swap(float num1, float num2) { return num1 + num2; };

int main()
{
	// ������ ����
	// ������ �ʱ�ȭ

	//managed language : �޸� ������ ��ǻ�Ͱ� ���� (C++)
	//unmanaged language : �޸� �Ҵ��� �������� ����� ����

	int a = 200;

	int* Ptr = new int(); //�޸� �ּҰ��� ����Ű�� int�� ������
	int* Ptr = &a;	// &�� �ش� �ּҰ��� ǥ��
	delete Ptr; // �Ҵ� ��
	
	// *Ptr ������ - &a�� �ִ� ��

	//map ����
	map<int, State> States; // Key, Value��
	States[1] = State(1, "��ȸ");
	
	//vector ����
	vector<Transition> Transitions;
	Transitions.push_back(Transition(1, "���߰�", 2));
	

	int MonsterCurrentState = 1;
	string MonsterCondition = "���߰�";
	int MonsterNextState = 0;
	for (int i = 0; i < Transitions.size(); i++)
	{
		if (Transitions[i].CurrentState == MonsterCurrentState &&
			Transitions[i].Condition == MonsterCondition)

		{
			MonsterNextState = Transitions[i].NextState;
		}
	}

	State state1; // ����� ���ÿ� �ʱ�ȭ
	State state2(1, "name"); // ����� ���ÿ� �ʱ�ȭ
	State user1(1);
	user1.SetName("nickname");


	



	// �����ε� : ���� �̸��� ���Ƶ� �Ű������� �ٸ��� �޾Ƽ� ���. 

	return 0;
}