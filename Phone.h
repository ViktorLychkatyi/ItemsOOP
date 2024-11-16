#include <iostream>
#include <windows.h>
using namespace std;

class Phone {
private:
	char* brand;
	string model;
	int memory_size;
	string color;
	string operating_system;
	string proccesor;
	int choice;
	string text;
	int battery = 100;
	static int phone_count;

public:
	void SetBrand(const char* brand);
	const char* GetBrand() const;
	void SetModel(string m);
	string GetModel() const;
	void SetMemorySize(int s);
	int GetMemorySize() const;
	void SetColor(string c);
	string GetColor() const;
	void SetOperatingSystem(string o);
	string GetOperatingSystem() const;
	void SetProcessor(string p);
	string GetProcessor() const;

	Phone(); // конструктор без параметров
	Phone(const char* brand, const string m, const int s, const string c, const string o, const string p); // конструктор с параметрами
	void Print() const; // вывод
	Phone(const string model); // конструктор преобразования
	void Display() const; // вывод
	~Phone(); // делигирование
	Phone(const Phone& other_phone); // конструктор копирования
	static int GetCount(); // подсчет кол. объектов
	void Result() const; // вывод для копирования конструктура
	Phone(int s); // для перегрузки операции...

	Phone operator + (const Phone& other_phone) const;
	bool operator > (const Phone& other_phone) const;
	bool operator < (const Phone& other_phone) const;
	bool operator == (const Phone& other_phone) const;
	bool operator != (const Phone& other_phone) const;
	friend const ostream& operator << (ostream& i, const Phone& phone);
	friend const istream& operator >> (istream& i, const Phone& phone);

	void Call();
	void SendMessage();
	void Photo();
	void TurnOn();
	void TurnOff();
	void Use();
	void Charge();
};