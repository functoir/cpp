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
  cout << "\nSize of fundamental types in CPP:" << "\n";
  cout << "Type:...................Number of bytes" << "\n";

  cout << "char:..................." << sizeof(char) << "\n";
  cout << "short:.................." << sizeof(short) << "\n";
  cout << "int:...................." << sizeof(int) << "\n";
  cout << "long:..................." << sizeof(long) << "\n";
  cout << "float:.................." << sizeof(float) << "\n";
  cout << "double:................." << sizeof(double) << "\n";
  cout << "long double:............" << sizeof(long double) << endl;

  return 0;
}