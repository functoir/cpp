/**
 * @file inputs_cin.cpp
 * @author siavava <amittaijoel@outlook.com>
 * @brief: inputs via stdin (cin)
 * @version 0.1
 * @date 2021-06-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

using namespace std;

string header =
"   -- -- -- Demonstrates unformatted output -- -- --";
int
main(void)
{
  string word, rest;

  cout << header
       << "\n\nPress <return> to go on"
       << endl;

  cin.get();

  cout << "\nPlease enter a sentence with several words."
       << "\nEnd with <!> and <return>." 
       << endl;

  cin >> word;

  getline(cin, rest, '!');

  cout << "The first word: " << word
       << "\nRemaining text: " << rest << endl;

  return 0;
}