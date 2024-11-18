#include <iostream>
#include <string>
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

void Phone::SetMemorySize(int s) {
	this->memory_size = s;
}

int Phone::GetMemorySize() const {
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

Phone::Phone() {
	SetBrand("Samsung");
	SetModel("Galaxy A55");
	SetMemorySize(256);
	SetColor("Black");
	SetOperatingSystem("Android");
	SetProcessor("Exynos 1480");
	Print();
	phone_count++;
}

Phone::Phone(const char* brand, const string m, const int s, const string c, const string o, const string p) {
	SetBrand(brand);
	SetModel(m);
	SetMemorySize(s);
	SetColor(c);
	SetOperatingSystem(o);
	SetProcessor(p);
	Print();
	phone_count++;
}

Phone::Phone(const string model) {
	this->model = model;
	cout << "Конструктор преобразования вызван" << "\n";
	cout << this->model << "\n\n";
	phone_count++;
}

Phone::Phone(const Phone& other_phone) {
	cout << "Конструктор копирования вызван" << "\n\n";
	SetBrand(other_phone.brand);
	SetModel(other_phone.model);
	SetMemorySize(other_phone.memory_size);
	SetColor(other_phone.color);
	SetOperatingSystem(other_phone.operating_system);
	SetProcessor(other_phone.proccesor);
	phone_count++;
}

Phone::~Phone() {
	delete[] this->brand;
	phone_count--;
}

void Phone::Result() const {
	cout << this->brand << "\n";
	cout << this->model << "\n";
	cout << this->memory_size << "\n";
	cout << this->color << "\n";
	cout << this->operating_system << "\n";
	cout << this->proccesor << "\n";
	cout << "\n";
}

int Phone::GetCount() {
	return phone_count;
}

int Phone::phone_count = 0;

Phone::Phone(int s) {
	SetMemorySize(s);
	phone_count++;
}

Phone Phone::operator + (const Phone& other_phone) const {
	return Phone(memory_size + other_phone.memory_size);
}

bool Phone::operator > (const Phone& other_phone) const {
	return this->memory_size > other_phone.memory_size;
}

bool Phone::operator < (const Phone& other_phone) const {
	return this->memory_size < other_phone.memory_size;
}

bool Phone::operator == (const Phone& other_phone) const {
	return this->memory_size == other_phone.memory_size;
}

bool Phone::operator != (const Phone& other_phone) const {
	return this->memory_size != other_phone.memory_size;
}
ostream& operator << (ostream& i, Phone& other_phone) {
	i << other_phone.memory_size << " ГБ";
	return i;
}

istream& operator >> (istream& i, Phone& other_phone) {
	cin >> other_phone.memory_size;
	cout << other_phone.memory_size << " ГБ";
	return i;
}

Phone& Phone::operator = (const Phone& other_phone) {
	if(this == &other_phone) {
		return *this;
	}

	delete[] brand;

	brand = new char[strlen(other_phone.brand) + 1];
	strcpy_s(brand, strlen(other_phone.brand) + 1, other_phone.brand);
	model = other_phone.model;
	memory_size = other_phone.memory_size;
	color = other_phone.color;
	operating_system = other_phone.operating_system;
	proccesor = other_phone.proccesor;

	return *this;
}

Phone::operator string() const {
	return 
	"\nБренд: " + string(brand) +
	"\nМодель: " + model +
	"\nПамять: " + to_string(memory_size) + " GB" +
	"\nЦвет: " + color +
	"\nОперационная система: " + operating_system +
	"\nПроцессор: " + proccesor + "\n";
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
	cout << "\nВы удерживаете пальцем кнопку для включения телефона\n";
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