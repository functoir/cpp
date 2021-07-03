/**
 * @file palindromes.cpp
 * @author siavava <amittaijoel@outlook.com>
 * @brief: program to check palindromes
 * @version 0.1
 * @date 2021-07-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
using namespace std;

int
main()
{
  while (true) {

    string word;
    cout << "Enter the string to check for palindromes" << endl;

    cin >> word;

    int len = word.size();
    string reversed(word);

    for (int i = 0; i < len; i++) {
      reversed.at(i) = word.at(len - (1 + i));
    }

    if (word == reversed) {
      cout << word << " is a palindrome!" << endl;
    }
    else {
      cout << word << " is not a palindrome" << endl;
    }

    cout << "Continue? [y/n] " << endl;
    char feedback;
    cin >> feedback;
    if (feedback == 'n') goto exit;
    else continue;
  }

  exit: return 0;
}