#pragma once

void Static();

class GameManager {
public:
	// ���� ��� �Լ�
	// Ŭ������ �ν��Ͻ��� ��������� �ʾƵ� ȣ���� ����
	static void AddPlayer();

	// ���� ��� �Լ�
	// ��� ���� ���� ���
	static void UpdatePlayers();

	// ���� ��� �Լ�
	// difficultyLevel ��� ������ �����ϴ� ����
	static void SetDifficultyLevel(int level);

	// Ŭ���� ���� ���
	// Ŭ���� ���ο����� ��� ���� / ���α׷��� ���� ���� �� ���� �ٲ��� ����
	static const int MAX_PLAYERS = 4;
	
	// ���� ����
	// Ŭ������ ��� �ν��Ͻ����� ����
	// Ŭ������ �ν��Ͻ��� ��������� �ʴ��� ������ �� ����
	static int numPlayers;

private:
	static int difficultyLevel;
};