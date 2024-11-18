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

	//// конструкторы
	//Phone phone;
	//Phone phone1("Samsung", "Galaxy A55", 256, "Black", "Android", "Exynos 1480");
	//Phone phone2("Samsung", "Galaxy A35", 128, "White", "Android", "Exynos 1380");
	//Phone phone3("Galaxy A55"); // конструктор преобразования

	//// конструктор копирования
	//Phone other_phone;
	//other_phone.SetBrand("Samsung");
	//other_phone.SetModel("Galaxy A55");
	//other_phone.SetMemorySize(256);
	//other_phone.SetColor("Black");
	//other_phone.SetOperatingSystem("Android");
	//other_phone.SetProcessor("Exynos 1480");
	//Phone copy_phone = other_phone;
	//copy_phone.Print();

	//// подсчет кол. объектов
	//cout << Phone::GetCount() << "\n";
	//Phone phone4;
	//cout << Phone::GetCount() << "\n";
	//Phone phone5;
	//cout << Phone::GetCount() << "\n";
	//Phone phone6;

	//// перегрузки операции
	//Phone phone7;
	//Phone phone8;
	//cout << "Напишите память для вашего смартфона: ";
	//cin >> phone7;
	//cout << "\nНапишите дополнительную память для вашего смартфона: ";
	//cin >> phone8;
	//Phone phone_result = phone7 + phone8;
	//cout << "\nВаша общая память смартфона будет: " << phone_result << "\n\n";

	//if (phone7 > phone8) {
	//	cout << phone7 << " имеет больше памяти, чем " << phone8 << "\n";
	//}
	//else if (phone7 < phone8) {
	//	cout << phone7 << " имеет меньше памяти, чем " << phone8 << "\n";
	//}
	//else if (phone7 == phone8) {
	//	cout << phone7 << " и " << phone8 << " имеют одинаковый объем памяти\n";
	//}
	//else if (phone7 != phone8) {
	//	cout << phone7 << " и " << phone8 << " не имеют одинаковый объем памяти\n\n";
	//}

	//// явное преобразование в строку
	//string Phone = static_cast<string>(phone);
	//cout << Phone << "\n";

	//// само-присваивание
	//phone8.Print();  
	//phone8 = phone7;
	//phone8.Print();

	//// методы || поведение
	//phone.TurnOn();
	//phone.Call();
	//phone.SendMessage();
	//phone.Photo();
	//phone.Use();
	//phone.Charge();
	//phone.TurnOff();
	//cout << "\n";

	// ===

	//// конструкторы
	//Banknote banknote;
	//Banknote banknote1("The United of States", 100, "USD", "KBJ46279860IB2", "USA", "New");
	//Banknote banknote2("The United of States", 50, "USD", "KBJ46279860IB2", "USA", "New");
	//Banknote banknote3("USD"); // конструктор преобразования

	//// конструктор копирования
	//Banknote other_banknote;
	//other_banknote.SetDenomination("The United of States");
	//other_banknote.SetNubmer(100);
	//other_banknote.SetCurrency("USD");
	//other_banknote.SetSerialNumber("KBJ46279860IB2");
	//other_banknote.SetCountry("USA");
	//other_banknote.SetState("New");
	//Banknote copy_banknote = other_banknote;
	//copy_banknote.Print();

	//// подсчет кол. объектов
	//cout << Banknote::GetCount() << "\n";
	//Banknote banknote4;
	//cout << Banknote::GetCount() << "\n";
	//Banknote banknote5;
	//cout << Banknote::GetCount() << "\n";
	//Banknote banknote6;

	//// перегрузки операции
	//Banknote banknote7;
	//Banknote banknote8;
	//cout << "Напишите валюту числами: ";
	//cin >> banknote7;
	//cout << "\nДополнительно напишите валюту числами: ";
	//cin >> banknote8;
	//Banknote banknote_result = banknote7 + banknote8;
	//cout << "\nВаша общая сумма валют будет: " << banknote_result << "\n\n";

	//if (banknote7 > banknote8) {
	//	cout << banknote7 << " имеет больше валюты чем " << banknote8 << "\n";
	//}
	//else if (banknote7 < banknote8) {
	//	cout << banknote7 << " имеет меньше валюты чем " << banknote8 << "\n";
	//}
	//else if (banknote7 == banknote8) {
	//	cout << banknote7 << " и " << banknote8 << " имеют одинаковые валюты\n";
	//}
	//else if (banknote7 != banknote8) {
	//	cout << banknote7 << " и " << banknote8 << " не имеют одинаковых валюты\n\n";
	//}

	//// явное преобразование в строку
	//string Banknote = static_cast<string>(banknote);
	//cout << Banknote << "\n";
	//
	//// само-присваивание
	//banknote8.Print();
	//banknote8 = banknote7;
	//banknote8.Print();

	//// методы || поведение
	//banknote.Exchange();
	//banknote.State();
	//banknote.CurrencyInfo();
	//banknote.Buy();
	//banknote.Touch();
	//cout << "\n";

	// ===

	//// конструкторы
	//Kettle kettle;
	//Kettle kettle1(1.7, 2200, "Нержавеющая сталь", "Черный", 60);
	//Kettle kettle2(2.4, 2500, "Нержавеющая сталь", "Черный", 70);
	//Kettle kettle3("Нержавеющая сталь"); // конструктор преобразования

	//// конструктор копирования
	//Kettle other_kettle;
	//other_kettle.SetCapacity(1.7);
	//other_kettle.SetPower(2200);
	//other_kettle.SetBodyMaterial("Нержавеющая сталь");
	//other_kettle.SetColor("Черный");
	//other_kettle.SetWaterTemperature(60);
	//Kettle copy_kettle = other_kettle;
	//copy_kettle.Print();

	//// подсчет кол. объектов
	//cout << Kettle::GetCount() << "\n";
	//Kettle kettle4;
	//cout << Kettle::GetCount() << "\n";
	//Kettle kettle5;
	//cout << Kettle::GetCount() << "\n";
	//Kettle kettle6;

	//// перегрузки операции
	//Kettle kettle7;
	//Kettle kettle8;
	//cout << "Напишите объем чайника числами: ";
	//cin >> kettle7;
	//cout << "\nДополнительно напишите объем чайника числами: ";
	//cin >> kettle8;
	//Kettle kettle_result = kettle7 + kettle8;
	//cout << "\nВаша общая сумма валют будет: " << kettle_result << "\n\n";

	//if (kettle7 > kettle8) {
	//	cout << kettle1 << " имеет больше литров чем " << kettle8 << "\n";
	//}
	//else if (kettle7 < kettle8) {
	//	cout << kettle1 << " имеет меньше литров чем " << kettle8 << "\n";
	//}
	//else if (kettle7 == kettle8) {
	//	cout << kettle7 << " и " << kettle8 << " имеют одинаковые литры\n";
	//}
	//else if (kettle7 != kettle8) {
	//	cout << kettle7 << " и " << kettle8 << " не имеют одинаковых литров\n\n";
	//}

	//// явное преобразование в строку
	//string Kettle = static_cast<string>(kettle);
	//cout << Kettle << "\n";

	//// само-присваивание
	//kettle8.Print();
	//kettle8 = kettle7;
	//kettle8.Print();

	//// методы || поведение
	//kettle.TurnOn();
	//kettle.TurnOff();
	//kettle.ConnectCordKettle();
	//kettle.DisconnectCordKettle();
	//kettle.Pour();
	//cout << "\n";

	// ===

	//// конструкторы
	//Pen pen;
	//Pen pen1("Синий", 0.5, 140, "Пластик", 100);
	//Pen pen2("Синий", 0.5, 140, "Пластик", 60);
	//Pen pen3("Синий"); // конструктор преобразования

	//// конструктор копирования
	//Pen other_pen;
	//other_pen.SetInkColor("Синий");
	//other_pen.SetPenThickness(0.5);
	//other_pen.SetPenLength(140);
	//other_pen.SetBodyMaterial("Пластик");
	//other_pen.SetInkAmount(100);
	//Pen copy_pen = other_pen;
	//copy_pen.Print();

	//// подсчет кол. объектов
	//cout << Pen::GetCount() << "\n";
	//Pen pen4;
	//cout << Pen::GetCount() << "\n";
	//Pen pen5;
	//cout << Pen::GetCount() << "\n";
	//Pen pen6;

	//// перегрузки операции
	//Pen pen7;
	//Pen pen8;
	//cout << "Напишите число количество чернил для ручки числами: ";
	//cin >> pen7;
	//cout << "\nДополнительно напишите число количество чернил для ручки числами: ";
	//cin >> pen8;
	//Pen pen_result = pen7 + pen8;
	//cout << "\nВаша общая сумма валют будет: " << pen_result << "\n\n";

	//if (pen7 > pen8) {
	//	cout << pen7 << " имеет больше чем " << pen8 << "\n";
	//}
	//else if (pen7 < pen8) {
	//	cout << pen7 << " имеет меньше чем " << pen8 << "\n";
	//}
	//else if (pen7 == pen8) {
	//	cout << pen7 << " и " << pen8 << " имеют одинаковых чернил\n";
	//}
	//else if (pen7 != pen8) {
	//	cout << pen7 << " и " << pen8 << " не имеют одинаковых чернил\n\n";
	//}

	//// явное преобразование в строку
	//string Pen = static_cast<string>(pen);
	//cout << Pen << "\n";

	//// само-присваивание
	//pen8.Print();
	//pen8 = pen7;
	//pen8.Print();

	//// методы || поведение
	//pen.Write();
	//pen.ChangeAmpoule();
	//pen.CheckInklevel();
	//pen.CloseCap();
	//pen.OpenCap();
	//cout << "\n";

	// ===

	//// конструкторы
	//Book book;
	//Book book1("1984", "Джордж Оруэлл", 328, "Антиутопия", 1949);
	//Book book2("Унесенные ветром", "Маргарет Митчелл", 1037, "Роман", 1936);
	//Book book3("1984"); // конструктор преобразования

	//// конструктор копирования
	//Book other_book;
	//other_book.SetTitle("1984");
	//other_book.SetAuthor("Джордж Оруэлл");
	//other_book.SetNumberPages(328);
	//other_book.SetGenre("Антиутопия");
	//other_book.SetYearPublication(1949);
	//Book copy_book = other_book;
	//copy_book.Print();

	//// подсчет кол. объектов
	//cout << Book::GetCount() << "\n";
	//Book book4;
	//cout << Book::GetCount() << "\n";
	//Book book5;
	//cout << Book::GetCount() << "\n";
	//Book book6;

	//// перегрузки операции
	//Book book7;
	//Book book8;
	//cout << "Напишите количество страниц для книги числами: ";
	//cin >> book7;
	//cout << "\nДополнительно напишите количество страниц для книги числами: ";
	//cin >> book8;
	//Book book_result = book7 + book8;
	//cout << "\nВаша общая сумма валют будет: " << book_result << "\n\n";

	//if (book7 > book8) {
	//	cout << book7 << " имеет больше страниц чем " << book8 << "\n";
	//}
	//else if (book7 < book8) {
	//	cout << book7 << " имеет меньше страниц чем " << book8 << "\n";
	//}
	//else if (book7 == book8) {
	//	cout << book7 << " и " << book8 << " имеют одинаковых страниц\n";
	//}
	//else if (book7 != book8) {
	//	cout << book7 << " и " << book8 << " не имеют одинаковых страниц\n";
	//}

	//// явное преобразование в строку
	//string Book = static_cast<string>(book);
	//cout << Book << "\n";

	//// само-присваивание
	//book8.Print();
	//book8 = book7;
	//book8.Print();

	//// методы || поведение
	//book.Open();
	//book.Close();
	//book.ReadPage();
	//book.AddBookmark();
	//book.BookInfo();
	//cout << "\n";
}