/*
 * Address.cpp
 *
 *  Created on: May 17, 2017
 *      Author: polia
 */

#include "Address.h"
#include<iostream>
using namespace std;
Address::Address()
{
	setCity("");
	setStreet("");
	setNumber(0);

}

Address::Address(string city, string street, int number)
{
	setCity(city);
	setStreet(street);
	setNumber(number);
}

Address::~Address()
{
	// TODO Auto-generated destructor stub
}

const string& Address::getCity() const
{
	return city;
}

void Address::setCity(const string& city)
{
	this->city = city;
}

int Address::getNumber() const
{
	return number;
}

void Address::setNumber(int number)
{
	this->number = number;
}

const string& Address::getStreet() const
{
	return street;
}

void Address::setStreet(const string& street)
{
	this->street = street;
}

void Address::print() const
{
	cout << getCity() << " " << getStreet() << " " << getNumber() << endl;
}
