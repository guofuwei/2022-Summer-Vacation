#include <string>


namespace pers 
{
  struct Person{
    std::string fname;
    std::string lname;
  };
  void getPerson(Person &);
  void showPerson(const Person &);
}

namespace debts
{
  using namespace pers;
  struct Debts{
    Person name;
    double amount;
  };
  void getDebt(Debts &);
  void showDebt(const Debts&);
  double sumDebts(const Debts ar[],int n);
}
