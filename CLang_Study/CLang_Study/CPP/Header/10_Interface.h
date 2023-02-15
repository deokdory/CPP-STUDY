#pragma once

// �������̽� : ���� ���� �Լ��� ���� Ŭ����
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