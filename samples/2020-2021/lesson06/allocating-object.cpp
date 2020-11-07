/*
* @File:    allocating-object.cpp
* @Project: C++ Programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-11-05 17:15:53
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-05 17:19:06
*/

#include <iostream>
#include "todo.h"
using todo::Todo;

int main()
{
    Todo todo1("Play piano", Category::Personal, HIGH, date::Date(2020,11,10));
    Todo* todo2 = new Todo("Buy beer", Category::Personal, NORMAL, date::Date(2020,11,5));

    std::cout << todo1.title() << std::endl;
    std::cout << todo2->title() << std::endl;

    delete todo2;
    return 0;
}
