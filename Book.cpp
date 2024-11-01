#include <iostream>
using namespace std;
#include "Book.h"
// �����

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