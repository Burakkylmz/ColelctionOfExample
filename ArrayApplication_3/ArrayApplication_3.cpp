// ArrayApplication_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
using namespace std;
int main()
{
	int X[] = { 10,11,12,13,14,15 };
	int Y[6];
	int katsayi;

	cout << "Katsayi giriniz: ";
	cin >> katsayi;

	for (int i = 0; i < 6; i++)
	{
		Y[i] = X[i] * katsayi;
	}

	cout << "----------------------------" << endl;
	cout << "Katsayi ile carpilmis hali.." << endl;

	for (int i = 0; i < 6; i++)
	{
		cout << (i + 1) << ". sayi: " << Y[i] << endl;
	}
	system("pause");
	return 0;
}