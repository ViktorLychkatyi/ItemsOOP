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
	Kettle(const string color); // конструктор преобразования
	~Kettle(); // делигирование
	Kettle(const Kettle& other_kettle); // конструктор копирования
	static int GetCount(); // подсчет кол. объектов
	void Result() const; // вывод для копирования конструктура
	Kettle(double c);

	Kettle operator + (const Kettle& other_kettle) const;
	bool operator > (const Kettle& other_kettle) const;
	bool operator < (const Kettle& other_kettle) const;
	bool operator == (const Kettle& other_kettle) const;
	bool operator != (const Kettle& other_kettle) const;
	friend const ostream& operator << (ostream& i, const Kettle& kettle);
	friend const istream& operator >> (istream& i, const Kettle& kettle);

	void TurnOn();
	void TurnOff();
	void ConnectCordKettle();
	void DisconnectCordKettle();
	void Pour();
};