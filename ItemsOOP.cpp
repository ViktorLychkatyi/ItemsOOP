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
	Phone phone1("Samsung", "Galaxy A55", "256 GB", "Black", "Android", "Exynos 1480");
	string brand = "Samsung";
	Phone original = phone;
	original.SetBrand("Samsung");

	phone.TurnOn();
	phone.Call();
	phone.SendMessage();
	phone.Photo();
	phone.Use();
	phone.Charge();
	phone.TurnOff();
	cout << "\n";

	Banknote banknote;
	Banknote banknote1("The United of States", 100, "USD", "KBJ46279860IB2", "USA", "New");
	string denomination = "The United of States";
	Banknote original2 = banknote;
	original2.SetDenomination("The United of States");

	banknote.Exchange();
	banknote.State();
	banknote.CurrencyInfo();
	banknote.Buy();
	banknote.Touch();
	cout << "\n";

	Kettle kettle;
	Kettle kettle1(1.6, 2200, "Нержавеющая сталь", "Черный", 60);
	string body_material = "Нержавеющая сталь";
	Kettle original3 = kettle;
	original3.SetBodyMaterial("Нержавеющая сталь");

	kettle.TurnOn();
	kettle.TurnOff();
	kettle.ConnectCordKettle();
	kettle.DisconnectCordKettle();
	kettle.Pour();
	cout << "\n";

	Pen pen;
	Pen pen1("Синий", 0.5, 140, "Пластик", 100);
	string ink_color = "Синий";
	Pen original4 = pen;
	original4.SetInkColor("Синий");

	pen.Write();
	pen.ChangeAmpoule();
	pen.CheckInklevel();
	pen.CloseCap();
	pen.OpenCap();
	cout << "\n";

	Book book;
	Book book1("1984", "Джордж Оруэлл", 328, "Антиутопия", 1949);
	string title = "1984";
	Book original5 = book;
	original5.SetTitle("1984");

	book.Open();
	book.Close();
	book.ReadPage();
	book.AddBookmark();
	book.BookInfo();
	cout << "\n";
}