#include "stock.h"

int main()
{
  Stock fluffy_the_cat("NanoSmart", 20, 12.5);
  Stock* p_stock=new Stock("Apple",10000,358.7);
  Stock stock_test2;
  stock_test2.show();
  p_stock->topval(fluffy_the_cat).show();
  delete p_stock;
  //fluffy_the_cat.acquire("NanoSmart", 20, 12.5);
  fluffy_the_cat.show();
  fluffy_the_cat.buy(15,18.5);
  fluffy_the_cat.show();
  fluffy_the_cat.sell(400,20);
  fluffy_the_cat.show();
  fluffy_the_cat.buy(30000, 40.125);
  fluffy_the_cat.show();
  fluffy_the_cat.sell(30000,0.125);
  fluffy_the_cat.show();

  return 0;
}
