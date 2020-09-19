class todolist {
public:
    Todo* find(int uid);
    Todo find(const std::string& title);
private:
    std::vector<Todo*> m_todos;
};

Todo* Todolist::find (int uid) {
    for (Todo *todo: m_todos) {
        if (todo->get_uid() == uid)
            return todo;
    }
    return nullptr;
}
Todo* Todolist::find_todo(const std::string& title) const {
    for (Todo *todo: m_todos) {
        if (todo->get_title() == title)
            return todo;
    }
    return nullptr;
}