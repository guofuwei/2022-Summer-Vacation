#include "brass.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  Brass p_clients[2];
  std::string temp;
  long tempnum;
  double tempbal;
  char kind;

  for(int i=0;i<2;i++)
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
      p_clients[i]=Brass(temp,tempnum,tempbal);
    }
    else
    {
      double max_loan,rate;
      cout<<"Enter the max loan:";
      cin>>max_loan;
      cout<<"Enter the rate:";
      cin>>rate;
      p_clients[i]=BrassPlus(temp,tempnum,tempbal,max_loan,rate);
    }
    while(cin.get()!='\n');
  }

  cout<<endl;
  for(int i=0;i<2;i++)
  {
    p_clients[i].ViewAcct();
    cout<<endl;
  }
  //for(int i=0;i<4;i++)
  //{
  //  delete p_clients[i];
  //}
  cout<<"Done!"<<endl;
  return 0;
}
