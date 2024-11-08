#include <iostream>
using namespace std;

// pen

class Pen {
private:
	char* ink_color;
	double pen_thickness;
	double pen_length;
	string body_material;
	int ink_amount;

	int pen_count = 0;

public:
	void SetInkColor(const char* ink_color);
	const char* GetInkColor() const;
	void SetPenThickness(double t);
	double GetPenThickness() const;
	void SetPenLength(double l);
	double GetPenLength() const;
	void SetBodyMaterial(string m);
	string GetBodyMaterial() const;
	void SetInkAmount(int a);
	int GetInkAmount() const;

	Pen(); // конструктор без параметров
	Pen(const char* ink_color, const double t, const double l, const string m, const int a); // конструктор с параметрами
	void Print(); // вывод
	Pen(const string ink_color); // конструктор преобразования
	~Pen(); // делигирование
	Pen(Pen& original); // конструктор копирования
	Pen(Pen&& original); // конструктор копирования с переносом

	void Write();
	void ChangeAmpoule();
	void CheckInklevel();
	void CloseCap();
	void OpenCap();
};