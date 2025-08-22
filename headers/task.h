#ifndef TASK_H
#define TASK_H
#include <iostream>

class Task {
    private:
        int id;
        std::string description;
        int status;
    public:
        Task();
        Task(int id);

        void setID(int id);
        int getID() const;
        std::string getDescription() const;
        std::string getStatus() const;
};

#endif // TASK_H