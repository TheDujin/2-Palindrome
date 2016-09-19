#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int main() {
  char crude[81];
  char refined[81];
  char backwards[81];
  for (int i = 0; i < 81; i++) {
    crude[i] = '\0';
    refined[i] = '\0';
    backwards[i] = '\0';
  }
  cin.get(crude, 80);
  cin.get();
  int counter = 0;
  for (int i = 0; i < 81; i++) {
    if (isalnum(crude[i])) {
      refined[counter] = crude[i];
      cout << crude[i];
      counter++;
    }
  }
  cout << endl;
  counter = 0;
  for (int i = 80; i > -1; i--) {
    if (isalnum(refined[i])) {
      backwards[counter] = refined[i];
      counter++;
      cout << refined[i];
    }
  }
  cout << endl;
  if (strcmp(refined, backwards) == 0) {
    cout << "Palindrome.";
  }
  else {
    cout << "Not a palindrome.";
  }
  
  
}
