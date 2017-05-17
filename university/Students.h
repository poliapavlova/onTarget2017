/*
 * Students.h
 *
 *  Created on: May 17, 2017
 *      Author: polia
 */

#ifndef STUDENTS_H_
#define STUDENTS_H_
#include"Address.h"
#include<string>
using namespace std;
class Students
{
public:
	Students();
	Students(string firstName, string lastName, string gender, double success, Address& address);
	virtual ~Students();
	void print ();
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getGender() const;
	void setGender(const string& gender);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	double getSuccess() const;
	void setSuccess(double success);

private:
	string firstName;
	string lastName;
	string gender;
	double success;
	Address address;
};

#endif /* STUDENTS_H_ */
