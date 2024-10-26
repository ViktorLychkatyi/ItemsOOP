#include <iostream>
using namespace std;

// Êóïþðà
class Banknote {
private:
	string denomination;
	string currency;
	string serial_number;
	string country;
	string state;

public:
	void SetDenomination(string d);
	string GetDenomination(string b);
	void SetCurrency(string c);
	string GetCurrency(string c);
	void SetSerialNumber(string s);
	string GetSerialNumber(string s);
	void SetCountry(string c);
	string GetCountry(string c);
	void SetState(string s);
	string GetState(string s);
	void PrintBanknote();

	void Exchange();
	void State();
	void CurrencyInfo();
	void Buy();
	void Touch();
};