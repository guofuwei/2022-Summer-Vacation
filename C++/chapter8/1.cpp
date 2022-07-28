#include <iostream>

using namespace std;

inline double square(double x){return x*x;}

int main()
{
  double num;
  cout<<"Enter a num:";
  cin>>num;
  cout<<"square:"<<square(num)<<endl;

  return 0;
}
