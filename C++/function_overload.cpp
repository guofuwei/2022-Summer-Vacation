#include <iostream>
#include <string>

using namespace std;

double Add(double x,double y);
string Add(string s1,string s2);

int main()
{
  int num1,num2;
  string s1,s2;
  cout<<"Enter two nums:";
  cin>>num1>>num2;
  cout<<"ret1:"<<Add(num1,num2)<<endl;

  cout<<"Enter two string:";
  cin>>s1>>s2;
  cout<<"ret2:"<<Add(s1,s2)<<endl;

  return 0;
}
double Add(double x,double y)
{
  return x+y;
}
string Add(string s1,string s2)
{
  return s1+s2;
}
