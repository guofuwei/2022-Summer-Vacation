#include "wine.h"
#include "pairs.h"
#include <iostream>
#include <string>
#include <valarray>

using std::cin;
using std::cout;
using std::endl;

Wine::Wine(const char* name, int y, const int yr[], const int bot[])
    : std::string(name)
{
  Pair::first() = std::valarray<int>(yr, y);
  Pair::second() = std::valarray<int>(bot, y);
}

Wine::Wine(const char* name, int y)
    :std::string(name)
{
  Pair::first() = std::valarray<int>(y);
  Pair::second() = std::valarray<int>(y);
}

int Wine::GetBottles()
{
  // int year;
  int count = 0;
  // cout << "Enter the nums of year:";
  // while (!cin >> year || year == 0) {
  //   cin.clear();
  //   while(cin.get()!='\n');
  //   cout << "Try again:";
  // }

  // Pair::first().resize(year);
  // Pair::second().resize(year);
  while (count < Pair::first().size()) {
    cout << "Enter the #" << count + 1 << " year:";
    cin >> Pair::first()[count];
    if (!cin)
      break;
    cout << "Enter the #" << count + 1 << " bottles:";
    cin >> Pair::second()[count];
    if (!cin)
      break;
    count++;
  }
  cin.clear();
  while (cin.get() != '\n')
    ;
  return count;
}

const std::string& Wine::Label()
{
  return (const std::string &)*this;
}

int Wine::sum()
{
  int sum = 0;
  for (int i = 0; i < Pair::second().size(); i++) {
    sum += Pair::second()[i];
  }
  return sum;
}

void Wine::Show() const
{
  cout << "Name: " << (const std::string &)*this<< endl;
  cout << "Year"
       << "\t"
       << "Bottles" << endl;
  for (int i = 0; i < Pair::first().size(); i++) {
    cout << Pair::first()[i] << "\t" << Pair::second()[i] << endl;
  }
}
