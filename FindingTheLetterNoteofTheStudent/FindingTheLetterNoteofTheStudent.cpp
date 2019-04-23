// FindingTheLetterNoteofTheStudent.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "iostream"
using namespace std;
int main()
{
	double vize, final, odev, butunleme, vize_yuzde, final_yuzde, odev_yuzde;

baslangic:

vize_yuzdesi:

	cout << "Vize sinavinin yuzdesini giriniz: ";
	cin >> vize_yuzde;

	if (vize_yuzde > 30)
	{
		cout << "Vize yuzdesi en az %20 ve en cok %30 olarak belirleyiniz." << endl;
		goto vize_yuzdesi;
	}
	else if (vize_yuzde < 20)
	{
		cout << "Vize yuzdesi en az %20 ve en cok %30 olarak belirleyiniz." << endl;
		goto vize_yuzdesi;
	}

final_yuzdesi:

	cout << "Final sinavinin yuzdesini giriniz: ";
	cin >> final_yuzde;

	if (final_yuzde > 80)
	{
		cout << "Final yuzdesi en az %60 ve en cok %80 olarak belirleyiniz." << endl;
		goto final_yuzdesi;
	}
	else if (final_yuzde < 60)
	{
		cout << "Final yuzdesi en az %60 ve en cok %80 olarak belirleyiniz." << endl;
		goto final_yuzdesi;
	}

odev_yuzdesi:

	cout << "Odev notunun yuzdesini giriniz: ";
	cin >> odev_yuzde;

	if (odev_yuzde > 20)
	{
		cout << "Odev notunu en az %10 ve en cok %20 olarak belirleyiniz." << endl;
		goto odev_yuzdesi;
	}
	else if (odev_yuzde < 10)
	{
		cout << "Odev notunu en az %10 ve en cok %20 olarak belirleyiniz." << endl;
		goto odev_yuzdesi;
	}

	double yuzde_ort = 100;
	yuzde_ort = vize_yuzde + final_yuzde + odev_yuzde;

	if (yuzde_ort > 100)
	{
		cout << "Lutfen sinav yuzdelerini toplamini 100 olacak sekilde belirleyiniz." << endl;
		goto baslangic;
	}

vize_notu:

	cout << "Vize notunu giriniz: ";
	cin >> vize;

	if (vize > 100)
	{
		cout << "Vize notunu 0-100 arasinda giriniz." << endl;
		goto vize_notu;
	}
	else if (vize < 0)
	{
		cout << "Vize notunu 0-100 arasinda giriniz." << endl;
		goto vize_notu;
	}

final_notu:

	cout << "Final notunu giriniz: ";
	cin >> final;

	if (final > 100)
	{
		cout << "Final notunu 0-100 arasinda giriniz." << endl;
		goto final_notu;
	}
	else if (final < 0)
	{
		cout << "Final notunu 0-100 arasinda giriniz." << endl;
		goto final_notu;
	}

odev_notu:

	cout << "Odev notunu giriniz: ";
	cin >> odev;

	if (odev > 100)
	{
		cout << "Odev notunu 0-100 arasinda giriniz." << endl;
		goto odev_notu;
	}
	else if (odev < 0)
	{
		cout << "Odev notunu 0-100 arasinda giriniz." << endl;
		goto odev_notu;
	}

	double ortalama = (vize_yuzde / 100)*vize + (final_yuzde / 100)*final + (odev_yuzde / 100)*odev;
	cout << "Ogrencinin donem sonu ortalama: " << ortalama << endl;

	if (ortalama <= 100 && ortalama >= 90)
	{
		cout << "Ogrencinin harf notu: AA";
	}
	else if (ortalama <= 89 && ortalama >= 85)
	{
		cout << "Ogrencinin harf notu: BA";
	}
	else if (ortalama <= 84 && ortalama >= 80)
	{
		cout << "Ogrencinin harf notu: BB";
	}
	else if (ortalama <= 79 && ortalama >= 75)
	{
		cout << "Ogrencinin harf notu: CB";
	}
	else if (ortalama <= 74 && ortalama >= 70)
	{
		cout << "Ogrencinin harf notu: CC";
	}
	else if (ortalama <= 69 && ortalama >= 60)
	{
		cout << "Ogrencinin harf notu: DC" << endl;
		cout << "Ogrenci sartlý gecmistir.";
	}
	else if (ortalama <= 59 && ortalama >= 50)
	{
		cout << "Ogrencinin harf notu: DD" << endl;

		cout << "Uyarý: Butunleme sinavinin yuzdelik dilimi final sinavi ile aynidir." << endl;

	butunleme_notu:

		cout << "Butunleme notunu giriniz: ";
		cin >> butunleme;

		if (butunleme > 100)
		{
			cout << "Butunleme notunu 0-100 arasinda giriniz." << endl;
			goto butunleme_notu;
		}
		else if (butunleme < 0)
		{
			cout << "Butunleme notunu 0-100 arasinda giriniz." << endl;
			goto butunleme_notu;
		}

		double ortalama = (vize_yuzde / 100)*vize + (final_yuzde / 100)*butunleme + (odev_yuzde / 100)*odev;
		cout << "Ogrencinin donem sonu ortalama: " << ortalama << endl;

		if (ortalama <= 100 && ortalama >= 90)
		{
			cout << "Ogrencinin harf notu: AA";
		}
		else if (ortalama <= 89 && ortalama >= 85)
		{
			cout << "Ogrencinin harf notu: BA";
		}
		else if (ortalama <= 84 && ortalama >= 80)
		{
			cout << "Ogrencinin harf notu: BB";
		}
		else if (ortalama <= 79 && ortalama >= 75)
		{
			cout << "Ogrencinin harf notu: CB";
		}
		else if (ortalama <= 74 && ortalama >= 70)
		{
			cout << "Ogrencinin harf notu: CC";
		}
		else if (ortalama <= 69 && ortalama >= 60)
		{
			cout << "Ogrencinin harf notu: DC";
		}
		else if (ortalama <= 59 && ortalama >= 50)
		{
			cout << "Ogrencinin harf notu: DD";
		}
		else if (ortalama <= 49 && ortalama >= 40)
		{
			cout << "Ogrencinin harf notu: FD";
		}
		else if (ortalama <= 39 && ortalama >= 0)
		{
			cout << "Ogrencinin harf notu: FF";
		}
	}
	else if (ortalama <= 49 && ortalama >= 40)
	{
		cout << "Ogrencinin harf notu: FD" << endl;

		cout << "Uyarý: Butunleme sinavinin yuzdelik dilimi final sinavi ile aynidir." << endl;

	butunleme_notu1:

		cout << "Butunleme notunu giriniz: ";
		cin >> butunleme;

		if (butunleme > 100)
		{
			cout << "Butunleme notunu 0-100 arasinda giriniz." << endl;
			goto butunleme_notu1;
		}
		else if (butunleme < 0)
		{
			cout << "Butunleme notunu 0-100 arasinda giriniz." << endl;
			goto butunleme_notu1;
		}

		double ortalama = (vize_yuzde / 100)*vize + (final_yuzde / 100)*butunleme + (odev_yuzde / 100)*odev;
		cout << "Ogrencinin donem sonu ortalama: " << ortalama << endl;

		if (ortalama <= 100 && ortalama >= 90)
		{
			cout << "Ogrencinin harf notu: AA";
		}
		else if (ortalama <= 89 && ortalama >= 85)
		{
			cout << "Ogrencinin harf notu: BA";
		}
		else if (ortalama <= 84 && ortalama >= 80)
		{
			cout << "Ogrencinin harf notu: BB";
		}
		else if (ortalama <= 79 && ortalama >= 75)
		{
			cout << "Ogrencinin harf notu: CB";
		}
		else if (ortalama <= 74 && ortalama >= 70)
		{
			cout << "Ogrencinin harf notu: CC";
		}
		else if (ortalama <= 69 && ortalama >= 60)
		{
			cout << "Ogrencinin harf notu: DC";
		}
		else if (ortalama <= 59 && ortalama >= 50)
		{
			cout << "Ogrencinin harf notu: DD";
		}
		else if (ortalama <= 49 && ortalama >= 40)
		{
			cout << "Ogrencinin harf notu: FD";
		}
		else if (ortalama <= 39 && ortalama >= 0)
		{
			cout << "Ogrencinin harf notu: FF";
		}
	}
	else if (ortalama <= 39 && ortalama >= 0)
	{
		cout << "Ogrencinin harf notu: FF" << endl;

		cout << "Uyarý: Butunleme sinavinin yuzdelik dilimi final sinavi ile aynidir." << endl;

	butunleme_notu2:

		cout << "Butunleme notunu giriniz: ";
		cin >> butunleme;

		if (butunleme > 100)
		{
			cout << "Butunleme notunu 0-100 arasinda giriniz." << endl;
			goto butunleme_notu2;
		}
		else if (butunleme < 0)
		{
			cout << "Butunleme notunu 0-100 arasinda giriniz." << endl;
			goto butunleme_notu2;
		}

		double ortalama = (vize_yuzde / 100)*vize + (final_yuzde / 100)*butunleme + (odev_yuzde / 100)*odev;
		cout << "Ogrencinin donem sonu ortalama: " << ortalama << endl;

		if (ortalama <= 100 && ortalama >= 90)
		{
			cout << "Ogrencinin harf notu: AA";
		}
		else if (ortalama <= 89 && ortalama >= 85)
		{
			cout << "Ogrencinin harf notu: BA";
		}
		else if (ortalama <= 84 && ortalama >= 80)
		{
			cout << "Ogrencinin harf notu: BB";
		}
		else if (ortalama <= 79 && ortalama >= 75)
		{
			cout << "Ogrencinin harf notu: CB";
		}
		else if (ortalama <= 74 && ortalama >= 70)
		{
			cout << "Ogrencinin harf notu: CC";
		}
		else if (ortalama <= 69 && ortalama >= 60)
		{
			cout << "Ogrencinin harf notu: DC";
		}
		else if (ortalama <= 59 && ortalama >= 50)
		{
			cout << "Ogrencinin harf notu: DD";
		}
		else if (ortalama <= 49 && ortalama >= 40)
		{
			cout << "Ogrencinin harf notu: FD";
		}
		else if (ortalama <= 39 && ortalama >= 0)
		{
			cout << "Ogrencinin harf notu: FF";
		}
	}
}