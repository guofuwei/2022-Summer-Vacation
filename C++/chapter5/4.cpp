#include <iostream>
using namespace std;


int main()
{
  char ch;
  char chstr[20];
  int num;
  int i=0;
  cout<<"Enter a string:";
  while(1)
  {
    cin.get(ch);
    if(ch=='\n')
    {
      chstr[i++]='\0';
      break;
    }
    else
    {
      chstr[i++]=ch;
    }
  }
  cout<<"chstr:"<<chstr<<endl;
  cout<<"Done"<<endl;
  return 0;
}
