#include <iostream>
#include <limits>
#include "../headers/file.h"
using namespace std;

// Function to validate user input within a specified range
int validateChoice(int start, int end, const string& message) {
    int choice;
    while (true) {
        cout << message;
        cin >> choice;

        // check if input is valid (numeric and in range)
        if (!cin.fail() && choice >= start && choice <= end) {
            return choice;
        } else {
            cout << "Invalid input! Please enter a number between " 
                 << start << " and " << end << ".\n";

            // clear error and ignore bad input
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

int main() {
    // welcome message
    cout << "Welcome to Task Manager!" << endl;

    // Menu
    while(true) {
        cout<<"Menu:\n"
            <<"1. Add Task\n"
            <<"2. View Tasks\n"
            <<"3. Delete Task\n"
            <<"4. Exit\n";

        int choice = validateChoice(1, 5, "Enter your choice (1-4): ");

        if (choice == 1) {
            cout << "Add Task selected." << endl;
            // Add task logic here
        } else if (choice == 2) {
            cout << "View Tasks selected." << endl;
            // View tasks logic here
        } else if (choice == 3) {
            cout << "Delete Task selected." << endl;
            // Delete task logic here
        } else if (choice == 4) {
            cout << "Exiting Task Manager. Goodbye!" << endl;
            break;
        }
    }
    return 0;
}