/*
* @File:    todos_main.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-21 15:52:09
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-02 00:03:00
*/

#include <iostream>


#include "todos.h"

int main() {
    todo::Todos todos;
    todo::Todo todo1("Buy beer", Category::Personal, NORMAL, date::Date(2020,11,5));
    todos.add(todo1);
    todo::Todo todo2("Play piano", Category::Personal, HIGH, date::Date(2020,11,10));
    todos.add(todo2);
    todo::Todo todo3("Write report", Category::Work, NORMAL, date::Date(2020,11,1));
    todos.add(todo3);
    todo::Todo todo4("Prepare keynote", Category::Work, LOW, date::Date(2020,12,20));
    todos.add(todo4);
    todos.completed(2, true);
    std::cout << todos << "\n";
    todo::Todos normal_todos = todos.find(NORMAL);
    normal_todos.sort();
    std::cout << normal_todos << "\n";
    std::cout << "Next NORMAL todo " << "\n";
    std::cout << normal_todos.next() << std::endl;
    todos.sort();
    //todos.delTodo(2);
    std::cout << todos << "\n";
    return 0;
}