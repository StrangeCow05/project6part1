#include <iostream>
#include <sstream>
#include <string>
#include "student.h"
#include "address.h"
#include "date.h"

Student::Student(){
	Student::studentString = "";
	Student::firstName = "";
	Student::lastName = "";
	birth = new Date();
	expectedGrad = new Date();
	address = new Address();
}//end constructor 

Student::~Student(){
delete birth;
delete expectedGrad;
delete address;
}//end destructorinator

void Student::init(std::string studentString){
	Student::studentString = studentString;
 
 std::stringstream converter;

 std::string firstName;
 std::string lastName;
 std::string sBirth;
 std::string sExpectedGrad;
 std::string sStreet;
 std::string sTown;
 std::string sState;
 std::string sZip;
 std::string sCreditHours;

 Student::firstName;
 Student::lastName;
 Student::creditHours;

 converter.clear();
 converter.str(studentString);

 getline(converter, firstName, ',');

 getline(converter, lastName, ',');

 getline(converter, sStreet, ',');

 getline(converter, sTown, ',');

 getline(converter, sState, ',');

 getline(converter, sZip, ',');

 getline(converter, sBirth, ',');

 getline(converter, sExpectedGrad, ',');

 getline(converter, sCreditHours);
 
 
 converter.clear();
 converter.str(firstName);
 converter >> Student::firstName;

 converter.clear();
 converter.str(lastName);
 converter >> Student::lastName;

 address->init(sStreet, sTown, sState, sZip);
		
 converter.clear();
 converter.str(sBirth);
 birth->init(sBirth);

 converter.clear();
 converter.str(sExpectedGrad);
 expectedGrad->init(sExpectedGrad); 
	
 converter.clear(); 
 converter.str(sCreditHours);
 converter >> Student::creditHours;
} //end init

std::string Student::getFirstName(){
	return firstName;
} //end getFirstName

std::string Student::getLastName(){
	return lastName;
} //end getLastName

std::string Student::getLastFirst(){
	std::string lastFirst = lastName + "," + firstName;
	return lastFirst;
} //end getLastFirst

int Student::getCreditHours(){
	return creditHours;
} //end getCreditHours

void Student::printStudent(){
	std::cout << getFirstName() << " " << getLastName() << std::endl;
	address->printAddress(); 
	std::cout << std::endl;
	std::cout << "DOB: ";
	birth->printDate();
	std::cout << "Grad: ";
       	expectedGrad->printDate();
	std::cout << "Credits: " << getCreditHours() << std::endl;
} // end printStudent



