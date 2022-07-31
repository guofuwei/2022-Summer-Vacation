#include "brass.h"
#include <ios>
#include <iostream>

using std::cout;
using std::endl;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

format SetFormat();
void ResetFormat(format f,precis p);

Brass::Brass(const std::string &fullname,long account_id,double balance)
{
  fullname_=fullname;
  account_id_=account_id;
  balance_=balance;
}

void Brass::Deposit(double amt)
{
  if(amt<0)
  {
    cout<<"The num of deposit should be positive,deposit failed!"<<endl;
  }
  else
  {
    balance_+=amt;
    cout<<"Deposit successed!"<<endl;
  }
}

void Brass::Withdraw(double amt)
{
  if(amt<0)
  {
    cout<<"The num of withdraw should be positive,withdraw failed!"<<endl;
  }
  else if(amt>balance_)
  {
    format init_format=SetFormat();
    precis init_pre=cout.precision(2);
    cout<<"Your can't withdraw more than $"<<balance_<<"! withdraw failed"<<endl;
    ResetFormat(init_format,init_pre);
  }
  else
  {
    balance_-=amt;
    cout<<"Withdraw successed!"<<endl;
  }
}

void Brass::ViewAcct() const
{
  cout<<"Here are your brass infomation"<<endl;
  cout<<"Your name is "<<fullname_<<"\t";
  cout<<"Your account id is "<<account_id_<<endl;
  format init_format=SetFormat();
  precis init_pre=cout.precision(2);
  cout<<"Your balance: $"<<balance_<<endl;
  ResetFormat(init_format,init_pre);
}

double Brass::Balance() const
{
  return balance_;
}

Brass::~Brass()
{

}

BrassPlus::BrassPlus(const std::string &fullname,long account_id,\
    double balance,double max_loan,double rate):Brass(fullname,account_id,balance)
{
  max_loan_=max_loan;
  rate_=rate;
  owes_bank_=0;
}

BrassPlus::BrassPlus(const Brass &ba,double max_loan,double rate):Brass(ba)
{
  max_loan_=max_loan;
  rate_=rate;
  owes_bank_=0;
}

void BrassPlus::Withdraw(double amt)
{
  format init_format=SetFormat();
  precis init_pre=cout.precision(2);

  double balance=Balance();
  if(amt<=balance)
  {
    Brass::Withdraw(amt);
  }
  else if(amt<balance+max_loan_-owes_bank_)
  {
    double new_owe=amt-balance;
    owes_bank_+=new_owe*(1+rate_);
    cout<<"Bank advance: $"<<new_owe<<endl;
    cout<<"Finance charge: $"<<new_owe*rate_<<endl;
    Deposit(new_owe);
    Withdraw(amt);
  }
  else
  {
    cout<<"Credir limit exceeded.Transaction cancelled!"<<endl;
  }
  ResetFormat(init_format, init_pre);
}

void BrassPlus::ViewAcct() const
{
  format init_format=SetFormat();
  precis init_pre=cout.precision(2);
  Brass::ViewAcct();
  cout<<"Maximum loan: $"<<max_loan_<<endl;
  cout<<"Owe to bank: $"<<owes_bank_<<endl;
  cout.precision(3);
  cout<<"Loan Rate:"<<100*rate_<<endl;
  ResetFormat(init_format, init_pre);
}

format SetFormat()
{
  return cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
}

void ResetFormat(format f,precis p)
{
  cout.setf(f,std::ios_base::floatfield);
  cout.precision(p);
}
