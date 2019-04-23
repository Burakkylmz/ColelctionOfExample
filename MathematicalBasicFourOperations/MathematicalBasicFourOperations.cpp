// MathematicalBasicFourOperations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int sayi_1, sayi_2;

	cout << "1.sayiyi giriniz: ";
	cin >> sayi_1;
	cout << "2.sayiyi giriniz: ";
	cin >> sayi_2;

	int toplam = sayi_1 + sayi_2;
	int cikarma = sayi_1 - sayi_2;
	int carpma = sayi_1 * sayi_2;
	int bolme = sayi_1 / sayi_2;

	cout << "Girilen Sayilarin Toplamlari: " << toplam << endl;
	cout << "Girilen Sayilarin Farklari: " << cikarma << endl;
	cout << "Girilen Sayilarin Carpýmlarý: " << carpma << endl;
	cout << "Girilen Sayilarin Bolumleri: " << bolme << endl;

	system("pause");
	return 0;
}
