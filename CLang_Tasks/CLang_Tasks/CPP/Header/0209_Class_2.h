#pragma once

void ClassNew();

class Car {
public:
	Car();

	void SetCar();
	void SetCar(string model);
	void SetCar(int modelYear);

	const string GetModel();
	const int GetModelYear();

private:
	string model;
	int modelYear;
};