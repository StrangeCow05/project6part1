#include <iostream>
#include <sstream>
#include <string>
#include "address.h"



Address::Address(){
 Address::street = "";
 Address::town = "";
 Address::state = "";
 Address::zip = "";
}//end constructer

void Address::init(std::string street, std::string town,std::string state,std::string zip){
 Address::street = street;
 Address::town = town;
 Address::state = state;
 Address::zip = zip;
}//end init

void Address::printAddress(){
 std::cout << Address::street << std::endl;
 std::cout << Address::town << " " << Address::state << " " << Address::zip << std::endl;
}//end printAddress
