#include "classic.h"
#include <cstring>
#include <iostream>

using std::cout;
using std::endl;
using std::strlen;
using std::strcpy;
using std::strncpy;


Cd::Cd(const char* performers,const char* label,int selection,double playtime)
{
  strncpy(performers_,performers,49);
  performers_[49]='\0';
  strncpy(label_,label,19);
  label_[19]='\0';
  selection_=selection;
  playtime_=playtime;
}

void Cd::Report() const
{
  cout<<"Performers: "<<performers_<<endl;
  cout<<"Label: "<<label_<<endl;
  cout<<"Selection: "<<selection_<<endl;
  cout<<"Playtime: "<<playtime_<<endl;
}

Classic::Classic(const char* performers,const char* label,\
        int selection,double playtime,const char* main_work):Cd(performers,label,selection,playtime)
{
  main_work_=new char[strlen(main_work)+1];
  strcpy(main_work_,main_work);
}

Classic::Classic(const Cd &cd,const char* main_work):Cd(cd)
{
  main_work_=new char[strlen(main_work)+1];
  strcpy(main_work_,main_work);
}

Classic::Classic(const Classic &classic):Cd(classic)
{
  main_work_=new char[strlen(classic.main_work_)+1];
  strcpy(main_work_,classic.main_work_);
}

Classic& Classic::operator=(Classic &classic)
{
  if(&classic==this)return *this;
  delete [] main_work_;
  Cd::operator=(classic);
  main_work_=new char[strlen(classic.main_work_)+1];
  strcpy(main_work_,classic.main_work_);
  return *this;
}

Classic::~Classic()
{
  delete [] main_work_;
}

void Classic::Report() const
{
  Cd::Report();
  cout<<"Main_work: "<<main_work_<<endl;
}
