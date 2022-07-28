#include "mytime0.h"
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

  total=coding.Sum(fixing);
  cout<<"Total time = ";
  total.Show();
}
