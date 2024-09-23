/*
* @File:    todos.cpp
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-21 15:44:06
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-11-18 18:58:55
*/

#include "todos.h"
#include <iostream>

namespace todo {
    Todos::Todos() {
    }

    void Todos::add(Todo todo) {
        _todos.push_back(todo);
    }
    void Todos::del(int id) {
        if (id < _todos.size()) {
            _todos.erase(_todos.begin()+id);
        }
    }
    void Todos::completed(int id, bool status)  {
        if (id < _todos.size()) {
            _todos.at(id).setCompleted(status);
        }
    }

    std::ostream& operator<<(std::ostream& os, const Todos& todos) {
        for (const Todo todo: todos._todos)  {
            os << todo;
        }
        return os;
    }


} // todo