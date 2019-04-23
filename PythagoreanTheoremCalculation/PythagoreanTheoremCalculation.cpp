// PythagoreanTheoremCalculation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "math.h"

using namespace std;

int main()
{
	double x, y;

	cout << "Ucgenin 1.dik kenarini giriniz: ";
	cin >> x;

	cout << "Ucgenin 2.dik kenarini giriniz: ";
	cin >> y;

	double hipatenus = sqrt(x*x + y * y);

	cout << "Hipatenus = " << hipatenus << endl;
	system("pause");
	return 0;
}
