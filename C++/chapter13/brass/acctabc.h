#ifndef __ACCTABC_H__
#define __ACCTABC_H__
#include <ios>
#include <iostream>
#include <string>

class AcctABC
{
  private:
    std::string fullname_;
    long account_id_;
    double balance_;
  protected:
    struct FormatData
    {
      std::ios_base::fmtflags flag;
      std::streamsize pr;
    };
    const std::string FullName() const{return fullname_;}
    long AcountID() const{return account_id_;}
    FormatData SetFormat() const;
    void ResetFormat(FormatData &f) const; 
  public:
    AcctABC(const std::string fullname="none",long account_id=-1,\
        double balance=0); 
    double Balance() const{return balance_;}
    bool Deposit(double amt);
    virtual bool WithDraw(double amt)=0;
    virtual void ViewAcct() const=0;
    virtual ~AcctABC(){}
};

class Brass:public AcctABC
{
  public:
    Brass(const std::string fullname="none",long account_id=-1,\
        double balance=0):AcctABC(fullname,account_id,balance){}
    virtual bool WithDraw(double amt);
    virtual void ViewAcct() const;
    virtual ~Brass(){}
};

class BrassPlus:public AcctABC
{
  private:
    double max_loan_;
    double rate_;
    double owe_bank_;
  public:
    BrassPlus(const std::string fullname,long account_id=-1,\
        double balance=0,double max_loan=500,double rate=0.1125,double owe_bank_=0);
    BrassPlus(const Brass &ba,double max_loan=500,double rate=0.1125,double owe_bank_=0);
    virtual bool WithDraw(double amt);
    virtual void ViewAcct() const;
    virtual ~BrassPlus(){}
    void ResetMax(int new_max){max_loan_=new_max;}
    void ResetRate(int new_rate){rate_=new_rate;}
    void ResetOwe(){owe_bank_=0;}
};

#endif
