#include "tempparm.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  Crab<Stack> nebula;
  int ni;
  double nb;
  cout << "Enter int double pairs,such as 4 3.5(0 0 to end):" << endl;
  while (cin >> ni >> nb && ni > 0 && nb > 0) {
    if (!nebula.push(ni, nb))
      break;
  }

  while (nebula.pop(ni, nb)) {
    cout << ni << "," << nb << endl;
  }
  cout << "Done!" << endl;
}
