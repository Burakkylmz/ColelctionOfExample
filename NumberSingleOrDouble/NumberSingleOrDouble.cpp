// NumberSingleOrDouble.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int sayi;

	cout << "Lutfen bir sayi giriniz: ";
	cin >> sayi;

	if (sayi % 2 == 0)
	{
		cout << "Girdiginiz sayi cift." << endl;
	}
	else
	{
		cout << "Giridginiz sayi tek." << endl;
	}

	system("pause");
	return 0;
}
