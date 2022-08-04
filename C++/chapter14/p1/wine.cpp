#include "wine.h"
#include <iostream>
#include <valarray>

using std::cin;
using std::cout;
using std::endl;

Wine::Wine(const char* name, int y, const int yr[], const int bot[])
    : name_(name)
{
  pair_array_.first() = std::valarray<int>(yr, y);
  pair_array_.second() = std::valarray<int>(bot, y);
}

Wine::Wine(const char* name, int y)
    : name_(name)
{
  pair_array_.first() = std::valarray<int>(y);
  pair_array_.second() = std::valarray<int>(y);
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

  // pair_array_.first().resize(year);
  // pair_array_.second().resize(year);
  while (count < pair_array_.first().size()) {
    cout << "Enter the #" << count + 1 << " year:";
    cin >> pair_array_.first()[count];
    if (!cin)
      break;
    cout << "Enter the #" << count + 1 << " bottles:";
    cin >> pair_array_.second()[count];
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
  return name_;
}

int Wine::sum()
{
  int sum = 0;
  for (int i = 0; i < pair_array_.second().size(); i++) {
    sum += pair_array_.second()[i];
  }
  return sum;
}

void Wine::Show() const
{
  cout << "Name: " << name_ << endl;
  cout << "Year"
       << "\t"
       << "Bottles" << endl;
  for (int i = 0; i < pair_array_.first().size(); i++) {
    cout << pair_array_.first()[i] << "\t" << pair_array_.second()[i] << endl;
  }
}
