#include <iostream>
#include <windows.h>
using namespace std;
#include "Phone.h"

// phone

void Phone::SetBrand(const char* brand) {
	this->brand = new char[100];
	strcpy_s(this->brand, 99, brand);
}

const char* Phone::GetBrand() const {
	return this->brand;
}

void Phone::SetModel(string m) {
	this->model = m;
}

string Phone::GetModel() const {
	return this->model;
}

void Phone::SetMemorySize(const char* s) {
	this->memory_size = s;
}

string Phone::GetMemorySize() const {
	return this->memory_size;
}

void Phone::SetColor(string c) {
	this->color = c;
}

string Phone::GetColor() const {
	return this->color;
}

void Phone::SetOperatingSystem(string o) {
	this->operating_system = o;
}

string Phone::GetOperatingSystem() const {
	return this->operating_system;
}

void Phone::SetProcessor(string p) {
	this->proccesor = p;
}

string Phone::GetProcessor() const {
	return this->proccesor;
}

void Phone::Print() const {
	cout << this->brand << "\n";
	cout << this->model << "\n";
	cout << this->memory_size << "\n";
	cout << this->color << "\n";
	cout << this->operating_system << "\n";
	cout << this->proccesor << "\n";
	cout << "\n";
}

static int GetCount() {
	static int banknote_count;
}

Phone::Phone() {
	SetBrand("Samsung");
	SetModel("Galaxy A55");
	SetMemorySize("256 GB");
	SetColor("Black");
	SetOperatingSystem("Android");
	SetProcessor("Exynos 1480");
	Print();
	phone_count++;
}

Phone::Phone(const char* brand, const string m, const char* s, const string c, const string o, const string p) {
	SetBrand(brand);
	SetModel(m);
	SetMemorySize(s);
	SetColor(c);
	SetOperatingSystem(o);
	SetProcessor(p);
	Print();
	phone_count++;
}

Phone::Phone(const string b) {
	cout << "������ �����������\n\n";
	SetBrand(b.c_str());
}

Phone::Phone(Phone& original) {
	cout << "����������� �����������\n\n";
	SetBrand(original.brand);
}

Phone::Phone(Phone&& original) {
	cout << "����������� ����������� �����������\n";
	SetBrand(original.brand);
}

Phone::~Phone() {
	cout << "���������� ������\n\n";
	delete[] this->brand;
	phone_count--;
}

void Phone::Call() {
	cout << "�� ������� ���������� '������'\n";
	cout << "�������� ��������:\n";
	cout << "1. �����\n";
	cout << "2. ��������\n";
	cout << "��� �����: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "������\n";
		cout << "�������� ����� �������� ����� ���������: ";
		cin >> choice;
		cout << "�� ������� �� ����� ������...\n";
		Sleep(1000);
		cout << "������� �� ��������� ������\n";
		cout << "�� ������������ ������� � ����\n";
		break;
	case 2:
		cout << "��������";
		cout << "�������� ������ ������������ ����� ���������";
		cout << "1. ���";
		cout << "2. ����";
		cout << "3. ������";
		cin >> choice;
		cout << "�� ������� ������������...\n";
		Sleep(1000);
		cout << "������� �� ��������� ������\n";
		cout << "�� ������������ ������� � ����\n";
		break;
	}
}

void Phone::SendMessage() {
	cout << "�� ������� ���������� 'C��������'\n";
	cout << "�������� ������������:\n";
	cout << "1. ���\n";
	cout << "������! ��� �� ������ ��������?\n\n";
	cout << "2. ����\n";
	cout << "����������! �� ��� ��������� ����� �����, � ������� ��� �������?\n\n";
	cout << "3. ������\n";
	cout << "������! �� ������ ��� ���� ������� � �������. �� ������� ������?\n\n";
	cout << "��� �����: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "���\n";
		cout << "�� ������ ���������: ";
		cout << "\n���: ������! ��� �� ������ ��������?\n";
		cin >> text;
		cout << "��: " << text << "\n";
		Sleep(1000);
		cout << "��� �����...\n";
		Sleep(1000);
		cout << "���: � ������� � ����� � ��������. ���� �������! �� ���� �����������, �� ����� �������� ����� ��� �������.\n";
		break;
	case 2:
		cout << "����\n";
		cout << "�� ������ ���������: ";
		cout << "\n����: ����������! �� ��� ��������� ����� �����, � ������� ��� �������?\n";
		cin >> text;
		cout << "��: " << text << "\n";
		Sleep(1000);
		cout << "���� �����...\n";
		Sleep(1000);
		cout << "� ��� �� �����, �� ������, ��� �� ��������. ����� ����� ���-������ ������������ �������� ������!\n";
		break;
	case 3:
		cout << "������\n";
		cout << "�� ������ ���������: ";
		cout << "\n������: ������! �� ������ ��� ���� ������� � �������. �� ������� ������?\n";
		cin >> text;
		cout << "��: " << text << "\n";
		Sleep(1000);
		cout << "������ �����...\n";
		Sleep(1000);
		cout << "������: �������! ����� ���������� � ���� �� ����. � ��� ������� �� ���, ��� ��� ���� ��� ����� �������!\n";
		break;
	}
}

void Phone::Photo() {
	cout << "�� ������� ���������� '������'\n";
	cout << "�������� �������� ������� ����� �������\n";
	cout << "1. ����������\n";
	cout << "2. �����������\n";
	cout << "��� �����: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "�� �������� ������\n";
		cout << "������� �� ������� ������, ����������������? 1. �� ��� 2. ���?\n";
		cout << "��� �����: ";
		cin >> choice;
		if (choice == 1) {
			cout << "���������� �������, ���������� � �������.\n";
		}
		else if (choice == 2) {
			cout << "�������� ���������.\n";
			break;
		}
		break;

	case 2:
		cout << "�� �������� ������\n";
		cout << "������� �� ������� ������, ����� �����? 1. �� ��� 2. ���?\n";
		cout << "��� �����: ";
		cin >> choice;
		if (choice == 1) {
			cout << "�� �������� �����, ���������� �����������? 1. �� ��� 2. ���?\n";
			cout << "��� �����: ";
			cin >> choice;
			if (choice == 1) {
				cout << "����� �������, ���������� � �������.\n";
			}
			else if (choice == 2) {
				cout << "�������� ���������.\n";
				break;
			}
		}
		else {
			cout << "�������� ���������.\n";
			break;
		}
		break;

	default:
		cout << "�������� �����. ����������, �������� 1 ��� 2.\n";
		break;
	}
}

void Phone::TurnOn() {
	cout << "�� ����������� ������� ������ ��� ��������� ��������\n";
	Sleep(1000);
	cout << "�������� �������\n";
	Sleep(500);
	cout << "���������� ������� ��������...\n";
	Sleep(1500);
	cout << "�� �������� ������� ��� �������������\n";
}

void Phone::TurnOff() {
	cout << "�� ����������� ������� ������ ��� ���������� ��������\n";
	Sleep(1000);
	cout << "�� �������� ����\n";
	cout << "�������� ��������\n";
	cout << "1. ��������� �������\n";
	cout << "2. ������������� �������\n";
	cout << "��� �����: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "���� �������� ��������...\n";
		cout << "����������� �������\n";
	case 2:
		cout << "�� �������������� �������...\n";
		Sleep(1000);
		cout << "�������� �������\n";
		Sleep(500);
		cout << "���������� ������� ��������...\n";
		Sleep(1500);
		cout << "�� �������� ������� ��� �������������\n";
	}
	cout << "��������� �������\n";
}

void Phone::Use() {
	cout << "�� ������ ����������� �������\n";
	while (true) {
		if (battery > 0) {
			cout << "��� ����� �������: " << battery << "%" << "\n";
			Sleep(1000);
			battery--;
		}
		else {
			cout << "�������� ����������\n";
			battery = 0;
			return;
			break;
		}
	}
}

void Phone::Charge() {
	cout << "���������� ������� � ��������\n";
	while (true) {
		if (battery < 100) {
			cout << "���������� �������, �������: " << battery << "%" << "\n";
			Sleep(1000);
			battery++;
		}
		else {
			cout << "�������� ����������\n";
			break;
		}
	}
	cout << "���������� ������� � ��������\n";
}