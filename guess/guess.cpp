/**
 * @file guessedNumber.cpp
 * @author siavava <amittaijoel@outlook.com>
 * @brief guessing game in CPP
 * @version 0.1
 * @date 2021-06-18
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

/* Function prototypes */

/**
 * @brief generate a random number between
 * lower and upper bound.
 * 
 * @param lowerbound: lower bound, inclusive
 * @param upperbound: upper bound, exclusive
 * @return int: random integer between bounds
 */
static int randomInt(int lowerbound, int upperbound);

int
main()
{
  int randomNum = randomInt(0, 100);

  int guessedNumber = -10;

  while (guessedNumber != randomNum) {

    /* prompt */
    cout << "Enter a guess between 0 and 100..." << endl;

    /* receive guessedNumber */
    cin >> guessedNumber;

    /* Process the guessedNumber and give feedback */
    if (guessedNumber < randomNum) cout << "Too small!" << endl;
    else if (guessedNumber > randomNum) cout << "Too big!" << endl;
    else cout << "Success!" << endl;
  }

  return 0;

}


/**
 * @brief generate a random number between
 * lower and upper bound.
 * 
 * @param lowerbound: lower bound, inclusive
 * @param upperbound: upper bound, exclusive
 * @return int: random integer between bounds
 */
static int
randomInt(int lowerbound, int upperbound)
{
  /* seed */
  srand(time(0));

  /* generate random num */
  int num = rand();

  /* bind it to range */
  num = lowerbound + (num % (upperbound - lowerbound));

  /* return num */
  return num;
}