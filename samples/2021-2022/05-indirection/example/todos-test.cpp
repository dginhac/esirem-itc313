/*
* @File:    todos_main.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-21 15:52:09
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-03 16:15:38
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

    // Only for test purpose:
    // _todos has been made public in the declaration of Todos class
    for (auto i=0; i < todos._todos.size(); i++) {
        std::cout << &todos._todos.at(i) << " " << todos._todos.at(i);
    }

    //todo::Todo to_update = todos.find("Buy Beer");
    //std::cout << to_update;
    std::cout  << std::endl;
    todo::Todo  to_update = todos.find("Buy beer");
    std::cout << "After return: " << &to_update << std::endl;

    //std::cout << "Todo to update: " << to_update << " (" << &to_update << ")\n";
    todos.update(to_update, "Buy water");

    //std::cout << "\n" << todos;

    //todos.update("Buy beer", "Buy water");
    //std::cout << todos;
    return 0;
}