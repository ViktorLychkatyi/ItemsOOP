#include <iostream>
using namespace std;
#include "Banknote.h"
// ������

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
		throw "�������� ��������";
	}
	if (number <= 0) {
		number = 100; // �� ���������
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
	if (state == "New" || "�����") {
		state = s;
	}
	else {
		throw "�������� ��������";
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
	cout << "��������\n";
	cout << "�������� ������ ������� ����� ��������\n";
	cout << "0. �������� ��� ����\n";
	cout << "1. ������\n";
	cout << "2. ����\n";
	cout << "3. ������\n";
	cout << "��� �����: ";
	cin >> choice;
	switch (choice) {
		case 0:
			if (currency == "USD" || "EURO" || "UAH") {
				cout << "�� ������ �������� ��� ����\n";
			}
			break;
		case 1:
			if (currency == "USD" || "EURO" || "UAH") {
				cout << "�� �������� �� ������\n";
				cout << "������� �����: " << number << " " << "USD" << "\n";
			}
			break;
		case 2:
			if (currency == "USD" || "EURO" || "UAH") {
				cout << "�� �������� �� ����\n";
				cout << "������� �����: " << number << " " << "EURO" << "\n";
			}
			break;
		case 3:
			if (currency == "USD" || "EURO" || "UAH") {
				cout << "�� �������� �� ������\n";
				cout << "������� �����: " << number << " " << "UAH" << "\n";
			}
			break;
		default:
			cout << "�������� ����";
	}
}

void Banknote::State() {
	cout << "���� ������ �������� �����\n";
}

void Banknote::CurrencyInfo() {
	cout << "���������: " << denomination << "\n";
	cout << "������: " << number << " " << currency << "\n";
	cout << "�������� �����: " << serial_number << "\n";
	cout << "������: " << country << "\n";
	cout << "���������: " << country << "\n";
}

void Banknote::Buy() {
	cout << "�������\n";
	cout << "�������� ��� �� ������ ������:\n";
	cout << "0. �������� ��� ����\n";
	cout << "1. ������ ����� �� 100\n";
	cout << "2. ������ ����� �� 50\n";
	cout << "2. ������ ����� �� 80\n";
	cout << "��� �����: ";
	cin >> choice;
	switch (choice) {
	case 0:
		if (currency == "USD" || "EURO" || "UAH") {
			cout << "�� ������ �������� ��� ����\n";
		}
		break;
	case 1:
		if (currency == "USD" || "EURO" || "UAH") {
			if (number >= 100) {
				number -= 100;
				cout << "�� ������ ����� �� 100\n";
			}
			cout << "� ��� ��� ������\n";
		}
		break;
	case 2:
		if (currency == "USD" || "EURO" || "UAH") {
			if (number >= 50) {
				number -= 50;
				cout << "�� ������ ����� �� 100\n";
			}
			cout << number << " " << currency << "\n";
		}
		break;
	case 3:
		if (currency == "USD" || "EURO" || "UAH") {
			if (number >= 80) {
				number -= 80;
				cout << "�� ������ ����� �� 100\n";
			}
			cout << number << " " << currency << "\n";
		}
		break;
	default:
		cout << "�������� ����";
	}
}

void Banknote::Touch() {
	cout << "�������� ������ ��������, �������� ������ ������, ��� �������� ������� �������.\n";
}