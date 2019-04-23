// TilePatternMadeofStars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
using namespace std;
int main()
{
	int deger;
	cout << "Baklava Dilimi Icin Deger Girin: ";
	cin >> deger;

	for (int i = 1; i <= deger; i++)
	{
		for (int x = deger; x > i; x--)
		{
			cout << " ";
		}
		for (int y = 1; y <= i; y++)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}
	for (int k = 1; k <= deger; k++)
	{
		for (int m = 1; m <= k; m++)
		{
			cout << " ";
		}
		for (int n = deger; n > k; n--)
		{
			cout << "*" << " ";
		}
		cout << endl;
	}
}