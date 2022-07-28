#include <iostream>

using namespace std;


int main()
{
  const int kMax=5;
  double golf[kMax];
  for(int i=0;i<kMax;i++)
  {
    cout<<"Enter the "<<i+1<<" score:"<<endl;
    while(!(cin>>golf[i]))
    {
      cin.clear();
      while(cin.get()!='\n');
      cout<<"Please enter again:";
    }
  }
  for(int i=0;i<kMax;i++)
  {
    cout<<"golf "<<i+1<<" score:"<<golf[i]<<endl;
  }
  return 0;
}
