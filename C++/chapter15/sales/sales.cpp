#include "sales.h"
#include <stdexcept>

using std::string;

Sales::bad_index::bad_index(int ix, const std::string& s)
    : bi_(ix)
    , std::logic_error(s)
{
}

Sales::Sales(int year)
{
  year_=year;
  for(int i=0;i<MONTHS;i++)
  {
    gross_[i]=0;
  }
}

Sales::Sales(int year,const double* gr,int n)
{
  year_=year;
  int lim=(n<MONTHS)?n:MONTHS;
  int i=0;
  for(i=0;i<lim;i++)
  {
    gross_[i]=gr[i];
  }
  for(;i<MONTHS;i++)
  {
    gross_[i]=0;
  }
}

double Sales::operator[](int i) const
{
  if(i<0||i>=MONTHS)
  {
    throw bad_index(i);
  }
  return gross_[i];
}

double& Sales::operator[](int i)
{
  if(i<0||i>=MONTHS)
  {
    throw bad_index(i);
  }
  return gross_[i];
}

LabeledSales::nbad_index::nbad_index(const std::string lable, int ix, const std::string& s):Sales::bad_index(ix,s)
{
  lbl_=lable;
}

LabeledSales::LabeledSales(const std::string& lb ,int year ):Sales(year)
{
  label_=lb;
}

LabeledSales::LabeledSales(const std::string& lb, int year, const double* gr, int n)\
    :Sales(year,gr,n)
{
  label_=lb;
}


double LabeledSales::operator[](int i) const
{
  if(i<0||i>=MONTHS)
  {
    throw nbad_index(label_,i);
  }
  return Sales::operator[](i);
}

double& LabeledSales::operator[](int i) 
{
  if(i<0||i>=MONTHS)
  {
    throw nbad_index(label_,i);
  }
  return Sales::operator[](i);
}
