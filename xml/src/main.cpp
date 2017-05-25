#include<iostream>
#include<string>
#include<vector>
#include"Book.h"
#include"pugixml.hpp"
using namespace std;

int main()
{
	vector<Book>myVector;

	 pugi::xml_document doc;

	 if(doc.load_file("books.xml"))
	     cout << "File readed!" << endl;
	 else
	     cout << "ERROR" << endl;

	 pugi::xml_node books = doc.child("bookstore");

	 for (pugi::xml_node book = books.child("book");book ; book = book.next_sibling("book"))
	 {
		 Book newBook;
		 newBook.setTitle(book.child("title").text().as_string());
		 newBook.setAuthor(book.child("author").text().as_string());
		 newBook.setPrice(book.child("price").text().as_double());
		 newBook.setYear(book.child("year").text().as_int());

		 myVector.push_back(newBook);

	 }

	 for (unsigned int i = 0 ; i <myVector.size();i++)
	 {
		 myVector[i].print();
		 cout <<endl;
	 }




	return 0;
}
