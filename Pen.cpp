#include <iostream>
using namespace std;
#include "Pen.h"

void Pen::SetInkColor(string i) {
	ink_color = i;
}

string Pen::GetInkColor(string i) {
	return ink_color;
}

void Pen::SetPenThickness(string t) {
	pen_thickness = t;
}

string Pen::GetPenThickness(string t) {
	return pen_thickness;
}

void Pen::SetPenLength(string l) {
	pen_length = l;
}

string Pen::GetPenLength(string l) {
	return pen_length;
}

void Pen::SetBodyMaterial(string m) {
	body_material = m;
}

string Pen::GetBodyMaterial(string m) {
	return body_material;
}

void Pen::SetInkAmount(string a) {
	ink_amount = a;
}

string Pen::GetInkAmount(string a) {
	return ink_amount;
}

void Pen::PrintPen() {
	cout << ink_color << "\n";
	cout << pen_thickness << "\n";
	cout << pen_length << "\n";
	cout << body_material << "\n";
	cout << ink_amount << "\n";
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