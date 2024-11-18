#include <iostream>
using namespace std;

class Pen {
private:
	char* ink_color;
	double pen_thickness;
	double pen_length;
	string body_material;
	int ink_amount;
	static int pen_count;

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
	Pen(const Pen& other_pen); // конструктор копирования
	static int GetCount(); // подсчет кол. объектов
	void Result() const; // вывод для копирования конструктура
	Pen(int a); // для перегрузки

	Pen operator + (const Pen& other_pen) const;
	bool operator > (const Pen& other_pen) const;
	bool operator < (const Pen& other_pen) const;
	bool operator == (const Pen& other_pen) const;
	bool operator != (const Pen& other_pen) const;
	friend ostream& operator << (ostream& i, Pen& other_pen);
	friend istream& operator >> (istream& i, Pen& other_pen);
	Pen& operator = (const Pen& other_banknote);
	explicit operator string() const;

	void Write();
	void ChangeAmpoule();
	void CheckInklevel();
	void CloseCap();
	void OpenCap();
};