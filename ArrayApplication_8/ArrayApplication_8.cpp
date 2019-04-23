// ArrayApplication_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#define lenght(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int dizi[] = { 2,10,156,20,14,899 };
	int kucuk = dizi[0], buyuk = dizi[0];

	for (int i = 0; i < lenght(dizi); i++)
	{
		if (dizi[i] < kucuk)
		{
			kucuk = dizi[i];
		}
		if (dizi[i] > buyuk)
		{
			buyuk = dizi[i];
		}
	}
	cout << "En kucuk deger: " << kucuk << endl;
	cout << "En buyuk deger: " << buyuk << endl;
	system("pause");
	return 0;
}