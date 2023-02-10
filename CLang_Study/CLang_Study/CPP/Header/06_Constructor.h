#pragma once

void Constructor();

class Car {
public:
	// Default 생성자
	Car();

	// 매개변수 있는 생성자
	Car(string InModel, string InBrand);

	// 복사 생성자
	Car(const Car& other);

	// 이동 생성자
	Car(Car&& other);

	// 대입 연산자 오버로딩
	Car& operator=(Car&& other);

	// 소멸자
	~Car();

	void print();

private:
	string Model;
	string Brand;
};

// 예시
struct Vector {
	int x;
	int y;

	Vector(int x, int y);

	Vector operator-(const Vector& other);
};