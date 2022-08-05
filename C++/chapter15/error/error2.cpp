#include <cfloat>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

double hmean(double x, double y, double* z);

int main()
{
  double x, y, z;
  std::cout << "Enter two numbers:";
  while (cin >> x >> y) {
    if (hmean(x, y, &z)) {
      cout << "hmean of " << x << " and " << y << " is " << z << endl;
       std::cout << "Enter two numbers<q to quit>:";
    }
    else
    {
      cout<<"One value should not be the negative of another"<<endl;
    }
  }
}

double hmean(double x, double y, double* ans)
{
  if (x == -y) {
    cout << "untenable arguemnts to hmean!" << endl;
    // std::abort();
    *ans = DBL_MAX;
    return false;
  }
  *ans = 2 * x * y / (x + y);
  return true;
}
