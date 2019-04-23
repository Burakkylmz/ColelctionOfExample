// FibonacciSeries.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
using namespace std;
int main()
{
	int terim, x = 1, y = 1, z;

	cout << "Terim Saysini Giriniz: ";
	cin >> terim;

	cout << "\t" << x << "\t" << y;

	for (int i = 1; i <= terim - 2; i++)
	{
		z = x + y;
		cout << "\t" << z;
		x = y;
		y = z;
	}
	system("pause");
	return 0;
}
