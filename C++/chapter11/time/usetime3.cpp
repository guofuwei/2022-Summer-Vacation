#include "mytime3.h"
#include <iostream>

int main()
{
  using std::cout;
  using std::endl;
  Time aida(3,15);
  Time tosca(2,48);
  Time temp;

  cout<<"aida and tosca"<<endl;
  cout<<"aida:"<<aida<<"tosca:"<<tosca<<endl;
  
  temp=aida+tosca;
  cout<<"aida + tosca"<<endl;
  cout<<temp<<endl;

  temp=aida*1.7;
  cout<<"aida*1.7"<<endl;
  cout<<temp<<endl;

  return 0;
}
