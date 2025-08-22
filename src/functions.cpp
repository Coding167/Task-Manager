#include "../headers/functions.h"

// Function to validate user input within a specified range
int validateChoice(int start, int end, const std::string& message) {
    int choice;
    while (true) {
        std::cout << message;
        std::cin >> choice;

        // check if input is valid (numeric and in range)
        if (!std::cin.fail() && choice >= start && choice <= end) {
            return choice;
        } else {
            std::cout << "Invalid input! Please enter a number between " 
                 << start << " and " << end << ".\n";

            // clear error and ignore bad input
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}
