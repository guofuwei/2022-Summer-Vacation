#include "classic.h"
#include <iostream>

using std::cout;
using std::endl;

void Bravo(const Cd &disk);

int main()
{
  Cd c1("Beatles","Capitol",14,35.5);
  Classic c2=Classic("Piano Sonata in B flat,Fantasic in C",\
      "Alfred Brendel",2,10.05,"Philips");
  Cd* pcd=&c1;

  cout<<"Using object directly"<<endl;
  c1.Report();
  c2.Report();
  cout<<endl;

  cout<<"Using cd* pointer to objects"<<endl;
  pcd->Report();
  pcd=&c2;
  pcd->Report();
  cout<<endl;
  
  cout<<"Calling a function with a cd reference agrument"<<endl;
  Bravo(c1);
  Bravo(c2);
  cout<<endl;
  
  cout<<"Testing assignment"<<endl;
  Classic copy;
  copy=c2;
  copy.Report();

  return 0;
}

void Bravo(const Cd &disk)
{
  disk.Report();
}
