// VarianceAndStandardDeviationCalculation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "math.h"

using namespace std;
int main()
{
	int n;
	double ort = 0, vry = 0, ss = 0;
	cout << "Ogrenci adetini giriniz (n) : ";
	cin >> n;
	int notlar[n];
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". Not : ";
		cin >> notlar[i];
		ort += notlar[i];
	}
	ort /= n;
	for (int i = 0; i < n; i++)
	{
		vry += pow(ort - ((double)notlar[i]), 2);
	}
	vry /= n;
	ss = pow(vry, 1.0 / 2.0);
	cout << "Aritmetik Ortalama = " << ort << endl;
	cout << "Varyans = " << vry << endl;
	cout << "Standart Sapma = " << ss << endl;
	system("pause");
	return 0;
}