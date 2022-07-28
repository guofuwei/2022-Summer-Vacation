#include <iostream>

using namespace std;

template<class T1,class T2>
void ft(T1 &t1,T2 &t2)
{
  typedef decltype(t1+t2) t12;
  //decltype(t1+t2) ret=t1+t2;
  t12 ret=t1+t2;
  t1=ret;
}
template<class T1,class T2>
auto gt(T1 t1,T2 t2) -> decltype(t1+t2)
{
  return t1+t2;
}

int main()
{
  int x=10;
  double y=20.5;
  ft(y,x);
  cout<<"x + y = "<<y<<endl;
}
