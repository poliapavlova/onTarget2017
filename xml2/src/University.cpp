/*
 * University.cpp
 *
 *  Created on: May 25, 2017
 *      Author: polia
 */

#include "University.h"
vector<Students*> University::students;

University::University()
{
	// TODO Auto-generated constructor stub

}

University::~University()
{
	// TODO Auto-generated destructor stub
}

void University::add(Students& student)
{
	students.push_back(&student);
}

vector<Students*>& University::getStudents()
{
	return students;
}
