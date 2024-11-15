#include <iostream>
using namespace std;

class Book {
private:
	char* title;
	string author;
	int number_pages;
	string genre;
	int year_publication;
	int choice;
	int page = 1;
	string text;
	static int book_count;

public:
	void SetTitle(const char* title);
	const char* GetTitle() const;
	void SetAuthor(string a);
	string GetAuthor() const;
	void SetNumberPages(int n);
	int GetNumberPages() const;
	void SetGenre(string g);
	string GetGenre() const;
	void SetYearPublication(int y);
	int GetYearPublication() const;
	
	Book(); // конструктор без параметров
	Book(const char* title, const string a, const int n, const string g, const int y); // конструктор с параметрами
	void Print(); // вывод
	Book(const string title); // конструктор преобразования
	~Book(); // делигирование
	Book(Book& other_book); // конструктор копирования
	static int GetCount(); // подсчет кол. объектов
	void Result() const; // вывод для копирования конструктура

	void Open();
	void Close();
	void ReadPage();
	void AddBookmark();
	void BookInfo();
};