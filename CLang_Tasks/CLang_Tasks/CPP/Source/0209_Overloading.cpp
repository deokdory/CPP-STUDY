#include "stdafx.h"
#include "0209_Overloading.h"

void Overloading() {
	CheckType(2.13f);
	CheckType(27);
	CheckType("�� �ڿ�.");

	return;
}

void CheckType(float f)
{
	cout << f << "�� �Ǽ����Դϴ�." << endl;
}

void CheckType(int d)
{
	cout << d << "�� �������Դϴ�." << endl;
}

void CheckType(string s)
{
	cout << s << "�� ���ڿ��Դϴ�." << endll;
}