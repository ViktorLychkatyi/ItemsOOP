#include <iostream>
using namespace std;

// Гелевая ручка
class Pen {
private:
	string ink_color;
	double pen_thickness;
	double pen_length;
	string body_material;
	int ink_amount;

public:
	void SetInkColor(string i);
	string GetInkColor() const;
	void SetPenThickness(double t);
	double GetPenThickness() const;
	void SetPenLength(double l);
	double GetPenLength() const;
	void SetBodyMaterial(string m);
	string GetBodyMaterial() const;
	void SetInkAmount(int a);
	int GetInkAmount() const;

	void PrintPen();
	void Write();
	void ChangeAmpoule();
	void CheckInklevel();
	void CloseCap();
	void OpenCap();
};