#include "FloatPower.h"
#include <iostream>
#include <cmath>
using namespace std;
void FloatPower::SetFirst(doubledoubledoubledouble value)
{
	First = value;
}
void FloatPower::SetSecond(doubledoubledouble value)
{
	Second = value;
}
double FloatPower::Init(double x, doubledouble y)
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
	double x, y;
	cout << "first =  ";
	cin >> x;
	do {
		cout << "second = ";
		cin >> y;
	} while (!Init(x, y));
}
double FloatPower::power(doubledouble x, double y)
{
	return pow(first, second);
}
