#include <sstream>
#include <iostream> 
#include <string>
#include "date.h"

Date::Date(){
 Date::dateString;
 Date::month;
 Date::day;
 Date::year;
}//end constructer

void Date::init (std::string dateString){
 std::stringstream converter;

 std::string sMonth;
 std::string sDay;
 std::string sYear;

 int month;
 int day;
 int year;

 converter.clear();
 converter.str(dateString);

 getline(converter,sMonth, '/');
 getline(converter,sDay, '/');
 getline(converter, sYear);
 
 converter.clear();
 converter.str(sMonth);
 converter >> Date::month;

 converter.clear();
 converter.str(sDay);
 converter >> Date::day;

 converter.clear();
 converter.str(sYear);
 converter >> Date::year;

}//end init

void Date::printDate(){

}
