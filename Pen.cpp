#include <iostream>
using namespace std;
#include "Pen.h"

void Pen::SetInkColor(string i) {
	this->ink_color = i;
}

string Pen::GetInkColor(string i) {
	return this->ink_color;
}

void Pen::SetPenThickness(string t) {
	this->pen_thickness = t;
}

string Pen::GetPenThickness(string t) {
	return this->pen_thickness;
}

void Pen::SetPenLength(string l) {
	this->pen_length = l;
}

string Pen::GetPenLength(string l) {
	return this->pen_length;
}

void Pen::SetBodyMaterial(string m) {
	this->body_material = m;
}

string Pen::GetBodyMaterial(string m) {
	return this->body_material;
}

void Pen::SetInkAmount(string a) {
	this->ink_amount = a;
}

string Pen::GetInkAmount(string a) {
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
	cout << "Пишем в тетрадь\n";
}

void Pen::ChangeAmpoule() {
	cout << "Поменяли старую ампулку на новую\n";
}

void Pen::CheckInklevel() {
	cout << "У вас осталось чернил 5\n";
}

void Pen::CloseCap() {
	cout << "Вы закрыли ручку с помощью колпачка\n";
}

void Pen::OpenCap() {
	cout << "Вы открыли ручку, сняв колпачок\n";
}