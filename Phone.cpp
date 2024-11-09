#include <iostream>
#include <windows.h>
using namespace std;
#include "Phone.h"

void Phone::SetBrand(const char* brand) {
	this->brand = new char[100];
	strcpy_s(this->brand, 99, brand);
}

const char* Phone::GetBrand() const {
	return this->brand;
}

void Phone::SetModel(string m) {
	this->model = m;
}

string Phone::GetModel() const {
	return this->model;
}

void Phone::SetMemorySize(const char* s) {
	this->memory_size = s;
}

string Phone::GetMemorySize() const {
	return this->memory_size;
}

void Phone::SetColor(string c) {
	this->color = c;
}

string Phone::GetColor() const {
	return this->color;
}

void Phone::SetOperatingSystem(string o) {
	this->operating_system = o;
}

string Phone::GetOperatingSystem() const {
	return this->operating_system;
}

void Phone::SetProcessor(string p) {
	this->proccesor = p;
}

string Phone::GetProcessor() const {
	return this->proccesor;
}

void Phone::Print() const {
	cout << this->brand << "\n";
	cout << this->model << "\n";
	cout << this->memory_size << "\n";
	cout << this->color << "\n";
	cout << this->operating_system << "\n";
	cout << this->proccesor << "\n";
	cout << "\n";
}

static int GetCount() {
	static int banknote_count;
}

Phone::Phone() {
	SetBrand("Samsung");
	SetModel("Galaxy A55");
	SetMemorySize("256 GB");
	SetColor("Black");
	SetOperatingSystem("Android");
	SetProcessor("Exynos 1480");
	Print();
	phone_count++;
}

Phone::Phone(const char* brand, const string m, const char* s, const string c, const string o, const string p) {
	SetBrand(brand);
	SetModel(m);
	SetMemorySize(s);
	SetColor(c);
	SetOperatingSystem(o);
	SetProcessor(p);
	Print();
	phone_count++;
}

Phone::Phone(const string b) {
	cout << "Создан конструктор\n\n";
	SetBrand(b.c_str());
}

Phone::Phone(Phone& original) {
	cout << "Конструктор копирования\n\n";
	SetBrand(original.brand);
}

Phone::Phone(Phone&& original) {
	cout << "Конструктор копирования перемещения\n";
	SetBrand(original.brand);
}

Phone::~Phone() {
	cout << "Деструктор вызван\n\n";
	delete[] this->brand;
	phone_count--;
}

void Phone::Call() {
	cout << "Вы открыли приложение 'Звонки'\n";
	cout << "Выберите действие:\n";
	cout << "1. Набор\n";
	cout << "2. Конаткты\n";
	cout << "Ваш выбор: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "Звонок\n";
		cout << "Напишите номер телефона чтобы позвонить: ";
		cin >> choice;
		cout << "Вы звоните по этому номеру...\n";
		Sleep(1000);
		cout << "Абонент не принимает трубку\n";
		cout << "Вы возвращетесь обратно в меню\n";
		break;
	case 2:
		cout << "Контакты";
		cout << "Выберите любого пользователя чтобы позвонить";
		cout << "1. Оля";
		cout << "2. Саша";
		cout << "3. Никита";
		cin >> choice;
		cout << "Вы звоните пользователю...\n";
		Sleep(1000);
		cout << "Абонент не принимает трубку\n";
		cout << "Вы возвращетесь обратно в меню\n";
		break;
	}
}

void Phone::SendMessage() {
	cout << "Вы открыли приложение 'Cообщение'\n";
	cout << "Выберите пользователя:\n";
	cout << "1. Оля\n";
	cout << "Привет! Как ты провел выходные?\n\n";
	cout << "2. Саша\n";
	cout << "Здравствуй! Ты уже посмотрел новый фильм, о котором все говорят?\n\n";
	cout << "3. Ниикта\n";
	cout << "Привет! Не забудь про нашу встречу в пятницу. Во сколько удобно?\n\n";
	cout << "Ваш выбор: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "Оля\n";
		cout << "Вы пишите сообщение: ";
		cout << "\nОля: Привет! Как ты провел выходные?\n";
		cin >> text;
		cout << "Вы: " << text << "\n";
		Sleep(1000);
		cout << "Оля пишет...\n";
		Sleep(1000);
		cout << "Оля: Я сходила в поход с друзьями. Было здорово! Мы даже заблудились, но нашли красивое место для пикника.\n";
		break;
	case 2:
		cout << "Саша\n";
		cout << "Вы пишите сообщение: ";
		cout << "\nСаша: Здравствуй! Ты уже посмотрел новый фильм, о котором все говорят?\n";
		cin >> text;
		cout << "Вы: " << text << "\n";
		Sleep(1000);
		cout << "Саша пишет...\n";
		Sleep(1000);
		cout << "Я еще не видел, но слышал, что он классный. Нужно будет как-нибудь организовать просмотр вместе!\n";
		break;
	case 3:
		cout << "Ниикта\n";
		cout << "Вы пишите сообщение: ";
		cout << "\nНиикта: Привет! Не забудь про нашу встречу в пятницу. Во сколько удобно?\n";
		cin >> text;
		cout << "Вы: " << text << "\n";
		Sleep(1000);
		cout << "Ниикта пишет...\n";
		Sleep(1000);
		cout << "Ниикта: Отлично! Давай встретимся у кафе на углу. Я там никогда не был, так что буду рад новой локации!\n";
		break;
	}
}

void Phone::Photo() {
	cout << "Вы открыли приложение 'Камера'\n";
	cout << "Выберите действие которое нужно сделать\n";
	cout << "1. Фотография\n";
	cout << "2. Видеозапись\n";
	cout << "Ваш выбор: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "Вы наводите камеру\n";
		cout << "Нажимая на красную кнопку, сфотографировать? 1. Да или 2. Нет?\n";
		cout << "Ваш выбор: ";
		cin >> choice;
		if (choice == 1) {
			cout << "Фотография сделана, перенесена в галерею.\n";
		}
		else if (choice == 2) {
			cout << "Действие завершено.\n";
			break;
		}
		break;

	case 2:
		cout << "Вы наводите камеру\n";
		cout << "Нажимая на красную кнопку, снять видео? 1. Да или 2. Нет?\n";
		cout << "Ваш выбор: ";
		cin >> choice;
		if (choice == 1) {
			cout << "Вы снимаете видео, остановить видеозапись? 1. Да или 2. Нет?\n";
			cout << "Ваш выбор: ";
			cin >> choice;
			if (choice == 1) {
				cout << "Видео сделано, перенесено в галерею.\n";
			}
			else if (choice == 2) {
				cout << "Действие завершено.\n";
				break;
			}
		}
		else {
			cout << "Действие завершено.\n";
			break;
		}
		break;

	default:
		cout << "Неверный выбор. Пожалуйста, выберите 1 или 2.\n";
		break;
	}
}

void Phone::TurnOn() {
	cout << "Вы удерживаете пальцем кнопку для включения телефона\n";
	Sleep(1000);
	cout << "Включили телефон\n";
	Sleep(500);
	cout << "Включается телефон заставка...\n";
	Sleep(1500);
	cout << "Вы включили телефон для использования\n";
}

void Phone::TurnOff() {
	cout << "Вы удерживаете пальцем кнопку для выключения телефона\n";
	Sleep(1000);
	cout << "Вы включили меню\n";
	cout << "Выберите действие\n";
	cout << "1. Выключить телефон\n";
	cout << "2. Перезагрузить телефон\n";
	cout << "Ваш выбор: ";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "Идет заставка телефона...\n";
		cout << "Выключается телефон\n";
	case 2:
		cout << "Вы перезагружаете телефон...\n";
		Sleep(1000);
		cout << "Включили телефон\n";
		Sleep(500);
		cout << "Включается телефон заставка...\n";
		Sleep(1500);
		cout << "Вы включили телефон для использования\n";
	}
	cout << "Выключили телефон\n";
}

void Phone::Use() {
	cout << "Вы просто используете телефон\n";
	while (true) {
		if (battery > 0) {
			cout << "Ваш заряд батареи: " << battery << "%" << "\n";
			Sleep(1000);
			battery--;
		}
		else {
			cout << "Действие завершенно\n";
			battery = 0;
			return;
			break;
		}
	}
}

void Phone::Charge() {
	cout << "Подключили зарядку к телефону\n";
	while (true) {
		if (battery < 100) {
			cout << "Заряжается телефон, батарея: " << battery << "%" << "\n";
			Sleep(1000);
			battery++;
		}
		else {
			cout << "Действие завершенно\n";
			break;
		}
	}
	cout << "Подключили зарядку к телефону\n";
}