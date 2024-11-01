#include <iostream>
using namespace std;
#include "Banknote.h"

void Banknote::SetDenomination(string d) {
	denomination = d;
}

string Banknote::GetDenomination() const {
	return denomination;
}

void Banknote::SetNubmer(int n) {
	number = n;
}

int Banknote::GetNumber() const {
	return number;
}

void Banknote::SetCurrency(string c) {
	if (currency == "USD" || "EURO" || "UAH") {
		if (number == 1);
		if (number == 2);
		if (number == 5);
		if (number == 10);
		if (number == 20);
		if (number == 50);
		if (number == 100);
		if (number == 200);
		if (number == 500);
		currency = c;
	}
	else {
		throw "Неверное значение";
	}
	if (number <= 0) {
		number = 100; // по умолчанию
	}
}

string Banknote::GetCurrency() const {
	return currency;
}

void Banknote::SetSerialNumber(string s) {
	serial_number = s;
}

string Banknote::GetSerialNumber() const {
	return serial_number;
}

void Banknote::SetCountry(string c) {
	country = c;
}

string Banknote::GetCountry() const {
	return country;
}

void Banknote::SetState(string s) {
	if (state == "New" || "Новое") {
		state = s;
	}
	else {
		throw "Неверное действие";
	}
}

string Banknote::GetState() const {
	return state;
}

void Banknote::PrintBanknote() {
	cout << denomination << "\n";
	cout << currency << "\n";
	cout << serial_number << "\n";
	cout << country << "\n";
	cout << state << "\n";
	cout << "\n";
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