/**
 * @file stack.cpp
 * @author siavava <amittaijoel@outlook.com>
 * @brief simple Stack implementation in CPP
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/* standard libs */
#include <iostream>
#include <cstring>
using namespace std;

/* self */
#include "stack.hpp"

/**
 * @brief: get string representation of stack
 * 
 * @return string: string representation of stack state
 */
string 
stack::toString()
{
  string stringified = "[";
  for (int i = 0; i < stack::pos; i++) {
    stringified += to_string(data[i]);
    if (i != pos - 1) stringified += ", ";
  }
  stringified += "]";
  return stringified;
}

bool
stack::push(int num)
{
  if (stack::pos == SIZE) {
    cout << "The stack is full.\n";
    return false;
  }
  data[pos++] = num;
  return true;
}
/**
 * @brief: pop item at top of stack
 * 
 * @return int: item from top of stack
 */
int
stack::pop()
{
  if (pos == 0) {
    cerr << "The stack is empty.\n";
    return 0;
  }
  return data[--pos];
}

#ifdef QUICKTEST
int
main()
{
  stack newStack;
  for (int i = 0; i < 10; i++) {
    if (newStack.push(i)) {
      cout << "pushed " << i << " to stack" << endl;
    }
  }

  cout << "stack state: " << newStack.toString() << endl; 

  while (newStack.size() > 0) {
    cout << "popped: " << newStack.pop() << " from stack" << endl;
  }

  cout << "stack state: " << newStack.toString() << endl;

  for (int i = 0; i < 110; i++) {
    newStack.push(i);
  }

  cout << newStack.toString() << endl;

  for (int i=0; i < 110; i++) {
    cout << newStack.pop() << endl;
  }

  return 0;
}
#endif /*QUICKTEST*/
