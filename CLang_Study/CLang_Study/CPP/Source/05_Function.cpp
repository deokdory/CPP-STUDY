#include "stdafx.h"
#include "05_Function.h"

void Overloading() {
	cout << "Function Called" << endl;
}

void Overloading(int a)
{
	cout << "Overloading int a : " << a << endl;
}

void Overloading(string str) {
	cout << "Overloading str : " << str << endl;
}

void Overloading(double a, double b)
{
	cout << "Overloading double a : " << a << "\t b: " << b << endl;
}

void DefaultArgument(int damage)
{
	cout << "Damage : " << damage << endl;
}

void Reference()
{

}

/*
Function Overloading : 함수 오버로딩
- 같은 이름의 함수를 중복하여 정의하는 것을 의미
- 같은 일을 처리하는 함수를 매개변수의 형식을 조금씩 달리하며, 하나의 이름으로 작성하게 해주는 것
- OOP 특징 중 다형성의 구현
- 서로 다른 시그니처를 갖는 여러 함수를 같은 이름으로 정의하는 것

Function Signature : 함수 시그니처
- 함수의 원형에 명시되는 매개변수 리스트
- 두 함수가 매개변수 의 개수와 그 타입이 모두 같다면, 두 함수의 시그니처는 같다고 할 수 있다.

Default Argument : 디폴트 인수
- 기본값이 미리 정의되어 있는 인수
- 인수를 전달하지 않으면, 함수는 자동으로 미리 정의되어 있는 디폴트 인수값을 사용
- 인수를 전달하면 당연히 디폴트 값이 아닌 전달된 인수를 가지고 함수를 호출
- 주의사항
	1) 함수의 원형에서만 지정할 수 있음
	2) 가장 오른쪽에서부터 시작하여 순서대로만 지정이 가능
	3) 가운데 인수들만 별도로 디폴트 인수를 지정할 수는 없음

Reference : 참조자
- 실제 이름 대신 사용할 수 있는 새로운 기능
- 크기가 큰 구조체와 같은 데이터를 함수의 인수로 전달해야 할 경우 사용 가능
- 클래스를 설계할 때에도 자주 사용됨
- 참조자는 대상 변수와 같은 메모리 위치를 참조하게 된다
- 선언
	- int n;		변수 선언
	- int& rn = n;	참조자 선언
	- 이 때 & 연산자는 주소가 아닌 타입을 식별하기 위해 사용하는 식별자
- 주의사항
	1) 참조자의 타입은 대상이 되는 변수의 타입과 동일해야 한다
	2) 선언과 동시에 초기화가 되어야 한다
	3) 한 번 초기화되면, 대상 변경이 불가능하다
- 함수의 인수로서 전달이 가능하다
	- 함수가 참조자를 인수로 전달받으면, 참조자가 참조하고 있는 실제 변수의 값을 해당 함수 내에서 조작이 가능
	- 참조에 의한 전달은 참조자뿐만 아니라 포인터를 사용해도 똑같은 결과를 얻을 수 있다
	- 포인터와 참조자를 사용하는 방법은 모두 같으며, 구문 형태상의 차이만 존재
-함수의 인수로 참조자를 사용하는 방법의 특징
	- 
*/