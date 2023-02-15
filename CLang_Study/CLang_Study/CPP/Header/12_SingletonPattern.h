#pragma once

void Singleton();

class GameManager2
{
private:
	GameManager2() {};
	// ���� �����ڿ� ���� �����ڸ� delete Ű����� ���������ν�, �ν��Ͻ��� ������� �ʵ��� ��
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
	// �Ʒ� �������� static���� �����Ͽ� �ش� Ŭ������ ��� �ν��Ͻ����� �ش� ������ �����ϵ��� ��
	static GameManager2* instance;
	static int numPlayers;
	static int difficultyLevel;
};