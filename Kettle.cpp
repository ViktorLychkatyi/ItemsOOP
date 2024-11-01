#include <iostream>
#include <windows.h>
using namespace std;
#include "Kettle.h"

void Kettle::SetCapacity(double c) {
	if (c >= 0.5 && c <= 2.5) {
		сapacity = c;
	}
	else {
		throw "Неверное значеине";
	}
}

double Kettle::GetCapacity() const {
	return сapacity;
}

void Kettle::SetPower(double p) {
	if (p >= 500 && p <= 3000) {
		power = p;
	}
	else {
		throw "Неверное значеине";
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
		throw "Неверное значеине";
	};
}

double Kettle::GetWaterTemperature() const {
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
	Sleep(500);
	cout << "Идет процесс закипания чайника...\n";
	Sleep(3000);
	cout << "Чайник закепел, наливай чай на здоровье! :)\n";
}

void Kettle::TurnOff() {
	cout << "Выключаем чайник\n";
}

void Kettle::ConnectCordKettle() {
	cout << "Подключаем шнур к чайнику\n";
}

void Kettle::DisconnectCordKettle() {
	cout << "Отсоединяем шнур от чайника\n";
}

void Kettle::Pour() {
	cout << "Наливаем в чайник\n";
}