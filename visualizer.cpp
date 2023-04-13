#include <stdlib.h>
#include <iostream>
#include <sstream>

#include "BST.h"

using namespace std;

void printMenu();

bool isInteger(const string& str);

int main(int argc, char const *argv[])
{
    //avoid "unused parameters warning"
    (void) argc;
    (void) argv;

    BST* bst = new BST();
    while(true) 
    {
        string userInput;
        printMenu();
        cin>>userInput;

        if(userInput=="1") {

            //checking the format of input
            string valueInput;
            int value;
            cout<<"Enter a positive integer: ";
            cin>>valueInput;
            if(isInteger(valueInput)) {
                stringstream(valueInput) >> value;
            }
            else {
                cout<<"Insertion failed. Not an integer."<<endl;
                continue;
            }
            //if it comes here, then it means input format was ok
            cout<<"Before insertion (inorder): ";
            bst->inorder(bst->root);
            cout<<"\n";
            int insertStatus = bst->insert(value);
            if(insertStatus==-1) {
                cout<<"Insertion failed. Not a positive integer."<<endl;
                continue;
            }
            else if(insertStatus==1) {
                cout<<"Insertion failed. Value already exist in BST."<<endl;
                continue;
            }
            else {
                cout<<"Insertion succesful! Below is the updated BST."<<endl;
                cout<<"After insertion (inorder): ";
                bst->inorder(bst->root);
                cout<<"\n";
                continue;
            }
        }

        else if(userInput=="2") {}

        else if(userInput=="3") {
            string valueInput;
            int value;
            cout<<"Enter a positive integer to search: ";
            cin>>valueInput;
            if(isInteger(valueInput)) {
                stringstream(valueInput) >> value;
            }
            else {
                cout<<"Insertion failed. Not an integer."<<endl;
                continue;
            }
        }

        else if(userInput=="4") {
            cout<<"Preorder: ";
            bst->preorder(bst->root);
            cout<<endl;

            cout<<"Inorder: ";
            bst->inorder(bst->root);
            cout<<endl;
    
            cout<<"Postorder: ";
            bst->postorder(bst->root);
            cout<<endl;
        }

        else if(userInput=="6") {
            cout<<"Program terminated."<<endl;
            break;
        }

        else {
            cout<<"Invalid menu input. Try again."<<endl;
            continue;
        }

    }
    return 0;
}

void printMenu() {
    std::cout<<"--------------------------------"<<endl;
    std::cout << "Binary Search Tree Visualizer\n"
            << "================================\n"
            << "1. Insert a value\n"
            << "2. Remove a value\n"
            << "3. Search for a value\n"
            << "4. Get traversals\n"
            << "5. Clear the tree\n"
            << "6. Exit\n"
            << "--------------------------------\n"
            << "Enter your choice (1-6): ";
}

/**
 * @brief takes the user input and checks whether it is an integer or not.
 * 
 * @param str 
 * @return true 
 * @return false 
 */
bool isInteger(const string& str) {
    if (str.empty()) return false;

    size_t startIndex = 0;
    if (str[0] == '-') {
        if (str.length() == 1) return false; // Check if the input is only a minus sign
        startIndex = 1;
    }

    for (size_t i = startIndex; i < str.length(); i++) {
        if (!isdigit(str[i])) return false;
    }

    return true;
}
