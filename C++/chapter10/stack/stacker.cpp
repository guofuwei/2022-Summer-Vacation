#include "stack.h"
#include <iostream>
#include <cctype>

using std::cout;
using std::endl;
using std::cin;

int main()
{
  Stack stack;
  unsigned long po;
  char ch;
  cout<<"Please enter a A to add a purchase order,"
    <<"P to pop,Q to quit:";
  while(cin>>ch&&toupper(ch)!='Q')
  {
    while(cin.get()!='\n');
    if(!isalpha(ch))
    {
      //cout<<'\a';
      cout<<"Please enter again:";
      continue;
    }
    switch (ch) {
      case 'a':
      case 'A':
        cout<<"Enter a PO to push:";
        cin>>po;
        if(stack.isfull())
        {
          cout<<"Push failed! stack is already full!"<<endl;
        }
        else
        {
          stack.push(po);
        }
        break;
      case 'p':
      case 'P':
        if(stack.isempty())
        {
          cout<<"Pull failed! stack is already empty!"<<endl;
        }
        else
        {
          stack.pull(po);
          cout<<"PO #"<<po<<" poped!"<<endl;
        }
        break;
    }
    cout<<"Please enter a A to add a purchase order,"
      <<"P to pop,Q to quit:";
  }
  cout<<"Bye\n";
  return 0;
}
