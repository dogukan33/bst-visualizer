#ifndef NODE_H
#define NODE_H

template<typename T>
class Node {
    public:
        int data;
        Node* left;
        Node* right;

        //default constructor
        Node();

        //value constructor
        Node(T value);
};

#include "Node.tpp"

#endif