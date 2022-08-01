#include "acctabc.h"
#include <ios>
#include <iostream>

using std::cout;
using std::endl;

AcctABC::FormatData AcctABC::SetFormat() const
{
  FormatData f;
  f.flag=cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
  f.pr=cout.precision(2);
  return f;
}

void AcctABC::ResetFormat(FormatData &f) const
{
  cout.setf(f.flag,std::ios_base::floatfield);
  cout.precision(f.pr);
}

AcctABC::AcctABC(const std::string fullname,long account_id,\
    double balance)
{
  fullname_=fullname;
  account_id_=account_id;
  balance_=balance;
}

bool AcctABC::Deposit(double amt)
{
  if(amt<0)
  {
    cout<<"The num of deposit should be positive,deposit failed!"<<endl;
    return false;
  }
  else
  {
    balance_+=amt;
    cout<<"Deposit successed!"<<endl;
    return true;
  }
}

bool AcctABC::WithDraw(double amt)
{
  balance_-=amt;
  return true;
}

void Brass::ViewAcct() const
{
  cout<<"Here are your infomation"<<endl;
  cout<<"Your name is "<<FullName()<<"\t";
  cout<<"Your account id is "<<AcountID()<<endl;
  FormatData f=SetFormat();
  cout<<"Your balance: $"<<Balance()<<endl;
  ResetFormat(f);
}

bool Brass::WithDraw(double amt) 
{
  if(amt<0)
  {
    cout<<"The num of withdraw should be positive,withdraw failed!"<<endl;
    return false;
  }
  else if(amt>Balance())
  {
    FormatData f=SetFormat();
    cout<<"Your can't withdraw more than $"<<Balance()<<"! withdraw failed"<<endl;
    ResetFormat(f);
    return false;
  }
  else
  {
    AcctABC::WithDraw(amt);
    cout<<"WithDraw successed!"<<endl;
    return true;
  }
}

BrassPlus::BrassPlus(const std::string fullname,long account_id,\
    double balance,double max_loan,double rate,double owe_bank):AcctABC(fullname,account_id,balance)
{
  max_loan_=max_loan;
  rate_=rate;
  owe_bank_=0;
}


BrassPlus::BrassPlus(const Brass &ba,double max_loan,double rate,double owe_bank):AcctABC(ba)
{
  max_loan_=max_loan;
  rate_=rate;
  owe_bank_=0;
}

bool BrassPlus::WithDraw(double amt)
{
  FormatData f=SetFormat();
  double balance=Balance();
  if(amt<=balance)
  {
    AcctABC::WithDraw(amt);
    return true;
  }
  else if(amt<balance+max_loan_-owe_bank_)
  {
    double new_owe=amt-balance;
    owe_bank_+=new_owe*(1+rate_);
    cout<<"Bank advance: $"<<new_owe<<endl;
    cout<<"Finance charge: $"<<new_owe*rate_<<endl;
    Deposit(new_owe);
    WithDraw(amt);
    return true;
  }
  else
  {
    cout<<"Credir limit exceeded.Transaction cancelled!"<<endl;
    return false;
  }
  ResetFormat(f);
}

void BrassPlus::ViewAcct() const
{
  cout<<"Here are your brass infomation"<<endl;
  cout<<"Your name is "<<FullName()<<"\t";
  cout<<"Your account id is "<<AcountID()<<endl;
  FormatData f=SetFormat();
  cout<<"Your balance: $"<<Balance()<<endl;
  cout<<"Maximum loan: $"<<max_loan_<<endl;
  cout<<"Owe to bank: $"<<owe_bank_<<endl;
  cout.precision(3);
  cout<<"Loan Rate:"<<100*rate_<<"%"<<endl;
  ResetFormat(f);
}
