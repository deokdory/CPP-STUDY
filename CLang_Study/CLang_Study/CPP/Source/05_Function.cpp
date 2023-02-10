#include "stdafx.h"
#include "05_Function.h"

void Overloading()
{
	cout << "Function Called" << endl;
}

void Overloading(int a)
{
	cout << "Overloading int a : " << a << endl;
}

void Overloading(string str)
{
	cout << "Overloading str : " << str << endl;
}

void Overloading(double a, double b)
{
	cout << "Overloading double a : " << a << "\t b : " << b << endl;
}

void DefaultArgument(int damage)
{
	cout << "Damage : " << damage << endl;
}

void Reference()
{
	// 참조자 선언과 증가 연산
	{
	int x = 100;
	int& rx = x;

	cout << "x : " << x << "\trx : " << rx << endl;
	rx++;
	cout << "x : " << x << "\trx : " << rx << endl;
	cout << "address x : " << &x << "\taddress rx : " << &rx << endll;
	}

	// 참조자 인수 전달
	{
		int a = 10;
		int b = 30;

		cout << "변경 전 a : " << a << "\t" << "변경 전 b : " << b << endl;

		DoReference(a, b);

		cout << "변경 후 a : " << a << "\t" << "변경 후 b : " << b << endl;
	}

	// 구조체의 참조
	{
		Band band;
		band.Name = "SURL";
		band.Song = "Drama";
		StructReference(band);
	}

	cout << SQR(3+3) << endl;
}

void DoReference(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void StructReference(const Band& band)
{
	cout << "밴드 이름 : " << band.Name << endl;
	cout << "밴드 노래 : " << band.Song << endll;
}

enum sign {
	PLUS,
	MINUS,
	MULTIPLY,
	DIVIDE
};

enum numType {
	INTEGER,
	FLOAT
};

void Caculator() {
	int type[2];
	int integer[2];
	float floating[2];

	int sign = 0;

	for (int i = 0; i < 2; i++) {

		cout << i + 1 << "번째로 입력하고 싶은 수의 형식은?(1. 정수, 2. 실수) : ";
		cin >> type[i];
		switch (type[i] - 1) {
		case INTEGER:
			cout << i + 1 << "번째 정수 를 입력해주세요 : ";
			cin >> integer[i];
			break;
		case FLOAT:
			cout << i + 1 << "번째 실수 를 입력해주세요 : ";
			cin >> floating[i];
			break;
		}
	}
	if (type[0] == 1 && type[1] == 1) {
		cout << add(integer[0], integer[1]);
	}
	else if (type[0] == 1 && type[1] == 2) {
		cout << add(integer[0], floating[1]);
	}
	else if (type[0] == 2 && type[1] == 1) {
		cout << add(floating[0], integer[1]);
	}
	else {
		cout << add(floating[0], floating[1]);
	}
}

int add(int a, int b)
{
	return a + b;
}

float add(int a, float b)
{
	return a + b;
}

float add(float a, int b)
{
	return a + b;
}

float add(float a, float b)
{
	return a + b;
}
