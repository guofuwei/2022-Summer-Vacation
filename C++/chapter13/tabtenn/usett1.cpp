#include <iostream>
#include "tabtenn1.h"


using std::endl;
using std::cout;

int main()
{
  TableTennisPlayer player1("Tara","Boomdea",false);
  RatedPlayer rplayer1(1140,"Malloy","Duck",true);

  player1.Name();
  if(player1.HasTable())
  {
    cout<<":has table"<<endl;
  }
  else
  {
    cout<<":don't have table"<<endl;
  }
  rplayer1.Name();
  if(rplayer1.HasTable())
  {
    cout<<":has table"<<endl;
  }
  else
  {
    cout<<":don't have table"<<endl;
  }

  cout<<"Name:";
  rplayer1.Name();
  cout<<",Rating:"<<rplayer1.Rating()<<endl;
  RatedPlayer rplayer2(1123,player1);
  cout<<"Name:";
  rplayer2.Name();
  cout<<",Rating:"<<rplayer2.Rating()<<endl;

  return 0;
}
