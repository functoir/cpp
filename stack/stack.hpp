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

#ifndef __STACK_H

#define __STACK_H
#include <iostream>

class stack {
public:
  void init();
  bool push(int i);
  int pop();
  int size();
};

#endif /* __STACK_H */
