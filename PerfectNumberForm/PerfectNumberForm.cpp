// PerfectNumberForm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "math.h"

using namespace std;
int main()
{
	for (int n = 2; n <= 10000; n++)
	{
		int CT = 0;
		for (int i = 1; i < n; i++)
		{
			if (n%i == 0)
				CT += i;
		}
		if (CT%n == 0)
			cout << n << endl;
	}
	system("pause");
	return 0;
}