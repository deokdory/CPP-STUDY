#include "stdafx.h"
#include "06_Constructor.h"

void Constructor() {
	Car* car1 = new Car; // 기본 생성자
	car1->print();

	Car* car2 = new Car("Model S", "Tesla"); // 매개변수 생성자
	car2->print();

	Car* car3 = new Car(*car2); // 복사 생성자
	car2->print();
	car3->print();

	Car* car4 = new Car(move(*car3)); // 이동 생성자
	car3->print();
	car4->print();

	Car* car5 = car2; // 복사 생성자
	car2->print();
	car5->print();

	Car* car6 = new Car; // 대입 연산자 오버로딩
	*car6 = move(*car5);
	car5->print();
	car6->print();

	// Operator overloading
	{
	//	Vector v1 = Vector(20, 30);
	//	Vector v2 = Vector(10, 60);
	//
	//	Vector v3 = v1 - v2;
	//	cout << "v3.x : " << v3.x << " " << "v3.y : " << v3.y << endl;
	}

	//delete
	{
		delete car1;
		delete car2;
		delete car3;
		delete car4;
		delete car5;
		delete car6;
	}
	return;
}

Car::Car() {
	cout << "기본 생성자 호출됨" << endl;
}

Car::Car(string InModel, string InBrand) : Model(InModel), Brand(InBrand) {
	cout << "매개변수 생성자 호출됨" << endl;
}

Car::Car(const Car& other) {
	cout << "복사생성자 호출됨" << endl;
	Brand = other.Brand;
	Model = other.Model;
}

Car::Car(Car&& other) {
	cout << "이동 생성자 호출됨" << endl;
	Model = move(other.Model);
	Brand = move(other.Brand);
}

Car& Car::operator=(Car&& other) {
	cout << "대입 연산자 호출됨" << endl;

	if (this != &other) {
		Brand.clear();
		Brand = other.Brand;
		Model.clear();
		Model = other.Model;

		other.Brand.clear();
		other.Model.clear();
	}
	return *this;
}

void Car::print() {
	cout << "Model : " << Model << "\t\tBrand : " << Brand << endll;
}

Car::~Car()
{

}

// 예시
Vector::Vector(int x, int y) {
	this->x = x;
	this->y = y;
}

Vector Vector::operator-(const Vector& other)
{
	return Vector((x - other.x), (y - other.y));
}
