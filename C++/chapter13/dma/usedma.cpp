#include "dma.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
  baseDMA shirt("Portabelly",8);
  lacksDMA balloon("red",4,"Blimpo");
  hasDMA map("Mercator",5,"Buffalo Keys");
  cout<<"Display baseDMA object"<<endl;
  cout<<shirt<<endl;
  cout<<"Display lacksDMA object"<<endl;
  cout<<balloon<<endl;
  cout<<"Display hasDMA object"<<endl;
  cout<<map<<endl;

  lacksDMA balloon2(balloon);
  cout<<"Result of balloon copy"<<endl;
  cout<<balloon2<<endl;
  hasDMA map2;
  map2=map;
  cout<<"Result of map assign"<<endl;
  cout<<map2<<endl;

  return 0;
}
