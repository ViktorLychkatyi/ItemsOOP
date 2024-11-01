#include <iostream>
#include <windows.h>
using namespace std;
#include "Pen.h"

void Pen::SetInkColor(string i) {
	ink_color = i;
}

string Pen::GetInkColor() const {
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

void Pen::PrintPen() {
	cout << this->ink_color << "\n";
	cout << this->pen_thickness << "\n";
	cout << this->pen_length << "\n";
	cout << this->body_material << "\n";
	cout << this->ink_amount << "\n";
	cout << "\n";
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