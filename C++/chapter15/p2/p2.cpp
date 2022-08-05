#include "exc_mean.h"
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

double hmean(double x, double y);
double gmean(double x, double y);

int main()
{
  double x, y, z;
  cout << "Enter two numbers:";
  while (cin >> x >> y) {
    try {
      z = hmean(x, y);
      cout << "Hmean of " << x << " and " << y << " is " << z << endl;
      cout << "Gmean of " << x << " and " << y << " is " << gmean(x, y) << endl;
      cout<<"Enter the next set of numbers:";
    } catch (BadHmean& bhm) {
      cout<<bhm.what()<<endl;
      cout << "Try again:";
      continue;
    } catch (BadGmean& bgm) {
      cout<<bgm.what()<<endl;
      cout << "Now we have to exit the program" << endl;
      break;
    }
  }
  cout << "Bye!" << endl;
  return 0;
}

double hmean(double x, double y)
{
  if(x==-y)
  {
    throw BadHmean();
  }
  return 2*x*y/(x+y);
}

double gmean(double x, double y)
{
  if(x<0||y<0)
  {
    throw BadGmean();
  }
  return std::sqrt(x+y);
}
