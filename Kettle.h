#include <iostream>
using namespace std;

// Электрочайник
class Kettle {
private:
	string сapacity;
	string power;
	string body_material;
	string color;
	string water_temperature;

public:
	void SetCapacity(string c);
	string GetCapacity(string c);
	void SetPower(string p);
	string GetPower(string p);
	void SetBodyMaterial(string m);
	string GetBodyMaterial(string m);
	void SetColor(string c);
	string GetColor(string c);
	void SetWaterTemperature(string t);
	string GetWaterTemperature(string t);
	void PrintKettle();

	void TurnOn();
	void TurnOff();
	void ConnectCordKettle();
	void DisconnectCordKettle();
	void AutoOffKettle();
};