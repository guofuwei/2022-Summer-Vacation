#include "string1.h"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

const int kArrSize=10;
const int kMaxNum=80;

int main()
{
  String name;
  cout<<"Hi,What's your name:";
  cin>>name;
  
  cout<<name<<", please enter up to "<<kArrSize<<" short sayings(emptyline to quit)"<<endl;
  String sayings[kArrSize];
  char temp[kMaxNum];
  int i;
  for(i=0;i<kArrSize;i++)
  {
    cout<<i+1<<":";
    cin.get(temp,kMaxNum);
    while(cin&&cin.get()!='\n');
    if(!cin||temp[0]=='\0')break;
    sayings[i]=temp;
  }
  int total=i;

  if(total>0)
  {
    cout<<"Here are your sayings:"<<endl;
    for(i=0;i<total;i++)
    {
      cout<<sayings[i][0]<<": "<<sayings[i]<<endl;
    }

    int shortest=0;
    int first=0;
    for(i=1;i<total;i++)
    {
      //cout<<i+1<<endl;
      if(sayings[i].length()<sayings[shortest].length())
      {
        shortest=i;
      }
      //cout<<"first:"<<first<<endl;
      //cout<<"i: "<<i<<endl;
      if(sayings[i]<sayings[first])
      {
        first=i;
      }
    }
    //cout<<"shortest: "<<shortest<<endl;
    //cout<<"first: "<<first<<endl;
    cout<<"Short saying: "<<sayings[shortest]<<endl;
    cout<<"First alphabetically: "<<sayings[first]<<endl;
    cout<<"The Program used "<<String::HowMany()<<" Strings object"<<endl;
  }
  else
  {
    cout<<"No input,Bye"<<endl;
  }
  cout<<"Bye!"<<endl;
}
