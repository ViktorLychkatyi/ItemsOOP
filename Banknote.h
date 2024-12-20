﻿#include <iostream>
using namespace std;

class Banknote {
private:
	char* denomination;
	int number;
	string currency;
	string serial_number;
	string country;
	string state;
	int choice;
	static int banknote_count;

public:
	void SetDenomination(const char* denomination);
	const char* GetDenomination() const;
	void SetNubmer(int n);
	int GetNumber() const;
	void SetCurrency(string c);
	string GetCurrency() const;
	void SetSerialNumber(string s);
	string GetSerialNumber() const;
	void SetCountry(string k);
	string GetCountry() const;
	void SetState(string t);
	string GetState() const;

	Banknote(); // конструктор без параметров
	Banknote(const char* denomination, const int n, const string c, const string s, const string k, const string t); // конструктор с параметрами
	void Print(); // вывод
	Banknote(const string currency); // конструктор преобразования
	~Banknote(); // делигирование
	Banknote(const Banknote& other_banknote); // конструктор копирования
	static int GetCount(); // подсчет кол. объектов
	void Result() const; // вывод для копирования конструктура
	Banknote(int n); // для перегрузки

	Banknote operator + (const Banknote& other_banknote) const;
	bool operator > (const Banknote& other_banknote) const;
	bool operator < (const Banknote& other_banknote) const;
	bool operator == (const Banknote& other_banknote) const;
	bool operator != (const Banknote& other_banknote) const;
	friend ostream& operator << (ostream& i, Banknote& other_banknote);
	friend istream& operator >> (istream& i, Banknote& other_banknote);
	Banknote& operator = (const Banknote& other_banknote);
	explicit operator string() const;

	void Exchange();
	void State();
	void CurrencyInfo();
	void Buy();
	void Touch();
};