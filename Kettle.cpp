#include <iostream>
using namespace std;
#include "Kettle.h"

void Kettle::SetCapacity(string c) {
	this->�apacity = c;
}

string Kettle::GetCapacity(string c) {
	return this->�apacity;
}

void Kettle::SetPower(string p) {
	this->power = p;
}

string Kettle::GetPower(string p) {
	return this->power;
}

void Kettle::SetBodyMaterial(string m) {
	this->body_material = m;
}

string Kettle::GetBodyMaterial(string m) {
	return this->body_material;
}

void Kettle::SetColor(string c) {
	this->color = c;
}

string Kettle::GetColor(string c) {
	return this->color;
}

void Kettle::SetWaterTemperature(string t) {
	this->water_temperature = t;
}

string Kettle::GetWaterTemperature(string t) {
	return this->water_temperature;
}

void Kettle::PrintKettle() {
	cout << this->�apacity << "\n";
	cout << this->power << "\n";
	cout << this->body_material << "\n";
	cout << this->color << "\n";
	cout << this->water_temperature << "\n";
	cout << "\n";
}

void Kettle::TurnOn() {
	cout << "�������� ������\n";
	cout << "�� ������� ���������� ����, � ����� ��������� ������ ������� ����, ����� ���� �������� �����������.\n";
}

void Kettle::TurnOff() {
	cout << "��������� ������\n";
	cout << "� ������, ��� �� �������� ��������, ������� ����� �����, � ��� �������� ����������� �����.\n";
}

void Kettle::ConnectCordKettle() {
	cout << "���������� ���� � �������\n";
}

void Kettle::DisconnectCordKettle() {
	cout << "����������� ���� �� �������\n";
}

void Kettle::AutoOffKettle() {
	cout << "�������������� ���������� ������� ����� ��������� ����.\n";
}