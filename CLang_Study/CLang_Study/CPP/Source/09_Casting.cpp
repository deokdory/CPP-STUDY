#include "stdafx.h"
#include "09_Casting.h"

void Casting()
{
	// up / down casting
	{
		// �� ĳ������ �̿� Player ��ü ���� ( player�� �����ϸ鼭 Character * ������ ���� )
		Character* player = new Player;
		player->Attack();

		// �ٿ� ĳ������ �̿��� Player�� ����
		Player* realPlayer = dynamic_cast<Player*>(player);
		if (realPlayer != nullptr) { realPlayer->Heal(); }
		else { cout << "Player Casting Fail" << endl; }

		// �� ĳ������ �̿��� Enemy ��ü�� ����
		Character* enemy = new Enemy();
		enemy->Attack();

		// �ٿ� ĳ������ �̿��� Enemy�� ����
		Enemy* realEnemy = dynamic_cast<Enemy*>(enemy);
		if (realEnemy) { realEnemy->Move(); }
		else { cout << "Player Casting Fail" << endl; }

		delete player;
		delete enemy;
	}

	ENDL;

	// const casting #1
	const Player* player = new Player(10);

	// ��� ��ü���� ���� ���� ����
	//player->SetXP(30); // <- player�� const�� �� ���� ���� �Ұ�

	// const_cast �� ����ؼ� ������� ����
	Player& modifiablePlayer = const_cast<Player&>(*player);
	modifiablePlayer.SetXP(300);

	cout << "Player XP : " << player->GetXP() << endl;


	// const casting #2 ( �ȉ� )
	const int x = 123;
	int& y = const_cast<int&>(x);
	y = 0;

	cout << "const_cast x : " << &x << " " << x << endl;
	cout << "const_cast y : " << &y << " " << y << endl;	
	
	/*
	�� #1�� #2�� ����� �ٸ���?
	- Player�� Character�� ������ / n�� const int
	- Player�� new �����ڸ� ����ؼ� ���� �Ҵ�� �޸� / n�� ���� �޸�

	- Player�� const Character*�� ����Ǿ� �ֱ� ������ const_cast�� ����Ͽ� �ش� ��ü�� 
	  ��� �Լ��� ȣ���ϰų� ������ �� ����
	  
	- n�� const int�� ����Ǿ� �ֱ� ������ const_cast�� ����Ͽ� int�� ��ȯ�Ͽ� ���� �����Ϸ��� �ϸ�
	  undefined behavior�� �߻� ( ���ǵ��� ���� �ൿ )

	- ���� const_cast�� ����Ͽ� const int ���� ���� int�� ĳ�����Ͽ� ���� �����ϴ� ���� �������� ����
	*/


	// Type Casting
	{
		// reinterpret_cast
		int n = 104;
		int* m = &n;
		char* ch = reinterpret_cast<char*>(m);
		cout << "ch : " << *ch << endl;
	}
}

/*
 upcasting : �� ĳ����
 - ��� ���迡�� �Ļ� Ŭ������ ��ü�� �⺻ Ŭ������ �����ͳ� ������ ����Ű�� ��
 - �Ļ� Ŭ������ �⺻ Ŭ������ ��� ����� �Լ��� ��ӹޱ� ������ �� ĳ������ ���� �⺻ Ŭ������ �������̽���
	�״�� ����� �� ����
 - �� ĳ������ ���� �Լ��� ���� ���� ���ε��� �����ϹǷ�, �Ļ� Ŭ������ �������̵��� �Լ��� ȣ���ص� �ùٸ� �Լ��� ����ȴ�

downcasting : �ٿ� ĳ����
- �⺻ Ŭ������ �����ͳ� ������ �Ļ� Ŭ������ �����ͳ� ������ ��ȯ�ϴ� ��
- �ٿ� ĳ������ �⺻ Ŭ�������� �Ļ� Ŭ������ ��ȯ�ϹǷ�, �Ļ� Ŭ������ ����� �Լ��� ����� �� �ִ�
- ������ �⺻ Ŭ�����κ��� �Ļ� Ŭ������ ��ȯ�� �׻� �ùٸ� ���� �ƴϱ� ������, �ٿ� ĳ������ �� ���� dynamic_cast Ȥ�� static_cast
  �� ����ϸ� Ÿ�� üũ�� �ؾ� ��
  (�⺻ Ŭ������ �����ͳ� ���۷����� �Ļ� Ŭ������ ĳ�����ϸ�, �ش� ��ü�� ������ �Ļ� Ŭ������ ��ü���� Ȯ���� �ʿ䰡 �ִ�)

static_cast
- ���� ĳ����
- ��Ÿ�ӿ� �� �˻縦 �������� �ʰ� ������ �ð��� �˻縦 ����
- ��ȯ�Ϸ��� ���İ� ��ȯ�� ���� ���̿� ��� �ϳ��� �� ��ȯ�� ������ ��쿡�� ����� �� �ִ�
- �����Ϳ� ���õ� �� ��ȯ �� ��� ���������� �� ��ȯ �� �پ��� ��Ȳ���� ����Ѵ�

dynamic_cast
- ���� ĳ����
Ÿ�ӿ� �� �˻縦 ����, ���� ���α׷��� �����߿� �� �˻縦 �����Ͽ� ������ �� ��ȯ�� �������� ����
- �������� ���� ����
- ��ȯ�Ϸ��� ������ ������ �ش� �������� ��ȯ ������ ��쿡�� ��� ����

const_cast
- const �Ӽ��� ���ֱ� ���ؼ� ���

reinterpret_cast
- ���� �ٸ� ������ �����ͳ� ���۷��� ������ ��ȯ � ���
- ����ü, Ŭ����, ����ü � ����ص� ��
- ������ ĳ����!
*/

void Character::Attack() const
{
	cout << "Character Attacking" << endl;
}

void Player::Heal()
{
	cout << "Player Healing" << endl;
}

void Enemy::Move()
{
	cout << "Enemy Moving!" << endl;
}
