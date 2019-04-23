// ArrayApplication_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "math.h"
#define length(a) (sizeof(a) / sizeof(*a))
using namespace std;
int main()
{
	int dizi[] = { 100,200,300,400,500,600,700,800,900 };
	int x, y;
	cout << "1. indis (x) degerini giriniz: ";
	cin >> x;

	cout << "2. indis (y) degerini giriniz: ";
	cin >> y;

	int temp = dizi[x];
	dizi[x] = dizi[y];
	dizi[y] = temp;

	for (int i = 0; i < length(dizi); i++)
	{
		cout << "\t" << dizi[i];
	}
	cout << " " << endl;
	system("pause");
	return 0;
}