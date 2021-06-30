/**
 * @file types.cpp
 * @author siavava <amittaijoel@outlook.com>
 * @brief: sizes of different types in CPP
 * @version 0.1
 * @date 2021-06-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using namespace std;

int
main()
{
  cout << "\nSize of fundamental types in CPP:" << endl;
  cout << "Type:...................Number of bytes" << endl;

  cout << "char:..................." << sizeof(char) << endl;
  cout << "short:.................." << sizeof(short) << endl;
  cout << "int:...................." << sizeof(int) << endl;
  cout << "long:..................." << sizeof(long) << endl;
  cout << "float:.................." << sizeof(float) << endl;
  cout << "double:................." << sizeof(double) << endl;
  cout << "long double:............" << sizeof(long double) << endl;

  return 0;
}