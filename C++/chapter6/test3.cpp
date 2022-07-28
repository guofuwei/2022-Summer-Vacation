#include <iostream>

using namespace std;

int main()
{
  const double kRate1=0.1;
  const double kRate2=0.15;
  const double kRate3=0.2;
  int input;
  double tax=0;
  cout<<"Enter your income:";
  while((cin>>input)&&input>=0)
  {
    if(input<=5000)
    {
      tax=0; 
    }
    else if(input>5000&&input<=15000)
    {
      tax=(input-5000)*kRate1;
    }
    else if(input>15000&&input<=35000)
    {
      tax=10000*kRate1+(input-15000)*kRate2;
    }
    else
    {
      tax=10000*kRate1+20000*kRate2+(input-20000)*kRate3;
    }
    cout<<"The tax for "<<input<<" is "<<tax<<endl;
    cout<<"Enter your income:";
  }
  return 0;
}
