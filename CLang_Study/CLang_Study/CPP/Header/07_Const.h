#pragma once

void DoConst();

class Const
{
public:
	Const();

	int printParameter(const int a);
	int printNumber(int num) const;
	const int GetNumber();

private:
	int number;
};