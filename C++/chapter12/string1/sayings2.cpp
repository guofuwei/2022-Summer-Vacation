#include "string1.h"
#include <cstdlib>
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

    String* shortest=&sayings[0];
    String* first=&sayings[0];
    for(i=1;i<total;i++)
    {
      if(sayings[i].length()<shortest->length())
      {
        shortest=&sayings[i];
      }
      if(sayings[i]<*first)
      {
        first=&sayings[i];
      }
    }
    cout<<"Short saying: "<<*shortest<<endl;
    cout<<"First alphabetically: "<<*first<<endl;
    srand(time(0));
    int choice=rand()%total;
    String* favorite=new String(sayings[choice]);
    cout<<"Favorite saying: "<<*favorite<<endl;

    cout<<"The Program used "<<String::HowMany()<<" Strings object"<<endl;
    delete favorite;
  }
  else
  {
    cout<<"No input,Bye"<<endl;
  }
  cout<<"Bye!"<<endl;
}
