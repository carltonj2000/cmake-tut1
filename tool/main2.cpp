#include "mylib/random.h"
#include <iostream>

using namespace std;

int main (int argv, char** argc) {
  cout << mylib::getRandomNumber() << endl;
  return 0;
}
