#pragma once


class AActor
{
public:
	AActor();
	virtual ~AActor();

	int X;
	int Y;
	char Shape;

	void Input();
	// virtual void Tick(); ��� ���� Ŭ�������� ������

	virtual void Tick() = 0; // AActor������ ������ ��� ���� Ŭ���������� ������ - �߻�ȭ(���� �Լ�)
	//pure virtual function

	void Render();


};

