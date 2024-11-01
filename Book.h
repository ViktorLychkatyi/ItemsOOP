#include <iostream>
using namespace std;

class Book {
private:
	string title;
	string author;
	int number_pages;
	string genre;
	int year_publication;

	int choice;
	int page = 1;
	string text;

public:
	void SetTitle(string t);
	string GetTitle() const;
	void SetAuthor(string a);
	string GetAuthor() const;
	void SetNumberPages(int n);
	int GetNumberPages() const;
	void SetGenre(string g);
	string GetGenre() const;
	void SetYearPublication(int y);
	int GetYearPublication() const;

	void PrintBook();
	void Open();
	void Close();
	void ReadPage();
	void AddBookmark();
	void BookInfo();
};