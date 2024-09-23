/**
  * @File:     date-main.cpp
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Date:     Fall 2021
  * @Course:   C-C++ Programming / Esirem 3A Informatique Electronique Robotique
  * @Summary:  Minimal version with no constructor
  */

#include "date.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    Date d1;
    std::cout << "d1: " << d1.month() << "/" << d1.day() << std::endl;
    return 0;
}

