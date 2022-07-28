#include <iostream>
#include "stonewt.h"

using std::cout;
//using std::endl;

int main()
{
  Stonewt a=275;
  Stonewt b=285.7;
  Stonewt c(21,8);
  
  cout<<"The a weighted:";
  a.show_stn();

  cout<<"The b weighted:";
  b.show_stn();

  cout<<"The c weighted:";
  c.show_lbs();

  a=276.8;
  c=325;
  cout<<"After dinner a weighted:";
  a.show_stn();
  cout<<"After dinner c weighted:";
  c.show_lbs();

  //double test1=(double)a;
  //cout<<"test1:"<<test1<<std::endl;
}
