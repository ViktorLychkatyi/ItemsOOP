#include <iostream>
using namespace std;
#include "Kettle.h"

void Kettle::SetCapacity(string c) {
	�apacity = c;
}

string Kettle::GetCapacity(string c) {
	return �apacity;
}

void Kettle::SetPower(string p) {
	power = p;
}

string Kettle::GetPower(string p) {
	return power;
}

void Kettle::SetBodyMaterial(string m) {
	body_material = m;
}

string Kettle::GetBodyMaterial(string m) {
	return body_material;
}

void Kettle::SetColor(string c) {
	color = c;
}

string Kettle::GetColor(string c) {
	return color;
}

void Kettle::SetWaterTemperature(string t) {
	water_temperature = t;
}

string Kettle::GetWaterTemperature(string t) {
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