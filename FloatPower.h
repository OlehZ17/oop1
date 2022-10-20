#pragma once
class FloatPower
{
private:
	double First, Second;


public:
	double GetFirst() { return First; }
	double GetSecond() { return Second; }
	void SetFirst(double value);
	void SetSecond(double value);
	double Init(double x, double y);
	void Display() const;
	void Read();
	double power(double x, double y);
};
