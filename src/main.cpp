#include <iostream>
#include <limits>
#include "../headers/file.h"
#include "../headers/functions.h"
using namespace std;

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