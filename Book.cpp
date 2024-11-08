#include <iostream>
#include <windows.h>
using namespace std;
#include "Book.h"
// ��

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
    SetAuthor("������ ������");
    SetNumberPages(328);
    SetGenre("����������");
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
    cout << "������ �����������\n\n";
    SetTitle(title.c_str());
}

Book::Book(Book& original) {
    cout << "����������� �����������\n\n";
    SetTitle(original.title);
}

Book::Book(Book&& original) {
    cout << "����������� ����������� �����������\n";
    SetTitle(original.title);
}

Book::~Book() {
    cout << "���������� ������\n\n";
    delete[] this->title;
    book_count--;
};

void Book::Open() {
    cout << "�� ������� �����\n";
}

void Book::Close() {
    cout << "�� ������� �����\n";
}

void Book::ReadPage() {
    while (true) {
        if (page >= 1 && page <= number_pages) {
            cout << "�� ������� �����, �������� �������: " << page << "/" << number_pages << "\n";
            cout << "�� ��������� �������� ��� ����������?\n";
            cout << "0. ���������� ��� ��������\n";
            cout << "1. �� ��������� ��������\n";
            cout << "2. �� ���������� ��������\n";
            cout << "��� �����: ";
            cin >> choice;

            switch (choice) {
            case 0:
                cout << "�� ���������� ��� ��������\n";
                return;
            case 1:
                if (page < number_pages) {
                    page++;
                    cout << "�� �� ��������� ��������: " << page << "\n";
                }
                else {
                    cout << "�� �� ��������� ��������, ������ ������\n";
                }
                break;
            case 2:
                if (page > 1) {
                    page--;
                    cout << "�� �� ���������� ��������: " << page << "\n";
                }
                else {
                    cout << "�� �� ������ ��������, ����� ������\n";
                }
                break;
            default:
                cout << "�������� �����, ���������� ��� ���\n";
                break;
            }
        }
        else {
            cout << "������������ ����� ��������\n";
            break;
        }
    }
}

void Book::AddBookmark() {
    cout << "�������� �����, ����� �������� � �������� ��� �������� ���������� 'c': ";
    cin >> text;
    cout << "��������� � ��������.\n";
}

void Book::BookInfo() {
    cout << "��������: " << title << "\n";
    cout << "�����: " << author << "\n";
    cout << "���������� �������: " << number_pages << "\n";
    cout << "����: " << genre << "\n";
    cout << "��� ����������: " << year_publication << "\n";
}