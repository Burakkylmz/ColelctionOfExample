// CalculateModeofNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "math.h"
using namespace std;
int main()
{
	int bolum, bolen;
	do
	{
		cout << "Bolum degerini giriniz: ";
		cin >> bolum;
		cout << "Bolen degerini giriniz: ";
		cin >> bolen;
		cout << bolum << " mod " << bolen << " = " << bolum % bolen << endl;
	} while (bolum != 0);

	cout << "0 sayisinin boleni yoktur...!";
	system("pause");
	return 0;
}