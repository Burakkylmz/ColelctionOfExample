// ArrayApplication_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int dizi[] = { 1,2,3,4,5,6,7,8,9 };
	int ara, yer = -1;

	cout << "Aramak istediginiz sayiyi giriniz: ";
	cin >> ara;
	for (int i = 0; i < length(dizi); i++)
	{
		if (dizi[i] == ara)
		{
			yer = i;
			break;
		}
	}
	if (yer != -1)
	{
		cout << "Aranilan elaman bulundu. Indis numarasi: " << yer << endl;
	}
	else
	{
		cout << "Aranilan eleman bulunamadi";
	}
	system("pause");
	return 0;
}