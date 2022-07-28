#include <iostream>

using namespace std;


int main()
{
  const int kBase=100;
  double money1,money2;
  money1=money2=100;
  const double kRate1=0.1;
  const double kRate2=0.05;
  int i;
  for(i=1;;i++)
  {
    money1=kBase*(1+kRate1);
    money2=money2*(1+kRate2);
    if(money2>money1)
    {
      break;
    }
  }
  cout<<"year:"<<i<<endl;
  cout<<"money1:"<<money1<<endl;
  cout<<"money2:"<<money2<<endl;
  return 0;
}
