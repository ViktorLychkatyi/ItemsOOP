#include <iostream>
using namespace std;
#include "Phone.h"

void Phone::SetBrand(string b) {
	brand = b;
}

string Phone::GetBrand(string b) {
	return brand;
}

void Phone::SetModel(string m) {
	model = m;
}

string Phone::GetModel(string m) {
	return m;
}

void Phone::SetMemorySize(string s) {
	memory_size = s;
}

string Phone::GetMemorySize(string s) {
	return memory_size;
}

void Phone::SetColor(string c) {
	color = c;
}

string Phone::GetColor(string c) {
	return color;
}

void Phone::SetOperatingSystem(string o) {
	operating_system = o;
}

string Phone::GetOperatingSystem(string o) {
	return operating_system;
}

void Phone::SetProcessor(string p) {
	proccesor = p;
}

string Phone::GetProcessor(string p) {
	return proccesor;
}

void Phone::PrintPhone() {
	cout << brand << "\n";
	cout << model << "\n";
	cout << memory_size << "\n";
	cout << color << "\n";
	cout << operating_system << "\n";
	cout << proccesor << "\n";
	cout << "\n";
}

void Phone::Call() {
	cout << "������ � �������...\n";
}

void Phone::SendMessage() {	
	cout << "���������� ���������...\n";
}

void Phone::TakePhoto() {
	cout << "������ ����������...\n";
}

void Phone::TurnOn() {
	cout << "�������� �������\n";
}

void Phone::TurnOff() {
	cout << "��������� �������\n";
}

void Phone::Charge() {
	cout << "���������� ������� � ��������\n";
}