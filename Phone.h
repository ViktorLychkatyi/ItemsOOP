#include <iostream>
#include <windows.h>
using namespace std;

// phone

class Phone {
private:
	char* brand;
	string model;
	string memory_size;
	string color;
	string operating_system;
	string proccesor;

	int choice;
	string text;
	int battery = 100;
	int phone_count = 0;

public:
	void SetBrand(const char* brand);
	const char* GetBrand() const;
	void SetModel(string m);
	string GetModel() const;
	void SetMemorySize(const char* s);
	string GetMemorySize() const;
	void SetColor(string c);
	string GetColor() const;
	void SetOperatingSystem(string o);
	string GetOperatingSystem() const;
	void SetProcessor(string p);
	string GetProcessor() const;

	Phone(); // ����������� ��� ����������
	Phone(const char* brand, const string m, const char* s, const string c, const string o, const string p); // ����������� � �����������
	void Print() const; // �����
	Phone(const string brand); // ����������� ��������������
	~Phone(); // �������������
	Phone(Phone& original); // ����������� �����������
	Phone(Phone&& original); // ����������� ����������� � ���������

	void Call();
	void SendMessage();
	void Photo();
	void TurnOn();
	void TurnOff();
	void Use();
	void Charge();
};