/**
 * This file defines a Stack interface.
 * Implementes MUST define all the virtual functions.
 */

#include <iostream>
using namespace std;

/**
 * @brief This class defines a Stack interface. Implementers should support LIFO behavior.
 * 
 * @tparam T: The type of the elements in the stack.
 */
template<typename T>
class Stack {
  public:
    Stack() {};

    /**
     * @brief Push an element to the stack.
     * 
     * @param element: The element to be pushed.
     */
    virtual void push(T item) = 0;

    /**
     * @brief Pop an element from the stack.
     * 
     * @return T: The element popped.
     */
    virtual T pop() = 0;

    /**
     * @brief Check if the stack is empty.
     * 
     * @return true: The stack is empty.
     * @return false: The stack is not empty.
     */
    virtual bool isEmpty() = 0;

    /**
     * @brief Get the size of the stack.
     * 
     * @return int: The size of the stack.
     */
    virtual int size() = 0;

    /**
     * @brief Get valus at top of Stack, but don't remove it from the stack.
     * 
     * @return T: The top element of the stack.
     */
    virtual T peek() = 0;
};
