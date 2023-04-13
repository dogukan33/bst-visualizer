#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include "BST.h"

/**
 * @brief Construct a new BST::BST object
 * 
 */
BST::BST(): root(nullptr) {}

/**
 * @brief Construct a new BST::BST object
 * 
 * @param value 
 */
BST::BST(int value): root(new Node(value)) {}

/**
 * @brief inserts new positive and unique value to the BST
 * 
 * @param value
 * @return -1 if the value is not a positive integer,
 * @return 0 if the insertion completed succesfuly,
 * @return 1 if the value already in the BST.
 */
int BST::insert(int value) {   

    // only positive values (Brightspace CONTENT/CP4 )
    if(value<=0) return -1;

    Node* newNode = new Node(value);
    
    // if BST currently empty... Initialize it with the newNode
    if(root==nullptr) {
        this->root = newNode;
        return 0;
    }

    // Traversing through the BST to find the correct position
    Node* cur = this->root;
    while(true) {
        // if the value already exists in the BST...
        if(value==cur->data) {
            delete newNode;
            return 1;
        }
        // if value is smaller
        else if (value < cur->data) {
            // if there is no left child,
            if(cur->left == nullptr) {
                cur->left = newNode;
                return 0;
            }
            // if there is a left child, move to the left
            else {
                cur = cur->left;
            }
        }
        // if value is bigger
        else { //(value>cur->data)
            // if there is no right child,
            if(cur->right == nullptr) {
                cur->right = newNode;
                return 0;
            }
            // if there is a right child, move to the right
            else {
                cur = cur->right;
            }
        }
    }
}

/**
 * @brief searches for a integer value in the BST
 * 
 * @param value 
 * @return Node*
 */
Node* BST::find(int value) {
    //starting from the root
    Node* cur = this->root;

    while(cur!=nullptr) {
        if(value==cur->data) {
            return cur;
        }
        else if(value<cur->data) cur = cur->left;
        else cur = cur->right;
    }

    //if it exits the loop and comes here, it means value not found.
    return nullptr; 
}

/**
 * @brief Traverse the BST preorder (root, left, right)
 * 
 * @param node 
 */
void BST::preorder(Node* node) {
    if (node == nullptr) {
        return;
    }
    std::cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

/**
 * @brief Traverse the BST inorder (left, root, right)
 * 
 * @param node 
 */
void BST::inorder(Node* node) {
    if (node == nullptr) {
        return;
    }
    inorder(node->left);
    std::cout << node->data << " ";
    inorder(node->right);
}

/**
 * @brief Traverse the BST postorder (left, right, root)
 * 
 * @param node 
 */
void BST::postorder(Node* node) {
    if (node == nullptr) {
        return;
    }
    postorder(node->left);
    postorder(node->right);
    std::cout << node->data << " ";
}

