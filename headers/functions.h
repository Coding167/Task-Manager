#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <limits>
#include <vector>

int validateChoice(int start, int end, const std::string& message);
std::vector<std::string> split(const std::string& str, char delimiter);
int stringToInt(const std::string& str);

#endif // FUNCTIONS_H