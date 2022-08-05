#include <iostream>

using std::cout;
using std::endl;

void change(const int *p,int n);
int main()
{
  int pop1=3000;
  const int pop2=2000;

  cout<<"p1,p2 = "<<pop1<<","<<pop2<<endl;
  change(&pop1,100);
  change(&pop2,100);
  cout<<"p1,p2 = "<<pop1<<","<<pop2<<endl;
}

void change(const int *p,int n)
{
  int* pc;
  pc=const_cast<int*>(p);
  *pc+=n;
}
