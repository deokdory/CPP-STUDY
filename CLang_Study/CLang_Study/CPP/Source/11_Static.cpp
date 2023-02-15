#include "stdafx.h"
#include "11_Static.h"

int GameManager::numPlayers = 0;
int GameManager::difficultyLevel = 1;

/*
왜 함수 내부에서 사용하지 못하는가?
- 클래스의 멤버 변수를 정의할 때는 선언만으로는 메모리에 할당되지 않기 때문에, 이러한 정적 멤버 변수를 사용하기 위해서는 반드시 메모리에 할당되어야 함
- 이를 위해서 정적 멤버 변수를 클래스 외부에서 정의해줘야 함

- 따라서, 함수 내에서 이러한 정적 멤버 변수를 정의하면 컴파일러가 이를 클래스의 정의와 연관지을 수 없기 때문에 에러가 발생
*/
void Static() {
	GameManager::AddPlayer();
	GameManager::AddPlayer();
	GameManager::UpdatePlayers();
	GameManager::SetDifficultyLevel(3);

	return;
}

void GameManager::AddPlayer()
{
	if (numPlayers < MAX_PLAYERS)
		numPlayers++;
}

void GameManager::UpdatePlayers()
{
	cout << "Updating..." << endl << numPlayers << "players." << endl;

	return;
}

void GameManager::SetDifficultyLevel(int level)
{
	difficultyLevel = level; 

	return;
}

#pragma region Static
/*
Static Variables : 정적 변수
- 클래스나 함수 내에서 선언된 변수 앞에 static 키워드를 붙이면, 정적 변수가 됨
- 정적 변수는 전역 변수와 마찬가지로 프로그램이 실행될 때 메모리에 할당되며, 프로그램이 종료될 때까지 유지됨
- 정적 변수는 해당 클래스의 모든 객체가 공유하며, 한 객체에서 수정하면 다른 객체에도 영향을 미침

Static Function : 정적 함수
- 클래스 내에서 선언된 함수 앞에 static 키워드를 붙이면, 정적 함수가 됨
- 정적 함수는 객체를 생성하지 않고도 호출할 수 있으며 클래스의 모든 객체가 공유
- 정적 함수는 클래스 내부에서만 사용하거나 객체를 생성하지 않아도 되는 동일한 기능을 제공하는 경우에 주로 사용

static const : 클래스 내부의 상수
- 클래스 내에서 상수 값을 사용할 때 static const 키워드를 사용하면 효율적
- 클래스의 모든 객체가 공유하는 상수 값을 만들기 위해 사용

static member function : 클래스 외부 함수
- 클래스 외부에서 선언된 함수가 클래스 내부에서 사용되어야 할 때, 해당 함수를 static 함수로 선언
- static 함수는 클래스 외부에서 호출될 수 있지만 클래스 내부에서는 객체를 생성하지 않고도 호출 가능
*/
#pragma endregion


