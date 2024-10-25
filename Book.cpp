#include <iostream>
using namespace std;
#include "Book.h"

void Book::SetTitle(string t) {
	this->title = t;
}

string Book::GetTitle(string t) {
	return this->title;
}

void Book::SetAuthor(string a) {
	this->author = a;
}

string Book::GetAuthor(string a) {
	return this->author;
}

void Book::SetNumberPages(int n) {
	this->number_pages = n;
}

int Book::GetNumberPages(int n) {
	return this->number_pages;
}

void Book::SetGenre(string g) {
	this->genre = g;
}

string Book::GetGenre(string g) {
	return this->genre;
}

void Book::SetYearPublication(int y) {
	this->year_publication = y;
}

int Book::GetYearPublication(int y) {
	return this->year_publication;
}

void Book::PrintBook() {
	cout << this->title << "\n";
	cout << this->author << "\n";
	cout << this->number_pages << "\n";
	cout << this->genre << "\n";
	cout << this->year_publication << "\n";
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