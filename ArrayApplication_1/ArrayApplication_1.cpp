// ArrayApplication_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "math.h"
using namespace std;

int main()
{
	int dizi[10];
	for (int i = 0; i < 10; i++)
	{
		cout << (i + 1) << ". sayiyi giriniz:  ";
		cin >> dizi[i];
	}
	system("pause");
	return 0;
}