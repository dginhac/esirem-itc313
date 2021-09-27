/**
  * @File:     date-main.cpp
  * @Author:   D. Ginhac (dginhac@u-bourgogne.fr)
  * @Date:     Fall 2021
  * @Course:   C-C++ Programming / Esirem 3A Informatique Electronique Robotique
  * @Summary:  Minimal version with explicit constructor
  */

#include "date.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    Date d;
    std::cout << "Default date: " << d.day() << "/" << d.month() << std::endl;

    return 0;
}

