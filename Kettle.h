#include <iostream>
using namespace std;

class Kettle {
private:
	double capacity;
	double power;
	char* body_material;
	string color;
	double water_temperature;
	static int kettle_count;

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

	Kettle(); // конструктор без параметров
	Kettle(const double c, const double p, const char* m, const string k, const double t); // конструктор с параметрами
	void Print(); // вывод
	Kettle(const string k); // конструктор преобразования
	~Kettle(); // делигирование
	Kettle(Kettle& original); // конструктор копирования
	static int GetCount(); // подсчет кол. объектов
	void Result() const; // вывод для копирования конструктура

	void TurnOn();
	void TurnOff();
	void ConnectCordKettle();
	void DisconnectCordKettle();
	void Pour();
};