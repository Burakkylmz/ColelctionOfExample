// ArrayApplication_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "stdlib.h"
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int dizi[10];
	int cift = 0, tek = 0, asal = 0;
	for (int i = 0; i < length(dizi); i++)
	{
		dizi[i] = rand() % 99 + 1;
	}
	cout << "Dizinin Eleman Listesi: " << endl;

	for (int i = 0; i < length(dizi); i++)
	{
		cout << i + 1 << ". eleman: " << dizi[i] << endl;
	}

	cout << "--------------------------------" << endl;

	for (int i = 0; i < length(dizi); i++)
	{
		int sayi = dizi[i];
		if (sayi % 2 == 0)
		{
			cift++;
		}
		int bolen = 0;

		for (int j = 1; j <= sayi; j++)
		{
			if (sayi%j == 0)
			{
				bolen++;
			}
		}

		if (bolen == 2)
		{
			asal++;
		}
	}

	tek = length(dizi) - cift;

	cout << "Toplam Cift Sayi: " << cift << endl;
	cout << "Toplam Tek Sayi: " << tek << endl;
	cout << "Toplam Asal Sayi: " << asal << endl;
	system("pause");
	return 0;
}