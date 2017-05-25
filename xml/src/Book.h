/*
 * Book.h
 *
 *  Created on: May 25, 2017
 *      Author: polia
 */

#ifndef BOOK_H_
#define BOOK_H_
#include<string>
using namespace std;
class Book
{
public:
	Book();
	Book(string title, string author, int year, double price);
	virtual ~Book();
	void print() const;
	const string& getAuthor() const;
	void setAuthor(const string& author);
	double getPrice() const;
	void setPrice(double price);
	const string& getTitle() const;
	void setTitle(const string& title);
	int getYear() const;
	void setYear(int year);

private:
	string title;
	string author;
	int year;
	double price;
};

#endif /* BOOK_H_ */
