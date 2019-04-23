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
		cout << "|Otomobil Icýn    ---> 1'i|" << endl;
		cout << "|Motorsiklet Icýn ---> 2'i|" << endl;
		cout << "|Otobus Icýn      ---> 3'u|" << endl;
		cout << "|Kamyon Icýn      ---> 4'u|" << endl;
		cout << "|-------------------------|" << endl;

	Secim:

		cout << "Lütfen Arac Secimi Yapiniz: " << endl;
		cin >> secim;

		if (secim == 1)
		{
			cout << "Otomobilinizin Hizini Giriniz: ";
			cin >> hiz;

			if (hiz > 120)
			{
				cout << "Hiziniz Trafik Kurallarina Uygun Degildir." << endl;
				cout << "Cezalýsýnýz..!" << endl;
			}
			else
			{
				cout << "Hiziniz Trafik Kurallarina Uygun." << endl;
				cout << "Ýyi Yolculuklar..." << endl;
			}
		}
		else if (secim == 2)
		{
			cout << "Motorsikletinizin Hizini Giriniz: ";
			cin >> hiz;

			if (hiz > 120)
			{
				cout << "Hiziniz Trafik Kurallarina Uygun Degildir." << endl;
				cout << "Cezalýsýnýz..!" << endl;
			}
			else
			{
				cout << "Hiziniz Trafik Kurallarina Uygun." << endl;
				cout << "Ýyi Yolculuklar..." << endl;
			}
		}
		else if (secim == 3)
		{
			cout << "Otobüsün Hizini Giriniz: ";
			cin >> hiz;

			if (hiz > 90)
			{
				cout << "Hiziniz Trafik Kurallarina Uygun Degildir." << endl;
				cout << "Cezalýsýnýz..!" << endl;
			}
			else
			{
				cout << "Hiziniz Trafik Kurallarina Uygun." << endl;
				cout << "Ýyi Yolculuklar..." << endl;
			}
		}
		else if (secim == 4)
		{
			cout << "Komyonun Hizini Giriniz: ";
			cin >> hiz;

			if (hiz > 60)
			{
				cout << "Hiziniz Trafik Kurallarina Uygun Degildir." << endl;
				cout << "Cezalýsýnýz..!" << endl;
			}
			else
			{
				cout << "Hiziniz Trafik Kurallarina Uygun." << endl;
				cout << "Ýyi Yolculuklar..." << endl;
			}
		}
		else
		{
			cout << "Yanlis Tusa Bastiniz...!" << endl;
			cout << "Tekrar Secim Yapýn...!" << endl;
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