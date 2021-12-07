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

/* LinkedList interface */
#include "LinkedList.h"
#include <iostream>
#include <sstream>

int DUMMY = 0; 

template<typename T>
inline LinkedList<T>::LinkedList()
{
  head = tail = nullptr;
  size = 0;
}

template<typename T>
inline LinkedList<T>::LinkedList(const LinkedList<T> &other)
{
  head = tail = nullptr;
  size = 0;

  Node *temp = other.head;
  while (temp != nullptr)
  {
    append(temp->data);
    temp = temp->next;
  }
}

template <typename T>
inline LinkedList<T>::LinkedList(initializer_list<T> values)
{
  head = nullptr;
  tail = nullptr;
  size = 0;

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

    if (head == nullptr)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
    size++;
    return;
  }
  cerr << "Error: Memory allocation failed." << endl;
}

template<typename T>
void LinkedList<T>::insert(int index, T value)
{
  if (index == 0 && size == 0) {
    append(value);
    return;
  }
  if (abs(index) <= size)
  {
    Node *newNode = new Node;

    if (newNode != nullptr)
    {
      if (index < 0) index += size;
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
      size++;
    }
  }
}

template<typename T>
void LinkedList<T>::set(int index, T value)
{
  if (abs(index) <= size)
  {
    Node *newNode;

    if ((newNode = new Node) != nullptr)
    {
      if (index < 0) index += size;
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
      size++;
      return;
    }
    cerr << "Bad memory allocation" << endl;
    // throw bad_alloc();

  }
  cerr << "Index {" << index << "} out of range" << endl;
    // throw out_of_range("Index out of range");
}

template<typename T>
T LinkedList<T>:: remove(int index)
{
  if (abs(index) <= size)
  {
    if (index < 0) index += size;

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
    size--;
    return data;
  }
  cerr << "Index {" << index << "} out of range" << endl;
  // throw out_of_range("Index out of range");
  return (T) 0;
}

template<typename T>
T LinkedList<T>::get(int index)
{
  if (abs(index) <= size)
  { 
    if (index < 0) index += size;

    Node *temp = head;

    for (int i = 0; i < index-1; i++)
    {
      temp = temp->next;
    }
    return temp->data;
  }
  cerr << "Index {" << index << "} out of range" << endl;
  return (T) 0;
  // throw out_of_range("Index out of range");
}

template<typename T>
inline int LinkedList<T>::getSize() { return size; }

template<typename T>
inline bool LinkedList<T>::isEmpty() { return size == 0; }

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
  size = 0;
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

template<typename T>
inline T LinkedList<T>::operator[](int index)
{
  return get(index);
}

template<typename U>
LinkedList<U> &operator<<(LinkedList<U> &list, U value)
{
  list.append(value);
  return list;
}



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

template <typename U>
LinkedList<U> &operator+=(LinkedList<U> &list, const LinkedList<U> &list2)
{
  for (int i = 0; i < list2.getSize(); i++)
  {
    list.append(list2[i]);
  }
  return list;
}

template <typename U>
LinkedList<U> &operator+=(LinkedList<U> &list, U value)
{
  list.append(value);
  return list;
}

template <typename U>
void operator>> (istream& ins, const LinkedList<U> &list)
{

  /**
   * @brief if string representation of List, reconstruct.
   * 
   */
  string starts = "}]>";
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
  cout << "list.size() = " << list.getSize() << endl;
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
    cout << b[i];
    if (i % 5 == 0) cout << endl;
    else cout << " ";
  }

  // cout << b;
  cout << endl << "b size = " << b.getSize() << endl;
  cout << endl << endl;

  int pos = 0;
  char val;
  while (b >> val) {
    cout << val << " ";
    if (pos++ % 10 == 9) {
      cout << "\n";
    }
  }
  cout << "\nb size = " << b.getSize() << endl;

  return 0;
}
#endif
