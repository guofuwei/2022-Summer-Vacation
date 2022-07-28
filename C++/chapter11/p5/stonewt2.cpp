#include "stonewt1.h"
#include <iostream>

using std::cout;
using std::endl;

Stonewt::Stonewt(double lbs)
{
  pounds_=lbs;
  stone_=int(lbs)/Lbs_per_stn;
  pds_left_=int(lbs)%Lbs_per_stn+lbs-int(lbs);
}

Stonewt::Stonewt(int stn,double lbs)
{
  stone_=stn;
  pds_left_=lbs;
  pounds_=stn*Lbs_per_stn+lbs;
}

Stonewt::Stonewt()
{
  stone_=pds_left_=pounds_=0;
}

Stonewt::~Stonewt()
{

}

void Stonewt::show_stn() const
{
  cout<<stone_<<" stones,"<<pds_left_<<" pounds"<<endl; 
}

void Stonewt::show_lbs() const
{
  cout<<pounds_<<" pounds"<<endl;
}

Stonewt::operator int() const
{
  return int(pounds_+0.5);
}

Stonewt::operator double() const
{
  return pounds_;
}
