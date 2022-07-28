#ifndef __P1_H__
#define __P1_H__
#include <string>

using std::string;
class Account
{
  private:
    string name_;
    string account_;
    int value_;
  public:
    Account();
    Account(const string name,const string account,int value);
    bool AddValue(int value);
    bool DrawValue(int value);
    void ShowValue() const;
};
#endif
