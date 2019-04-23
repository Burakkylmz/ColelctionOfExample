// CalculatingAreaAndCircumferenceRectangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	double kisa, uzun, cevre, alan;

	cout << "Kisa kenar uzunlugu girin: ";
	cin >> kisa;
	cout << "Uzun kenar uzunluðu girin: ";
	cin >> uzun;

	cevre = (uzun + kisa) * 2;
	alana = uzun * kisa;

	cout << "Dikdortgenin Cevresi: " << cevre << endl;
	cout << "Dikdortgenin Alani: " << alan << endl;

	system("pause");
	return 0;
}