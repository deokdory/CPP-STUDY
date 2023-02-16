#pragma once

void Static();

class GameManager {
public:
	// 정적 멤버 함수
	// 클래스의 인스턴스가 만들어지지 않아도 호출이 가능
	static void AddPlayer();

	// 정적 멤버 함수
	// 멤버 변수 값을 출력
	static void UpdatePlayers();

	// 정적 멤버 함수
	// difficultyLevel 멤버 변수를 설정하는 역할
	static void SetDifficultyLevel(int level);

	// 클래스 내부 상수
	// 클래스 내부에서만 사용 가능 / 프로그램이 실행 중일 때 값이 바뀌지 않음
	static const int MAX_PLAYERS = 4;
	
	// 정적 변수
	// 클래스의 모든 인스턴스에서 공유
	// 클래스의 인스턴스가 만들어지지 않더라도 접근할 수 있음
	static int numPlayers;

private:
	static int difficultyLevel;
};