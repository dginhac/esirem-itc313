/*
* @File:    todos_main.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-21 15:52:09
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-07 09:48:21
*/

#include <iostream>


#include "todos.h"

int main() {
    todo::Todos todos;
    todo::Todo todo1("Play piano", Category::Personal, HIGH, date::Date(2020,11,10));
    todos.add(todo1);
    todo::Todo todo2("Write report", Category::Work, NORMAL, date::Date(2020,11,1));
    todos.add(todo2);
    todo::Todo todo3("Buy beer", Category::Personal, NORMAL, date::Date(2020,11,5));
    todos.add(todo3);
    todo::Todo todo4("Prepare keynote", Category::Work, LOW, date::Date(2020,12,20));
    todos.add(todo4);

    std::cout << todos << "\n";
    /*
    todo::Todo&  to_update = todos.find("Buy beer");
    std::cout << to_update << "\n";
    todos.update(to_update, "Buy water");
    std::cout << todos;
*/
    todo::Todo*  to_update2 = todos.find2("Buy beer");
    std::cout << *to_update2 << "\n";
    todos.update2(to_update2, "Buy champagne");
    std::cout << todos;
    return 0;
}