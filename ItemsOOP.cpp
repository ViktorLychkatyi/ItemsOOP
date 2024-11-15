#include <iostream>
#include <windows.h>
using namespace std;
#include "Phone.h"
#include "Banknote.h"
#include "Kettle.h"
#include "Pen.h"
#include "Book.h"

int main() {
	setlocale(0, "");

	Phone phone;
	Phone phone1("Samsung", "Galaxy A55", 256, "Black", "Android", "Exynos 1480");
	Phone phone2("Galaxy A55");

	Phone other_phone;
	other_phone.SetBrand("Samsung");
	other_phone.SetModel("Galaxy A55");
	other_phone.SetMemorySize(256);
	other_phone.SetColor("Black");
	other_phone.SetOperatingSystem("Android");
	other_phone.SetProcessor("Exynos 1480");
	Phone copy_phone = other_phone;
	copy_phone.Result();

	cout << Phone::GetCount() << "\n";
	Phone phone3;
	cout << Phone::GetCount() << "\n";
	Phone phone4;
	cout << Phone::GetCount() << "\n";
	Phone phone5;
	
	phone.TurnOn();
	phone.Call();
	phone.SendMessage();
	phone.Photo();
	phone.Use();
	phone.Charge();
	phone.TurnOff();
	cout << "\n";

	Phone memory(256);
	Phone memory2(256);
	Phone result = memory + memory2;
	result.Display();

	// ===

	Banknote banknote;
	Banknote banknote1("The United of States", 100, "USD", "KBJ46279860IB2", "USA", "New");
	Banknote banknote2("USD");

	Banknote other_banknote;
	other_banknote.SetDenomination("Samsung");
	other_banknote.SetNubmer(100);
	other_banknote.SetCurrency("USD");
	other_banknote.SetSerialNumber("KBJ46279860IB2");
	other_banknote.SetCountry("USA");
	other_banknote.SetState("New");
	Banknote copy_banknote = other_banknote;
	copy_banknote.Result();

	cout << Banknote::GetCount() << "\n";
	Banknote banknote3;
	cout << Banknote::GetCount() << "\n";
	Banknote banknote4;
	cout << Banknote::GetCount() << "\n";
	Banknote banknote5;

	banknote.Exchange();
	banknote.State();
	banknote.CurrencyInfo();
	banknote.Buy();
	banknote.Touch();
	cout << "\n";

	// ===

	Kettle kettle;
	Kettle kettle1(1.7, 2200, "Нержавеющая сталь", "Черный", 60);
	Kettle kettle2("Нержавеющая сталь");

	Kettle other_kettle;
	other_kettle.SetCapacity(1.7);
	other_kettle.SetPower(2200);
	other_kettle.SetBodyMaterial("Нержавеющая сталь");
	other_kettle.SetColor("Черный");
	other_kettle.SetWaterTemperature(60);
	Kettle copy_kettle = other_kettle;
	copy_kettle.Result();

	cout << Kettle::GetCount() << "\n";
	Kettle kettle3;
	cout << Kettle::GetCount() << "\n";
	Kettle kettle4;
	cout << Kettle::GetCount() << "\n";
	Kettle kettle5;

	kettle.TurnOn();
	kettle.TurnOff();
	kettle.ConnectCordKettle();
	kettle.DisconnectCordKettle();
	kettle.Pour();
	cout << "\n";

	// ===

	Pen pen;
	Pen pen1("Синий", 0.5, 140, "Пластик", 100);
	Pen pen2("Синий");

	Pen other_pen;
	other_pen.SetInkColor("Синий");
	other_pen.SetPenThickness(0.5);
	other_pen.SetPenLength(140);
	other_pen.SetBodyMaterial("Пластик");
	other_pen.SetInkAmount(100);
	Pen copy_pen = other_pen;
	copy_pen.Result();

	cout << Pen::GetCount() << "\n";
	Pen pen3;
	cout << Pen::GetCount() << "\n";
	Pen pen4;
	cout << Pen::GetCount() << "\n";
	Pen pen5;

	pen.Write();
	pen.ChangeAmpoule();
	pen.CheckInklevel();
	pen.CloseCap();
	pen.OpenCap();
	cout << "\n";

	// ===

	Book book;
	Book book1("1984", "Джордж Оруэлл", 328, "Антиутопия", 1949);
	Book book2("1984");

	Book other_book;
	other_book.SetTitle("1984");
	other_book.SetAuthor("Джордж Оруэлл");
	other_book.SetNumberPages(328);
	other_book.SetGenre("Антиутопия");
	other_book.SetYearPublication(1949);
	Book copy_book = other_book;
	copy_book.Result();

	cout << Book::GetCount() << "\n";
	Book book3;
	cout << Book::GetCount() << "\n";
	Book book4;
	cout << Book::GetCount() << "\n";
	Book book5;

	book.Open();
	book.Close();
	book.ReadPage();
	book.AddBookmark();
	book.BookInfo();
	cout << "\n";
}