#pragma once

enum class BREEDS {
	RAGDOLL,
	RUSSIAN_BLUE,
	KOREAN_SHORTHAIR,
	SCOTISH_FOLD,
	ETC,
	NONE
};
enum class COLOR {
	BLUE,
	GRAY,
	GREEN,
	BLACK,
	BROWN,
	WHITE,
	NONE,
};

void CatClass();
void Print_Breeds(BREEDS breeds);
void Print_Color(COLOR color);
class Cat {

public:
	void Change_name();
	void Change_ownerName();
	void Change_breeds();
	void Change_eyeColor();
	void Change_hairColor();
	void Change_age();

private:
	string name = " ";
	string ownerName = " ";
	BREEDS type = BREEDS::NONE;
	COLOR eyeColor = COLOR::NONE;
	COLOR hairColor = COLOR::NONE;
	int age = 0;
};