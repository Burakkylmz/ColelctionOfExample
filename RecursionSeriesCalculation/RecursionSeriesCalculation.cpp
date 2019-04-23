// RecursionSeriesCalculation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
using namespace std;

double Seri(double x)
{
	if (x < 1)
	{
		return 0;
	}
	else
	{
		return (x / (x + 1) + Seri(x - 1));
	}
}
int main()
{
	double x, sonuc;
	cout << "Seri icin sayi giriniz:  ";
	cin >> x;

	sonuc = Seri(x);
	cout << "Sonuc = " << sonuc;
	return 0;
}