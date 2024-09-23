/**
  * @File: main.cpp
  * @Author: d0m <dginhac@u-bourgogne.fr>
  * @Created on : 2022-10-04 13:36:39
  * @Last Modified time: 2022-10-04 14:03:40
  * 
  * @Description: Basics of references
  */

#include <iostream>
#include "date.h"

int main(int argc, char const *argv[]) {
	int value = 5; // value is 5
	int& number = value; // reference to variable value
	std::cout << "value: " << value << std::endl;
	std::cout << "ref: " << number << std::endl;
	value = 6; 
	std::cout << "value: " << value << std::endl;
	std::cout << "ref: " << number << std::endl;
	
	Date love(2,14);     // Valentine's day
	Date& day = love;    // reference to valentine's day
	std::cout << "love: " << toString(love) << std::endl;
	std::cout << "ref: " << toString(love) << std::endl;
	day.next();
	std::cout << "love: " << toString(love) << std::endl;
	std::cout << "ref: " << toString(love) << std::endl;
	return 0;
}