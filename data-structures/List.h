/**
 * @file List.hh
 * @author siavava <amittaijoel@outlook.com>
 * @brief List interface in C++
 * @version 0.1
 * @date 2021-11-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __LIST_
#define __LIST_

#include <iostream>
#include <sstream>
using namespace std;

template <typename T>
class List {

protected: 
  List() {};
public:
  virtual ~List() { };

  /**
   * @brief Adds an element at the end of the list
   * 
   * @param element 
   */
  virtual void append(T value) = 0;

  /** Insert an element to a specific index in the List. */
  virtual void insert(int index, T value) = 0;

  /** 
   * Remove an element from a specific index in the List.
   * @return The removed element.
   */
  virtual T remove(int index) = 0;

  /**
   * @brief Get the element at a specific index in the List.
   * @return The element at the specific index.
   * @throws out_of_range if the index is out of range.
   * 
   */
  virtual T get(int index) = 0;

  /** Set value at specified index. */
  virtual void set(int index, T value) = 0;

  /** Get the size of the List. */
  virtual int size() = 0;

  /** Clear the List. */
  virtual void clear() = 0;

  /**
   * Check if the List is empty.
   */
  virtual bool isEmpty() = 0;

  /**
   * Check if the List contains item.
   * Runtime: O(n) time (expected).
   * Implementations seeking to be smart about it
   * must make concessions in other areas.
   */
  virtual bool contains(T value) = 0;

  /** Get index of item in List (if it exists). 
   * Runtime: O(n) time (expected).
   * Some implementations may be able to do better.
   */
  virtual int indexOf(T value) = 0;

  /**
   * @brief Get the index of a specific value.
   * 
   * @param value: item to check in List.
   * @return int: index of value in List.
   * @return -1: value not found in List.
   */
  int find(T value) { return indexOf(value); }

  /**
   * @brief Get the last index of item in List (if it exists).
   * @return The last index of item in List (if it exists).
   * @throws out_of_range if the item is not found.
   * 
   */
  virtual int lastIndexOf(T value) = 0;

  virtual T &operator[](int index) = 0;

  // /**
  //  * @brief Inject value into LinkedList.
  //  * 
  //  * @param value: value to be injected into List.
  //  */
  // template <typename U>
  // friend List<U>& operator<<(List<U>& list, U value) {}

  // /**
  //  * @brief Inject value from front of List into variable.
  //  * 
  //  * @param var: variable to be injected into.
  //  */
  // template <typename U>
  // friend void operator>>(List<U> &list, U &var) {}

  // /**
  //  * @brief Operator `<<` overload.
  //  * Inject LinkedList values into an ostream.
  //  * 
  //  * @param outs: ostream to inject values.
  //  * @param list: LinkedList containing values.
  //  * @return ostream&: ostream with injected values.
  //  */
  // template <typename U>
  // friend ostream& operator<< (ostream& outs, const List<U> &list) {}
  
  // /**
  //  * @brief Operator `>>` overload.
  //  * Extract LinkedList values from an istream.
  //  * 
  //  * @param ins: istream to extract values.
  //  * @param list: List to inject values.
  //  * @return istream&: istream with extracted values.
  //  */
  // template <typename U>
  // friend void operator>> (istream& ins, const List<U> &list) {}
};

#endif  /* __LIST_ */
