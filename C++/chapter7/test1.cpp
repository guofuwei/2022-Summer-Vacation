#include <iostream>

using namespace std;

double Cal(int x,int y);
int main()
{
  int x,y;
  double ret;
  cout<<"Please enter two num:";
  while((cin>>x>>y)&&x&&y)
    {
    ret=Cal(x,y); 
    cout<<"result is "<<ret<<endl;
    cout<<"Please enter two num:";
  }
}


double Cal(int x,int y)
{
  return 2.0*x*y/(x+y);
}
