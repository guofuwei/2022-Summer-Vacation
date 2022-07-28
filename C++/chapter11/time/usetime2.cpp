#include "mytime2.h"
#include <iostream>

int main()
{
  using std::cout;
  using std::endl;

  Time weeding(4,35);
  Time waxing(2,47);
  Time total;
  Time diff;
  Time adjusted;

  cout<<"weeding time = ";
  weeding.Show();

  cout<<"waxing time = ";
  waxing.Show();

  cout<<"total working time = ";
  total=waxing+weeding;
  total.Show();

  cout<<"waxing time - weeding time = ";
  diff=waxing-weeding;
  diff.Show();

  cout<<"adjusted working time = ";
  adjusted=total*1.5;
  adjusted.Show();
}

