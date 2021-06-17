/**
 * @file first.cpp
 * @author siavava <amittaijoel@outlook.com>
 * @brief first C++ program
 * @version 0.1
 * @date 2021-06-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

int 
main()
{
  /* initialize variable */
  int i;

  /* prompt */
  cout << "Enter a number: ";

  /* scan in input */
  cin >> i;

  /* print output */
  cout << i << " squared is " << i * i << "\n";

  /* exit 0 */
  return 0;
}