#include <iostream>

using std::cout;
using std::endl;
using std::cin;

double hmean(double x,double y);

int main()
{
  double x,y,z;
  cout<<"Enter two numbers:";
  while(cin>>x>>y)
  {
    try{
      z=hmean(x, y);
    }
    catch(const char* s)
    {
      cout<<s<<endl;
      cout<<"Enter a new pair of numbers:";
      continue;
    }
    cout<<"Hmean of "<<x<<" and "<<y<<" is "<<z<<endl;
    cout<<"Enter next set of numbers<q to quit>:";
  }
  cout<<"Bye!"<<endl;
  return 0;
}

double hmean(double x,double y)
{
  if(x==-y)
  {
    throw "bad hmean agrument:x = -y is not allowed!";
  }
  return 2*x*y/(x+y);
}
