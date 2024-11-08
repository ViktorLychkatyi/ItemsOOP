#include <iostream>
using namespace std;
// ��

class Kettle {
private:
	double capacity;
	double power;
	char* body_material;
	string color;
	double water_temperature;

	int kettle_count = 0;

public:
	void SetCapacity(double c);
	double GetCapacity() const;
	void SetPower(double p);
	double GetPower() const;
	void SetBodyMaterial(const char* m);
	const char* GetBodyMaterial() const;
	void SetColor(string k);
	string GetColor() const;
	void SetWaterTemperature(double t);
	double GetWaterTemperature() const;

	Kettle(); // ����������� ��� ����������
	Kettle(const double c, const double p, const char* m, const string k, const double t); // ����������� � �����������
	void Print(); // �����
	Kettle(const string k); // ����������� ��������������
	~Kettle(); // �������������
	Kettle(Kettle& original); // ����������� �����������
	Kettle(Kettle&& original); // ����������� ����������� � ���������

	void TurnOn();
	void TurnOff();
	void ConnectCordKettle();
	void DisconnectCordKettle();
	void Pour();
};