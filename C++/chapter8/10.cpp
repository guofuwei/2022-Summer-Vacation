#include <iostream>

using namespace std;

template <typename T>
T Add(T a,T b)
{
  return a+b;
}

int Add(int x,int y)
{
  return x+y;
}

int main()
{
  int x=10;
  double y=20.5;
  int z=30;
  cout<<"add ret:"<<Add<double>(x,y)<<endl;
  cout<<"add2 ret:"<<Add(x,z)<<endl;
  cout<<"add3 ret:"<<Add<>(x,z)<<endl;
  return 0;
}
