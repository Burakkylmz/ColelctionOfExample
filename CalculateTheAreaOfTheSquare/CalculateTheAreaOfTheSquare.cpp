// CalculateTheAreaOfTheSquare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	double r;
	double PI = 3.14;

	cout << "Hesaplanacak kurenin yaricapini giriniz (r): ";
	cin >> r;

	double alan = 4 * PI*r*r;
	double hacim = (4 / 3)*PI*r*r*r;

	cout << "Kurenin alani: " << alan << endl;
	cout << "Kurenin hacmi: " << hacim << endl;

	system("pause");
	return 0;
}