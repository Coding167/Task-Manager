#ifndef CONSTANTS_H
#define CONSTANTS_H
#include <iostream>

struct taskConstents {
    const std::string FILE_PATH = "../data/data.csv";
    const char DELIMITER = ',';
    const int COMPLATED_NUMBER = 1;
    const int UNCOMPLATED_NUMBER = 0;
    const std::string COMPLATED_TEXT = "Complated";
    const std::string UNCOMPLATED_TEXT = "Uncomplated";
    enum TaskFields {
        ID = 0,
        DESCRIPTION = 1,
        STATUS = 2
    };
};


#endif // CONSTANTS_H