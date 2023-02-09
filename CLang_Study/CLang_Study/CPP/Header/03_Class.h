#pragma once

void Class();

enum Ingredient
{
	RED_BEAN,
	PUFF,
	KIMCHI
};

typedef enum Ingredient ingredient;

class FishBread
{
public:
	void ChageName(string name);
	void ChangeContents(ingredient contents);
	void Changeprice(int price);
private:
	string Name;
	ingredient Contents;
	int Price;
};

/*
class?
- ����ü ����ȣȯ
	- C++�� ����ü ����� �Լ��� ������ �� �ֱ⿡, C ����� ����ü���ٴ� ����ȣȯ
- ����ü�� Ŭ������ ���̴� �⺻ ���� ������ ������ ��, �������� ���� ����
(Ŭ������ ��� ������ ������Ƽ(property), ��� �Լ��� �޼ҵ�(method)��� ��

Object : ��ü
- �Ǽ��迡 �����ϰų� ������ �� �ִ� ��
- �Ӽ��� ����� ������ ���α׷� ����

Instance : �ν��Ͻ�
- Ŭ����(���赵)�� �������� ��üȭ�Ǿ� �޸𸮿� �����ϴ� ��ü
*/