/*
 * University.h
 *
 *  Created on: May 17, 2017
 *      Author: polia
 */

#ifndef UNIVERSITY_H_
#define UNIVERSITY_H_
#include"Students.h"
#include<vector>
using namespace std;
class University
{
public:
	vector<Students> stud;
	University();
	virtual ~University();
	void addStudents(Students& );
	void searchByFirstName(string firstName);
	void searchByLastName(string lastName);
	void AverageSuccess();
	void deleteStudents(Students&);


};

#endif /* UNIVERSITY_H_ */
