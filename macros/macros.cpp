/**
 * @file macros.cpp
 * @author siavava <amittaijoel@outlook.com>
 * @brief: Use of #define macros in CPP
 * @version 0.1
 * @date 2021-07-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 3.1415926536
#define START 0.0
#define END (PI * 2.0)
#define STEP (PI / 8.0)
#define HEADER (cout << \
  "              ********     TRIG TABLE      ********\n\n")

int
main()
{
  HEADER;
  cout << setw(16) << "x" 
       << setw(20) << "sin(x)" 
       << setw(20) << "cos(x)"
       << fixed << endl;

  double x = START;
  while (x < END + STEP/2) {
    cout << setw(16) << x 
         << setw(20) << sin(x) 
         << setw(20) << cos(x)
         << endl;
    x += STEP;
  }

  return 0;
}
