#include "stdafx.h"
#include "CarClass.h"

void CarClass ()
{
	Car* car = new Car;

	car->Print();
	car->Print(3525);
	car->Print("MODEL");

	delete car;

	return;
}

Car::Car()
{
	Model = "Tesla";
	Number = 8751;
}

void Car::Print() {
	cout << "Model : " << GetModel() << "\tNumber : " << GetNumber() << endl;
}

void Car::Print(int InNumber) {
	cout << "Number : " << GetNumber() << endl;
}

void Car::Print(string InStr) {
	cout << "Model : " << GetModel() << endl;
}