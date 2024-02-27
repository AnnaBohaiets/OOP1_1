#pragma once
class Fraction
{
private:
	int first;
	int second;
public:
	int GetFirst() const { return first; }
	int GetSecond() const { return second; }
	void SetFirst(int value);
	void SetSecond(int value);
	bool Init(int x, int y);
	void Display() const;
	void Read();
	void ipart();
};
