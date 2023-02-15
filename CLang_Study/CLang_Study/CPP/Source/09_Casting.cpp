#include "stdafx.h"
#include "09_Casting.h"

void Casting()
{
	// up / down casting
	{
		// 업 캐스팅을 이용 Player 객체 생성 ( player를 생성하면서 Character * 형으로 생성 )
		Character* player = new Player;
		player->Attack();

		// 다운 캐스팅을 이용해 Player에 접근
		Player* realPlayer = dynamic_cast<Player*>(player);
		if (realPlayer != nullptr) { realPlayer->Heal(); }
		else { cout << "Player Casting Fail" << endl; }

		// 업 캐스팅을 이용해 Enemy 객체를 생성
		Character* enemy = new Enemy();
		enemy->Attack();

		// 다운 캐스팅을 이용해 Enemy에 접근
		Enemy* realEnemy = dynamic_cast<Enemy*>(enemy);
		if (realEnemy) { realEnemy->Move(); }
		else { cout << "Player Casting Fail" << endl; }

		delete player;
		delete enemy;
	}

	ENDL;

	// const casting #1
	const Player* player = new Player(10);

	// 상수 객체에서 값을 직접 변경
	//player->SetXP(30); // <- player가 const라서 값 직접 변경 불가

	// const_cast 를 사용해서 상수성을 제거
	Player& modifiablePlayer = const_cast<Player&>(*player);
	modifiablePlayer.SetXP(300);

	cout << "Player XP : " << player->GetXP() << endl;


	// const casting #2 ( 안됌 )
	const int x = 123;
	int& y = const_cast<int&>(x);
	y = 0;

	cout << "const_cast x : " << &x << " " << x << endl;
	cout << "const_cast y : " << &y << " " << y << endl;	
	
	/*
	왜 #1과 #2가 결과가 다른가?
	- Player는 Character의 포인터 / n은 const int
	- Player는 new 연산자를 사용해서 동적 할당된 메모리 / n은 스택 메모리

	- Player는 const Character*로 선언되어 있기 때문에 const_cast를 사용하여 해당 객체의 
	  멤버 함수를 호출하거나 변경할 수 있음
	  
	- n은 const int로 선언되어 있기 때문에 const_cast를 사용하여 int로 변환하여 값을 변경하려고 하면
	  undefined behavior가 발생 ( 정의되지 않은 행동 )

	- 따라서 const_cast를 사용하여 const int 같은 값을 int로 캐스팅하여 값을 변경하는 것은 권장하지 않음
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
 upcasting : 업 캐스팅
 - 상속 관계에서 파생 클래스의 객체를 기본 클래스의 포인터나 참조로 가리키는 것
 - 파생 클래스는 기본 클래스의 모든 멤버와 함수를 상속받기 때문에 업 캐스팅을 통해 기본 클래스의 인터페이스를
	그대로 사용할 수 있음
 - 업 캐스팅은 가상 함수를 통해 동적 바인딩을 지원하므로, 파생 클래스의 오버라이딩된 함수를 호출해도 올바른 함수가 실행된다

downcasting : 다운 캐스팅
- 기본 클래스의 포인터나 참조를 파생 클래스의 포인터나 참조로 변환하는 것
- 다운 캐스팅은 기본 클래스에서 파생 클래스로 변환하므로, 파생 클래스의 멤버와 함수를 사용할 수 있다
- 하지만 기본 클래스로부터 파생 클래스의 변환은 항상 올바른 것이 아니기 때문에, 다운 캐스팅을 할 때는 dynamic_cast 혹은 static_cast
  를 사용하며 타입 체크를 해야 한
  (기본 클래스의 포인터나 레퍼런스를 파생 클래스로 캐스팅하면, 해당 객체가 실제로 파생 클래스의 객체인지 확인할 필요가 있다)

static_cast
- 정적 캐스팅
- 런타임에 형 검사를 수행하지 않고 컴파일 시간에 검사를 수행
- 변환하려는 형식과 반환될 형식 사이에 적어도 하나의 형 변환이 가능한 경우에만 사용할 수 있다
- 포인터와 관련된 형 변환 및 상속 계층에서의 형 변환 등 다양한 상황에서 사용한다

dynamic_cast
- 동적 캐스팅
타임에 형 검사를 수행, 따라서 프로그램이 실행중에 형 검사를 수행하여 적절항 현 변환이 가능한지 결정
- 안전성을 위해 사용됨
- 변환하려는 형식이 실제로 해당 형식으로 변환 가능한 경우에만 사용 가능

const_cast
- const 속성을 없애기 위해서 사용

reinterpret_cast
- 서로 다른 형식의 포인터나 레퍼런스 사이의 변환 등에 사용
- 구조체, 클래스, 공용체 등에 사용해도 됨
- 위험한 캐스팅!
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
