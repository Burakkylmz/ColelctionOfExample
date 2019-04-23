// EquationProvision.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
#include "stdlib.h"
#include "time.h"
using namespace std;
int main()
{
	srand(time(NULL));
	int say = 0;
	while (1)
	{
		double x = rand() % 10 + 1;
		double y = rand() % 10 + 1;
		double z = rand() % 10 + 1;
		double dene = 10 + x + y / z + y * y + x / x;
		say++;
		if (dene == (int)dene && dene != 0.0)
		{
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;
			cout << "z = " << y << endl;
			cout << "Denklem Sonucu = " << dene << endl;
			cout << "Toplam " << say << "adimda bulundu!";
			break;
		}
	}
	system("pause");
	return 0;
}