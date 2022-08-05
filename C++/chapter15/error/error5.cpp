#include "exc_mean.h"
#include <cmath>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double mean(double x, double y);
double hmean(double x, double y);
double gmean(double x, double y);

class demo {
  private:
  std::string word_;

  public:
  demo(const std::string str)
  {
    word_ = str;
    cout << "demo " << word_ << " created!" << endl;
  }
  ~demo()
  {
    cout << "demo " << word_ << " destroyed" << endl;
  }
  void show() const
  {
    cout << "demo " << word_ << " lives" << endl;
  }
};

int main()
{
  demo d1("found in block in main()");
  double x, y, z;
  cout << "Enter two numbers:";
  while (cin >> x >> y) {
    try {
      z = mean(x, y);
      cout << "Mean of " << x << " and " << y << " is " << z << endl;
      // cout << "Gmean of " << x << " and " << y << " is " << gmean(x, y) << endl;
      cout << "Enter the next set of numbers:";
    } catch (BadHmean& bhm) {
      bhm.msg();
      cout << "Try again:";
      continue;
    } catch (BadGmean& bgm) {
      bgm.msg();
      cout << "Now we have to exit the program" << endl;
      break;
    }catch(...)
    {
      cout<<"Something in error,program exit!";
      break;
    }
  }
  d1.show();
  cout << "Bye!" << endl;
  return 0;
}

double mean(double x, double y)
{
  double am, hm, gm;
  demo d2("found in means()");
  am=(x+y)/2;
  try{
    hm=hmean(x,y);
    gm=gmean(x,y);
  }
  catch(BadHmean& bg)
  {
    bg.msg();
    cout<<"Caught in means()"<<endl;
    throw;
  }
  d2.show();
  return (am + hm + gm) / 3.0;
}

double hmean(double x, double y)
{
  if (x == -y) {
    throw BadHmean(x, y);
  }
  return 2 * x * y / (x + y);
}

double gmean(double x, double y)
{
  if (x < 0 || y < 0) {
    throw BadGmean(x, y);
  }
  return std::sqrt(x + y);
}
