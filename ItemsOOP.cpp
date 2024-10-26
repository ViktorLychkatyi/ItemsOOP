#include <iostream>
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

	phone.Call();
	phone.SendMessage();
	phone.TakePhoto();
	phone.TurnOn();
	phone.TurnOff();
	phone.Charge();
	cout << "\n";

	Banknote banknote;
	banknote.SetDenomination("The United of States");
	banknote.SetCurrency("100 USD");
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
	kettle.SetCapacity("1.7 литра");
	kettle.SetPower("2000 Вт");
	kettle.SetBodyMaterial("Нержавеющая сталь");
	kettle.SetColor("Черный");
	kettle.SetWaterTemperature("25°C");
	kettle.PrintKettle();

	kettle.TurnOn();
	kettle.TurnOff();
	kettle.ConnectCordKettle();
	kettle.DisconnectCordKettle();
	kettle.AutoOffKettle();
	cout << "\n";

	Pen pen;
	pen.SetInkColor("Синий");
	pen.SetPenThickness("0.5 мм");
	pen.SetPenLength("14 см");
	pen.SetBodyMaterial("Пластик");
	pen.SetInkAmount("50%");
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
	book.NextPage();
	book.PrevPage();
	cout << "\n";
}