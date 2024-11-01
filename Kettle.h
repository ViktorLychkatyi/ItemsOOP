#include <iostream>
using namespace std;

class Kettle {
private:
	double capacity;
	double power;
	string body_material;
	string color;
	double water_temperature;

public:
	void SetCapacity(double c);
	double GetCapacity() const;
	void SetPower(double p);
	double GetPower() const;
	void SetBodyMaterial(string m);
	string GetBodyMaterial() const;
	void SetColor(string c);
	string GetColor() const;
	void SetWaterTemperature(double t);
	double GetWaterTemperature() const;
	void PrintKettle();

	void TurnOn();
	void TurnOff();
	void ConnectCordKettle();
	void DisconnectCordKettle();
	void Pour();
};