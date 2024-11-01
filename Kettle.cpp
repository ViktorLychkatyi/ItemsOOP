#include <iostream>
#include <windows.h>
using namespace std;
#include "Kettle.h"

void Kettle::SetCapacity(double c) {
	if (c >= 0.5 && c <= 2.5) {
		�apacity = c;
	}
	else {
		throw "�������� ��������";
	}
}

double Kettle::GetCapacity() const {
	return �apacity;
}

void Kettle::SetPower(double p) {
	if (p >= 500 && p <= 3000) {
		power = p;
	}
	else {
		throw "�������� ��������";
	};
}

double Kettle::GetPower() const {
	return power;
}

void Kettle::SetBodyMaterial(string m) {
	body_material = m;
}

string Kettle::GetBodyMaterial() const {
	return body_material;
}

void Kettle::SetColor(string c) {
	color = c;
}

string Kettle::GetColor() const {
	return color;
}

void Kettle::SetWaterTemperature(double t) {
	if (t >= 40 && t <= 100) {
		water_temperature = t;
	}
	else {
		throw "�������� ��������";
	};
}

double Kettle::GetWaterTemperature() const {
	return water_temperature;
}

void Kettle::PrintKettle() {
	cout << �apacity << "\n";
	cout << power << "\n";
	cout << body_material << "\n";
	cout << color << "\n";
	cout << water_temperature << "\n";
	cout << "\n";
}

void Kettle::TurnOn() {
	cout << "�������� ������\n";
	cout << "�� ������� ���������� ����, � ����� ��������� ������ ������� ����, ����� ���� �������� �����������.\n";
	Sleep(500);
	cout << "���� ������� ��������� �������...\n";
	Sleep(3000);
	cout << "������ �������, ������� ��� �� ��������! :)\n";
}

void Kettle::TurnOff() {
	cout << "��������� ������\n";
}

void Kettle::ConnectCordKettle() {
	cout << "���������� ���� � �������\n";
}

void Kettle::DisconnectCordKettle() {
	cout << "����������� ���� �� �������\n";
}

void Kettle::Pour() {
	cout << "�������� � ������\n";
}