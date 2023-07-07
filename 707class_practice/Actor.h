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
	// virtual void Tick(); 상속 받은 클래스에서 재정의

	virtual void Tick() = 0; // AActor에서는 못쓰고 상속 받은 클래스에서만 재정의 - 추상화(가상 함수)
	//pure virtual function

	void Render();


};

