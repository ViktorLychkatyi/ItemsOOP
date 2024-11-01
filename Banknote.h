#include <iostream>
#include <windows.h>
using namespace std;

class Banknote {
private:
	string denomination;
	int number;
	string currency;
	string serial_number;
	string country;
	string state;

	int choice;

public:
	void SetDenomination(string d);
	string GetDenomination() const;
	void SetNubmer(int n);
	int GetNumber() const;
	void SetCurrency(string c);
	string GetCurrency() const;
	void SetSerialNumber(string s);
	string GetSerialNumber() const;
	void SetCountry(string c);
	string GetCountry() const;
	void SetState(string s);
	string GetState() const;
	void PrintBanknote();

	void Exchange();
	void State();
	void CurrencyInfo();
	void Buy();
	void Touch();
};