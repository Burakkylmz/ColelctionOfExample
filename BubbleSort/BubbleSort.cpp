// BubbleSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#define length(a)  (sizeof (a) / sizeof (*a) )
using namespace std;
int main()
{
	int dizi[] = { 7,8,5,2,4,6,3 };
	for (int i = 0; i < length(dizi) - 1; i++)
	{
		for (int j = 0; j < length(dizi) - 1 - i; j++)
		{
			if (dizi[j + 1] < dizi[j])
			{
				int temp = dizi[j + 1];
				dizi[j + 1] = dizi[j];
				dizi[j] = temp;
			}
		}
	}
	for (int i = 0; i < length(dizi); i++)
	{
		cout << dizi[i] << "\t";
	}
	cout << endl;
	system("pause");
	return 0;
}