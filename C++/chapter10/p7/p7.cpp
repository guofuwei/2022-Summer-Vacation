#include "p7.h"
#include <iostream>
#include <string>

using std::string;

Plorg::Plorg()
{
  name_="Plorga";
  CI_=0;
}

Plorg::Plorg(const string &name,int CI)
{
  SetName(name);
  SetCi(CI);
}
void Plorg::SetName(const std::string &name)
{
  name_=name;
}

void Plorg::SetCi(int CI)
{
  CI_=CI;
}

void Plorg::ShowInfo() const
{
  std::cout<<"Name:"<<name_<<std::endl;
  std::cout<<"CI:"<<CI_<<std::endl;
}
