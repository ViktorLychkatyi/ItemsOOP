#include <iostream>
#include <windows.h>
using namespace std;
#include "Phone.h"
#include "Banknote.h"
#include "Kettle.h"
#include "Pen.h"
#include "Book.h"

// вызовы
int main() {
	setlocale(0, "");

	Phone phone;
	phone.SetBrand("Samsung");
	phone.SetModel("Galaxy A55");
	phone.SetMemorySize("256 GB");
	phone.SetColor("Black");
	phone.SetOperatingSystem("Android");
	phone.SetProcessor("Exynos 1480");
	phone.PrintPhone();

	phone.TurnOn();
	phone.Call();
	phone.SendMessage();
	phone.Photo();
	phone.Use();
	phone.Charge();
	phone.TurnOff();
	cout << "\n";

	Banknote banknote;
	banknote.SetDenomination("The United of States");
	banknote.SetNubmer(100);
	banknote.SetCurrency("USD");
	banknote.SetSerialNumber("KB46279860IB2");
	banknote.SetCountry("USA");
	banknote.SetState("New");
	banknote.PrintBanknote();

	banknote.Exchange();
	banknote.State();
	banknote.CurrencyInfo();
	banknote.Buy();
	banknote.Touch();
	cout << "\n";

	Kettle kettle;
	kettle.SetCapacity(1.7);
	kettle.SetPower(2200);
	kettle.SetBodyMaterial("Нержавеющая сталь");
	kettle.SetColor("Черный");
	kettle.SetWaterTemperature(60);
	kettle.PrintKettle();

	kettle.TurnOn();
	kettle.TurnOff();
	kettle.ConnectCordKettle();
	kettle.DisconnectCordKettle();
	kettle.Pour();
	cout << "\n";

	Pen pen;
	pen.SetInkColor("Синий");
	pen.SetPenThickness(0.5);
	pen.SetPenLength(140);
	pen.SetBodyMaterial("Пластик");
	pen.SetInkAmount(100);
	pen.PrintPen();

	pen.Write();
	pen.ChangeAmpoule();
	pen.CheckInklevel();
	pen.CloseCap();
	pen.OpenCap();
	cout << "\n";

	Book book;
	book.SetTitle("1984");
	book.SetAuthor("Джордж Оруэлл");
	book.SetNumberPages(328);
	book.SetGenre("Антиутопия");
	book.SetYearPublication(1949);
	book.PrintBook();

	book.Open();
	book.Close();
	book.ReadPage();
	book.AddBookmark();
	book.BookInfo();
	cout << "\n";
}