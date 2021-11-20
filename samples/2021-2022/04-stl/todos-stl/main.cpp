/*
* @File:    todos_main.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-21 15:52:09
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-11-18 19:04:43
*/

#include <iostream>


#include "todos.h"

int main() {
    todo::Todos todos;
    todo::Todo todo1("Buy beer", todo::Category::Personal, NORMAL, date::Date(11,5));
    todos.add(todo1);
    todo::Todo todo2("Play piano", todo::Category::Personal, HIGH, date::Date(11,10));
    todos.add(todo2);
    todo::Todo todo3("Write report", todo::Category::Work, NORMAL, date::Date(11,1));
    todos.add(todo3);
    todo::Todo todo4("Prepare keynote", todo::Category::Work, LOW, date::Date(12,20));
    todos.add(todo4);
    std::cout << todos << std::endl;
    todo::Todos normal_todos = todos.find(NORMAL);
    std::cout << normal_todos << std::endl;
    normal_todos.sort();
    std::cout << normal_todos << std::endl;
    std::cout << "Next NORMAL todo " << std::endl;
    std::cout << normal_todos.next() << std::endl;

    return 0;
}