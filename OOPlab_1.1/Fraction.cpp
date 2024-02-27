#include "Fraction.h"
#include <iostream>
using namespace std;
void Fraction::SetFirst(int value)
{
	first = value;
}
void Fraction::SetSecond(int value)
{
	second = value;
}
bool Fraction::Init(int x, int y)
{
	if (x > 0)		
		if (y > 0)
		{
			first = x;
			second = y;
			return true;
		}
		else
		{
			second = 0;
			return false;
		}
	else
	{
		first = 0;
		return false;
	}
	
}
void Fraction::Display() const
{
	cout << "first = " << first << " second = " << second << endl;
}
void Fraction::Read()
{
	int x, y;
	
	do {
		cout << "first => ";
        cin >> x;
		cout << "second =>";
		cin >> y;
	} while (!Init(x, y));
}
void Fraction::ipart()
{
	if (second == 0) cout << "wrong argument to ipart (second)";
	cout << "Whole part of fraction = " << (first - (first % second)) / second << endl;
}
