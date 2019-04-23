// ArrayApplication_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "math.h"
#define lenght(a) (sizeof(a)/sizeof(*a))
using namespace std;
int main()
{
	int dizi[] = { 1,2,3,4,5,6,7,8,9 };
	int boyut = lenght(dizi);

	for (int i = 0; i < boyut / 2; i++)
	{
		int temp = dizi[i];
		dizi[i] = dizi[boyut - i - 1];
		dizi[boyut - i - 1] = temp;
	}
	for (int i = 0; i < lenght(dizi); i++)
	{
		cout << " " << dizi[i];
	}
	cout << " " << endl;
	system("pause");
	return 0;
}
