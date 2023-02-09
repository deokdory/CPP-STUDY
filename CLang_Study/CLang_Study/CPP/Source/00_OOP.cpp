#include "stdafx.h"
#include "00_OOP.h"

int main()
{
	//InputOutput();
	//String();
	//Class();
	//New();

	// Function
	//{
	//	Overloading();
	//	Overloading(3);
	//	Overloading("Hello world!");
	//	Overloading(3.14, 5.23);
	//
	//	DefaultArgument();
	//	DefaultArgument(300);
	//
	//	Reference();
	//}
	Caculator();

	return 0;
}

/*
Object-Oriented Programming, OOP : 객체 지향 프로그래밍
- 컴퓨터 프로그램을 명령어의 목록으로 보는 시각에서 벗어남
- 여러 개의 독립된 단위, 즉 "객체"들의 모임으로 파악하고자 하는 것
- 각각의 객체들은 메시지를 주고받고, 데이터를 처리할 수 있음

- 기본 구성 요소
	1) Class
	- 같은 종류의 집단에 속하는 속성과 행위를 정의한 것
	- 객체지향 프로그램의 기본적인 사용자 정의 데이터형
	- 클래스는 다른 클래스 또는 외부 요소와 독립적으로 디자인
	2) Object
	- 클래스의 인스턴스
		- 인스턴스 : 실제로 메모리상에 할당된 것
	- 객체는 자신 고유의 속성을 가지며 클래스에서 정의한 행위를 수행
	- 객체의 행위는 클래스에 정의된 행위를 공유함으로써 메모리를 경제적으로 사용
	3) Method, Message
	- 클래스로부터 생성된 객체를 사용하는 방법
	- 객체에 명령을 내리는 메시지
	- 메서드는 한 객체의 서브루틴 형태로 객체의 속성을 조작하는데 사용
	- 객체 간의 통신은 메시지를 통해 이루어짐

- 특징
	1) 추상화
	- 불필요한 정보는 숨기고 중요한 정보만 표현함으로써 프로그램을 간단히 만드는 것
	- 추상 자료형은 자료형의 자료 표현과 자료형의 연산을 캡슐화한 것으로 접근 제어를 통해서 자료형의 정보를
	  은닉할 수 있음
		- 추상 자료형 : 자료 추상화를 통해 정의된 자료형 (class)
	- 일반적으로
		- 추상 자료형을 클래스
		- 추상 자료형의 인스턴스를 객체
		- 추상 자료형에서 정의된 연산을 메소드(함수)
		- 메소드의 호출을 생성자 라고 함
	2) 캡슐화
	3) 정보은닉
	4) 상속성
	- 상속은 새로운 클래스가 기존의 클래스의 자료와 연산을 사용할 수 있게 하는 기능
	- 상속을 받는 새로운 클래스를 '부클래스', '파생 클래스', '하위 클래스', '자식 클래스'라고 함
	- 상속하는 기존의 클래스를 '기반 클래스', 상위 클래스', '부모 클래스' 라고 함
	- 상속을 통해서 기존의 클래스를 상속받은 하위 클래스를 이용해 프로그램의 요구에 맞춰 클래스를 수정할 수 있다
	- 클래스간의 종속관계를 형성함으로써 객체를 조직화할 수 있다
	5) 다형성
	- 어떤 한 요소에 여러 개념을 넣어 놓는 것
	- 일반적으로 오버라이딩을 의미
	- 다형 개념을 통해서 프로그램 안의 객체 간의 관계를 조직적으로 나타낼 수 있다
*/