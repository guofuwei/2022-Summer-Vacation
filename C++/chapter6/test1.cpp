#include <iostream>
#include <cctype>

using namespace std;

int main()
{
  char ch;
  while(cin.get(ch)&&ch!='@')
  {
    if(islower(ch))
    {
      //cout<<char(ch+'A'-'a');
      ch=toupper(ch);
      cout<<ch;
    }
    else if(isupper(ch))
    {
      //cout<<char(ch+'a'-'A');
      ch=tolower(ch);
      cout<<ch;
    }
  }
  cout<<endl;
  return 0;
}
