#include "stdafx.h"
#include "0209_Class_2.h"

void ClassNew()
{
	Car* NewCar = new Car;

	NewCar->SetCar();
	//NewCar->SetCar("YAPCAR");
	//NewCar->SetCar(2004);

	cout << "차의 모델은 " << NewCar->GetModel() << " 입니다." << endl;
	cout << "차의 연식은 " << NewCar->GetModelYear() << "년 입니다." << endl;

	delete NewCar;
}

Car::Car() { // 초기화 생성자
	SetCar("NULL");
	SetCar(0);
}

void Car::SetCar() { // 인수가 없을 때 직접 입력 받음
	string temp_s;
	int temp_i;
	cout << "차의 모델명을 입력해주세요 : ";
	getline(cin, temp_s);
	cout << "차의 연식을 입력해주세요 : ";
	cin >> temp_i;
	SetCar(temp_s);
	SetCar(temp_i);
}

void Car::SetCar(string str) { // 문자열일 때 모델명 설정
	model = str;
}

void Car::SetCar(int year) { // 정수형일 때 연식 설정
	modelYear = year;
}

const string Car::GetModel() {
	return model;
}

const int Car::GetModelYear() {
	return modelYear;
}