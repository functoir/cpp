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

#ifndef __ARRAYLIST_
#define __ARRAYLIST_

#include <iostream>
#include <sstream>

#include "List.h"
using namespace std;

#define _ARRAYLIST_DEFAULT_CAP 16

template <typename T>
class ArrayList : public List<T> {

private:
  T* arr;
  int size;
  int CAP;

public:

  /**
   * @brief Construct a new, empty ArrayList.
   */
  ArrayList(int max_size = _ARRAYLIST_DEFAULT_CAP);

  /**
   * @brief Construct a new LinkedList, copy data.
   * 
   * @param other: other LinkedList to copy.
   */
  ArrayList(const List<T> &other);

  /**
   * @brief Construct a new Linked List object
   * With values forom an initialzier List.
   * 
   * @param values: initializer List
   */
  ArrayList(initializer_list<T> values);

  ~ArrayList();

  /**
   * @brief Adds an element at the end of the list
   * 
   * @param element 
   */
  void append(T value);

  /** Insert an element to a specific index in the List. */
  void insert(int index, T value);

  /** 
   * Remove an element from a specific index in the List.
   * @return The removed element.
   */
  T remove(int index);

  /**
   * @brief Get the element at a specific index in the List.
   * @return The element at the specific index.
   * @throws out_of_range if the index is out of range.
   * 
   */
  T get(int index);

  /** Set value at specified index. */
  void set(int index, T value);

  /** Get the size of the List. */
  int getSize();

  /** Clear the List. */
  void clear();

  /**
   * Check if the List is empty.
   */
  bool isEmpty();

  /**
   * Check if the List contains item.
   * Runtime: O(n) time (expected).
   * Implementations seeking to be smart about it
   * must make concessions in other areas.
   */
  bool contains(T value);

  /** Get index of item in List (if it exists). 
   * Runtime: O(n) time (expected).
   * Some implementations may be able to do better.
   */
  int indexOf(T value) = 0;

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

  /**
   * @brief Inject value into ArrayList.
   * 
   * @param value: value to be injected into List.
   */
  template <typename U>
  friend List<U>& operator<<(ArrayList<U>& list, U value) {}

  /**
   * @brief Inject value from front of List into variable.
   * 
   * @param var: variable to be injected into.
   */
  template <typename U>
  friend void operator>>(ArrayList<U> &list, U &var) {}

  /**
   * @brief Operator `<<` overload.
   * Inject ArrayList values into an ostream.
   * 
   * @param outs: ostream to inject values.
   * @param list: ArrayList containing values.
   * @return ostream&: ostream with injected values.
   */
  template <typename U>
  friend ostream& operator<< (ostream& outs, const ArrayList<U> &list) {}
  
  /**
   * @brief Operator `>>` overload.
   * Extract ArrayList values from an istream.
   * 
   * @param ins: istream to extract values.
   * @param list: List to inject values.
   * @return istream&: istream with extracted values.
   */
  template <typename U>
  friend void operator>> (istream& ins, const ArrayList<U> &list) {}
};

#endif  /* __ARRAYLIST_ */
