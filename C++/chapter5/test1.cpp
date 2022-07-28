#include <iostream>

using namespace std;

int main()
{
  int num1,num2;
  cout<<"Enter one num:";
  cin>>num1;
  cout<<"Enter other num:";
  cin>>num2;
  if(num1>num2)
  {
    cout<<"error enter!"<<endl;
  }
  else
  {
    int sum=0;
    for(int i=num1;i<=num2;i++)
    {
      sum+=i;
    }
    cout<<"sum = "<<sum<<endl;
  }
  return 0;
}
