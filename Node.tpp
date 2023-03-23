

/**
 * @brief Construct a new Node object
 * 
 */
template<typename T>
Node<T>::Node() : data(T()) , left(nullptr) , right(nullptr) {}

/**
 * @brief Construct a new Node object with given data
 * 
 * @param value 
 */
template<typename T>
Node<T>::Node(T value) : data(value) , left(nullptr) , right(nullptr) {}