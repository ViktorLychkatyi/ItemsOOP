#include <iostream>
using namespace std;
#include "Book.h"

void Book::SetTitle(string t) {
	title = t;
}

string Book::GetTitle() const {
	return title;
}

void Book::SetAuthor(string a) {
	author = a;
}

string Book::GetAuthor() const {
	return author;
}

void Book::SetNumberPages(int n) {
	number_pages = n;
}

int Book::GetNumberPages() const {
	return number_pages;
}

void Book::SetGenre(string g) {
	genre = g;
}

string Book::GetGenre() const {
	return genre;
}

void Book::SetYearPublication(int y) {
	year_publication = y;
}

int Book::GetYearPublication() const {
	return year_publication;
}

void Book::PrintBook() {
	cout << title << "\n";
	cout << author << "\n";
	cout << number_pages << "\n";
	cout << genre << "\n";
	cout << year_publication << "\n";
	cout << "\n";
}

void Book::Open() {
	cout << "Вы открыли книгу\n";
}

void Book::Close() {
	cout << "Вы закрыли книгу\n";
}

void Book::ReadPage() {
    while (true) {
        if (page >= 1 && page <= number_pages) {
            cout << "Вы читаете книгу, осталось страниц: " << page << "/" << number_pages << "\n";
            cout << "На следующую страницу или предыдущую?\n";
            cout << "0. Остановить это действие\n";
            cout << "1. На следующую страницу\n";
            cout << "2. На предыдущую страницу\n";
            cout << "Ваш выбор: ";
            cin >> choice;

            switch (choice) {
            case 0:
                cout << "Вы остановили это действие\n";
                return;
            case 1:
                if (page < number_pages) {
                    page++;
                    cout << "Вы на следующей странице: " << page << "\n";
                }
                else {
                    cout << "Вы на последней странице, дальше нельзя\n";
                }
                break;
            case 2:
                if (page > 1) {
                    page--;
                    cout << "Вы на предыдущей странице: " << page << "\n";
                }
                else {
                    cout << "Вы на первой странице, назад нельзя\n";
                }
                break;
            default:
                cout << "Неверный выбор, попробуйте еще раз\n";
                break;
            }
        }
        else {
            cout << "Некорректный номер страницы\n";
            break;
        }
	}
}

void Book::AddBookmark() {
	cout << "Напишите текст, чтобы добавить в закладку или напишите английскую 'c': ";
	cin >> text;
	cout << "Добавляем в закладку.\n";
}

void Book::BookInfo() {
	cout << "Название: " << title << "\n";
	cout << "Автор: " << author << "\n";
	cout << "Количество страниц: " << number_pages << "\n";
	cout << "Жанр: " << genre << "\n";
	cout << "Год публикации: " << year_publication << "\n";
}