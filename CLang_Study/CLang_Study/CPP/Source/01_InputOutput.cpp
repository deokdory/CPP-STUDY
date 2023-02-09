#include "stdafx.h"
#include "01_InputOutput.h"

void InputOutput()
{
	{
		std::cout << "Hello World!\n";
		cout << "Hello World\n";
	}

	//cout
	{
		int n = 100;
		cout << n << endl;
	}

	//cin
	{
		int num;
		cin >> num;
		cout << num;
	}
}

/*
namespace
- 이름이 기억되는 영역
- 이름이 소속된 공간을 의미
- 클래스, 함수, 변수 등은 std라는 이름 공간에 저장되어 있음
- namespace 내에 있는 정의를 사용하려면 아래와 같이 사용해야 함
	ex) std::cout / std::cin ...
- namespace에 속한 정의를 간단하게 사용하려면 다음과 같은 명령문을 추가
- using namespace 이름;

범위 지정 연산자 (::)
- C++에서 가장 우선순위가 높은 연산자
- 여러 범위에서 사용된 식별자를 식별하고 구분하는데 사용
- 변수, 함수, 열거체가 올 수 있음
- 범위 지정 연산자를 변수 이름 앞에 붙이면 해당 변수는 전역으로 사용하라는 의미
- 클래스에 이 연산자를 사용하면 네임스페이스 멤버를 식별하거나, 클래스의 정적 멤버를 호출할 수 있다
*/