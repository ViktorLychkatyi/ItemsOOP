#include <iostream>
using namespace std;

// Гелевая ручка
class Pen {
private:
	string ink_color;
	string pen_thickness;
	string pen_length;
	string body_material;
	string ink_amount;

public:
	void SetInkColor(string i);
	string GetInkColor(string i);
	void SetPenThickness(string t);
	string GetPenThickness(string t);
	void SetPenLength(string l);
	string GetPenLength(string l);
	void SetBodyMaterial(string m);
	string GetBodyMaterial(string m);
	void SetInkAmount(string a);
	string GetInkAmount(string a);

	void PrintPen();
	void Write();
	void ChangeAmpoule();
	void CheckInklevel();
	void CloseCap();
	void OpenCap();
};