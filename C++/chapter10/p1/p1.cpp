#include "p1.h"
#include <ios>
#include <iostream>

using std::cout;
using std::endl;

Account::Account()
{
  name_="none";
  account_="none";
  value_=0;
}

Account::Account(const string name,const string account,int value)
{
  name_=name;
  account_=account;
  value_=value;
}

bool Account::AddValue(int value)
{
  if(value<0)
  {
    cout<<"value can't be negative"<<endl;
    cout<<"add value failed!"<<endl;
    return false;
  }
  else
  {
    cout<<"You have add $"<<value<<" to your acount"<<endl;
    value_+=value;
    return true;
  }
}

bool Account::DrawValue(int value)
{
  if(value<0)
  {
    cout<<"value can't be negative"<<endl;
    cout<<"Draw value failed!"<<endl;
    return false;
  }
  else if(value>value_)
  {
    cout<<"You can't draw more than "<<value_<<",now the value is set to 0"<<endl;
    value_=0;
    return true;
  }
  else
  {
    cout<<"You have draw $"<<value<<" from your acount"<<endl;
    value_-=value;
    return true;
  }
}

void Account::ShowValue() const
{
  std::ios_base::fmtflags orig=cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
  std::streamsize prec=cout.precision(2);
  cout<<"Name:"<<name_<<endl;
  cout<<"Account:"<<account_<<endl;
  cout<<"Value:$"<<value_<<endl;
  cout.setf(orig,std::ios_base::floatfield);
  cout.precision(prec);
  cout<<endl;
}
