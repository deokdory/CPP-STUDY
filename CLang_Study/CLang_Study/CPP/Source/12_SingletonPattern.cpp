#include "stdafx.h"
#include "12_SingletonPattern.h"

GameManager2* GameManager2::instance = nullptr;
int GameManager2::numPlayers = 0;
int GameManager2::difficultyLevel = 1;

void Singleton() {
	GameManager2* GM1 = GameManager2::GetInstance();
	GameManager2* GM2 = GameManager2::GetInstance();

	GM1->SetNumPlayers(2);
	GM2->SetDifficultyLevel(4);

	cout << "GM1 numPlayers : " << GM1->GetNumPlayers() << endl;
	cout << "GM2 numPlayers : " << GM2->GetNumPlayers() << endl;
	cout << "GM1 difficultyLevel : " << GM1->GetDifficultyLevel() << endl;
	cout << "GM2 difficultyLevel : " << GM2->GetDifficultyLevel() << endl;

	GameManager2::DestroyInstance();
	return;
}
// instance 변수를 반환해서 하나의 GamemManager 인스턴스만 생성할 수 있도록 함
GameManager2* GameManager2::GetInstance()
{
	if (!instance)
		instance = new GameManager2();

	return instance;
}

void GameManager2::DestroyInstance()
{
	delete instance;
	instance = nullptr;
}

void GameManager2::SetNumPlayers(int num)
{
	numPlayers = num;
}

int GameManager2::GetNumPlayers() const
{
	return numPlayers;
}

void GameManager2::SetDifficultyLevel(int level)
{
	difficultyLevel = level;
}

int GameManager2::GetDifficultyLevel() const
{
	return difficultyLevel;
}
