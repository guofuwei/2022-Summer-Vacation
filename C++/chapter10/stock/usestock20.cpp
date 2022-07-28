#include "stock.h"
#include <iostream>

const int KES=4;
int main()
{
  Stock stocks[KES]={
    Stock("NanoSmart",20,12.0),
    Stock("Boffo objects",200,0.2),
    Stock("Monolitic Obelist",210,3.125),
    Stock("Fleep Enterprices",60,6.5)
  }; 
  std::cout<<"Stock holdings"<<std::endl;
  for(int i=0;i<KES;i++)
  {
    stocks[i].show();
  }
  const Stock* top=new Stock;
  top=&stocks[0];
  for(int i=1;i<KES;i++)
  {
    top=&top->topval(stocks[i]);
  }
  std::cout<<std::endl<<"Most valuable holdings"<<std::endl;
  top->show();

  return 0;
}
