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

template <typename T>
class LinkedList : public List<T>
{

private:
  struct Node {
    T data;
    Node* next;

    Node() : data((T) 0), next(nullptr) {}

    Node(T data) : data(data), next(nullptr) {}

    Node(T data, Node* next) : data(data), next(next) {}

  };

  Node* head;
  Node* tail;
  int size;

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
  LinkedList(const LinkedList<T> &other);

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
   * @brief Adds an element at the end of the list
   * 
   * @param element 
   */
  void append(T value);

  /**
   * @brief Insert item at specific index in List.
   * Negative index means from the end of the list.
   * Use responsibly!
   * 
   */
  void insert(int index, T value);

  /**
   * @brief Remove item at specific index in List.
   * Negative index means from the end of the list.
   * Use responsibly!
   * 
   */
  T remove(int index);

  /**
   * @brief Get the element at a specific index in the List.
   * Negative index means from the end of the list.
   * Use responsibly!
   * 
   * @return T 
   */
  T get(int index);

  /**
   * @brief Set value at specific index.
   * 
   * @param index 
   * @param value 
   */
  void set(int index, T value);

  /**
   * @brief Get the size of the list.
   * 
   * @return int 
   */
  int getSize();

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
  bool isEmpty();

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
  inline int find(T value) { return indexOf(value); }

  /**
   * @brief Get the last index of a specific value.
   * 
   * @param value: item to check in List.
   * @return int: last index of value in List.
   * @return -1: value not found in List.
   */
  int lastIndexOf(T value);

  inline T operator[](int index);

  /**
   * @brief Inject value into LinkedList.
   * 
   * @param value: value to be injected into LinkedList.
   */
  template <typename U>
  friend LinkedList<U>& operator<<(LinkedList<U>& list, U value);

  /**
   * @brief Inject value from front of LinkedList into variable.
   * 
   * @param var: variable to be injected into.
   */
  template <typename U>
  friend void operator>>(LinkedList<U> &list, U &var);
  
  /**
   * @brief Operator `<<` overload.
   * Inject LinkedList values into an ostream.
   * 
   * @param outs: ostream to inject values.
   * @param list: LinkedList containing values.
   * @return ostream&: ostream with injected values.
   */
  template <typename U>
  friend ostream& operator<< (ostream& outs, const LinkedList<U> &list);

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
};

#endif /* __LINKEDLIST_ */

