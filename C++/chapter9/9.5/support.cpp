#include <iostream>

using std::cout;
using std::endl;


void Update(double dt);
void Local();

extern double warning;

void Update(double dt)
{
  extern double warning;
  warning+=dt;
  cout<<"In update warning is "<<warning<<endl;
}

void Local()
{
  double warning=100;
  cout<<"In local warning is "<<warning<<endl;
  cout<<"Try visit global warning,warning is "<< ::warning<<endl;
}
