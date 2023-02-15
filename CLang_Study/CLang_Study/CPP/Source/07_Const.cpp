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
		const int* ptr = &n;	// int const * ptr �� �Ȱ���
		//*ptr = 30;			// ���� �����Ͽ� �� ������ �Ұ���
		cout << "n�� �ּҰ� : " << &n << endl
			 << "m�� �ּҰ� : " << &m << endl
			 << "ptr�� �ּ� : " << ptr << endl;
		ptr = &m;
		cout << "n�� �ּҰ� : " << &n << endl
			 << "m�� �ּҰ� : " << &m << endl
			 << "ptr�� �ּ� : " << ptr << endll;
		// ptr�� n�� �ּҸ� ������ �ִ� ������
		// ���⼭ const�� const int*�� �ƴ� const int�� ����
		// ���� �����Ͱ� ����Ű�� �ִ� ���� �ٲܼ��� ������ �ּҰ��� �ٲܼ� �ִ�
	}

	// * const
	{
		int n = 10, m = 20;
		int* const ptr = &n;
		*ptr = 30;			// ���� �����Ͽ� �� ������ ����

		cout << "n�� �� : " << n << endl
			 << "m�� �� : " << m << endl
			 << "ptr �� : " << *ptr << endll;

		//ptr = &m;			// �ּҰ� ������ �Ұ���
	}

	// const * const
	{
		int n = 10, m = 20;
		const int* const ptr = &n;
		//*ptr = 30;		// ���� �����Ͽ� ������ �Ұ���
		//ptr = &m;			// �ּҰ� ������ �Ұ���
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
	// �Լ� ���ο��� �Ű����� ������ ���� ���ؼ� ���
	//a = 3;
	
	cout << "Print Parameter Called  Parameter : " << a << endll;
	return 0;
}

int Const::printNumber(int num) const
{
	// �Լ� ���ο��� ������� ������ ���´�
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
const Ű����
- ���� ����� ������ �� �ֵ��� �����ִ� Ű����
- ��, ���� ������ �� ������ ��
- �ѹ� ������ ����� read-only memory�� �ö󰡰� �������� ���ϰ� ��
- ���� �ѹ� �����ϰ� �� ���� �����ϸ鼭 ����� �� �ʿ�

- ����
	1) const*
	- ����� ����Ű�� �����Ͱ� ����Ű�� ������ ������ �� ���� ����
	- ������, ��� ������ �ּҸ� ����Ű�� �����ʹ� ������ �� �ִ� ������
	2) *const
	- �ּҸ� �ٲ� �� ������ ���ִ�
	3) const* const
	- ����Ű�� ���� ���
	- ������ ���� ���
*/
#pragma endregion