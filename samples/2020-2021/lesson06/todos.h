/*
* @File:    todos.h
* @Project: C++ programming - ESIREM 3A IT
* @Author:  Dominique Ginhac <d0m>
* @Email:   dginhac@u-bourgogne.fr
* @Date:    2020-10-21 15:42:49
* @Summary:
*
* @Last Modified by:   d0m
* @Last Modified time: 2020-11-07 09:40:35
*/

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
        Todos find(int priority) const;
        Todo& find(std::string title) ;

        Todo* find2(std::string title);
        void update(Todo& todo, std::string title);
        void update2(Todo* todo, std::string title);
        void update(std::string old_title, std::string new_title);
        Todo next() const;
        friend std::ostream& operator<<(std::ostream& os, const Todos& todos);

    private:
        std::vector<Todo> _todos;
    };



} // todo

#endif // TODOS_H