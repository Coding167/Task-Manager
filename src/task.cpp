#include "../headers/task.h"
#include "../headers/file.h"
#include "../headers/constents.h"
#include "../headers/functions.h"
#include <vector>

Task::Task() {
    setID(0);
}
Task::Task(int id) {
    setID(id);
}

void Task::setID(int id) {
    File file(taskConstents().FILE_PATH);
    std::string taskLine = file.getLine(id);
    if (taskLine.empty()) {
        this->id = 0;
        this->description = "Unknown Task";
        this->status = 0;
        return;
    }
    this->id = id;
    std::vector<std::string> parts = split(taskLine, taskConstents().DELIMITER);
    this->description = parts[taskConstents().DESCRIPTION];
    this->status = stringToInt(parts[taskConstents().STATUS]);
}

int Task::getID() const {
    return this->id;
}
std::string Task::getDescription() const {
    return this->description;
}
std::string Task::getStatus() const {
    return (this->status == 1) ? taskConstents().COMPLATED_TEXT : taskConstents().UNCOMPLATED_TEXT;
}