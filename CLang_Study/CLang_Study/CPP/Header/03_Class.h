#pragma once


void Class();

enum Ingredient {
	RED_BEAN,
	PUFF,
	KIMCHI
};

typedef enum Igredient ingredient;

class FishBread {
public:
	void ChangeName(string name);
	void ChangeContents(ingredient contents);
	void ChangePrice(int price);
private: // ���� ���� ������
	string Name;
	ingredient Contents;
	int Price;
};

