#include "stdafx.h"
#include "04_New.h"

void New()
{
	int* ptr_int = new int;
	*ptr_int = 777;

	cout << "*ptr_int : " << *ptr_int << endl;

	delete(ptr_int);

	A* a = new A;
	
	delete(a);

	return;
}

A::A()
{
	cout << "생성자 호출됨" << endl;
}

/*
new
- 자유 기억 공간(free store)이라고 불리는 메모리 공간에 객체를 위한 메모리를 할당받음
- new 연산자를 통해 할당받은 메모리는 따로 이름이 없으므로 해당 포인터로만 접근할 수 있음
- 생성자를 호출 (06번에서 설명)

delete
- 더는 사용하지 않는 메모리를 다시 메모리 공간에 돌려줄 수 있음
- 이때, new 연산자를 통해서 생성한 메모리가 아니면 delete로 해제할 수 없다
- 해제하고 다시 해제할려고 하면 오류가 발생
(할당이 해제된 메모리를 가리키는 포인터를 댕글링 포인터(dangling pointer)라고 함)

malloc과의 차이점
- new는 생성자를 호출한다
- new는 할당하고자 하는 자료형에 맞게 반환된 주소 값의 형변환
	ex) (int*)malloc(size) 에서 (int*) 이부분을 생략가능
*/