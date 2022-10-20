#pragma once
class FloatPower
{
private:
	double First, Second;


public:
	double GetFirst() { return First; }
	double GetSecond() { return Second; }
	void SetFirst(int value);
	void SetSecond(int value);
	double Init(int x, int y);
	void Display() const;
	void Read();
	double power(int x, int y);
};
