// 2ndDegreeLinearEquationCalculation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "math.h"
using namespace std;
int main()
{
	double a, b, c;

	cout << "Katsayi A giriniz: ";
	cin >> a;

	cout << "Katsayi B giriniz: ";
	cin >> b;

	cout << "Katsayi C giriniz: ";
	cin >> c;

	double D = (b*b) - 4 * a*c;

	if (D > 0)
	{
		double x1 = (-b + sqrt(D)) / 2 * a;
		double x2 = (-b - sqrt(D)) / 2 * a;

		cout << "Kok 1 (x1) = " << x1 << endl;
		cout << "Kok 2 (x2) = " << x2 << endl;
	}
	else if (D == 0)
	{
		double x1 = (-b + sqrt(D)) / 2 * a;
		cout << "Kok 1 (x1) = " << x1 << endl;
	}
	else if (D < 0)
	{
		cout << "Reel kokler yoktur!";
	}
	system("pause");
	return 0;
}