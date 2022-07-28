#include "stonewt1.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
  Stonewt poppins(9,2.8);
  double p_wt=(double)poppins;
  cout<<"Convert to double"<<endl;
  cout<<"poppins:"<<p_wt<<" pounds"<<endl;
  cout<<"Convert to int"<<endl;
  cout<<"poppins:"<<int(poppins)<<" pounds"<<endl;    
}
