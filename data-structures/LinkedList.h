/**
 * @file LinkedList.hpp
 * @author siavava <amittaijoel@outlook.com>  
 * @brief LinkedList interface in C++
 * @version 0.1
 * @date 2021-11-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __LINKEDLIST_
#define __LINKEDLIST_

#include "List.h"
#include "Queue.h"
#include "Stack.h"

/**
 * @brief LinkedList class
 * Implements the List interface.
 * Usable to manage an orderded sequence of data.
 * List elements are stored in a singly linked list.
 * The List grows on demand -- allocating and deleting on each addition,
 * so it should be efficient memory-wise.
 * 
 * The LinkedList is efficient for insertion at the end and deletion at the beginning of the list.
 * However, due to lnked-list behavior, it is not efficient for random access.
 * While it does support random access, use an array-based implementation if you need random access.
 * 
 * @tparam T: The type of the elements in the list.
 */
template <typename T>
class LinkedList : public List<T>, public Queue<T>, public Stack<T>
{
private:
  struct Node {
    T data;
    Node *previous, *next;
  };

  Node* head;
  Node* tail;
  int length;

public:

  /**
   * @brief Construct a new, empty LinkedList
   * 
   */
  LinkedList();

  /**
   * @brief Construct a new LinkedList, copy data.
   * 
   * @param other: other LinkedList to copy.
   */
  LinkedList(const List<T> &other);

  /**
   * @brief Construct a new Linked List object
   * With values forom an initialzier List.
   * 
   * @param values 
   */
  LinkedList(initializer_list<T> values);

  /**
   * @brief Destruct the Linked List object
   * and free all memory allowance.
   * 
   */
  ~LinkedList();

    /**
   * @brief Get the size of the LinkedList
   * 
   * @return int: queue size
   */
  virtual inline int size() { return length; }

  /**
   * @brief Adds an element at the end of the list
   * 
   * @param element 
   */
  void append(T value);

  /**
   * @brief Add all elements in other iterable to this List.
   * 
   * @param other 
   */
  virtual void appendAll(List<T> &other);

  /**
   * @brief Insert item at specific index in List.
   * Negative index means from the end of the list.
   * Use responsibly!
   */
  virtual void insert(int index, T value);

  /**
   * @brief Remove item at specific index in List.
   * Negative index means from the end of the list.
   * Use responsibly!
   * 
   */
  virtual T remove(int index);

  /**
   * @brief Get the element at a specific index in the List.
   * Negative index means from the end of the list.
   * Use responsibly!
   * 
   * @return T 
   */
  virtual T get(int index);

    /**
   * @brief Get the element at a specific index in the List, by reference.
   * This allows reassigning the element to a different value.
   * Negative index means from the end of the list.
   * Use responsibly!
   * 
   * @return T 
   */
  virtual T& getRef(int index);

  /**
   * @brief Set value at specific index.
   * 
   * @param index 
   * @param value 
   */
  virtual void set(int index, T value);

  /**
   * @brief clear the List.
   * 
   */
  void clear();

  /**
   * @brief Check if List is empty
   * 
   * @return true: List is empty
   * @return false: List is not empty
   */
  inline bool isEmpty() { return length == 0; }

  /**
   * @brief Check if LinkedList contains a specific value.
   * 
   * @param value: item to check in List.
   * @return true: value found in List.
   * @return false: value not found in List.
   */
  bool contains(T value);

  /**
   * @brief Get the index of a specific value.
   * 
   * @param value: item to check in List.
   * @return int: index of value in List.
   * @return -1: value not found in List.
   */
  int indexOf(T value);

  /**
   * @brief Get the index of a specific value.
   * 
   * @param value: item to check in List.
   * @return int: index of value in List.
   * @return -1: value not found in List.
   */
  virtual inline int find(T value) { return indexOf(value); }

  /**
   * @brief Get the last index of a specific value.
   * 
   * @param value: item to check in List.
   * @return int: last index of value in List.
   * @return -1: value not found in List.
   */
  virtual int lastIndexOf(T value);

  /* QUEUE METHODS */

  /**
   * @brief enqueue an item (Queue interface)
   * 
   * @param element: enqueue element
   */
  virtual inline void enqueue(T item) { append(item); }

  /**
   * @brief Remove an element from the LinkedList (Queue interface)
   * 
   * @return T: dequeued element
   */
  virtual T dequeue() { return remove(0); }

/****************** STACK METHODS ********************/
  /**
   * @brief Push element to the LinkedList (Stack interface)
   * 
   * @param element: push element
   */
  virtual inline void push(T item) { insert(0, item); }

  /**
   * @brief Pop element from the LinkedList (Stack interface)
   * 
   * @return T: pop element
   */
  virtual inline T pop() { return remove(0); }

  /**
   * @brief Get the top element of the LinkedList (Stack interface)
   * 
   * @return T: top element
   */
  virtual inline T peek() { return get(0); }

  /* friend functions */

  /**
   * @brief Overload for [] operator.
   * Note: This method returns a reference to the element at the specified index.
   * This allows both "get" and "set" operations to be performed on the element.
   * For example:
    ```
    LinkedList<int> list = {1, 2, 3};
    list[0] = 4;
    cout << list[0]; // prints 4
    ```
   * However, this method is unsafe and should not be used for invalid indices -- 
   * it will throw an exception and halt the program.
   * 
   * @param index The index to get.
   * @return T& Reference to the value at the specified index.
   */
  virtual T &operator[](int index) { return this->getRef(index); }

  /**
   * @brief Inject value into LinkedList.
   * 
   * @param value: value to be injected into LinkedList.
   */
  template <typename U>
  friend LinkedList<U> &operator<<(LinkedList<U>& list, U value);

  /**
   * @brief Inject value from front of LinkedList into variable.
   * 
   * @param var: variable to be injected into.
   */
  template <typename U>
  friend bool operator>>(LinkedList<U> &list, U &var);
  
  /**
   * @brief Operator `<<` overload.
   * Inject LinkedList values into an ostream.
   * 
   * @param outs: ostream to inject values.
   * @param list: LinkedList containing values.
   * @return ostream&: ostream with injected values.
   */
  template <typename U>
  friend ostream &operator<< (ostream& outs, const LinkedList<U> &list);

  /**
   * @brief Operator `>>` overload.
   * Extract LinkedList values from an istream.
   * 
   * @param ins: istream to extract values.
   * @param list: LinkedList to inject values.
   * @return istream&: istream with extracted values.
   */
  template <typename U>
  friend void operator>> (istream& ins, const LinkedList<U> &list);

  /**
   * @brief += operator overload.
   * Usage: list1 += list2;
   * Modifies list1 by appending the values in list2 to list1.
   * 
   * @tparam T : The type of the elements in the List. They must be the same.
   * @param list Initial list.
   * @param list2 Other List.
   * @return LinkedList<V>& List reference. Allows reference chaining.
   */
  template <typename V>
  LinkedList<T> &operator+=(LinkedList<T> &list, LinkedList<T> &list2);

  /**
   * @brief Add two Lists and return a new List.
   * The two Lists are not modified in place.
   * However, the new List is a "new" object.
   * If using it through a variable, make sure to call `delete` on *a pointer* to the list.
   * If using it implicitly, then it results in a memory leak.
   * Make sure you're okay with that. 
   * 
   * @tparam T 
   */
  template <typename T>
  LinkedList<T> &operator+(LinkedList<T> &list, LinkedList<T> &list2)
};

#endif /* __LINKEDLIST_ */

