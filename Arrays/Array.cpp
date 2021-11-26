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
using namespace std;

#define DEFAULT_SIZE 256

template<typename T>
class Array {

private:
  T* arr;
  int size;
  int max_size;


public:
  Array() {
    size = 0;
    max_size = DEFAULT_SIZE;
    arr = new T[max_size];
  }
  ~Array() {
    delete[] arr;
  }

  bool set(int index, T value) {
    if (index < 0 || index >= size) {
      return false;
    }
    arr[index] = value;
    return true;
  }

  T operator[](int index) {
    if (index < 0 || index >= size) {
      cerr << "Error: index out of range." << endl;
      return 0;
    }
    return arr[index];
  }
  
  int getSize() {
    return size;
  }

  void append(T value) {

    if (size >= max_size) {
      max_size *= 2;
      T* new_arr = new T[max_size];
      for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i];
      }
      delete[] arr;
      arr = new_arr;
    }

    arr[size++] = value;
  }

  void print() {
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
      if (i % 10 == 9) {
        cout << endl;
      }
    }
    cout << endl;
  }
};

int 
main()
{
  Array<int> a;
  for (int i = 0; i < 1000; i++) {
    a.append(i);
  }

  a.print();
  cout << sizeof(a) << endl;

  Array<char> b;
  for (int i = 0; i < 100; i++) {
    b.append('a' + i % 26);
  }

  b.print();
  cout << sizeof(b) << endl;

  return 0;
}
