#ifndef NODE_H
#define NODE_H

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        //default constructor
        Node();

        //value constructor
        Node(int value);
};

#endif