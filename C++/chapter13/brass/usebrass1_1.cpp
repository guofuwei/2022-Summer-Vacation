#include "brass.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
  Brass Piggy("Porcelot Pigg",381299,4000.00);
  BrassPlus Hoggy("Horatio Hogg",382288,3000.00);
  Piggy.ViewAcct();
  cout<<endl;
  Hoggy.ViewAcct();
  cout<<endl;
  cout<<"Deposit $1000 into Hoggy account"<<endl;
  Hoggy.Deposit(1000);
  cout<<"New balance: $"<<Hoggy.Balance()<<endl;

  cout<<"Withdraw $4200 from Pigg account"<<endl;
  Piggy.Withdraw(4200);
  cout<<"Pigg Account balance: $"<<Piggy.Balance()<<endl;

  cout<<"Withdraw $4200 from hoggy Account"<<endl;
  Hoggy.Withdraw(4200);
  Hoggy.ViewAcct();
}
