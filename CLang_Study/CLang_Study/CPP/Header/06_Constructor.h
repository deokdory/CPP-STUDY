#pragma once

void Constructor();

class Car {
public:
	// Default ������
	Car();

	// �Ű����� �ִ� ������
	Car(string InModel, string InBrand);

	// ���� ������
	Car(const Car& other);

	// �̵� ������
	Car(Car&& other);

	// ���� ������ �����ε�
	Car& operator=(Car&& other);

	// �Ҹ���
	~Car();

	void print();

private:
	string Model;
	string Brand;
};

// ����
struct Vector {
	int x;
	int y;

	Vector(int x, int y);

	Vector operator-(const Vector& other);
};