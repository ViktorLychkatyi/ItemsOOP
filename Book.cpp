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
	cout << "Вы открыли книгу\n";
}

void Book::Close() {
	cout << "Вы закрыли книгу\n";
}

void Book::ReadPage() {
	cout << "Читаем страницу...\n";
}

void Book::AddBookmark() {
	cout << "Добавляем в закладку.\n";
}

void Book::BookInfo() {
	cout << "Название: 1984\n";
	cout << "Автор: Джордж Оруэлл\n";
	cout << "Количество страниц: 328\n";
	cout << "Жанр: Антиутопия\n";
	cout << "Год публикации: 1949\n";
}

void Book::NextPage() {
	cout << "Вы открываете следующую страницу\n";
}

void Book::PrevPage() {
	cout << "Вы открываете предыдущую страницу";
}