#include "stdafx.h"
#include "11_Static.h"

int GameManager::numPlayers = 0;
int GameManager::difficultyLevel = 1;

/*
�� �Լ� ���ο��� ������� ���ϴ°�?
- Ŭ������ ��� ������ ������ ���� �������δ� �޸𸮿� �Ҵ���� �ʱ� ������, �̷��� ���� ��� ������ ����ϱ� ���ؼ��� �ݵ�� �޸𸮿� �Ҵ�Ǿ�� ��
- �̸� ���ؼ� ���� ��� ������ Ŭ���� �ܺο��� ��������� ��

- ����, �Լ� ������ �̷��� ���� ��� ������ �����ϸ� �����Ϸ��� �̸� Ŭ������ ���ǿ� �������� �� ���� ������ ������ �߻�
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
Static Variables : ���� ����
- Ŭ������ �Լ� ������ ����� ���� �տ� static Ű���带 ���̸�, ���� ������ ��
- ���� ������ ���� ������ ���������� ���α׷��� ����� �� �޸𸮿� �Ҵ�Ǹ�, ���α׷��� ����� ������ ������
- ���� ������ �ش� Ŭ������ ��� ��ü�� �����ϸ�, �� ��ü���� �����ϸ� �ٸ� ��ü���� ������ ��ħ

Static Function : ���� �Լ�
- Ŭ���� ������ ����� �Լ� �տ� static Ű���带 ���̸�, ���� �Լ��� ��
- ���� �Լ��� ��ü�� �������� �ʰ� ȣ���� �� ������ Ŭ������ ��� ��ü�� ����
- ���� �Լ��� Ŭ���� ���ο����� ����ϰų� ��ü�� �������� �ʾƵ� �Ǵ� ������ ����� �����ϴ� ��쿡 �ַ� ���

static const : Ŭ���� ������ ���
- Ŭ���� ������ ��� ���� ����� �� static const Ű���带 ����ϸ� ȿ����
- Ŭ������ ��� ��ü�� �����ϴ� ��� ���� ����� ���� ���

static member function : Ŭ���� �ܺ� �Լ�
- Ŭ���� �ܺο��� ����� �Լ��� Ŭ���� ���ο��� ���Ǿ�� �� ��, �ش� �Լ��� static �Լ��� ����
- static �Լ��� Ŭ���� �ܺο��� ȣ��� �� ������ Ŭ���� ���ο����� ��ü�� �������� �ʰ� ȣ�� ����
*/
#pragma endregion


