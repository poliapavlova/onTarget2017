/*
 * Students.cpp
 *
 *  Created on: May 25, 2017
 *      Author: polia
 */

#include "Students.h"
#include<iostream>
#include<sstream>
using namespace std;
Students::Students()
{
	setFirstName(" " );
	setLastName(" " );
	setGender(" " );
	setBirthday(" " );
	setPhone(" " );
	setEmail(" " );
	setCourse(1);
	setSpecialty(" ");
	setFacultyNumber(1);


}

const string& Students::getBirthday() const
{
	return birthday;
}

void Students::setBirthday(const string& birthday)
{
	this->birthday = birthday;
}

int Students::getCourse() const
{
	return course;
}

void Students::setCourse(int course)
{
	this->course = course;
}

const string& Students::getEmail() const
{
	return email;
}

void Students::setEmail(const string& email)
{
	this->email = email;
}

long Students::getFacultyNumber() const
{
	return facultyNumber;
}

void Students::setFacultyNumber(long facultyNumber)
{
	this->facultyNumber = facultyNumber;
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

string Students::getPhone() const
{
	return phone;
}

void Students::setPhone(string phone)
{
	this->phone = phone;
}

const string& Students::getSpecialty() const
{
	return specialty;
}

Students::Students(string firstName, string lastName, string gender,
		string birthday, string phone, string email, int course, string specialty,
		long facultyNumber)
{
	setFirstName(firstName);
	setLastName(lastName);
	setGender(gender);
	setBirthday(birthday);
	setPhone(phone);
	setEmail(email);
	setCourse(course);
	setSpecialty(specialty);
	setFacultyNumber(facultyNumber);
}

void Students::setSpecialty(const string& specialty)
{
	this->specialty = specialty;
}

Students::~Students()
{
	// TODO Auto-generated destructor stub
}

string Students::print() const
{
	stringstream result;
	result << getFirstName() <<" ";
	result << getLastName() << endl;
	result << getGender() << endl;
	result << getBirthday() << endl;
	result << getPhone() << endl;
	result << getEmail() << endl;
	result << getSpecialty() << endl;
	result << getFacultyNumber() << endl;
	result << endl;
	result << "Exam : ";
	for (unsigned int i = 0 ; i < myVector.size(); i++)
	{
		result << "\t" << myVector[i]->getName() << endl;
		result << "\t" << myVector[i]->getLecturer() << endl;
		result << "\t" << myVector[i]->getGrade()<< endl;
		result << endl;

	}
	return result.str();
}

void Students::add(Exam& exams)
{
	myVector.push_back(&exams);
}



