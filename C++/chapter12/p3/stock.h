#ifndef __STOCK_H__
#define __STOCK_H__
#include <ostream>
#include <string>

class Stock
{
  private:
    char* company_;
    long shares_;
    double share_val_;
    double total_val_;
    void set_tot(){total_val_=share_val_*shares_;}
  public:
    Stock(const char* co,long n,double pr);
    Stock();
    ~Stock();
    void acquire(const char* co,long n,double pr);
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show() const;

    friend std::ostream& operator<<(std::ostream &os,const Stock &stock);
    const Stock& topval(const Stock& s) const;
};

#endif
