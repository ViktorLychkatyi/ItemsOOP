#include <iostream>
using namespace std;
// да

class Banknote {
private:
	char* denomination;
	int number;
	string currency;
	string serial_number;
	string country;
	string state;

	int choice;
	int banknote_count = 0;

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
	int GetCount();

	Banknote(); // конструктор без параметров
	Banknote(const char* denomination, const int n, const string c, const string s, const string k, const string t); // конструктор с параметрами
	void Print(); // вывод
	Banknote(string denomination); // конструктор преобразования
	~Banknote(); // делигирование
	Banknote(const Banknote& original); // конструктор копирования
	Banknote(const Banknote&& original); // конструктор копирования с переносом

	void Exchange();
	void State();
	void CurrencyInfo();
	void Buy();
	void Touch();
};