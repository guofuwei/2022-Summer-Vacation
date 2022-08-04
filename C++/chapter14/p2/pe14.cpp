#include "wine.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  cout << "Enter the name of wine:";
  char lab[50];
  cin.getline(lab, 50);
  cout << "Enter the number of year:";
  int yr;
  cin >> yr;

  Wine holding(lab, yr);
  holding.GetBottles();
  holding.Show();

  const int YRS = 3;
  int y[YRS] = { 1993, 1995, 1998 };
  int b[YRS] = { 48, 60, 72 };

  Wine more("Gushing Graph Red", YRS, y, b);
  more.Show();
  cout << "Total bottles for " << more.Label() << ":"
       << more.sum() << endl;
  cout << "Bye!" << endl;

  return 0;
}
