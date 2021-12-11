/**
 * @file LinkedList.cpp
 * @author siavava <amittaijoel@outlook.com>
 * @brief LinkedList implementation file.
 * Skeleton documentation, check LinkedList.hpp for more info.
 * @version 0.1
 * @date 2021-11-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <sstream>
#include <typeinfo>
#include <algorithm>

/* LinkedList interface */
#include "LinkedList.h"

template<typename T>
inline LinkedList<T>::LinkedList()
{
  head = tail = nullptr;
  length = 0;
}

template<typename T>
inline LinkedList<T>::LinkedList(const List<T> &other)
{
  head = tail = nullptr;
  length = 0;

  int size = (int) other.size();

  for (int i = 0; i < size; i++)
  {
    *this << other[i];
  }
}

template <typename T>
inline LinkedList<T>::LinkedList(initializer_list<T> values)
{
  head = nullptr;
  tail = nullptr;
  length = 0;

  for (auto &value : values)
  {
    append(value);
  }
}

template<typename T>
inline LinkedList<T>::~LinkedList()
{
  while (head != nullptr)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
  }
}

template<typename T>
void LinkedList<T>::append(T value)
{
  Node *newNode = new Node;

  if (newNode != nullptr)
  {
    newNode->data = value;
    newNode->next = nullptr;

    if (length == 0)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
    length++;
    return;
  }
  cerr << "Error: Memory allocation failed." << endl;
}

template <typename T>
void LinkedList<T>::appendAll(List<T> &other)
{
  for (int i = 0; i < other.size(); i++)
  {
    append(other[i]);
  }
}


template<typename T>
void LinkedList<T>::insert(int index, T value)
{
  if (index == 0 && length == 0) {
    append(value);
    return;
  }
  if (abs(index) <= length)
  {
    Node *newNode = new Node;
    if (newNode != nullptr)
    {
      if (index < 0) index += length;

      newNode->data = value;
      newNode->next = nullptr;

      if (index == 0)
      {
        newNode->next = head;
        head = newNode;
      }
      else
      {
        Node *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
          temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
      }
      length++;
    }
  }
}

template<typename T>
void LinkedList<T>::set(int index, T value)
{
  if (abs(index) <= length)
  {
    Node *newNode;
    if ((newNode = new Node) != nullptr)
    {
      if (index < 0) index += length;
      newNode->data = value;
      newNode->next = nullptr;

      if (index == 0)
      {
        newNode->next = head;
        head = newNode;
      }
      else
      {
        Node *temp = head;
        for (int i=0; i<index-1; i++)
        {
          temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
      }
      length++;
      return;
    }
    cerr << "Bad memory allocation" << endl;
    throw bad_alloc();

  }
  cerr << "Index" << index << " out of range for List of size " << length << endl;
    // throw out_of_range("Index out of range");
}

template<typename T>
T LinkedList<T>:: remove(int index)
{
  if (abs(index) <= length)
  {
    if (index < 0) index += length;

    Node *temp = head;
    T data;

    if (index == 0)
    {
      head = head->next;
      data = temp->data;
      delete temp;
    }
    else
    {
      for (int i = 0; i < index - 1; i++)
      {
        temp = temp->next;
      }
      Node *temp2 = temp->next;
      temp->next = temp2->next;
      data = temp2->data;
      delete temp2;
    }
    length--;
    return data;
  }
  cerr << "Index {" << index << "} out of range" << endl;
  // throw out_of_range("Index out of range");
  return (T) 0;
}

template<typename T>
T LinkedList<T>::get(int index)
{
  if (abs(index) < length)
  { 
    if (index < 0) index += length;
    Node *temp = head;
    while (index--) temp = temp->next;
    return temp->data;
  }
  else {
    cerr << "Index {" << index << "} out of range" << endl;
    return (T) 0;
    // throw out_of_range("Index out of range");
  }
}

template<typename T>
T& LinkedList<T>::getRef(int index)
{
  if (abs(index) < length)
  { 
    if (index < 0) index += length;
    Node *temp = head;
    while (index--) temp = temp->next;
    return temp->data;
  }
  else {
    cerr << "Index {" << index << "} out of range" << endl;
    throw out_of_range("Index out of range");
  }
}

template<typename T>
void LinkedList<T>::clear()
{
  while (head != nullptr)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
  }
  tail = nullptr;
  length = 0;
}

template <typename T>
bool LinkedList<T>::contains(T value)
{
  for (Node* temp = head; temp != nullptr; temp = temp->next)
  {
    if (temp->data == value)
    {
      return true;
    }
  }
  return false;
}

template<typename T>
int LinkedList<T>::indexOf(T value)
{
  Node *temp = head;
  int index = 0;
  while (temp != nullptr)
  {
    if (temp->data == value)
    {
      return index;
    }
    temp = temp->next;
    index++;
  }
  return -1;
}

template<typename T>
int LinkedList<T>::lastIndexOf(T value)
{
  Node *temp = head;
  int index = 0, lastIndex = -1;
  while (temp != nullptr)
  {
    if (temp->data == value)
    {
      lastIndex = index;
    }
    temp = temp->next;
    index++;
  }
  return lastIndex;
}

template<typename U>
LinkedList<U> &operator<<(LinkedList<U> &list, U value)
{
  list.append(value);
  return list;
}


/**************** FRIEND OPERATOR FUNCTIONS ****************/

template<typename U>
bool operator>>(LinkedList<U> &list, U &var)
{
  if (list.isEmpty()) return false;
  var = list.remove(0);
  return true;
}

template <typename U>
ostream &operator<< (ostream& outs, const  LinkedList<U> &list)
{
  stringstream ss;

  ss << "{";

  typename LinkedList<U>::Node *temp = list.head;
  while (temp != nullptr)
  {
    ss << temp->data;
    if (temp->next != nullptr)
    {
      ss << ", ";
    }
    temp = temp->next;
  }
  ss << "}\n";

  outs << ss.str();
  return outs;
}

template <typename V>
LinkedList<V> &operator+=(LinkedList<V> &list, LinkedList<V> &list2)
{
  for (int i = 0; i < list2.size(); i++)
  {
    list.append(list2.get(i));
  }
  return list;
}

template <typename T>
LinkedList<T> &operator+(LinkedList<T> &list, LinkedList<T> &list2)
{
  LinkedList<T> *list3 = new LinkedList<T>();
  *list3 += list;
  *list3 += list2;
  return *list3;
}

template <typename U>
void operator>> (istream& ins, const LinkedList<U> &list)
{

  /**
   * @brief if string representation of List, reconstruct.
   * 
   */
  string starts = "{[<";
  U value;
  if (starts.find(ins.peek()) != -1)
  {
    ins.ignore();
    string ends = "}]>";
    while (ends.find(ins.peek()) != (unsigned long int) -1 && !ins.eof())
    {
      ins >> value;
      list.append(value);
      if (ins.peek() == ',' || ins.peek() == ' ')
      {
        ins.ignore();
      }
    }
    ins.ignore();
  }

  /* else... insert raw values */
  else
  {
    while (ins >> value)
    {
      list.append(value);
      if (ins.peek() == ',' || ins.peek() == ' ')
      {
        ins.ignore();
      }
    }
  }
}

#ifdef UNITTEST
int main()
{
  cout.width(5);
  LinkedList<int> list = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  list.append(25);
  list.append(26);
  list.append(27);
  list << 1 << 2 << 3 << 4 << 5;
  cout << "list.size() = " << list.size() << endl;
  cout << list << endl;

  auto var = -1;
  while (! list.isEmpty())
  {
    list >> var;
    cout << "var = " << var << endl;
  }

  cout << list << endl;
  
  auto &a = list;
  for (int i = 0; i < 100; i++) {
    a << i;
  }

  int count = 0;
  while (! list.isEmpty())
  {
    list >> var;
    cout << var << " ";
    if (count++ % 10 == 9) cout << endl;
  }
  a.clear();

  LinkedList<char> b;

  for (int i = 0; i < 100; i++) {
    char val = 'a' + i % 26;
    b << val;
  }

  for (int i = 0; i < 120; i++) {
    cout << b.get(i);
    if (i % 5 == 0) cout << endl;
    else cout << " ";
  }

  // cout << b;
  cout << endl << "b size = " << b.size() << endl;
  cout << endl << endl;

  int pos = 0;
  char val;
  while (b >> val) {
    cout << val << " ";
    if (pos++ % 10 == 9) {
      cout << "\n";
    }
  }
  cout << "\nb size = " << b.size() << endl;

  // List<unsigned int> *list2 = new LinkedList<unsigned int>();
  // unsigned int lim = 1 << 25;
  // cout << "lim = " << lim << endl;
  // for (unsigned int i = 0; i < lim; i++) {
  //   list2->append(i);
  // }
  // cout << "list2 size = " << list2->size() << endl;
  // cout << "range " << list2->get(0) << " to " << list2->get(list2->size() - 1) << "\n\n" << endl;

  // lim = list2->size();
  // for (unsigned int i = 0; i < lim; i+=1000000) {
  //   cout << i << ": " << list2->get(i) << "\n";
  // }
  // cout << endl;

  // for (int i = 0; i < 10; i++) {
  //   cout << list2->get(i) << " ";
  // }
  // delete list2;

  cout << "\n\nTESTING QUEUE\n\n" << endl;
  LinkedList<int> l2;
  Queue<int> *q = &l2;;
  for (int i = 0; i < 10; i++) {
    q->enqueue(i);
  }
  cout << "q size = " << q->size() << endl;
  cout << "Queue: " << l2 << endl;

  cout << "dequeuing...\n\n";
  for (int i = 0; i < 10; i++) {
    cout << q->dequeue() << " ";
  }
  cout << endl;

  cout << "\n\nTESTING STACK\n\n" << endl;

  LinkedList<int> l3;
  Stack<int> *stack = &l3;

  cout << "Pushing...\n";
  for (int i = 0; i < 10; i++) {
    stack->push(i);
  }

  cout << "Stack: " << l3 << endl;

  cout << "Popping...\n";
  for (int i = 0; i < 10; i++) {
    cout << stack->pop() << " ";
  }
  cout << endl;

  cout << "\ntesting operators\n" << endl;
  LinkedList<int> l4 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  LinkedList<int> l5 = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
  cout << "l4 = " << l4 << endl;
  cout << "l5 = " << l5 << endl;

  auto l6 = l4 + l5;
  cout << "l4 + l5 = " << l6 << endl;
  cout << "l4 = " << l4 << endl;
  cout << "l4 += l5 = " << (l4 += l5) << endl;
  cout << "l4 = " << l4 << endl;

  for (int i = 0; i < l4.size(); i++) {
    l4[i] += 1000;
  }

  cout << "l4 after incrementing " << l4 << endl;
  return 0;
}
#endif
