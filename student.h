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
	
	public:
	       student();
               ~student();
               void init(std::string studentSting);
               void printStudent();	       
               std::string getFirstName();
	       std::string getLastName();
	       int getCreditHours();



};
#endif
