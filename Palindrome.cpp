/* Project 2-Palindrome by Kevin Jin.
 * Reads in a single string with length equal to or less than 80.
 * Removes punctuation and spaces, and will print whether or not it is a palindrome (case insensitive).
 */

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//To make inputting and outputting more convenient.
using namespace std;
//Main method. All our code goes here.
int main() {
  //Three arrays used to store the various levels of analysis we've made on the input string.
  char crude[81];
  char refined[81];
  char backwards[81];
  //Fills all strings with null characters to make sure the array always has at least one null character at the end.
  for (int i = 0; i < 81; i++) {
    crude[i] = '\0';
    refined[i] = '\0';
    backwards[i] = '\0';
  }
  //Crude receives the string in its unrefined form.
  cin.get(crude, 80);
  cin.get();
  //Sets up a counter to record the current position in the refined array.
  int counter = 0;
  for (int i = 0; i < 81; i++) {
    //If a character is alphanumeric, put it in refined and ++ counter.
    if (isalnum(crude[i])) {
      refined[counter] = tolower(crude[i]);
      counter++;
    }
  }
  //Resets counter; we now use it to record the position in the backwards array.
  counter = 0;
  for (int i = 80; i > -1; i--) {
    //Starting from the end of refined: If a character is alphanumeric (in other words, it's not one of the null characters at the end of the array) then put it in backwards.
    if (isalnum(refined[i])) {
      backwards[counter] = refined[i];
      counter++;
    }
  }
  //If the two strings are identical when compared, print "Palindrome", otherwise print "Not a palindrome".
  if (strcmp(refined, backwards) == 0) {
    cout << "Palindrome.";
  }
  else {
    cout << "Not a palindrome.";
  }
  
  
}
