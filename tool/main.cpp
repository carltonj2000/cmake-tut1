#include "mylib/random.h"
#include <iostream>

using namespace std;

int main (int argv, char** argc) {
  cout << "Hello World!" << endl;

  cout << "Did you know, I can generate random numbers!" << endl;
  cout << "...yeah I can." << endl;

  for (int i=0; i < 10; ++i) {
    if (i == 0)
      cout << "Here's one ";
    else
      cout << "And another ";
    cout << mylib::getRandomNumber() << endl;
  }

  cout << endl << endl << "Impressed... Yeah I bet  you were!" << endl;

  return 0;
}
