#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXTSTS

#include "date.h"
#include "address.h"
#include <string>

class Student{
	private: 
		std::string studentString;
		std::string firstName;
		std::string lastName;
		Date* birth;
		Date* expectedGrad;
		Address* address;
		int creditHours;	
	public:
	       Student();
               ~Student();
               void init(std::string studentSting);
               void printStudent();	       
               std::string getFirstName();
	       std::string getLastName();
	       std::string getLastFirst();
	       int getCreditHours();



};
#endif
