#include <iostream>
#include <windows.h>
using namespace std;
#include "Phone.h"

void Phone::SetBrand(string b) {
	brand = b;
}

string Phone::GetBrand() const {
	return brand;
}

void Phone::SetModel(string m) {
	model = m;
}

string Phone::GetModel() const {
	return model;
}

void Phone::SetMemorySize(string s) {
	memory_size = s;
}

string Phone::GetMemorySize() const {
	return memory_size;
}

void Phone::SetColor(string c) {
	color = c;
}

string Phone::GetColor() const {
	return color;
}

void Phone::SetOperatingSystem(string o) {
	operating_system = o;
}

string Phone::GetOperatingSystem() const {
	return operating_system;
}

void Phone::SetProcessor(string p) {
	proccesor = p;
}

string Phone::GetProcessor() const {
	return proccesor;
}

void Phone::PrintPhone() {
	cout << brand << "\n";
	cout << model << "\n";
	cout << memory_size << "\n";
	cout << color << "\n";
	cout << operating_system << "\n";
	cout << proccesor << "\n";
	cout << "\n";
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

