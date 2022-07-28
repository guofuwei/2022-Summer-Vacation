#include "mytime1.h"
#include "iostream"


int main()
{
  using std::cout;
  using std::endl;
  Time planning;
  Time coding(2,30);
  Time fixing(5,55);
  Time total;

  cout<<"Planing time = ";
  planning.Show();

  cout<<"coding time = ";
  coding.Show();

  total=coding+fixing;
  // total=coding.operator+(fixing);
  cout<<"coding+fixing time = ";
  total.Show();

  total=coding+fixing+fixing;
  cout<<"coding+fixing+fixing time = ";
  total.Show();
}
