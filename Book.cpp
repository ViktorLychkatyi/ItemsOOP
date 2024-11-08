#include <iostream>
#include <windows.h>
using namespace std;
#include "Book.h"
// да

void Book::SetTitle(const char* title) {
    this->title = new char[100];
    strcpy_s(this->title, 99, title);
}

const char* Book::GetTitle() const {
    return this->title;
}

void Book::SetAuthor(string a) {
    this->author = a;
}

string Book::GetAuthor() const {
    return this->author;
}

void Book::SetNumberPages(int n) {
    this->number_pages = n;
}

int Book::GetNumberPages() const {
    return this->number_pages;
}

void Book::SetGenre(string g) {
    this->genre = g;
}

string Book::GetGenre() const {
    return this->genre;
}

void Book::SetYearPublication(int y) {
    this->year_publication = y;
}

int Book::GetYearPublication() const {
    return this->year_publication;
}

Book::Book() {
    SetTitle("1984");
    SetAuthor("Джордж Оруэлл");
    SetNumberPages(328);
    SetGenre("Антиутопия");
    SetYearPublication(1949);
    Print();
    book_count++;
}

Book::Book(const char* title, const string a, const int n, const string g, const int y) {
    SetTitle(title);
    SetAuthor(a);
    SetNumberPages(n);
    SetGenre(g);
    SetYearPublication(y);
    Print();
    book_count++;
}

void Book::Print() {
    cout << this->title << "\n";
    cout << this->author << "\n";
    cout << this->number_pages << "\n";
    cout << this->genre << "\n";
    cout << this->year_publication << "\n";
    cout << "\n";
}

Book::Book(const string title) {
    cout << "Создан конструктор\n\n";
    SetTitle(title.c_str());
}

Book::Book(Book& original) {
    cout << "Конструктор копирования\n\n";
    SetTitle(original.title);
}

Book::Book(Book&& original) {
    cout << "Конструктор копирования перемещения\n";
    SetTitle(original.title);
}

Book::~Book() {
    cout << "Деструктор вызван\n\n";
    delete[] this->title;
    book_count--;
};

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