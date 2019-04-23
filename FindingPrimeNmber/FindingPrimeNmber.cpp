// FindingPrimeNmber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
using namespace std;

int main()
{
	int sayi, x = 0;
	cout << "Bir sayi giriniz= ";
	cin >> sayi;

	for (int i = 1; i <= sayi; i++)
	{
		if (sayi%i == 0)
		{
			x++;
		}
	}

	if (x == 2)
	{
		cout << sayi << " bir asal sayidir..!" << endl;
	}
	else
	{
		cout << sayi << " bir asal sayi degildir..!" << endl;
	}
	system("pause");
	return 0;
}
