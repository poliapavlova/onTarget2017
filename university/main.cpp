//============================================================================
// Name        : 2017.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include"University.h"
#include"Students.h"
#include"Address.h"
int main() {
	Address adr1("Sofia" , "Stud" , 42);
	Address adr2("Pleven" , "Aprilov", 28);

	Students stud1("Polia", "Pavlova" , "w" , 5.5 , adr1);
	Students stud2("asdsa" , "Dasd", "Man", 2.5 , adr2);

	University un1;
	un1.addStudents(stud1);
	un1.addStudents(stud2);

	for(unsigned int i = 0 ; i < un1.stud.size() ; i++)
	{
		cout << un1.stud[i].getFirstName() << endl;
	}


	return 0;
}
