#ifndef __BRASS_H__
#define __BRASS_H__

#include <string>

class Brass
{
  private:
    std::string fullname_;
    long account_id_;
    double balance_;
  public:
    Brass(const std::string &fullname="none",long account_id=-1,double balance=0);
    void Deposit(double amt);
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    double Balance() const;// for visit balance_ at BrassPlus
    virtual ~Brass();
};

class BrassPlus:public Brass
{
  private:
    double max_loan_;
    double rate_;
    double owes_bank_;
  public:
    BrassPlus(const std::string &s="none",long account_id=-1,double balance=0,\
        double max_loan=500,double rate=0.11125);
    BrassPlus(const Brass &ba,double max_loan=500,double rate=0.11125);
    virtual void Withdraw(double amt);
    virtual void ViewAcct() const;
    void ResetMax(double max_loan){max_loan_=max_loan;}
    void ResetRate(double rate){rate_=rate;}
    void ResetOwes(){owes_bank_=0;}
};
#endif
