#include "p2.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
  Person one;
  Person two("Smythecraft");
  Person three("Dimwiddy","Sam");
  two.Show();
  cout<<endl;
  three.FormalShow();
}
