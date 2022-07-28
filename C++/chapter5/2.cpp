#include <iostream>
#include <ctime>

using namespace std;

int main()
{
  cout<<"Begin"<<endl;
  cout<<"Enter a time to wait in seconds:";
  int secs;
  cin>>secs;
  clock_t delay = secs*CLOCKS_PER_SEC;
  clock_t start=clock();
  while(clock()-start<delay);
  cout<<"Done"<<endl;
}
