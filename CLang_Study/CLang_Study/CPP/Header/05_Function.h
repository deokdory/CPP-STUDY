#pragma once

struct Band
{
	string Name;
	string Song;
};

void Overloading();
void Overloading(int a);
void Overloading(string str);
void Overloading(double a, double b);

void DefaultArgument(int Damage = 1);

void Reference();
void DoReference(int& a, int& b);

void StructReference(const Band& band);

void Caculator();
int add(int a, int b);
float add(int a, float b);
float add(float a, int b);
float add(float a, float b);