/**
 * @file stack.hpp
 * @author siavava <amittaijoel@outlook.com>
 * @brief: header file for stack class
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __STACK_HPP

#define __STACK_HPP
#define SIZE 100


#include <iostream>
#include <cstring>

using namespace std;

class stack {
  int data[SIZE];
  int pos;

public:
  stack() { pos = 0; };
  bool push(int i);
  int pop();

  /**
   * @brief: get size of stack
   * 
   * @return int: number of elements in stack
   */
  int size() { return pos; };
  string toString();
};

#endif /* __STACK_HPP */
