#include <iostream>
using namespace std;
#include "Phone.h"

void Phone::SetBrand(string b) {
	this->brand = b;
}

string Phone::GetBrand(string b) {
	return this->brand;
}

void Phone::SetModel(string m) {
	this->model = m;
}

string Phone::GetModel(string m) {
	return this->model;
}

void Phone::SetMemorySize(string s) {
	this->memory_size = s;
}

string Phone::GetMemorySize(string s) {
	return this->memory_size;
}

void Phone::SetColor(string c) {
	this->color = c;
}

string Phone::GetColor(string c) {
	return this->color;
}

void Phone::SetOperatingSystem(string o) {
	this->operating_system = o;
}

string Phone::GetOperatingSystem(string o) {
	return this->operating_system;
}

void Phone::SetProcessor(string p) {
	this->proccesor = p;
}

string Phone::GetProcessor(string p) {
	return this->proccesor;
}

void Phone::PrintPhone() {
	cout << this->brand << "\n";
	cout << this->model << "\n";
	cout << this->memory_size << "\n";
	cout << this->color << "\n";
	cout << this->operating_system << "\n";
	cout << this->proccesor << "\n";
	cout << "\n";
}

void Phone::Call() {
	cout << "Звоним в телефон...\n";
}

void Phone::SendMessage() {	
	cout << "Отправляем сообщение...\n";
}

void Phone::TakePhoto() {
	cout << "Делаем фотографию...\n";
}

void Phone::TurnOn() {
	cout << "Включили телефон\n";
}

void Phone::TurnOff() {
	cout << "Выключили телефон\n";
}

void Phone::Charge() {
	cout << "Подключили зарядку к телефону\n";
}