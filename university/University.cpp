/*
 * University.cpp
 *
 *  Created on: May 17, 2017
 *      Author: polia
 */

#include "University.h"
#include<iostream>
using namespace std;
University::University()
{
	// TODO Auto-generated constructor stub

}

University::~University()
{
	// TODO Auto-generated destructor stub
}

void University::addStudents(Students& studobj)
{
	stud.push_back(studobj);
}

void University::searchByFirstName(string firstName)
{
	for (unsigned int i = 0 ; i < stud.size() ; i++)
	{
		if( stud[i].getFirstName() == firstName)
				stud[i].print();
	}
}

void University::searchByLastName(string lastName)
{
	for( unsigned int i = 0 ; i < stud.size() ; i++)
	{
		if (stud[i].getLastName() == lastName)
				stud[i].print();
	}
}

void University::AverageSuccess()
{
	int counter1=0;
	double success1=0.0;
	int counter2=0;
	double success2=0.0;
	for (unsigned int i = - 0 ; i < stud.size() ; i++)
	{
		if (stud[i].getGender() == "Man" )
		{
			counter1++;
			success1+=stud[i].getSuccess();
		}

		else
			{
				counter2++;
				success2+=stud[i].getSuccess();

			}
		cout << success1/counter1 << endl;
		cout << success2/counter2 << endl;

	}

}

void University::deleteStudents(Students& student)
{
	for ( unsigned int i = 0 ; i < stud.size(); i ++)
	{
		if ( stud[i].getSuccess() < 3.0)
		{
			stud.erase(stud.begin()+i);
		}
	}
}


