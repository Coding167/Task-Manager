#ifndef CONSTANTS_H
#define CONSTANTS_H
#include <iostream>

struct task {
    const std::string FILE_PATH = "../data/data.csv";
    const char DELIMITER = ',';
    const std::string COMPLATED_NUMBER = "1";
    const std::string UNCOMPLATED_NUMBER = "0";
    const std::string COMPLATED_TEXT = "Complated";
    const std::string UNCOMPLATED_TEXT = "Uncomplated";
};


#endif // CONSTANTS_H