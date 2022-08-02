#include "p4.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
  Port p1("A","styleA",1);
  VintagePort p2("B","styleB",2,"GHJ",10);
  p1.Show();
  p2.Show();
  cout<<p1;
  cout<<p2;
}
