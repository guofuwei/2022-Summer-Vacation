#include <iostream>
#include <cctype>

using namespace std;


int main()
{
  int whitespace=0;
  int chars=0;
  int digits=0;
  int punct=0;
  int others=0;
  char ch;

  cout<<"Please enter a text(to stop,type @)"<<endl;
  cin.get(ch);
  while(ch!='@')
  {
    if(isalpha(ch))
    {
      chars++;
    }
    else if(isdigit(ch))
    {
      digits++;
    }
    else if(isspace(ch))
    {
      whitespace++;
    }
    else if(ispunct(ch))
    {
      punct++;
    }
    else
    {
      others++;
    }
    cin.get(ch);
  }
  cout<<chars<<" letters"<<endl;
  cout<<digits<<" digits"<<endl;
  cout<<punct<<" puncts"<<endl;
  cout<<whitespace<<" whitespace"<<endl;
  cout<<others<<" others"<<endl;
}
