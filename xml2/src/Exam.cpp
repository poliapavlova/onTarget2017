/*
 * Exam.cpp
 *
 *  Created on: May 25, 2017
 *      Author: polia
 */

#include "Exam.h"
#include<iostream>
Exam::Exam()
{
	setName(" ");
	setLecturer( " " );
	setGrade(2);

}

Exam::~Exam()
{
	// TODO Auto-generated destructor stub
}

int Exam::getGrade() const
{
	return grade;
}

void Exam::setGrade(int grade)
{
	this->grade = grade;
}

const string& Exam::getLecturer() const
{
	return lecturer;
}

void Exam::setLecturer(const string& lecturer)
{
	this->lecturer = lecturer;
}

const string& Exam::getName() const
{
	return name;
}

void Exam::setName(const string& name)
{
	this->name = name;
}

Exam::Exam(string name, string lecturer, int grade)
{
	setName(name);
	setLecturer(lecturer);
	setGrade(grade);

}




