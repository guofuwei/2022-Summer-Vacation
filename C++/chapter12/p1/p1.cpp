#include "p1.h"
#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
using std::strcpy;
using std::strncpy;
using std::strlen;

Cow::Cow()
{
  strcpy(name,"\0");
  hobby=nullptr;
  weight=0;
}

Cow::Cow(const char* nm,const char* hb,double wt)
{
  strncpy(name,nm,19); 
  name[19]='\0';
  hobby=new char[strlen(hb)+1];
  strcpy(hobby,hb);
  weight=wt;
}

Cow::Cow(const Cow &c)
{
  strcpy(name,c.name);
  hobby=new char[strlen(c.hobby)+1];
  strcpy(hobby,c.hobby);
  weight=c.weight;
}

Cow::~Cow()
{
  delete [] hobby;
}

Cow& Cow::operator=(const Cow &c)
{
  if(&c==this)return *this;
  delete [] hobby;
  strcpy(name,c.name);
  hobby=new char[strlen(c.hobby)+1];
  strcpy(hobby,c.hobby);
  weight=c.weight;
  return *this;
}

void Cow::ShowCow() const
{
  cout<<"Here are the cow infomation"<<endl;
  cout<<"name: "<<name<<endl;
  cout<<"hobby: "<<hobby<<endl;
  cout<<"weight: "<<weight<<endl;
}
