#include "stdafx.h"
#include "07_Const.h"

void DoConst()
{
	// const
	{
		const int a = 0;
		int const b = 0;
	}

	// const *
	{
		int n = 10, m = 20;
		const int* ptr = &n;	// int const * ptr 과 똑같음
		//*ptr = 30;			// 참조 접근하여 값 수정이 불가능
		cout << "n의 주소값 : " << &n << endl
			 << "m의 주소값 : " << &m << endl
			 << "ptr의 주소 : " << ptr << endl;
		ptr = &m;
		cout << "n의 주소값 : " << &n << endl
			 << "m의 주소값 : " << &m << endl
			 << "ptr의 주소 : " << ptr << endll;
		// ptr이 n의 주소를 가지고 있는 포인터
		// 여기서 const는 const int*가 아닌 const int에 적용
		// 따라서 포인터가 가리키고 있는 값을 바꿀수는 없지만 주소값을 바꿀순 있다
	}

	// * const
	{
		int n = 10, m = 20;
		int* const ptr = &n;
		*ptr = 30;			// 참조 접근하여 값 수정이 가능

		cout << "n의 값 : " << n << endl
			 << "m의 값 : " << m << endl
			 << "ptr 값 : " << *ptr << endll;

		//ptr = &m;			// 주소값 변경이 불가능
	}

	// const * const
	{
		int n = 10, m = 20;
		const int* const ptr = &n;
		//*ptr = 30;		// 참조 접근하여 수정이 불가능
		//ptr = &m;			// 주소값 변경이 불가능
	}

	// Function const
	{
		Const* c = new Const;
		c->printParameter(3);
		c->printNumber(100);
		int num = c->GetNumber();

		delete c;
	}
}

Const::Const() : number(100) {}

int Const::printParameter(const int a)
{
	// 함수 내부에서 매개변수 변경을 막기 위해서 사용
	//a = 3;
	
	cout << "Print Parameter Called  Parameter : " << a << endll;
	return 0;
}

int Const::printNumber(int num) const
{
	// 함수 내부에서 멤버변수 변경을 막는다
	cout << "Print Number Called  Number : " << number << endll;
	return 0;
}

const int Const::GetNumber()
{
	cout << "Get Number Called" << endll;
	return number;
}

#pragma region const
/*
const 키워드
- 값을 상수로 선언할 수 있도록 도와주는 키워드
- 즉, 값을 변경할 수 없도록 함
- 한번 설정된 상수는 read-only memory에 올라가고 변경하지 못하게 됨
- 값을 한번 설정하고 그 값을 유지하면서 사용할 때 필요

- 응용
	1) const*
	- 상수를 가리키는 포인터가 가리키는 공간은 수정할 수 없는 공간
	- 하지만, 상수 변수의 주소를 가리키는 포인터는 수정할 수 있는 포인터
	2) *const
	- 주소를 바꿀 수 없도록 되있다
	3) const* const
	- 가리키는 값도 상수
	- 포인터 또한 상수
*/
#pragma endregion