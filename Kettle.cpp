#include <iostream>
using namespace std;
#include "Kettle.h"

void Kettle::SetCapacity(string c) {
	сapacity = c;
}

string Kettle::GetCapacity(string c) {
	return сapacity;
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
	cout << сapacity << "\n";
	cout << power << "\n";
	cout << body_material << "\n";
	cout << color << "\n";
	cout << water_temperature << "\n";
	cout << "\n";
}

void Kettle::TurnOn() {
	cout << "Включаем чайник\n";
	cout << "На дисплее загорается свет, и через мгновение слышен шипящий звук, когда вода начинает нагреваться.\n";
}

void Kettle::TurnOff() {
	cout << "Выключаем чайник\n";
	cout << "И слышим, как он начинает остывать, издавая лёгкий треск, а пар медленно поднимается вверх.\n";
}

void Kettle::ConnectCordKettle() {
	cout << "Подключаем шнур к чайнику\n";
}

void Kettle::DisconnectCordKettle() {
	cout << "Отсоединяем шнур от чайника\n";
}

void Kettle::AutoOffKettle() {
	cout << "Автоматическое выключение чайника после закипания воды.\n";
}