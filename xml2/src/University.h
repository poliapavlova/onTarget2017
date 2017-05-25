/*
 * University.h
 *
 *  Created on: May 25, 2017
 *      Author: polia
 */

#ifndef UNIVERSITY_H_
#define UNIVERSITY_H_
#include<vector>
#include"Students.h"
#include"Exam.h"
class University
{
public:

	University();
	virtual ~University();

	static void add(Students& student);
	static vector<Students*>& getStudents();

private:
	static vector<Students*> students;
};

#endif /* UNIVERSITY_H_ */
