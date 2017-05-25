/*
 * Book.cpp
 *
 *  Created on: May 25, 2017
 *      Author: polia
 */

#include "Book.h"
#include<iostream>
using namespace std;
Book::Book()
{
	// TODO Auto-generated constructor stub

}

Book::Book(string title,string author, int year, double price)
{
	setTitle(title);
	setAuthor(author);
	setYear(year);
	setPrice(price);
}
Book::~Book()

{
	// TODO Auto-generated destructor stub
}

const string& Book::getAuthor() const
{
	return author;
}

void Book::setAuthor(const string& author)
{
	this->author = author;
}

double Book::getPrice() const
{
	return price;
}

void Book::setPrice(double price)
{
	this->price = price;
}

const string& Book::getTitle() const
{
	return title;
}

void Book::setTitle(const string& title)
{
	this->title = title;
}

int Book::getYear() const
{
	return year;
}

void Book::setYear(int year)
{
	this->year = year;
}

void Book::print() const
{
	cout << " Title : " << getTitle() << endl;
	cout << " Author : " << getAuthor() << endl;
	cout << " Year : " << getYear() << endl;
	cout << " Price : " <<getPrice()<< endl;
}
