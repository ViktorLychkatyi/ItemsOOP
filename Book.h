#include <iostream>
using namespace std;

// Книга
class Book {
private:
	string title;
	string author;
	int number_pages;
	string genre;
	int year_publication;

public:
	void SetTitle(string t);
	string GetTitle(string t);
	void SetAuthor(string a);
	string GetAuthor(string a);
	void SetNumberPages(int n);
	int GetNumberPages(int n);
	void SetGenre(string g);
	string GetGenre(string g);
	void SetYearPublication(int y);
	int GetYearPublication(int y);

	void PrintBook();
	void Open();
	void Close();
	void ReadPage();
	void AddBookmark();
	void BookInfo();
	void NextPage();
	void PrevPage();
};