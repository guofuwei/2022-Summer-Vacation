#include <iostream>

using namespace std;

int Cal(int n);

int main()
{
  int n;
  cout<<"Enter a num to multiplication:";
  cin>>n;
  Cal(n);
}


int Cal(int n)
{
  if(n==0)
  {
    return 1;
  }
  int ret=n*Cal(n-1);
  cout<<n<<"!="<<ret<<endl;
  return ret;
}
