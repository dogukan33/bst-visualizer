#ifndef BST_H
#define BST_H

#include "Node.h"

class BST {
    public:
        Node* root;

        //default constructor
        BST();

        //value constructor
        BST(int value);

        //insert node
        int insert(int value);

        //find node
        Node* find(int value);

        //remove node
        

        //traversal functions (prints the nodes)
        void preorder(Node* node);
        void inorder(Node* node);
        void postorder(Node* node);


};

#endif