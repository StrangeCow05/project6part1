#ifndef DATE_H_EXISTS
#define DATE_H_EXTSTS

#include <string>

class Date{
 private: 
	 std::string dateString;
	 int month;
	 int day;
	 int year;
 public:
	 Date();
	 void init(std::string dateString);
	 void printDate();


};

#endif
