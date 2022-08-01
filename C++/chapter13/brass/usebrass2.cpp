#include "acctabc.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int kClient=2;

int main()
{
  AcctABC* p_clients[kClient];
  std::string temp;
  long tempnum;
  double tempbal;
  char kind;

  for(int i=0;i<kClient;i++)
  {
    cout<<"Enter the name:";
    getline(cin,temp);
    cout<<"Enter the account id:";
    cin>>tempnum;
    cout<<"Enter the account balance:";
    cin>>tempbal;
    cout<<"Enter 1 for Brass Account,"
      <<"2 for BrassPlus Account:";
    while(cin>>kind&&(kind!='1'&&kind!='2'))
    {
      cout<<"Try again.enter 1 or 2:";
    }
    if(kind=='1')
    {
      p_clients[i]=new Brass(temp,tempnum,tempbal);
    }
    else
    {
      double max_loan,rate;
      cout<<"Enter the max loan:";
      cin>>max_loan;
      cout<<"Enter the rate:";
      cin>>rate;
      p_clients[i]=new BrassPlus(temp,tempnum,tempbal,max_loan,rate);
    }
    while(cin.get()!='\n');
  }

  cout<<endl;
  for(int i=0;i<kClient;i++)
  {
    p_clients[i]->ViewAcct();
    cout<<endl;
  }
  for(int i=0;i<kClient;i++)
  {
    delete p_clients[i];
  }
  cout<<"Done!"<<endl;
  return 0;
}
