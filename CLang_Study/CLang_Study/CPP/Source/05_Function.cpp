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
Function Overloading : �Լ� �����ε�
- ���� �̸��� �Լ��� �ߺ��Ͽ� �����ϴ� ���� �ǹ�
- ���� ���� ó���ϴ� �Լ��� �Ű������� ������ ���ݾ� �޸��ϸ�, �ϳ��� �̸����� �ۼ��ϰ� ���ִ� ��
- OOP Ư¡ �� �������� ����
- ���� �ٸ� �ñ״�ó�� ���� ���� �Լ��� ���� �̸����� �����ϴ� ��

Function Signature : �Լ� �ñ״�ó
- �Լ��� ������ ���õǴ� �Ű����� ����Ʈ
- �� �Լ��� �Ű����� �� ������ �� Ÿ���� ��� ���ٸ�, �� �Լ��� �ñ״�ó�� ���ٰ� �� �� �ִ�.

Default Argument : ����Ʈ �μ�
- �⺻���� �̸� ���ǵǾ� �ִ� �μ�
- �μ��� �������� ������, �Լ��� �ڵ����� �̸� ���ǵǾ� �ִ� ����Ʈ �μ����� ���
- �μ��� �����ϸ� �翬�� ����Ʈ ���� �ƴ� ���޵� �μ��� ������ �Լ��� ȣ��
- ���ǻ���
	1) �Լ��� ���������� ������ �� ����
	2) ���� �����ʿ������� �����Ͽ� ������θ� ������ ����
	3) ��� �μ��鸸 ������ ����Ʈ �μ��� ������ ���� ����

Reference : ������
- ���� �̸� ��� ����� �� �ִ� ���ο� ���
- ũ�Ⱑ ū ����ü�� ���� �����͸� �Լ��� �μ��� �����ؾ� �� ��� ��� ����
- Ŭ������ ������ ������ ���� ����
- �����ڴ� ��� ������ ���� �޸� ��ġ�� �����ϰ� �ȴ�
- ����
	- int n;		���� ����
	- int& rn = n;	������ ����
	- �� �� & �����ڴ� �ּҰ� �ƴ� Ÿ���� �ĺ��ϱ� ���� ����ϴ� �ĺ���
- ���ǻ���
	1) �������� Ÿ���� ����� �Ǵ� ������ Ÿ�԰� �����ؾ� �Ѵ�
	2) ����� ���ÿ� �ʱ�ȭ�� �Ǿ�� �Ѵ�
	3) �� �� �ʱ�ȭ�Ǹ�, ��� ������ �Ұ����ϴ�
- �Լ��� �μ��μ� ������ �����ϴ�
	- �Լ��� �����ڸ� �μ��� ���޹�����, �����ڰ� �����ϰ� �ִ� ���� ������ ���� �ش� �Լ� ������ ������ ����
	- ������ ���� ������ �����ڻӸ� �ƴ϶� �����͸� ����ص� �Ȱ��� ����� ���� �� �ִ�
	- �����Ϳ� �����ڸ� ����ϴ� ����� ��� ������, ���� ���»��� ���̸� ����
-�Լ��� �μ��� �����ڸ� ����ϴ� ����� Ư¡
	- 
*/