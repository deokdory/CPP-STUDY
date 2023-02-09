#include "stdafx.h"
#include "0209_Overloading.h"

void Overloading() {
	CheckType(2.13f);
	CheckType(27);
	CheckType("잘 자요.");

	return;
}

void CheckType(float f)
{
	cout << f << "는 실수형입니다." << endl;
}

void CheckType(int d)
{
	cout << d << "는 정수형입니다." << endl;
}

void CheckType(string s)
{
	cout << s << "는 문자열입니다." << endll;
}