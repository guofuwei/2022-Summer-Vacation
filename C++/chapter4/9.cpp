#include <iostream>
using namespace std;

int main()
{
  int test[10]={0};
  cout<<"location of test:"<<test<<endl;
  cout<<"location of &test:"<<test<<endl;
  cout<<"location of test+1:"<<test+1<<endl;
  cout<<"location of &test+1:"<<&test+1<<endl;
  int (*test2)[10]=&test;
  for(int i=0;i<10;i++)
  {
    cout<<test2[i]<<endl;
  }
  return 0; 
}
