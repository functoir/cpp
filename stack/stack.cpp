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

#include <iostream>
#include <cstring>

using namespace std;

#define SIZE 4096
class stack {
  int data[SIZE];
  int pos;

public:
  stack() { pos = 0; };
  bool push(int i);
  int pop();
  int size() { return pos; };
  string toString();
};

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

int
stack::pop()
{
  if (pos == 0) {
    cout << "The stack is empty.\n";
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

  return 0;
}
#endif /*QUICKTEST*/
