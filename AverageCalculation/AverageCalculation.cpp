// AverageCalculation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "math.h"
using namespace std;
int main()
{
	double ort = 1.0;
	int n = 0, sayi = 0;

	do
	{
		cout << "Bir sayi giriniz, çikmak icin o giriniz: ";
		cin >> sayi;

		if (sayi != 0)
		{
			ort *= sayi;
			n++;
		}
	} while (sayi != 0);

	ort = pow(ort, 1.0 / (double)n);
	cout << "Geometrik Ortalama: " << ort << endl;
	system("pause");
	return 0;
}
