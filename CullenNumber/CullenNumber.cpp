// CullenNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "math.h"
using namespace std;
int main()
{
	for (int n = 1; n <= 20; n++)
	{
		long cullen = n * pow(2, n) + 1;
		cout << "n=" << n << "\t" << cullen;
		int bolen = 0;
		for (int i = 1; i <= cullen; i++)
		{
			if (cullen% i == 0) bolen++;
		}
		if (bolen == 2)
			cout << "\t\tASAL" << endl;
		else
			cout << endl;
	}
	system("pause");
	return 0;
}