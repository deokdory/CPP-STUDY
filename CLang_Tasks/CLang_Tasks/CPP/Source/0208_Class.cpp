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
		case BREEDS::RAGDOLL: cout << "랙돌입니다." << endll; break;
		case BREEDS::RUSSIAN_BLUE: cout << "러시안블루입니다." << endll; break;
		case BREEDS::KOREAN_SHORTHAIR: cout << "코리안숏헤어입니다." << endll; break;
		case BREEDS::SCOTISH_FOLD: cout << "스코티쉬폴드입니다." << endll; break;
		case BREEDS::ETC: cout << "시고르자브종입니다." << endll; break;
		default: cout << "정의되지 않은 종입니다." << endll; break;
}
}

void Print_Color(COLOR color)
{
	switch (color) {
	case COLOR::BLUE: cout << "파란색입니다." << endll; break;
	case COLOR::GRAY: cout << "회색입니다." << endll; break;
	case COLOR::GREEN: cout << "초록색입니다." << endll; break;
	case COLOR::BLACK: cout << "검은색입니다." << endll; break;
	case COLOR::BROWN: cout << "갈색입니다." << endll; break;
	case COLOR::WHITE: cout << "흰색입니다." << endll; break;
	default: cout << "정의되지 않은 색입니다." << endll; break;
	}
}

void Cat::Change_name()
{
	cout << "고양이의 이름을 입력해주세요 : ";
	getline(cin, Cat::name);
	cout << "고양이의 이름은 " << Cat::name << "입니다." << endll;
}

void Cat::Change_ownerName()
{
	cout << "고양이의 주인은 누구입니까? : ";
	getline(cin, Cat::ownerName);
	cout << "고양이의 주인은 " << Cat::ownerName << "입니다." << endll;
}

void Cat::Change_breeds()
{
	int temp;
	cout << "고양이의 종은 무엇입니까?" << endl;
	cout << "1. 랙돌   2. 러시안블루   3. 코리안숏헤어   4. 스코티쉬폴드   5. 기타" << endl;
	cout << "숫자로 입력해주세요 : ";
	cin >> temp;
	Cat::type = static_cast<BREEDS>(temp - 1);
	cout << "고양이의 종은 "; Print_Breeds(Cat::type);
}

void Cat::Change_eyeColor()
{
	int temp;
	cout << "고양이 눈의 색은 무슨 색입니까?" << endl;
	cout << "1. 파랑   2. 회색   3. 녹색   4. 검은색   5. 갈색   6. 흰색" << endl;
	cout << "숫자로 입력해주세요 : ";
	cin >> temp;
	Cat::eyeColor = static_cast<COLOR>(temp - 1);
	cout << "고양이 눈의 색은 "; Print_Color(Cat::eyeColor);
}

void Cat::Change_hairColor()
{
	int temp;
	cout << "고양이 털의 색은 무슨 색입니까?" << endl;
	cout << "1. 파랑   2. 회색   3. 녹색   4. 검은색   5. 갈색   6. 흰색" << endl;
	cout << "숫자로 입력해주세요 : ";
	cin >> temp;
	Cat::hairColor = static_cast<COLOR>(temp - 1);
	cout << "고양이 털의 색은 "; Print_Color(Cat::hairColor);
}

void Cat::Change_age()
{
	cout << "고양이는 몇 살입니까? : ";
	cin >> Cat::age;
	cout << "고양이는 " << Cat::age << "살입니다." << endll;
}
