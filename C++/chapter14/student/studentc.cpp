#include "studentc.h"
#include <iostream>

using std::cout;
using std::endl;
//using std::cin;

double Student::Average() const
{
  if(scores_.size()>0)
  {
    return scores_.sum()/scores_.size();
  }
  return 0;
}

const std::string& Student::Name() const
{
  return name_;
}

double& Student::operator[](int i)
{
  return scores_[i];
}

double Student::operator[](int i) const 
{
  return scores_[i];
}

std::ostream& operator<<(std::ostream &os,const Student &stu)
{
  os<<"Name: "<<stu.name_<<endl;
  if(stu.scores_.size()==0)
  {
    cout<<"Empty scores"<<endl;
    return os;
  }
  os<<"Scores: ";
  for(int i=0;i<stu.scores_.size();i++)
  {
    os<<stu.scores_[i]<<" ";
  }
  cout<<endl;
  return os;
}

std::istream& operator>>(std::istream &is,Student &stu)
{
  is>>stu.name_;
  return is;
}
std::istream& getline(std::istream &is,Student &stu)
{
  getline(is,stu.name_);
  return is;
}
