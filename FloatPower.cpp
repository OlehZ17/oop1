#include "FloatPower.h"
#include <iostream>
#include <cmath>
using namespace std;
void FloatPower::SetFirst(int value)
{
	First = value;
}
void FloatPower::SetSecond(int value)
{
	Second = value;
}
double FloatPower::Init(int x, int y)
{
	setlocale(0, "");
	cout << "Enter the number: " << endl;
	cin >> x;
	cout << "Enter the power:" << endl;
	cin >> y;
	cout << "Your answer  are :" << pow(x, y);
	return 0;
}

void FloatPower::Display() const
{
	cout << "first = " << First << " second = " << Second << endl;
}
void FloatPower::Read()
{
	int x, y;
	cout << "first =  ";
	cin >> x;
	do {
		cout << "second = ";
		cin >> y;
	} while (!Init(x, y));
}
double FloatPower::power(int x, int y)
{
	return pow(x, y);
}
