#pragma once

void CarClass();

class Car
{
public:

	Car();
	Car(string InModel, string InBrand);

	void Print();
	void Print(int InNumber);
	void Print(string InStr);


	inline const string GetModel() { return Model; }
	inline const int GetNumber() { return Number; }

private:
	string Model;
	int Number;
};