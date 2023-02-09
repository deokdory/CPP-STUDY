#include "stdafx.h"
#include "0208_Class.h"

void CatClass() {
	Cat Cat1;
	Cat1.Change_name();
	Cat1.Change_ownerName();
	Cat1.Change_breeds();
	Cat1.Change_eyeColor();
	Cat1.Change_hairColor();
	Cat1.Change_age();
}

void Print_Breeds(BREEDS breeds)
{
	switch (breeds) {
		case BREEDS::RAGDOLL: cout << "�����Դϴ�." << endll; break;
		case BREEDS::RUSSIAN_BLUE: cout << "���þȺ���Դϴ�." << endll; break;
		case BREEDS::KOREAN_SHORTHAIR: cout << "�ڸ��ȼ�����Դϴ�." << endll; break;
		case BREEDS::SCOTISH_FOLD: cout << "����Ƽ�������Դϴ�." << endll; break;
		case BREEDS::ETC: cout << "�ð��ں����Դϴ�." << endll; break;
		default: cout << "���ǵ��� ���� ���Դϴ�." << endll; break;
}
}

void Print_Color(COLOR color)
{
	switch (color) {
	case COLOR::BLUE: cout << "�Ķ����Դϴ�." << endll; break;
	case COLOR::GRAY: cout << "ȸ���Դϴ�." << endll; break;
	case COLOR::GREEN: cout << "�ʷϻ��Դϴ�." << endll; break;
	case COLOR::BLACK: cout << "�������Դϴ�." << endll; break;
	case COLOR::BROWN: cout << "�����Դϴ�." << endll; break;
	case COLOR::WHITE: cout << "����Դϴ�." << endll; break;
	default: cout << "���ǵ��� ���� ���Դϴ�." << endll; break;
	}
}

void Cat::Change_name()
{
	cout << "������� �̸��� �Է����ּ��� : ";
	getline(cin, Cat::name);
	cout << "������� �̸��� " << Cat::name << "�Դϴ�." << endll;
}

void Cat::Change_ownerName()
{
	cout << "������� ������ �����Դϱ�? : ";
	getline(cin, Cat::ownerName);
	cout << "������� ������ " << Cat::ownerName << "�Դϴ�." << endll;
}

void Cat::Change_breeds()
{
	int temp;
	cout << "������� ���� �����Դϱ�?" << endl;
	cout << "1. ����   2. ���þȺ��   3. �ڸ��ȼ����   4. ����Ƽ������   5. ��Ÿ" << endl;
	cout << "���ڷ� �Է����ּ��� : ";
	cin >> temp;
	Cat::type = static_cast<BREEDS>(temp - 1);
	cout << "������� ���� "; Print_Breeds(Cat::type);
}

void Cat::Change_eyeColor()
{
	int temp;
	cout << "����� ���� ���� ���� ���Դϱ�?" << endl;
	cout << "1. �Ķ�   2. ȸ��   3. ���   4. ������   5. ����   6. ���" << endl;
	cout << "���ڷ� �Է����ּ��� : ";
	cin >> temp;
	Cat::eyeColor = static_cast<COLOR>(temp - 1);
	cout << "����� ���� ���� "; Print_Color(Cat::eyeColor);
}

void Cat::Change_hairColor()
{
	int temp;
	cout << "����� ���� ���� ���� ���Դϱ�?" << endl;
	cout << "1. �Ķ�   2. ȸ��   3. ���   4. ������   5. ����   6. ���" << endl;
	cout << "���ڷ� �Է����ּ��� : ";
	cin >> temp;
	Cat::hairColor = static_cast<COLOR>(temp - 1);
	cout << "����� ���� ���� "; Print_Color(Cat::hairColor);
}

void Cat::Change_age()
{
	cout << "����̴� �� ���Դϱ�? : ";
	cin >> Cat::age;
	cout << "����̴� " << Cat::age << "���Դϴ�." << endll;
}
