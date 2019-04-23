// ArrayApplication_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "math.h"
using namespace std;
int main()
{
	int x[10];
	int y[10];
	int z[10];

	for (int i = 0; i < 10; i++)
	{
		x[i] = rand() % 99;
		y[i] = rand() % 99;
	}

	for (int i = 0; i < 10; i++)
	{
		z[i] = x[i] + y[i];
	}

	cout << "\t x  + y  = z" << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "\t" << x[i] << " + " << y[i] << " = " << z[i] << endl;
	}
	system("pause");
	return 0;
}

