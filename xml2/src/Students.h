/*
 * Students.h
 *
 *  Created on: May 25, 2017
 *      Author: polia
 */

#ifndef STUDENTS_H_
#define STUDENTS_H_
#include"Exam.h"
#include<string>
#include<vector>
using namespace std;
class Students
{
public:
	vector<Exam*> myVector;
	Students();
	Students(string firstName, string lastName, string gender, string birthday, string phone,
			 string email, int course, string specialty,long facultyNumber);
	virtual ~Students();
	const string& getBirthday() const;
	void setBirthday(const string& birthday);
	int getCourse() const;
	void setCourse(int course);
	const string& getEmail() const;
	void setEmail(const string& email);
	long getFacultyNumber() const;
	void setFacultyNumber(long facultyNumber);
	const string& getFirstName() const;
	void setFirstName(const string& firstName);
	const string& getGender() const;
	void setGender(const string& gender);
	const string& getLastName() const;
	void setLastName(const string& lastName);
	string getPhone() const;
	void setPhone(string phone);
	const string& getSpecialty() const;
	void setSpecialty(const string& specialty);

	string print() const;

	void add(Exam&);


private:
	string firstName;
	string lastName;
	string gender;
	string birthday;
	string phone;
	string email;
	int course;
	string specialty;
	long facultyNumber;


};

#endif /* STUDENTS_H_ */
