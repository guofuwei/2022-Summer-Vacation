#include <iostream>
#include <array>
using namespace std;

int main()
{
  long double num=1;
  cout<<"0! = 1"<<endl;
  for(int i=1;i<=100;i++)
  {
    num*=i;
    cout<<i<<"! = "<<num<<endl;
  }
}
