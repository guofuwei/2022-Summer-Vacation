#include "tabtenn0.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string &fn,const string &ln,bool\
    hasTable):firstname_(fn),lastname_(ln),hasTable_(hasTable){}

void TableTennisPlayer::Name() const
{
  std::cout<<lastname_<<" "<<firstname_;
}
