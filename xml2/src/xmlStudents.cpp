//============================================================================
// Name        : xmlStudents.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include"Students.h"
#include"Exam.h"
#include"University.h"
#include"pugixml.hpp"
#include <iostream>
#include<string>

using namespace std;

int main() {

	pugi::xml_document doc;

	if(!doc.load_file("students.xml"))
		cerr << "Can not open file" << endl;


	pugi::xml_node students = doc.child("students");

	for ( pugi::xml_node student = students.child("students:student");student;student = student.next_sibling("students:student"))
		{
			Students* studObj = new Students;
		 	 for(pugi::xml_node exams = student.child("exams:examList"); exams; exams = exams.next_sibling("exams:examList"))
		        {
		 		 	 	 for(pugi::xml_node exam = exams.child("exams:exam"); exam; exam = exam.next_sibling("exams:exam"))
		 		 	 	 	 {
		 		 	 		 	string name = exam.child("exams:name").text().as_string();
		 		 	 			string lecturer = exam.child("exams:lecturer").text().as_string();
		 		 	 			int grade = exam.child("exams:grade").text().as_int();

		 		 	 			Exam* exam = new Exam(name,lecturer,grade);
		 		 	 			studObj->add(*exam);

		 		 	 	 	 }

		        }

		 	studObj->setFirstName( student.child("students:firstName").text().as_string());
		 	studObj->setLastName( student.child("students:lastName").text().as_string());
		 	studObj->setGender(student.child("students:gender").text().as_string());
		 	studObj->setBirthday( student.child("students:birthdate").text().as_string());
		 	studObj->setPhone(student.child("students:phone").text().as_string());
		 	studObj->setEmail(student.child("students:email").text().as_string());
		 	studObj->setCourse(student.child("students:course").text().as_int());
		 	studObj->setSpecialty(student.child("students:specialty").text().as_string());
		 	studObj->setFacultyNumber(student.child("students:facultyNumber").text().as_uint());


		 	University::add(*studObj);
		}

	vector<Students*>::iterator student;

	for(student = University::getStudents().begin();
			student != University::getStudents().end();student++)
	{
		cout << (*student)->print();
	}




	return 0;
}
