// VerticalTriangleConstruction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
using namespace std;
int main()
{
	int kenar;
	cout << "Ucgenin bir kenarini girin: ";
	cin >> kenar;
	for (int i = 0; i < kenar; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << "*" << endl;
	}
	system("pause");
	return 0;
}