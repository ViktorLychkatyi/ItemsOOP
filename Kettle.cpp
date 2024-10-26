#include <iostream>
using namespace std;
#include "Kettle.h"

void Kettle::SetCapacity(string c) {
	this->сapacity = c;
}

string Kettle::GetCapacity(string c) {
	return this->сapacity;
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
	cout << this->сapacity << "\n";
	cout << this->power << "\n";
	cout << this->body_material << "\n";
	cout << this->color << "\n";
	cout << this->water_temperature << "\n";
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