// CompareTwoNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int a, b;

	cout << "1.Sayiyi giriniz (a): ";
	cin >> a;

	cout << "2.Sayiyi giriniz: (b): ";
	cin >> b;

	if (a > b)
	{
		cout << "a" << ">" << "b";
	}
	else if (a == b)
	{
		cout << "a" << "=" << "b";
	}
	else
	{
		cout << "b" << ">" << "a";
	}

	system("pause");
	return 0;
}
