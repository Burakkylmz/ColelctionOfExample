// SinusTheoremCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "math.h"
using namespace std;
#define PI 3.14

int main()
{
	double x, y, aci;

	cout << "Birinci kenar uzunlugunu giriniz: ";
	cin >> x;

	cout << "Ikinci kenar uzunlugunu giriniz: ";
	cin >> y;

	cout << "Acinin derecesini girin: ";
	cin >> aci;

	double alan = x * y*sin(aci*PI / 180) / 2;

	cout << "Alan= " << alan << endl;

	system("pause");
	return 0;
}