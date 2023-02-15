#pragma once

// 인터페이스 : 순수 가상 함수만 갖는 클래스
void Interface();

class Weapon
{
public:
	virtual void Attack() = 0;
};

class Sword : public Weapon
{
public:
	void Attack()
	{
		cout << "Sword Attack" << endl;
	}
};

class Bow : public Weapon
{
public:
	void Attack()
	{
		cout << "Bow Attack!" << endl;
	}
};