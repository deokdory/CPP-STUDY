#pragma once

void Class();

enum Ingredient
{
	RED_BEAN,
	PUFF,
	KIMCHI
};

typedef enum Ingredient ingredient;

class FishBread
{
public:
	void ChageName(string name);
	void ChangeContents(ingredient contents);
	void Changeprice(int price);
private:
	string Name;
	ingredient Contents;
	int Price;
};

/*
class?
- 구조체 상위호환
	- C++의 구조체 멤버로 함수를 포함할 수 있기에, C 언어의 구조체보다는 상위호환
- 구조체와 클래스의 차이는 기본 접근 제어의 차이일 뿐, 나머지는 거의 같다
(클래스의 멤버 변수를 프로퍼티(property), 멤버 함수를 메소드(method)라고 함

Object : 객체
- 실세계에 존재하거나 생각할 수 있는 것
- 속성과 기능을 가지는 프로그램 단위

Instance : 인스턴스
- 클래스(설계도)를 바탕으로 실체화되어 메모리에 존재하는 실체
*/