#include "tabtenn0.h"
#include <iostream>

using std::cout;
using std::endl;


int main()
{
  TableTennisPlayer player1("Chuck","Blizzard",false);
  TableTennisPlayer player2("Tara","Boomdea",true);

  player1.Name();
  if(player1.HasTable())
  {
    cout<<":has a table"<<endl;
  }
  else
  {
    cout<<":don't have a table"<<endl;
  }
  player2.Name();
  if(player2.HasTable())
  {
    cout<<":has a table"<<endl;
  }
  else
  {
    cout<<":don't have a table"<<endl;
  }

  return 0;
}
