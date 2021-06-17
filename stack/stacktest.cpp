/**
 * @file stacktest.cpp
 * @author siavava <amittaijoel@outlook.com>
 * @brief unit test for stack class
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "stack.hpp"

using namespace std;

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

  return 0;
}
