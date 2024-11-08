#include <iostream>
#include <windows.h>
using namespace std;
#include "Banknote.h"
// ��

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
		throw "�������� ��������";
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
	if (state == "New" || "�����") {
		this->state = t;
	}
	else {
		throw "�������� ��������";
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
	cout << "������ �����������\n\n";
	SetDenomination(denomination.c_str());
}

Banknote::Banknote(const Banknote& original) {
	cout << "������ �����������\n\n";
	SetDenomination(original.denomination);
}

int Banknote::GetCount() {
	return banknote_count;
}

Banknote::Banknote(const Banknote&& original) {
	cout << "����������� ����������� �����������\n";
	SetDenomination(original.denomination);
}

Banknote::~Banknote() {
	cout << "���������� ������\n\n";
	delete[] this->denomination;
	banknote_count--;
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