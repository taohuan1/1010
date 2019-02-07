#include <iostream>
#include <fstream>
#include "lab03.h"

using namespace std;

// REQUIRES: str1 and str2 point to C-strings
// EFFECTS:  If str1 and str2 contain exactly the same characters, returns 0.
//           Otherwise, return a positive number if the first differing char
//           has a greater value in str1 than in str2 and a negative number in
//           the opposite case (you may NOT call strcmp).
int strcmp_eecs280(const char *str1, const char *str2) {
  return 0;  // TASK 1 - YOUR CODE HERE
}

// EFFECTS:  Prints "Please enter a word: " to prompt the user to enter a word
//           and then reads a word from cin to be returned. After reading the
//           input, clean up by printing a newline to cout.
string get_user_word() {
  return "quit"; // TASK 2 - YOUR CODE HERE
}

// EFFECTS: Opens the given file and returns a vector containing all the words
//          in the file. If the file cannot be opened, prints an error message
//          and returns an empty vector.
vector<string> read_words_from_file(const string &filename) {
  vector<string> words;
  // TASK 2 - YOUR CODE HERE

  return words;
}

// EFFECTS:  Returns true if the given word is contained in the vector of valid
//           words.
// NOTE:     You MUST use the strcmp_eecs280 function (NOT strcmp).
bool find_word(const char *word, const vector<string> &valid_words) {
  return false; // TASK 2 - YOUR CODE HERE
}
