#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double hmean(double x, double y);

int main()
{
  double x, y, z;
  std::cout << "Enter two numbers:";
  while (cin >> x >> y) {
    z = hmean(x, y);
    cout << "hmean of " << x << " and " << y << " is " << z << endl;
    std::cout << "Enter two numbers<q to quit>:";
  }
}

double hmean(double x, double y)
{
  if (x == -y) {
    cout << "untenable arguemnts to hmean!" << endl;
    std::abort();
  }
  return 2 * x * y / (x + y);
}
