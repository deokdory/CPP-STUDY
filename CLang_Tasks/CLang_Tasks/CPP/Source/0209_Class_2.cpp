#include "stdafx.h"
#include "0209_Class_2.h"

void ClassNew()
{
	Car* NewCar = new Car;

	NewCar->SetCar();
	//NewCar->SetCar("YAPCAR");
	//NewCar->SetCar(2004);

	cout << "���� ���� " << NewCar->GetModel() << " �Դϴ�." << endl;
	cout << "���� ������ " << NewCar->GetModelYear() << "�� �Դϴ�." << endl;

	delete NewCar;
}

Car::Car() { // �ʱ�ȭ ������
	SetCar("NULL");
	SetCar(0);
}

void Car::SetCar() { // �μ��� ���� �� ���� �Է� ����
	string temp_s;
	int temp_i;
	cout << "���� �𵨸��� �Է����ּ��� : ";
	getline(cin, temp_s);
	cout << "���� ������ �Է����ּ��� : ";
	cin >> temp_i;
	SetCar(temp_s);
	SetCar(temp_i);
}

void Car::SetCar(string str) { // ���ڿ��� �� �𵨸� ����
	model = str;
}

void Car::SetCar(int year) { // �������� �� ���� ����
	modelYear = year;
}

const string Car::GetModel() {
	return model;
}

const int Car::GetModelYear() {
	return modelYear;
}