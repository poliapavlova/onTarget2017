/*
 * Students.cpp
 *
 *  Created on: May 17, 2017
 *      Author: polia
 */

#include "Students.h"
#include<iostream>
using namespace std;

Students::Students():address()
{
	setFirstName("");
	setLastName("");
	setSuccess(0.0);
	setGender("");

}

Students::Students(string firstName, string lastName, string gender,
		double success, Address& address) : address(address)
{
	setFirstName(firstName);
	setLastName(lastName);
	setSuccess(success);
	setGender(gender);
}


Students::~Students()
{
	// TODO Auto-generated destructor stub
}

const string& Students::getFirstName() const
{
	return firstName;
}

void Students::setFirstName(const string& firstName)
{
	this->firstName = firstName;
}

const string& Students::getGender() const
{
	return gender;
}

void Students::setGender(const string& gender)
{
	this->gender = gender;
}

const string& Students::getLastName() const
{
	return lastName;
}

void Students::setLastName(const string& lastName)
{
	this->lastName = lastName;
}

double Students::getSuccess() const
{
	return success;
}

void Students::setSuccess(double success)
{
	this->success = success;
}

void Students::print()
{
	address.print();
	cout << getFirstName() << " " << getLastName() << " " << getGender() << " " << getSuccess() << endl;
}
