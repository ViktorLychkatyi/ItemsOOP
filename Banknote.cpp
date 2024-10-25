#include <iostream>
using namespace std;
#include "Banknote.h"

void Banknote::SetDenomination(string d) {
	this->denomination = d;
}

string Banknote::GetDenomination(string b) {
	return this->denomination;
}

void Banknote::SetCurrency(string c) {
	this->currency = c;
}

string Banknote::GetCurrency(string c) {
	return this->currency;
}

void Banknote::SetSerialNumber(string s) {
	this->serial_number = s;
}

string Banknote::GetSerialNumber(string s) {
	return this->serial_number;
}

void Banknote::SetCountry(string c) {
	this->country = c;
}

string Banknote::GetCountry(string c) {
	return this->country;
}

void Banknote::SetState(string s) {
	this->state = s;
}

string Banknote::GetState(string s) {
	return this->state;
}

void Banknote::PrintBanknote() {
	cout << this->denomination << "\n";
	cout << this->currency << "\n";
	cout << this->serial_number << "\n";
	cout << this->country << "\n";
	cout << this->state << "\n";
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