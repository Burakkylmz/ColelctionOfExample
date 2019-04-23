// MatrixApplications_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#define length(a) (sizeof(a)/sizeof(*a))
using namespace std;

int main()
{
	int z;
	cout << "Matris'in boyutunu giriniz: ";
	cin >> z;
	int matris[z][z];

	for (int i = 0; i < z; i++)
	{
		for (int j = 0; j < z; j++)
		{
			cout << "i+1" << ". satir - " << j + 1 << ". sutun: ";
			cin >> matris[i][j];
		}
		cout << "\n";
	}

	for (int i = 0; i < z; i++)
	{
		for (int j = 0; j < z; j++)
		{
			cin >> matris[i][j];
		}
	}
	system("pause");
	return 0;
}