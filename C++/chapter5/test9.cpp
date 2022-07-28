#include <iostream>
#include <string>

using namespace std;

int main()
{
  int count=0;
  string str;
  cout<<"Enter words(type done to stop):"<<endl;
  do
  {
    cin>>str;
    count++;
  }while(str!="done");
  cout<<"The total num of words is "<<count-1<<endl;
}
