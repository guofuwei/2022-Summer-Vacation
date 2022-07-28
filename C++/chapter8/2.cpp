#include <iostream>

using namespace std;


int main()
{
  int a=100;
  int& b=a;
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
  a=200;
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
  cout<<"location of a:"<<&a<<endl;
  cout<<"location of b:"<<&b<<endl;

  int c=50;
  b=c;
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
  cout<<"c="<<c<<endl;
  a=100;
  cout<<"a="<<a<<endl;
  cout<<"b="<<b<<endl;
  cout<<"c="<<c<<endl;
  cout<<"location of a:"<<&a<<endl;
  cout<<"location of b:"<<&b<<endl;
  cout<<"location of c:"<<&c<<endl;
  
  return 0;
}
