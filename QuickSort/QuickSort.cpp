// QuickSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#define length(a) (sizeof (a) / sizeof (*a))
using namespace std;
void QuickSort(int[], int, int);
int Paracala(int[], int, int);

int main()
{
	int dizi[] = { 7,8,5,2,4,6,3 };

	QuickSort(dizi, 0, length(dizi) - 1);

	for (int i = 0; i < length(dizi); i++)
	{
		cout << dizi[i] << "\t";
	}
	cout << endl;
	system("pause");
	return 0;
}

void QuickSort(int dizi[], int baslangic, int bitis)
{
	if (baslangic < bitis)
	{
		int q = Paracala(dizi, baslangic, bitis);
		QuickSort(dizi, baslangic, q - 1);
		QuickSort(dizi, q + 1, bitis);
	}
}
int Paracala(int dizi[], int baslangic, int bitis)
{
	int x = dizi[bitis];
	int i = baslangic - 1;
	for (int j = baslangic; j < bitis; j++)
	{
		if (dizi[j] <= x)
		{
			i = i + 1;
			int temp = dizi[i];
			dizi[i] = dizi[j];
			dizi[j] = temp;
		}
	}
	int temp2 = dizi[i + 1];
	dizi[i + 1] = dizi[bitis];
	dizi[bitis] = temp2;
	return i + 1;
}