#include "namesp.h"
#include <iostream>

namespace pers
{
  using std::cout;
  using std::cin;
  void getPerson(Person &rp)
  {
    cout<<"Enter first name:";
    cin>>rp.fname;
    cout<<"Enter last name:";
    cin>>rp.lname;
  }
  void showPerson(const Person &rp)
  {
    cout<<rp.lname<<","<<rp.fname;
  }
}

namespace debts
{
  void getDebt(Debts &rd)
  {
    getPerson(rd.name);
    std::cout<<"Enter the amount:";
    std::cin>>rd.amount;
  }
  void showDebt(const Debts &rd)
  {
    showPerson(rd.name);
    std::cout<<":$"<<rd.amount<<std::endl;
  }
  double sumDebts(const Debts *ar, int n)
  {
    double total=0;
    for(int i=0;i<n;i++)
    {
      total+=ar[i].amount;
    }
    return total;
  }
}
