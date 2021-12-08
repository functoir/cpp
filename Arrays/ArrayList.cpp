/**
 * @file Arrays.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-26
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include "ArrayList.h"
using namespace std;

/**
 * @brief Static function to find allocation cap
 * 
 * @param size The size
 * @return int Upper bound -- always a factor of 2
 */
static int findCap(int size) {
  int cap = 1;
  while (cap < size) {
    cap <<= 1;
  }
  return cap;
}

template<typename T>
inline ArrayList<T>::ArrayList(int capacity = _ARRAYLIST_DEFAULT_CAP)
{
  if (capacity < 0) {
    throw "ArrayList: init size must be greater than 0";
  }
  size = 0;
  CAP = findCap(capacity);
  arr = new T[CAP];
}

template<typename T>
inline ArrayList<T>::ArrayList(const List<T> &other)
{
  size = other.getSize();
  CAP = findCap(size);
  arr = new T[max_size];
  for (int i = 0; i < size; i++) {
    arr[i] = other[i];
  }
}

template<typename T>
ArrayList<T>::ArrayList(initializer_list<T> values)
{
  size = values.size();
  CAP = size;
  arr = new T[CAP];
  int i = 0;
  for (auto it = values.begin(); it != values.end(); it++) {
    arr[i] = *it;
    i++;
  }
}

template<typename T>
ArrayList<T>::~ArrayList() 
{
  delete[] arr;
}

void append(T value);

void insert(int index, T value);

T remove(int index);

T get(int index);

void set(int index, T value);

int getSize();

void clear();

bool isEmpty();

bool contains(T value);

int indexOf(T value) = 0;

int find(T value) { return indexOf(value); }

virtual int lastIndexOf(T value) = 0;

template <typename U>
ArrayList<U> &operator<<(ArrayList<U> &list, U value) {}

/**
 * @brief Inject value from front of List into variable.
 * 
 * @param var: variable to be injected into.
 */
template <typename U>
void operator>>(ArrayList<U> &list, U &var) {}

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


template <typename U>
friend void operator>> (istream& ins, const ArrayList<U> &list) {}


int 
main()
{
ArrayList<int> a;
for (int i = 0; i < 1000; i++) {
  a.append(i);
}

a.print();
cout << sizeof(a) << endl;

ArrayList<char> b;
for (int i = 0; i < 100; i++) {
  b.append('a' + i % 26);
}

b.print();
cout << sizeof(b) << endl;

return 0;
}
