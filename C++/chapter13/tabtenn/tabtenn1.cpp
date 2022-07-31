#include "tabtenn1.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string &fn,const string &ln,bool\
    hasTable):firstname_(fn),lastname_(ln),hasTable_(hasTable){}

void TableTennisPlayer::Name() const
{
  std::cout<<lastname_<<" "<<firstname_;
}

RatedPlayer::RatedPlayer(unsigned int r,const string &fn,
    const string &ln,bool ht):TableTennisPlayer(fn,ln,ht)
{
  rating_=r;
}

RatedPlayer::RatedPlayer(unsigned int r,const TableTennisPlayer &tp)\
    :TableTennisPlayer(tp)
{
  rating_=r;
}
