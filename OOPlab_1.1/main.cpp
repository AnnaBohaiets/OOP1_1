#include <iostream>
#include "Fraction.h"
using namespace std;
Fraction makeFraction(int x, int y)
{
	Fraction ff;
	if (!ff.Init(x, y))
		cout << "wrong argument to Init" << endl;
	return ff;
}
int main()
{
	Fraction f;
	f.Init(24, 8);
	f.Display();
	f.ipart();
	Fraction k;
	k.Read();
	k.Display();
	k.ipart();
	Fraction i;
	int a, b;
	cout << "first => ";
	cin >> a;
	cout << "second =>";
	cin >> b;
	i = makeFraction(a, b);
	i.ipart();
	return 0;
}