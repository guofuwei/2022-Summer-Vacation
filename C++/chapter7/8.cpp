#include <iostream>
#include <cmath>

using namespace std;

int PlanA(int x);
int PlanB(int x);
int Calculate(int x,int (*p_fun)(int));


int main()
{
  int num;
  cout<<"Enter a num:";
  cin>>num;
  cout<<"Here is the PlanA result:";
  cout<<Calculate(num, PlanA)<<endl;
  cout<<"Here is the PlanB result:";
  cout<<Calculate(num, PlanB)<<endl;
}


int PlanA(int x)
{
  return pow(x, 2);
}
int PlanB(int x)
{
  return pow(x, 3);
}
int Calculate(int x,int (*p_fun)(int))
{
  return p_fun(x);
}
