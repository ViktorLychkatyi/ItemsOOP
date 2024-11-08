#include <iostream>
#include <windows.h>
using namespace std;
#include "Kettle.h"

void Kettle::SetCapacity(double c) {
	if (c >= 0.5 && c <= 2.5) {
		this->capacity = c;
	}
	else {
		throw "�������� ��������";
	}
}

double Kettle::GetCapacity() const {
	return this->capacity;
}

void Kettle::SetPower(double p) {
	if (p >= 500 && p <= 3000) {
		this->power = p;
	}
	else {
		throw "�������� ��������";
	};
}

double Kettle::GetPower() const {
	return this->power;
}

void Kettle::SetBodyMaterial(const char* m) {
	this->body_material = new char[100];
	strcpy_s(this->body_material, 99, body_material);
}

const char* Kettle::GetBodyMaterial() const {
	return this->body_material;
}

void Kettle::SetColor(string k) {
	this->color = k;
}

string Kettle::GetColor() const {
	return this->color;
}

void Kettle::SetWaterTemperature(double t) {
	if (t >= 40 && t <= 100) {
		this->water_temperature = t;
	}
	else {
		throw "�������� ��������";
	};
}

double Kettle::GetWaterTemperature() const {
	return this->water_temperature;
}

void Kettle::Print() {
	cout << this->capacity << "\n";
	cout << this->power << "\n";
	cout << this->body_material << "\n";
	cout << this->color << "\n";
	cout << this->water_temperature << "\n";
	cout << "\n";
}

Kettle::Kettle() {
	SetCapacity(1.7);
	SetPower(2200);
	SetBodyMaterial("����������� �����");
	SetColor("������");
	SetWaterTemperature(60);
	Print();
	kettle_count++;
}

Kettle::Kettle(const double c, const double p, const char* m, const string k, const double t) {
	SetCapacity(c);
	SetPower(p);
	SetBodyMaterial(m);
	SetColor(k);
	SetWaterTemperature(t);
	Print();
	kettle_count++;
}

Kettle::Kettle(const string m) {
	cout << "����������� �����������\n\n";
	SetBodyMaterial(m.c_str());
}

Kettle::Kettle(Kettle& original) {
	cout << "������ �����������\n\n";
	SetBodyMaterial(original.body_material);
}

Kettle::Kettle(Kettle&& original) {
	cout << "����������� ����������� �����������\n";
	SetBodyMaterial(original.body_material);
}

Kettle::~Kettle() {
	cout << "���������� ������\n\n";
	delete[] this->body_material;
	kettle_count--;
};

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