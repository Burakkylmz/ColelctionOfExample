// TrafficSpeedControlApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int hiz, secim, parola = 1234, sifre;
	string kullanici_adi = "burak", kullanici;

baslangic:

	cout << "Kullanici Adinizi Giriniz: ";
	cin >> kullanici;
	cout << "Parolanizi Giriniz: ";
	cin >> sifre;

	if (kullanici == kullanici_adi && parola == sifre)
	{
		cout << "|-------------------------|" << endl;
		cout << "|Hosgeldiniz...           |" << endl;
		cout << "|-------------------------|" << endl;
		cout << "|        Arac Menusu      |" << endl;
		cout << "|Otomobil Ic�n    ---> 1'i|" << endl;
		cout << "|Motorsiklet Ic�n ---> 2'i|" << endl;
		cout << "|Otobus Ic�n      ---> 3'u|" << endl;
		cout << "|Kamyon Ic�n      ---> 4'u|" << endl;
		cout << "|-------------------------|" << endl;

	Secim:

		cout << "L�tfen Arac Secimi Yapiniz: " << endl;
		cin >> secim;

		if (secim == 1)
		{
			cout << "Otomobilinizin Hizini Giriniz: ";
			cin >> hiz;

			if (hiz > 120)
			{
				cout << "Hiziniz Trafik Kurallarina Uygun Degildir." << endl;
				cout << "Cezal�s�n�z..!" << endl;
			}
			else
			{
				cout << "Hiziniz Trafik Kurallarina Uygun." << endl;
				cout << "�yi Yolculuklar..." << endl;
			}
		}
		else if (secim == 2)
		{
			cout << "Motorsikletinizin Hizini Giriniz: ";
			cin >> hiz;

			if (hiz > 120)
			{
				cout << "Hiziniz Trafik Kurallarina Uygun Degildir." << endl;
				cout << "Cezal�s�n�z..!" << endl;
			}
			else
			{
				cout << "Hiziniz Trafik Kurallarina Uygun." << endl;
				cout << "�yi Yolculuklar..." << endl;
			}
		}
		else if (secim == 3)
		{
			cout << "Otob�s�n Hizini Giriniz: ";
			cin >> hiz;

			if (hiz > 90)
			{
				cout << "Hiziniz Trafik Kurallarina Uygun Degildir." << endl;
				cout << "Cezal�s�n�z..!" << endl;
			}
			else
			{
				cout << "Hiziniz Trafik Kurallarina Uygun." << endl;
				cout << "�yi Yolculuklar..." << endl;
			}
		}
		else if (secim == 4)
		{
			cout << "Komyonun Hizini Giriniz: ";
			cin >> hiz;

			if (hiz > 60)
			{
				cout << "Hiziniz Trafik Kurallarina Uygun Degildir." << endl;
				cout << "Cezal�s�n�z..!" << endl;
			}
			else
			{
				cout << "Hiziniz Trafik Kurallarina Uygun." << endl;
				cout << "�yi Yolculuklar..." << endl;
			}
		}
		else
		{
			cout << "Yanlis Tusa Bastiniz...!" << endl;
			cout << "Tekrar Secim Yap�n...!" << endl;
			goto Secim;
		}
	}
	else
	{
		cout << "Hatali Kullanici Adi yada Sifre Girdiniz....!" << endl;
		goto baslangic;
	}
	system("pause");
	return 0;
}