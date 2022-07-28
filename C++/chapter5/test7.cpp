#include <iostream>
using namespace std;


int main()
{
  int num=0;
  char ch;
  string tmp;
  cout<<"Enter words(to stop,type the word done):"<<endl;
  while(cin.get(ch))
  {
    if(ch=='\n')break;
    else if(ch==' ')
    {
      if(tmp=="done")break;
      tmp="";
      num++;
    }
    else
    {
      tmp.push_back(ch);
    }
  }
  cout<<"You entered a total of "<<num<<" words"<<endl;
}
