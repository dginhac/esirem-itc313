/*
* @File:    todos.h
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-21 15:42:49
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2021-11-21 23:56:11
*/

//#define DEBUG

#ifndef TODOS_H
#define TODOS_H

#include <vector>
#include "todo.h"

namespace todo {
    class Todos {
    public:
        Todos();
        void add(Todo todo);
        void del(int id);
        void completed(int id, bool status);
        void sort();
        Todos find_value(int priority) const;
        Todo find_value(std::string title) ;
        Todo& find(std::string title) ;
        Todo* find_pt(std::string title);
        void update_value(Todo todo, std::string title);
        void update(Todo& todo, std::string title);
        void update_pt(Todo* todo, std::string title);
        void update(std::string old_title, std::string new_title);
        Todo next() const;
        friend std::ostream& operator<<(std::ostream& os, const Todos& todos);

    private:
        std::vector<Todo> _todos;
    };



} // todo

#endif // TODOS_H