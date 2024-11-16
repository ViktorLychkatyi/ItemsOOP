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

	Phone memory1;
	Phone memory2;
	Phone memory_result = memory1 + memory2;

	cout << "Напишите память для вашего смартфона: ";
	cin >> memory1;
	cout << "Напишите дополнительную память для вашего смартфона: ";
	cin >> memory2;
	cout << "Ваша общая память смартфона будет: " << memory_result << " ГБ\n";

	if (memory1 > memory2) {
		cout << memory1 << " ГБ" << " имеет больше памяти чем " << memory2 << " ГБ\n";
	}
	else if (memory1 < memory2) {
		cout << memory1 << " ГБ" << " имеет меньше памяти чем " << memory2 << " ГБ\n";
	}
	else if (memory1 == memory2) {
		cout << memory1 << " ГБ" << " и " << memory2 << " ГБ" << " имеют одинаковый объем памяти\n";
	}
	else if (memory1 != memory2) {
		cout << memory1 << " ГБ" << " и " << memory2 << " ГБ" << " не имеют одинаковый объем памяти\n";
	}

	phone.TurnOn();
	phone.Call();
	phone.SendMessage();
	phone.Photo();
	phone.Use();
	phone.Charge();
	phone.TurnOff();
	cout << "\n";

	// ===

	Banknote banknote;
	Banknote banknote1("The United of States", 100, "USD", "KBJ46279860IB2", "USA", "New");
	Banknote banknote2("The United of States", 50, "USD", "KBJ46279860IB2", "USA", "New");
	Banknote banknote3("USD");

	Banknote other_banknote;
	other_banknote.SetDenomination("The United of States");
	other_banknote.SetNubmer(100);
	other_banknote.SetCurrency("USD");
	other_banknote.SetSerialNumber("KBJ46279860IB2");
	other_banknote.SetCountry("USA");
	other_banknote.SetState("New");
	Banknote copy_banknote = other_banknote;
	copy_banknote.Result();

	cout << Banknote::GetCount() << "\n";
	Banknote banknote4;
	cout << Banknote::GetCount() << "\n";
	Banknote banknote5;
	cout << Banknote::GetCount() << "\n";
	Banknote banknote6;

	if (banknote1 > banknote2) {
		cout << banknote1 << " USD" << " имеет больше валюты чем " << banknote2 << " USD\n";
	}
	else if (banknote1 < banknote2) {
		cout << banknote1 << " USD" << " имеет меньше валюты чем " << banknote2 << " USD\n";
	}
	else if (banknote1 == banknote2) {
		cout << banknote1 << " USD" << " и " << banknote2 << " USD" << " имеют одинаковые валюты\n";
	}
	else if (banknote1 != banknote2) {
		cout << banknote1 << " USD" << " и " << banknote2 << " USD" << " не имеют одинаковых валюты\n";
	}

	banknote.Exchange();
	banknote.State();
	banknote.CurrencyInfo();
	banknote.Buy();
	banknote.Touch();
	cout << "\n";

	// ===

	Kettle kettle;
	Kettle kettle1(1.7, 2200, "Нержавеющая сталь", "Черный", 60);
	Kettle kettle2(2.4, 2500, "Нержавеющая сталь", "Черный", 70);
	Kettle kettle3("Нержавеющая сталь");

	Kettle other_kettle;
	other_kettle.SetCapacity(1.7);
	other_kettle.SetPower(2200);
	other_kettle.SetBodyMaterial("Нержавеющая сталь");
	other_kettle.SetColor("Черный");
	other_kettle.SetWaterTemperature(60);
	Kettle copy_kettle = other_kettle;
	copy_kettle.Result();

	cout << Kettle::GetCount() << "\n";
	Kettle kettle4;
	cout << Kettle::GetCount() << "\n";
	Kettle kettle5;
	cout << Kettle::GetCount() << "\n";
	Kettle kettle6;

	if (kettle1 > kettle2) {
		cout << kettle1 << " л." << " имеет больше литров чем " << kettle2 << " л.\n";
	}
	else if (kettle1 < kettle2) {
		cout << kettle1 << " л." << " имеет меньше литров чем " << kettle2 << " л.\n";
	}
	else if (kettle1 == kettle2) {
		cout << kettle1 << " л." << " и " << kettle2 << " л." << " имеют одинаковые литры\n";
	}
	else if (kettle1 != kettle2) {
		cout << kettle1 << " л." << " и " << kettle2 << " л." << " не имеют одинаковых литров\n";
	}

	kettle.TurnOn();
	kettle.TurnOff();
	kettle.ConnectCordKettle();
	kettle.DisconnectCordKettle();
	kettle.Pour();
	cout << "\n";

	// ===

	Pen pen;
	Pen pen1("Синий", 0.5, 140, "Пластик", 100);
	Pen pen2("Синий", 0.5, 140, "Пластик", 60);
	Pen pen3("Синий");

	Pen other_pen;
	other_pen.SetInkColor("Синий");
	other_pen.SetPenThickness(0.5);
	other_pen.SetPenLength(140);
	other_pen.SetBodyMaterial("Пластик");
	other_pen.SetInkAmount(100);
	Pen copy_pen = other_pen;
	copy_pen.Result();

	cout << Pen::GetCount() << "\n";
	Pen pen4;
	cout << Pen::GetCount() << "\n";
	Pen pen5;
	cout << Pen::GetCount() << "\n";
	Pen pen6;

	if (pen1 > pen2) {
		cout << pen1 << "% чернил" << " имеет больше чем " << pen2 << "% чернил\n";
	}
	else if (pen1 < pen2) {
		cout << pen1 << "% чернил" << " имеет меньше чем " << pen2 << "% чернил\n";
	}
	else if (pen1 == pen2) {
		cout << pen1 << "% чернил" << " и " << pen2 << "% чернил" << " имеют одинаковых чернил\n";
	}
	else if (pen1 != pen2) {
		cout << pen1 << "% чернил" << " и " << pen2 << "% чернил" << " не имеют одинаковых чернил\n";
	}

	pen.Write();
	pen.ChangeAmpoule();
	pen.CheckInklevel();
	pen.CloseCap();
	pen.OpenCap();
	cout << "\n";

	// ===

	Book book;
	Book book1("1984", "Джордж Оруэлл", 328, "Антиутопия", 1949);
	Book book2("Унесенные ветром", "Маргарет Митчелл", 1037, "Роман", 1936);
	Book book3("1984");

	Book other_book;
	other_book.SetTitle("1984");
	other_book.SetAuthor("Джордж Оруэлл");
	other_book.SetNumberPages(328);
	other_book.SetGenre("Антиутопия");
	other_book.SetYearPublication(1949);
	Book copy_book = other_book;
	copy_book.Result();

	cout << Book::GetCount() << "\n";
	Book book4;
	cout << Book::GetCount() << "\n";
	Book book5;
	cout << Book::GetCount() << "\n";
	Book book6;

	if (book1 > book2) {
		cout << book1 << " страниц" << " имеет больше страниц чем " << book2 << " страниц\n";
	}
	else if (book1 < book2) {
		cout << book1 << " страниц" << " имеет меньше страниц чем " << book2 << " страниц\n";
	}
	else if (book1 == book2) {
		cout << book1 << " страниц" << " и " << book2 << " страниц" << " имеют одинаковых страниц\n";
	}
	else if (book1 != book2) {
		cout << book1 << " страниц" << " и " << book2 << " страниц" << " не имеют одинаковых страниц\n";
	}

	book.Open();
	book.Close();
	book.ReadPage();
	book.AddBookmark();
	book.BookInfo();
	cout << "\n";
}