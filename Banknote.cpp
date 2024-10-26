#include <iostream>
using namespace std;
#include "Banknote.h"

void Banknote::SetDenomination(string d) {
	denomination = d;
}

string Banknote::GetDenomination(string b) {
	return denomination;
}

void Banknote::SetCurrency(string c) {
	currency = c;
}

string Banknote::GetCurrency(string c) {
	return c;
}

void Banknote::SetSerialNumber(string s) {
	serial_number = s;
}

string Banknote::GetSerialNumber(string s) {
	return serial_number;
}

void Banknote::SetCountry(string c) {
	country = c;
}

string Banknote::GetCountry(string c) {
	return country;
}

void Banknote::SetState(string s) {
	state = s;
}

string Banknote::GetState(string s) {
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
	cout << "�� �������� ������ �� ����\n";
}

void Banknote::State() {
	cout << "���� ������ �������� �����\n";
}

void Banknote::CurrencyInfo() {
	cout << "���������: The United of States\n";
	cout << "������: 100 USD\n";
	cout << "�������� �����: KB46279860IB2\n";
	cout << "������: USA\n";
	cout << "���������: New\n";
}

void Banknote::Buy() {
	cout << "�� ��������� ����� �� 100 USD\n";
}

void Banknote::Touch() {
	cout << "�������� ������ ��������, �������� ������ ������, ��� �������� ������� �������.\n";
}