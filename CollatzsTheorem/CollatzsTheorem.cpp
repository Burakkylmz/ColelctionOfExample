// CollatzsTheorem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"

using namespace std;
int Collatz(int x)
{
	if (x == 1)
		return 1;
	else if (x % 2 == 0)
		return Collatz(x / 2);
	else
		return Collatz(3 * x + 1);
}
int main()
{
	for (int i = 1; i <= 1000; i++)
	{
		cout << i << "\tCollatz->\t" << Collatz(i) << endl;
	}
	system("pause");
	return 0;
}