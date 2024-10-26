#include <iostream>
using namespace std;

// Телефон
class Phone {
private:
	string brand;
	string model;
	string memory_size;
	string color;
	string operating_system;
	string proccesor;

public:
	void SetBrand(string b);
	string GetBrand(string b);
	void SetModel(string m);
	string GetModel(string m);
	void SetMemorySize(string s);
	string GetMemorySize(string s);
	void SetColor(string c);
	string GetColor(string c);
	void SetOperatingSystem(string o);
	string GetOperatingSystem(string o);
	void SetProcessor(string p);
	string GetProcessor(string p);
	void PrintPhone();

	void Call();
	void SendMessage();
	void TakePhoto();
	void TurnOn();
	void TurnOff();
	void Charge();
};