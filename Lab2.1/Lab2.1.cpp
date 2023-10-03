//	Lab2.1.cpp
// <Баран Володимир>
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 2
#include <iostream>
#include <cmath>
using namespace std;;
int main()
{
	double a;
	double z1;
	double z2;
	double p = atan(1.0) * 4;;
	cout << "a = "; cin >> a;
	z1 = cos(a) + sin(a) + cos(a * 3) + sin(a * 3);
	z2 = ((2 * sqrt(2)) * cos(a)) * sin(a * 2 + p / 4);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
};