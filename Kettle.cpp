#include <iostream>
#include <windows.h>
using namespace std;
#include "Kettle.h"

void Kettle::SetCapacity(double c) {
	if (c >= 0.5 && c <= 2.5) {
		this->capacity = c;
	}
	else {
		throw "Неверное значеине";
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
		throw "Неверное значеине";
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
		throw "Неверное значеине";
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
	SetBodyMaterial("Нержавеющая сталь");
	SetColor("Черный");
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
	cout << "Конструктор копирования\n\n";
	SetBodyMaterial(m.c_str());
}

Kettle::Kettle(Kettle& original) {
	cout << "Создан конструктор\n\n";
	SetBodyMaterial(original.body_material);
}

Kettle::Kettle(Kettle&& original) {
	cout << "Конструктор копирования перемещения\n";
	SetBodyMaterial(original.body_material);
}

Kettle::~Kettle() {
	cout << "Деструктор вызван\n\n";
	delete[] this->body_material;
	kettle_count--;
};

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