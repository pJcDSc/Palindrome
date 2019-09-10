/*
 * Author: Peter Jin
 * Date: 9/9/19
 * Palindrome: Program prompts user for input then outputs whether or not
 * input is a palindrome. (ignores non-alphanumeric characters; case)
 */

#include <iostream>
#include <cstring>

using namespace std;

int main() {
  //Declare strings to be used
  char str[81];
  char modStr[81];
  char modStrR[81];

  //Prompt user for input
  cout << "Enter a string to compare whether or not it is a palindrome" << endl;

  //Take in all input regardless of spaces and things using cin.get
  cin.get(str, 81);
  cin.get();

  //Put str into modStr while removing non alphanumeric characters and making them uppercase
  int ct = 0;
  for(int i = strlen(str)-1; i >= 0; i--) {

    //Only add to modStr if str[i] is alphanumeric
    if (isalnum(str[i])) {
      modStr[ct++] = toupper(str[i]);
    }
  }

  //Put modStr into modStrR backwards using strlen and for loop
  int len = strlen(modStr);
  for(int i = 0; i < len; i++){
    modStrR[len-i-1] = modStr[i];
  }

  //Compare strings, print whether or not it is a palindrome
  cout << ((strcmp(modStr, modStrR) == 0) ? "Palindrome." : "Not a palindrome.") << endl;
  
  return 0;
}
