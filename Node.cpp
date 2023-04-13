#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include "Node.h"

/**
 * @brief Construct a new Node object
 * -> I'm not sure whether it is a good decision to set default value to 0.
 */
Node::Node() : data(-1) , left(nullptr) , right(nullptr) {}

/**
 * @brief Construct a new Node object with given data
 * 
 * @param value 
 */
Node::Node(int value) : data(value) , left(nullptr) , right(nullptr) {}

