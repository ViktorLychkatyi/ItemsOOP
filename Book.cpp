#include <iostream>
using namespace std;
#include "Book.h"

void Book::SetTitle(string t) {
	title = t;
}

string Book::GetTitle(string t) {
	return title;
}

void Book::SetAuthor(string a) {
	author = a;
}

string Book::GetAuthor(string a) {
	return author;
}

void Book::SetNumberPages(int n) {
	number_pages = n;
}

int Book::GetNumberPages(int n) {
	return number_pages;
}

void Book::SetGenre(string g) {
	genre = g;
}

string Book::GetGenre(string g) {
	return genre;
}

void Book::SetYearPublication(int y) {
	year_publication = y;
}

int Book::GetYearPublication(int y) {
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
	cout << "������ ��������...\n";
}

void Book::AddBookmark() {
	cout << "��������� � ��������.\n";
}

void Book::BookInfo() {
	cout << "��������: 1984\n";
	cout << "�����: ������ ������\n";
	cout << "���������� �������: 328\n";
	cout << "����: ����������\n";
	cout << "��� ����������: 1949\n";
}

void Book::NextPage() {
	cout << "�� ���������� ��������� ��������\n";
}

void Book::PrevPage() {
	cout << "�� ���������� ���������� ��������";
}