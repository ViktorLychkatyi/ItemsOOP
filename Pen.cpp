#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
#include "Pen.h"

void Pen::SetInkColor(const char* ink_color) {
	this->ink_color = new char[100];
	strcpy_s(this->ink_color, 99, ink_color);
}

const char* Pen::GetInkColor() const {
	return this->ink_color;
}

void Pen::SetPenThickness(double t) {
	if (t >= 0.5 && t <= 2.0) {
		this->pen_thickness = t;
	}
	else {
		throw "Неверное значение";
	}
}

double Pen::GetPenThickness() const {
	return this->pen_thickness;
}

void Pen::SetPenLength(double l) {
	if (l >= 100 && l <= 150) {
		this->pen_length = l;
	}
	else {
		throw "Неверное значение";
	}
}

double Pen::GetPenLength() const {
	return this->pen_length;
}

void Pen::SetBodyMaterial(string m) {
	this->body_material = m;
}

string Pen::GetBodyMaterial() const {
	return this->body_material;
}

void Pen::SetInkAmount(int a) {
	if (a >= 0 && a <= 100) {
		this->ink_amount = a;
	}
	else {
		throw "Неверное значение";
	}
}

int Pen::GetInkAmount() const {
	return this->ink_amount;
}

void Pen::Print() {
	cout << this->ink_color << "\n";
	cout << this->pen_thickness << "\n";
	cout << this->pen_length << "\n";
	cout << this->body_material << "\n";
	cout << this->ink_amount << "\n";
	cout << "\n";
}

Pen::Pen(const string body_material) {
	this->body_material = body_material;
	cout << "Конструктор преобразования вызван" << "\n";
	cout << this->body_material << "\n\n";
	pen_count++;
}

Pen::Pen() {
	SetInkColor("Синий");
	SetPenThickness(0.5);
	SetPenLength(140);
	SetBodyMaterial("Пластик");
	SetInkAmount(100);
	Print();
	pen_count++;
}

Pen::Pen(const char* ink_color, const double t, const double l, const string m, const int a) {
	SetInkColor(ink_color);
	SetPenThickness(t);
	SetPenLength(l);
	SetBodyMaterial(m);
	SetInkAmount(a);
	Print();
	pen_count++;
}

Pen::Pen(const Pen& other_pen) {
	cout << "Конструктор копирования вызван" << "\n\n";
	SetInkColor(other_pen.ink_color);
	SetPenThickness(other_pen.pen_thickness);
	SetPenLength(other_pen.pen_length);
	SetBodyMaterial(other_pen.body_material);
	SetInkAmount(other_pen.ink_amount);
}

void Pen::Result() const {
	cout << this->ink_color << "\n";
	cout << this->pen_thickness << "\n";
	cout << this->pen_length << "\n";
	cout << this->body_material << "\n";
	cout << this->ink_amount << "\n";
	cout << "\n";
}

Pen::~Pen() {
	delete[] this->ink_color;
	pen_count--;
}

int Pen::GetCount() {
	return pen_count;
}

int Pen::pen_count = 0;

Pen::Pen(int a) {
	SetInkAmount(a);
	pen_count++;
}

Pen Pen::operator + (const Pen& other_pen) const {
	return Pen(ink_amount + other_pen.ink_amount);
}

bool Pen::operator > (const Pen& other_pen) const {
	return this->ink_amount > other_pen.ink_amount;
}

bool Pen::operator < (const Pen& other_pen) const {
	return this->ink_amount < other_pen.ink_amount;
}

bool Pen::operator == (const Pen& other_pen) const {
	return this->ink_amount == other_pen.ink_amount;
}

bool Pen::operator != (const Pen& other_pen) const {
	return this->ink_amount != other_pen.ink_amount;
}

ostream& operator << (ostream& i, Pen& other_pen) {
	i << other_pen.ink_amount << "%";
	return i;
}

istream& operator >> (istream& i, Pen& other_pen) {
	cin >> other_pen.ink_amount;
	cout << other_pen.ink_amount << "%";
	return i;
}

Pen& Pen::operator = (const Pen& other_pen) {
	if (this == &other_pen) {
		return *this;
	}

	delete[] ink_color;

	ink_color = new char[strlen(other_pen.ink_color) + 1];
	strcpy_s(ink_color, strlen(other_pen.ink_color) + 1, other_pen.ink_color);
	pen_thickness = other_pen.pen_thickness;
	pen_length = other_pen.pen_length;
	body_material = other_pen.body_material;
	ink_amount = other_pen.ink_amount;

	return *this;
}

Pen::operator string() const {
	return
	"\nЦвет чернил: " + string(ink_color) +
	"\nТолщина ручки: " + to_string(pen_thickness) +
	"\nДлина ручки: " + to_string(pen_length) +
	"\nМатериал	: " + body_material +
	"\nКоличество чернил: " + to_string(ink_amount) + "\n";
}

void Pen::Write() {
	while (true) {
		if (ink_amount > 0) {
			ink_amount--;
			cout << "Пишем, осталось чернил: " << ink_amount << "%" << "\n";
		}
		else {
			cout << "Чернила закончились. Пожалуйста, поменяйте ампулу.\n";
			break;
		}
	}
}

void Pen::ChangeAmpoule() {
	if (ink_amount < 100) {
		ink_amount = 100;
		cout << "Вы поменяли на новую ампулку. Теперь осталось чернил: " << ink_amount << "%" << "\n";
	}
	else {
		cout << "У вас итак уже новая ампулка с чернилами.\n";
	}
}

void Pen::CheckInklevel() {
	cout << "У вас осталось чернил: " << ink_amount << "%" << "\n";
}

void Pen::CloseCap() {
	cout << "Вы закрыли ручку с помощью колпачка\n";
}

void Pen::OpenCap() {
	cout << "Вы открыли ручку, сняв колпачок\n";
}