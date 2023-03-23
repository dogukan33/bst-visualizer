#include <iostream>

#include "Node.h"

void printMenu();
int checkMenuInput(std::string userInput);

int main(int argc, char const *argv[])
{
    while(true) 
    {
        std::string userInput;
        printMenu();
        std::cin>>userInput;
        int menuInput = checkMenuInput(userInput);

        switch(menuInput) 
        {   
            // end the program
            case -1:
                break;
            // create a bst (first time, or create new?)
            case 0:
                break;
        }

    }
    return 0;
}

void printMenu() {
    std::cout << "Binary Search Tree Visualizer\n"
            << "================================\n"
            << "1. Insert a value\n"
            << "2. Remove a value\n"
            << "3. Search for a value\n"
            << "4. Display the tree\n"
            << "5. Clear the tree\n"
            << "6. Exit\n"
            << "--------------------------------\n"
            << "Enter your choice (1-6): ";
}

/**
 * @brief Checks 
 * 
 * @param userInput 
 * @return (int) the number of the option if it is in valid range, else -1.
 */
int checkMenuInput(std::string userInput) {

}

