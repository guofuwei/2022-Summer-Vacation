#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int count=0;
  char chstr[20];
  cout<<"Enter words(type done to stop):"<<endl;
  do
  {
    cin>>chstr;
    count++;
  }while(strcmp(chstr,"done"));
  cout<<"The total num of words is "<<count-1<<endl;
}
