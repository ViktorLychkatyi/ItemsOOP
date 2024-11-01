#include <iostream>
#include <windows.h>
using namespace std;

class Phone {
private:
	string brand;
	string model;
	string memory_size;
	string color;
	string operating_system;
	string proccesor;

	int choice;
	string text;
	int battery = 100;

public:
	void SetBrand(string b);
	string GetBrand() const;
	void SetModel(string m);
	string GetModel() const;
	void SetMemorySize(string s);
	string GetMemorySize() const;
	void SetColor(string c);
	string GetColor() const;
	void SetOperatingSystem(string o);
	string GetOperatingSystem() const;
	void SetProcessor(string p);
	string GetProcessor() const;
	void PrintPhone();

	void Call();
	void SendMessage();
	void Photo();
	void TurnOn();
	void TurnOff();
	void Use(); 
	void Charge();
};