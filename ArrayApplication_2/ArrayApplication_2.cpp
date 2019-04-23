// ArrayApplication_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
using namespace std;
int main()
{
	int dizi[10];
	int toplam = 0;
	for (int i = 0; i < 10; i++)
	{
		dizi[i] = rand() % 99;
	}
	cout << "Dizinin Elemanlari:" << endl;
	cout << "-------------------" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Uretilen " << i + 1 << ". sayi : " << dizi[i] << endl;
	}

	cout << "-------------------" << endl;

	for (int i = 0; i < 10; i++)
	{
		toplam += dizi[i];
	}
	cout << "Dizinin elemanlarinin toplami: " << toplam << endl;
	system("pause");
	return 0;
}