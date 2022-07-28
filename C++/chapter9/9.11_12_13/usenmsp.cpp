#include "namesp.h"
#include <iostream>

void other(void);
void another(void);

int main()
{
  using debts::Debts;
  using debts::showDebt;
  Debts golf={{"Benny","Goatsniff"},120.0};
  showDebt(golf);
  other();
  another();
  return 0;
}

void other(void)
{
  using namespace debts;
  Person dg={"Doodles","Glister"};
  showPerson(dg);
  std::cout<<std::endl;
  Debts zippy[3];
  for(int i=0;i<3;i++)
  {
    getDebt(zippy[i]);
  }
  for(int i=0;i<3;i++)
  {
    showDebt(zippy[i]);
  }
  std::cout<<"Total debts:"<<sumDebts(zippy, 3)<<std::endl;
}

void another(void)
{
  using pers::Person;
  Person collector={"Milo","Rightshift"};
  debts::showPerson(collector);
  std::cout<<std::endl;
}
