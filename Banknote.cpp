#include <iostream>
#include <windows.h>
using namespace std;
#include "Banknote.h"
// да

void Banknote::SetDenomination(const char* denomination) {
	this->denomination = new char[100];
	strcpy_s(this->denomination, 99, denomination);
}

const char* Banknote::GetDenomination() const {
	return this->denomination;
}

void Banknote::SetNubmer(int n) {
	this->number = n;
}

int Banknote::GetNumber() const {
	return this->number;
}

void Banknote::SetCurrency(string c) {
	if (currency == "USD" || "EURO" || "UAH") {
		if (number == 1)
			if (number == 2)
				if (number == 5)
					if (number == 10)
						if (number == 20)
							if (number == 50)
								if (number == 100)
									if (number == 200)
										if (number == 500)
											this->currency = c;
	}
	else {
		throw "Неверное значение";
	}
	if (number <= 0) {
		number = 100;
	}
	this->currency = c;
}

string Banknote::GetCurrency() const {
	return this->currency;
}

void Banknote::SetSerialNumber(string s) {
	this->serial_number = s;
}

string Banknote::GetSerialNumber() const {
	return this->serial_number;
}

void Banknote::SetCountry(string k) {
	this->country = k;
}

string Banknote::GetCountry() const {
	return this->country;
}

void Banknote::SetState(string t) {
	if (state == "New" || "Новое") {
		this->state = t;
	}
	else {
		throw "Неверное действие";
	}
}

string Banknote::GetState() const {
	return this->state;
}

Banknote::Banknote() {
	SetDenomination("The United of States");
	SetNubmer(100);
	SetCurrency("USD");
	SetSerialNumber("KB46279860IB2");
	SetCountry("USA");
	SetState("New");
	Print();
	banknote_count++;
}

Banknote::Banknote(const char* denomination, const int n, const string c, const string s, const string k, const string t) {
	SetDenomination(denomination);
	SetNubmer(n);
	SetCurrency(c);
	SetSerialNumber(s);
	SetCountry(k);
	SetState(t);
	Print();
	banknote_count++;
}

void Banknote::Print() {
	cout << this->denomination << "\n";
	cout << this->number << "\n";
	cout << this->currency << "\n";
	cout << this->serial_number << "\n";
	cout << this->country << "\n";
	cout << this->state << "\n";
	cout << "\n";
}

Banknote::Banknote(string denomination) {
	cout << "Создан конструктор\n\n";
	SetDenomination(denomination.c_str());
}

Banknote::Banknote(const Banknote& original) {
	cout << "Создан конструктор\n\n";
	SetDenomination(original.denomination);
}

int Banknote::GetCount() {
	return banknote_count;
}

Banknote::Banknote(const Banknote&& original) {
	cout << "Конструктор копирования перемещения\n";
	SetDenomination(original.denomination);
}

Banknote::~Banknote() {
	cout << "Деструктор вызван\n\n";
	delete[] this->denomination;
	banknote_count--;
}

void Banknote::Exchange() {
	cout << "Обменник\n";
	cout << "Выберите валюту которую нужно обменять\n";
	cout << "0. Оставить как есть\n";
	cout << "1. Доллар\n";
	cout << "2. Евро\n";
	cout << "3. Гривны\n";
	cout << "Ваш выбор: ";
	cin >> choice;
	switch (choice) {
	case 0:
		if (currency == "USD" || "EURO" || "UAH") {
			cout << "Вы решили оставить как есть\n";
		}
		break;
	case 1:
		if (currency == "USD" || "EURO" || "UAH") {
			cout << "Вы обменяли на Доллар\n";
			cout << "Текущая сумма: " << number << " " << "USD" << "\n";
		}
		break;
	case 2:
		if (currency == "USD" || "EURO" || "UAH") {
			cout << "Вы обменяли на Евро\n";
			cout << "Текущая сумма: " << number << " " << "EURO" << "\n";
		}
		break;
	case 3:
		if (currency == "USD" || "EURO" || "UAH") {
			cout << "Вы обменяли на Гривну\n";
			cout << "Текущая сумма: " << number << " " << "UAH" << "\n";
		}
		break;
	default:
		cout << "Неверный ввод";
	}
}

void Banknote::State() {
	cout << "Ваша купюра выглядит новым\n";
}

void Banknote::CurrencyInfo() {
	cout << "Номинация: " << denomination << "\n";
	cout << "Валюта: " << number << " " << currency << "\n";
	cout << "Серийный номер: " << serial_number << "\n";
	cout << "Страна: " << country << "\n";
	cout << "Состояние: " << country << "\n";
}

void Banknote::Buy() {
	cout << "Покупка\n";
	cout << "Выберите что вы хотите купить:\n";
	cout << "0. Оставить как есть\n";
	cout << "1. Купить товар за 100\n";
	cout << "2. Купить товар за 50\n";
	cout << "2. Купить товар за 80\n";
	cout << "Ваш выбор: ";
	cin >> choice;
	switch (choice) {
	case 0:
		if (currency == "USD" || "EURO" || "UAH") {
			cout << "Вы решили оставить как есть\n";
		}
		break;
	case 1:
		if (currency == "USD" || "EURO" || "UAH") {
			if (number >= 100) {
				number -= 100;
				cout << "Вы купили товар за 100\n";
			}
			cout << "У вас нет купюры\n";
		}
		break;
	case 2:
		if (currency == "USD" || "EURO" || "UAH") {
			if (number >= 50) {
				number -= 50;
				cout << "Вы купили товар за 100\n";
			}
			cout << number << " " << currency << "\n";
		}
		break;
	case 3:
		if (currency == "USD" || "EURO" || "UAH") {
			if (number >= 80) {
				number -= 80;
				cout << "Вы купили товар за 100\n";
			}
			cout << number << " " << currency << "\n";
		}
		break;
	default:
		cout << "Неверный ввод";
	}
}

void Banknote::Touch() {
	cout << "Протерев купюру пальцами, услышали мягкий шелест, как шуршание осенних листьев.\n";
}