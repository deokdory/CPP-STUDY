#pragma once

void Singleton();

class GameManager2
{
private:
	GameManager2() {};
	// 복사 생성자와 대입 연산자를 delete 키워드로 삭제함으로써, 인스턴스가 복사되지 않도록 함
	GameManager2(const GameManager2& other) = delete;
	GameManager2& operator=(const GameManager2& other) = delete;

public:
	static GameManager2* GetInstance();
	static void DestroyInstance();

	void SetNumPlayers(int num);
	int GetNumPlayers() const;

	void SetDifficultyLevel(int level);
	int GetDifficultyLevel() const;

private:
	// 아래 변수들은 static으로 선언하여 해당 클래스의 모든 인스턴스들이 해당 변수를 공유하도록 함
	static GameManager2* instance;
	static int numPlayers;
	static int difficultyLevel;
};