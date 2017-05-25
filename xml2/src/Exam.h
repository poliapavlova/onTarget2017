/*
 * Exam.h
 *
 *  Created on: May 25, 2017
 *      Author: polia
 */

#ifndef EXAM_H_
#define EXAM_H_
#include<string>
using namespace std;
class Exam
{
public:
	Exam();
	Exam(string name, string lecturer, int grade);
	virtual ~Exam();
	int getGrade() const;
	void setGrade(int grade);
	const string& getLecturer() const;
	void setLecturer(const string& lecturer);
	const string& getName() const;
	void setName(const string& name);

private:
	string name;
	string lecturer;
	int grade;

};

#endif /* EXAM_H_ */
